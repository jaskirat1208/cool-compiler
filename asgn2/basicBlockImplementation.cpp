#include <iostream>
#include <bits/stdc++.h>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

typedef string Operator;

enum VarType {
	Int,
	VarLabel
};

enum InstrType {
	Copy,
	IndexedCopy,
	AssignBinaryOp,
	AssignUnaryOp,
	ConditionalJump,
	UnconditionalJump,
	Procedure,
	InstrLabel
};

class SymbolTableEntry {
	public:
		VarType type;
		string address;
};

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
};

class Instruction3AC {
	public:
		int lineNo;
		InstrType type;
		Operator op;
		SymbolTableEntry* in1;
		SymbolTableEntry* in2;
		SymbolTableEntry* dest;
		int target;
};

//all instructions
Instruction3AC instructions[100];
int noOfInstructions = 0;
SymbolTable symbolTable;

void loadData() {
	ifstream infile("irSet.txt");
	string line;

	while(getline(infile, line)) {
		stringstream linestream(line);

		string lineNo = "NIL", typeStr = "NIL", destStr = "NIL", in1Str = "NIL", in2Str = "NIL";
		InstrType type;
		Operator op;
		SymbolTableEntry *in1, *in2, *dest;
		in1 = (SymbolTableEntry*)calloc(1, sizeof(SymbolTableEntry));
		in2 = (SymbolTableEntry*)calloc(1, sizeof(SymbolTableEntry));
		dest = (SymbolTableEntry*)calloc(1, sizeof(SymbolTableEntry));

		getline(linestream, lineNo, ',');
		getline(linestream, typeStr, ',');

		if (typeStr == "=") {
			type = Copy;
			op = typeStr;

			getline(linestream, destStr, ',');
			if (symbolTable.lookup(destStr) == NULL) {
				symbolTable.insert(destStr, dest);
				dest->type = Int;
				dest->address = destStr;
			} else {
				dest = symbolTable.lookup(destStr);
			}

			getline(linestream, in1Str, ',');
			if (symbolTable.lookup(in1Str) == NULL) {
				symbolTable.insert(in1Str, in1);
				in1->type = Int;
				in1->address = in1Str;
			} else {
				in1 = symbolTable.lookup(in1Str);
			}
		} else if (typeStr == "+" || typeStr == "-" || typeStr == "*" || typeStr == "/") {
			type = AssignBinaryOp;
			op = typeStr;

			getline(linestream, destStr, ',');
			if (symbolTable.lookup(destStr) == NULL) {
				symbolTable.insert(destStr, dest);
				dest->type = Int;
				dest->address = destStr;
			} else {
				dest = symbolTable.lookup(destStr);
			}

			getline(linestream, in1Str, ',');
			if (symbolTable.lookup(in1Str) == NULL) {
				symbolTable.insert(in1Str, in1);
				in1->type = Int;
				in1->address = in1Str;
			} else {
				in1 = symbolTable.lookup(in1Str);
			}

			getline(linestream, in2Str, ',');
			if (symbolTable.lookup(in2Str) == NULL) {
				symbolTable.insert(in2Str, in2);
				in2->type = Int;
				in2->address = in2Str;
			} else {
				in2 = symbolTable.lookup(in2Str);
			}
		} else if (typeStr == "ifgoto") {
			type = ConditionalJump;
			
			getline(linestream, op, ',');

			getline(linestream, in1Str, ',');
			if (symbolTable.lookup(in1Str) == NULL) {
				symbolTable.insert(in1Str, in1);
				in1->type = Int;
				in1->address = in1Str;
			} else {
				in1 = symbolTable.lookup(in1Str);
			}

			getline(linestream, in2Str, ',');
			if (symbolTable.lookup(in2Str) == NULL) {
				symbolTable.insert(in2Str, in2);
				in2->type = Int;
				in2->address = in2Str;
			} else {
				in2 = symbolTable.lookup(in2Str);
			}

			getline(linestream, destStr, ',');
			if (symbolTable.lookup(destStr) == NULL) {
				symbolTable.insert(destStr, dest);
				dest->type = VarLabel;
				// dest->address = destStr;
			} else {
				dest = symbolTable.lookup(destStr);
			}
		} else if (typeStr == "goto") {
			type = UnconditionalJump;

			getline(linestream, destStr, ',');
			if (symbolTable.lookup(destStr) == NULL) {
				symbolTable.insert(destStr, dest);
				dest->type = VarLabel;
				// dest->address = destStr;
			} else {
				dest = symbolTable.lookup(destStr);
			}
		} else if (typeStr == "call") {
			type = Procedure;

			getline(linestream, destStr, ',');
			if (symbolTable.lookup(destStr) == NULL) {
				symbolTable.insert(destStr, dest);
				dest->type = VarLabel;
				// dest->address = destStr;
			} else {
				dest = symbolTable.lookup(destStr);
			}
		} else if (typeStr == "label") {
			type = InstrLabel;

			getline(linestream, destStr, ',');
			if (symbolTable.lookup(destStr) == NULL) {
				symbolTable.insert(destStr, dest);
				dest->type = VarLabel;
				// dest->address = destStr;
			} else {
				dest = symbolTable.lookup(destStr);
			}
		} else if (typeStr == "print") {
			getline(linestream, in1Str, ',');
			if (symbolTable.lookup(in1Str) == NULL) {
				symbolTable.insert(in1Str, in1);
				in1->type = Int;
				in1->address = in1Str;
			} else {
				in1 = symbolTable.lookup(in1Str);
			}
		} else if (typeStr == "ret") {

		}

		stringstream ss(lineNo);
	    int num = 0;
	    ss >> num;
		instructions[noOfInstructions].lineNo = num;
		instructions[noOfInstructions].type = type;
		instructions[noOfInstructions].op = op;
		instructions[noOfInstructions].in1 = in1;
		instructions[noOfInstructions].in2 = in2;
		instructions[noOfInstructions].dest = dest;
		// instructions[noOfInstructions].target = target;

		noOfInstructions++;

		cout << "lineNo = " << lineNo << " type = " << typeStr << " op = " << op << "\n";
		cout << "dest = " << destStr << " in1 = " << in1Str << " in2 = " << in2Str << "\n";
	}
}

// int getTargetLabelLocation(string targetLabel) {
// 	int i;
// 	for(i = 0; i < noOfInstructions; i++) {
// 		if(instructions[i].type == Label) {
// 			if(instructions[i].dest == targetLabel) {
// 				return instructions[i].lineNo;
// 			}
// 		}	
// 	}
// 	return -1;
// }

int main() {
	loadData();
	// int n = noOfInstructions;
	// int i;
	// // algo for leaders from textbook pageNo-549 section 8.4.1 Basic Blocks
	// set<int> leaders;
	// leaders.insert(1);// first instruction always a leader

	// // assuming lines have numbers 1-indexed

	// for(i = 1; i < n; i++) {
	// 	if(instructions[i].instrType == "unconditional") {
	// 		cout << "lineNo = " << i+1 << "\n";
	// 		int t1 = getTargetLabelLocation(instructions[i].target);
	// 		leaders.insert(t1);
	// 		leaders.insert(i+2);
	// 		cout << "made leaders = " << t1 << ", " << i+2 << "\n";
	// 	}
	// 	if(instructions[i].instrType=="conditional") {
	// 		stringstream ss(instructions[i].target);
	// 	    int num = 0;
	// 	    ss >> num;
	// 	    cout << "lineNo = " << i+1 << "\n";
	// 		leaders.insert(num);
	// 		leaders.insert(i+2);
	// 		cout << "made leaders = " << num << ", " << i+2 << "\n";
	// 	}
	// 	if(instructions[i].instrType=="call") {
	// 		cout << "lineNo = " << i+1 << "\n";
	// 		int t1 = getTargetLabelLocation(instructions[i].target);
	// 		leaders.insert(t1);
	// 		cout << "made leader = " << t1 << "\n";
	// 	}
	// }

	// set<int>::iterator itr = leaders.begin();
	// cout << "All leaders are:\n";
	// for(itr = leaders.begin(); itr != leaders.end(); ++itr) {
	// 	cout << (*itr) << " ";
	// }
	// cout << "\n";
	// cout << "noOfInstructions = " << noOfInstructions << "\n";
	// cout << "Symbol Table\n";
	// cout << "-----------------------\n";
	// for (unordered_map<string, SymbolTableEntry>::iterator it=symbolTable.begin(); it!=symbolTable.end(); ++it){
	// 	cout << it->first << " => " << (it->second).type << '\n';
	// }
	// cout << "-----------------------\n";
	return 0;
}