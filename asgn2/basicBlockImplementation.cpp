#include "global.h"
#include "helper.cpp"

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
				dest->type = VarInt;
				dest->address = destStr;
			} else {
				dest = symbolTable.lookup(destStr);
			}

			getline(linestream, in1Str, ',');
			if (symbolTable.lookup(in1Str) == NULL) {
				symbolTable.insert(in1Str, in1);
				if (isNum(in1Str[0])) {
					in1->type = ConstInt;
					in1->value = stoi(in1Str);
				} else {
					in1->type = VarInt;
				}
				in1->address = in1Str;
			} else {
				in1 = symbolTable.lookup(in1Str);
			}
		} else if (typeStr == "get") {
			type = IndexedCopyGet;
			op = typeStr;

			getline(linestream, destStr, ',');
			if (symbolTable.lookup(destStr) == NULL) {
				symbolTable.insert(destStr, dest);
				dest->type = VarInt;
				dest->address = destStr;
			} else {
				dest = symbolTable.lookup(destStr);
			}

			getline(linestream, in1Str, ',');
			if (symbolTable.lookup(in1Str) == NULL) {
				symbolTable.insert(in1Str, in1);
				in1->type = VarInt;
				in1->address = in1Str;
			} else {
				in1 = symbolTable.lookup(in1Str);
			}

			getline(linestream, in2Str, ',');
			if (symbolTable.lookup(in2Str) == NULL) {
				symbolTable.insert(in2Str, in2);
				if (isNum(in2Str[0])) {
					in2->type = ConstInt;
					in2->value = stoi(in2Str);
				} else {
					in2->type = VarInt;
				}
				in2->address = in2Str;
			} else {
				in2 = symbolTable.lookup(in2Str);
			}
		} else if (typeStr == "put") {
			type = IndexedCopyPut;
			op = typeStr;

			getline(linestream, destStr, ',');
			if (symbolTable.lookup(destStr) == NULL) {
				symbolTable.insert(destStr, dest);
				dest->type = VarInt;
				dest->address = destStr;
			} else {
				dest = symbolTable.lookup(destStr);
			}

			getline(linestream, in1Str, ',');
			if (symbolTable.lookup(in1Str) == NULL) {
				symbolTable.insert(in1Str, in1);
				if (isNum(in1Str[0])) {
					in1->type = ConstInt;
				} else {
					in1->type = VarInt;
				}
				in1->address = in1Str;
			} else {
				in1 = symbolTable.lookup(in1Str);
			}

			getline(linestream, in2Str, ',');
			if (symbolTable.lookup(in2Str) == NULL) {
				symbolTable.insert(in2Str, in2);
				in2->type = VarInt;
				in2->address = in2Str;
			} else {
				in2 = symbolTable.lookup(in2Str);
			}
		} else if (typeStr == "+" || typeStr == "-" || typeStr == "*" || typeStr == "/") {
			type = AssignBinaryOp;
			op = typeStr;

			getline(linestream, destStr, ',');
			if (symbolTable.lookup(destStr) == NULL) {
				symbolTable.insert(destStr, dest);
				dest->type = VarInt;
				dest->address = destStr;
			} else {
				dest = symbolTable.lookup(destStr);
			}

			getline(linestream, in1Str, ',');
			if (symbolTable.lookup(in1Str) == NULL) {
				symbolTable.insert(in1Str, in1);
				if (isNum(in1Str[0])) {
					in1->type = ConstInt;
					in1->value = stoi(in1Str);
				} else {
					in1->type = VarInt;
				}
				in1->address = in1Str;
			} else {
				in1 = symbolTable.lookup(in1Str);
			}

			getline(linestream, in2Str, ',');
			// takes care of the unary operations
			if (in2Str == "") {
				type = AssignUnaryOp;
			} else {
				if (symbolTable.lookup(in2Str) == NULL) {
					symbolTable.insert(in2Str, in2);
					if (isNum(in2Str[0])) {
						in2->type = ConstInt;
						in2->value = stoi(in2Str);
					} else {
						in2->type = VarInt;
					}
					in2->address = in2Str;
				} else {
					in2 = symbolTable.lookup(in2Str);
				}
			}
		} else if (typeStr == "ifgoto") {
			type = ConditionalJump;

			getline(linestream, op, ',');

			getline(linestream, in1Str, ',');
			if (symbolTable.lookup(in1Str) == NULL) {
				symbolTable.insert(in1Str, in1);
				if (isNum(in1Str[0])) {
					in1->type = ConstInt;
					in1->value = stoi(in1Str);
				} else {
					in1->type = VarInt;
				}
				in1->address = in1Str;
			} else {
				in1 = symbolTable.lookup(in1Str);
			}

			getline(linestream, in2Str, ',');
			if (symbolTable.lookup(in2Str) == NULL) {
				symbolTable.insert(in2Str, in2);
				if (isNum(in2Str[0])) {
					in2->type = ConstInt;
					in2->value = stoi(in2Str);
				} else {
					in2->type = VarInt;
				}
				in2->address = in2Str;
			} else {
				in2 = symbolTable.lookup(in2Str);
			}

			getline(linestream, destStr, ',');
			if (symbolTable.lookup(destStr) == NULL) {
				symbolTable.insert(destStr, dest);
				dest->type = VarLabel;
				dest->address = destStr;
			} else {
				dest = symbolTable.lookup(destStr);
			}
		} else if (typeStr == "goto") {
			type = UnconditionalJump;

			getline(linestream, destStr, ',');
			if (symbolTable.lookup(destStr) == NULL) {
				symbolTable.insert(destStr, dest);
				dest->type = VarLabel;
				dest->address = destStr;
			} else {
				dest = symbolTable.lookup(destStr);
			}
		} else if (typeStr == "call") {
			type = Procedure;

			getline(linestream, destStr, ',');
			if (symbolTable.lookup(destStr) == NULL) {
				symbolTable.insert(destStr, dest);
				dest->type = VarLabel;
				dest->address = destStr;
			} else {
				dest = symbolTable.lookup(destStr);
			}
		} else if (typeStr == "label") {
			type = InstrLabel;

			getline(linestream, destStr, ',');
			if (symbolTable.lookup(destStr) == NULL) {
				symbolTable.insert(destStr, dest);
				dest->type = VarLabel;
				dest->address = destStr;
			} else {
				dest = symbolTable.lookup(destStr);
			}
		} else if (typeStr == "print") {
			type = Print;

			getline(linestream, in1Str, ',');
			if (symbolTable.lookup(in1Str) == NULL) {
				symbolTable.insert(in1Str, in1);
				if (isNum(in1Str[0])) {
					in1->type = ConstInt;
					in1->value = stoi(in1Str);
				} else {
					in1->type = VarInt;
				}
				in1->address = in1Str;
			} else {
				in1 = symbolTable.lookup(in1Str);
			}
		} else if (typeStr == "ret") {
			type = Return;
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

		cout << "lineNo = " << lineNo << " type = " << typeStr << " op = " << op << endl << endl;
		cout << "dest = " << destStr << " in1 = " << in1Str << " in2 = " << in2Str << endl;
	}
}

int getTargetLabelLocation(SymbolTableEntry* label) {
	for(int i = 0; i < noOfInstructions; i++) {
		if(instructions[i].type == InstrLabel) {
			if(instructions[i].dest == label) {
				return instructions[i].lineNo;
			}
		}
	}
	return -1;
}

void findLeaders() {
	// first instruction is always a leader
	leaders.insert(1);

	for (int i = 1; i < noOfInstructions; i++) {
		
		if(instructions[i].type == UnconditionalJump || instructions[i].type == ConditionalJump) {
			// cout << "lineNo = " << i+1 << "\n";
			int t1 = getTargetLabelLocation(instructions[i].dest);
			if (t1 != -1) {
				leaders.insert(t1);
			}
			if (i+2 <= noOfInstructions) {
				leaders.insert(i+2);
			}
			// cout << "made leaders = " << t1 << ", " << i+2 << "\n";
		}

		if (instructions[i].type == Procedure) {
			// cout << "lineNo = " << i+1 << "\n";
			int t1 = getTargetLabelLocation(instructions[i].dest);
			if (t1 != -1) {
				leaders.insert(t1);
			}
			if (i+2 <= noOfInstructions) {
				leaders.insert(i+2);
			}
			// cout << "made leader = " << t1 << ", " << i+2 << "\n";
		}

		if (instructions[i].type == Return) {
			// cout << "lineNo = " << i+1 << "\n";
			if (i+2 <= noOfInstructions) {
				leaders.insert(i+2);
			}
			// cout << "made leader = " << ", " << i+2 << "\n";
		}

	}

}


//1 register should be kept free so that both memory instruction constraint can be resolved.
int registerDescriptor[16];		//16 registers: %rax	%rbx	%rcx	%rdx	%rsi	%rdi	%rbp	%rsp	%r8	%r9	%r10	%r11	%r12	%r13	%r14	%r15
void allocate_register(Instruction3AC instr) {

	if(instr.type == Copy || instr.type == AssignUnaryOp){
		//run the heuristic: if input is constant : allocate an empty register
		//else: if the input y is not used again, allocate the register of y for the input
		//else: if y is used again, allocate an empty register
		//else: if no empty register, swap the register whose corresponding variable has farthest next use
		//else: allocate a memory unit for x

	}
	else if(instr.type == AssignBinaryOp ){
		//run the heuristic: if input1 and input2 is constant, allocate an empty register
		//else: if input1 is not used again, allocate reg(input1) for reg(x)
		//else: if input2 is not used again, allocate reg(input2) for reg(x)
		//else: if inputs are used again, allocate an empty register for x
		//else: if no empty register, swap the register whose corresponding variable has farthest next use
		//else: allocate a memory unit for x
	}
}

void assignBasicBlocks() {
	set<int>::iterator itr = leaders.begin(), itr1 = ++leaders.begin();
	for (int i = 0; i < noOfBasicBlocks && itr != leaders.end(); i++, ++itr, ++itr1) {
		basicBlocks[i].instructions = instructions + (*itr) - 1;
		basicBlocks[i].labelBB = i;
		if (i < noOfBasicBlocks-1) {
			basicBlocks[i].numInstructions = *itr1 - *itr;
		} else {
			basicBlocks[i].numInstructions = noOfInstructions + 1- *itr;
		}
	}
}

void assignIsLiveAndNextUseEachBB() {
	for (int i = 0; i < noOfBasicBlocks; i++) {
		Instruction3AC* currentBB = basicBlocks[i].instructions;
		int lenCurrentBB = basicBlocks[i].numInstructions;
		symbolTable.initIsLiveAndNextUse();
		for (int j = lenCurrentBB-1; j >= 0; j--) {
			currentBB[j].in1IsLive = currentBB[j].in1->isLive;
			currentBB[j].in2IsLive = currentBB[j].in1->isLive;
			currentBB[j].destIsLive = currentBB[j].in1->isLive;
			currentBB[j].in1NextUse = currentBB[j].in1->nextUse;
			currentBB[j].in2NextUse = currentBB[j].in1->nextUse;
			currentBB[j].destNextUse = currentBB[j].in1->nextUse;

			// updations of liveliness and next use of in1, in2 and dest
			currentBB[j].dest->isLive = false;
			currentBB[j].dest->nextUse = -1;
			currentBB[j].in1->isLive = true;
			currentBB[j].in1->nextUse = j;
			currentBB[j].in2->isLive = true;
			currentBB[j].in2->nextUse = j;
		}
	}
}

int main() {
	loadData();

	findLeaders();

	set<int>::iterator itr = leaders.begin();
	cout << "All leaders are:\n";
	for(itr = leaders.begin(); itr != leaders.end(); ++itr) {
		cout << (*itr) << " ";
	}
	cout << endl;

	noOfBasicBlocks = leaders.size();

	assignBasicBlocks();

	assignIsLiveAndNextUseEachBB();

	return 0;
}
