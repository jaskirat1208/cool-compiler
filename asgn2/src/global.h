#include <bits/stdc++.h>

using namespace std;

typedef string Operator;
typedef string Memory;

// enumeration of variable type
enum VarType {
	VarInt,
	VarLabel,
	ConstInt,
	Array
};

// enumeration of instruction type
enum InstrType {
	Copy, // x = y
	ArrRead,	//x = y[0]
	ArrWrite,	//y[0] = x
	AssignBinaryOp, // a = b `op` c .... 3,op,a,b,c
	AssignUnaryOp,
	ConditionalJump,
	UnconditionalJump,
	Procedure,
	InstrLabel,
	Scan,
	Print,
	Return
};

// enumeration of types of available registers for use in each basic block
enum Register {
	RBX, RCX, RSI, RDI, RDX, RAX, 
	NoReg
};

// The following class defines the structure of AddressType which includes
// register address, memory address, stack address
class AddressType {
	public :
		Register reg;
		Memory mem;
};

// The following class defines structure of Symbol Table Entry
class SymbolTableEntry {
	public:
		VarType type;
		AddressType address;
		int value; // stores the value if the in1 or in2 are constants
		bool isLive;
		int nextUse;
		string auxValues;	//In case of arrays: auxValue stores up the values.
};

string generateString(string str){
	stringstream strstream(str);
	string newString = "";
	string tmp = "";
	while(getline(strstream, tmp, ',')){
		newString+="\n\t\t.quad\t" + tmp;
	}
	return newString;
	
}
// The following class defines structure of Symbol Table
class SymbolTable {
	private :
		unordered_map<string, SymbolTableEntry*> table;
	public :
		void insert(string s, SymbolTableEntry* t) {
			table[s] = t;
			t->address.mem = s;
			t->address.reg = NoReg;
		}

		SymbolTableEntry* lookup(string s) {
			unordered_map<string, SymbolTableEntry*>::iterator i = table.find(s);
			if (i != table.end()) {
				return i->second;
			}
			return NULL;
		}

		void initIsLiveAndNextUse() {
			unordered_map<string, SymbolTableEntry*>::iterator i = table.begin();
			for (; i != table.end(); ++i) {
				i->second->isLive = true;
				i->second->nextUse = -1;
			}
		}

		vector<string> printTableInts(){
			vector<string> variableNames;
			unordered_map<string, SymbolTableEntry*>::iterator i = table.begin();
			for (; i != table.end(); ++i) {
				if (i->second->type == Array)
				{
					variableNames.push_back(i->first + ": " + generateString(i->second->auxValues) + "\n");
				}
				if (i->second->type == VarInt ) {
					variableNames.push_back(i->first + ":\t.quad 0\n");
				}
			}
			return variableNames;
		}
};

// The following class defines the structure of Register Descriptor
class RegisterDescriptor {
	private :
		map<Register, SymbolTableEntry*> table;
		map<Register, SymbolTableEntry*>::iterator i;
	public :
		RegisterDescriptor() {
			// initializing all register mapping to NULL
			modify(RAX, NULL);
			modify(RBX, NULL);
			modify(RCX, NULL);
			modify(RSI, NULL);
			modify(RDI, NULL);
			modify(RDX, NULL);
			modify(NoReg, NULL);
		}

		SymbolTableEntry* lookup(Register r) {
			i = table.find(r);
			if (i != table.end()) {
				return i->second;
			}
			return NULL;
		}

		void modify(Register r, SymbolTableEntry* t) {
			table[r] = t;
			if (t != NULL) {
				t->address.reg = r;
			}
		}

		Register findEmptyRegister() {
			for (i = table.begin(); i != table.end(); ++i) {
				if (i->second == NULL && i->first != NoReg) {
					return i->first;
				}
			}
			return NoReg;
		}

		Register getFarthestNextUseRegister(bool flag) {
			int maxNextUse = -1;
			Register maxNextUseRegister = NoReg;
			for(i = table.begin(); i != table.end(); ++i){
				if (i->first != NoReg) {
					if(i->second->nextUse >= maxNextUse) {
						if (flag && i->first == RAX) {
							continue;
						}
						maxNextUse = i->second->nextUse;
						maxNextUseRegister = i->first;
					}
				}
			}
			return maxNextUseRegister;
		}

};

// The following class defines structure of TAC(Three Address Instruction)
class Instruction3AC {
	public:
		int lineNo;
		InstrType type;
		Operator op;
		SymbolTableEntry* in1;
		SymbolTableEntry* in2;
		SymbolTableEntry* dest;
		int target;
		bool in1IsLive;
		bool in2IsLive;
		bool destIsLive;
		int in1NextUse;
		int in2NextUse;
		int destNextUse;
};

// The following class defines structure of a Basic Block
class BasicBlock {
	public :
		Instruction3AC* instructions;
		int numInstructions;
		int labelBB;
		int targetLabelBB;
};

// instance of BasicBlock class
BasicBlock basicBlocks[100];
int noOfBasicBlocks = 0;

// instance of Instruction3AC class containing all 3AC instructions
Instruction3AC instructions[100];
int noOfInstructions = 0;

// instance of symbol table
SymbolTable symbolTable;

// declaration of leaders
set<int> leaders;

// definition of register descriptor
RegisterDescriptor registerDescriptor;

// file to write generated code
ofstream myfile;
