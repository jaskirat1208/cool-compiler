#include <bits/stdc++.h>

using namespace std;

typedef string Operator;
typedef string Memory;

// enumeration of variable type
enum VarType {
	VarInt,
	VarLabel,
	ConstInt
};

// enumeration of instruction type
enum InstrType {
	Copy, // x = y
	IndexedCopyGet, // x = y[i] .... 1,get,x,y,i
	IndexedCopyPut, // x[i] = y .... 2,put,x,i,y
	AssignBinaryOp, // a = b `op` c .... 3,op,a,b,c
	AssignUnaryOp,
	ConditionalJump,
	UnconditionalJump,
	Procedure,
	InstrLabel,
	Print,
	Return
};

// enumeration of types of available registers for use in each basic block
enum Register {
	RAX, RBX, RCX, RDX,
	RSI, RDI, RBP, RSP,
	R8,  R9,  R10, R11,
	R12, R13, R14, R15,
	NoReg
};

// The following class defines the structure of AddressType which includes
// register address, memory address, stack address
class AddressType {
	public :
		Register reg;
		Memory mem;
		// something for stack, not yet implemented
};

// The following class defines structure of Symbol Table Entry
class SymbolTableEntry {
	public:
		VarType type;
		AddressType address;
		int value; // stores the value if the in1 or in2 are constants
		bool isLive;
		int nextUse;
};

// The following class defines structure of Symbol Table
class SymbolTable {
	private :
		unordered_map<string, SymbolTableEntry*> table;
	public :
		void insert(string s, SymbolTableEntry* t) {
			table[s] = t;
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
			modify(RDX, NULL);
			modify(RSI, NULL);
			modify(RDI, NULL);
			modify(RBP, NULL);
			modify(RSP, NULL);
			modify(R8, NULL);
			modify(R9, NULL);
			modify(R10, NULL);
			modify(R11, NULL);
			modify(R12, NULL);
			modify(R13, NULL);
			modify(R14, NULL);
			modify(R15, NULL);
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
		}

		Register findEmptyRegister() {
			for (i = table.begin(); i != table.end(); ++i) {
				if (i->second == NULL && i->first != NoReg) {
					return i->first;
				}
			}
			return NoReg;
		}
		Register selectRegisterFor(SymbolTableEntry* s1){
			for(i=table.begin();i!=table.end();i++){
				if(i->second==s1 && i->first!=NoReg){
					return i->first;
				}
			}
			return NoReg;
		}
		Register getFarthestNextUseRegister(){
			return NoReg;
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
		// BasicBlock* ifTrueNextBB;
		// BasicBlock* ifFalseNextBB;
		int labelBB;
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
