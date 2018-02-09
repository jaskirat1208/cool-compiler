#include <bits/stdc++.h>

using namespace std;

typedef string Operator;

// enumeration of variable type
enum VarType {
	Int,
	VarLabel
};

// enumeration of instruction type
enum InstrType {
	Copy,
	IndexedCopy,
	AssignBinaryOp,
	AssignUnaryOp,
	ConditionalJump,
	UnconditionalJump,
	Procedure,
	InstrLabel,
	Print,
	Return
};

// The following class defines structure of Symbol Table Entry
class SymbolTableEntry {
	public:
		VarType type;
		string address;
		bool isLive;
		int nextUse;
};

// The following class defines structure of Symbol Table
class SymbolTable {
	private :
		unordered_map<string, SymbolTableEntry*> table;
	public :
		void insert(string s, SymbolTableEntry* t) {
			table.insert(make_pair(s, t));
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