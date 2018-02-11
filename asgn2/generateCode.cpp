ofstream myfile;

void allocateRegister(Instruction3AC* instr) {
	// x = y op z
	Register r;
	int done = 0;
	if (instr->dest->address.reg != NoReg) {
		r = instr->dest->address.reg;
		registerDescriptor.modify(r, instr->dest);
		return;
	}
	if (instr->in1->type != ConstInt && instr->in1NextUse == -1) {
		r = instr->in1->address.reg;
		if(r != NoReg) {
			myfile << "\tmov " << reg2str(r) << ", " << instr->in1->address.mem << "\n";
			instr->in1->address.reg = NoReg;
			registerDescriptor.modify(r, instr->dest);
			done = 1;
		}
	}
	if (instr->in2->type != ConstInt && instr->in2NextUse == -1 && done == 0) {
		r = instr->in2->address.reg;
		if(r!= NoReg) {
			myfile << "\tmov " << reg2str(r) << ", " << instr->in2->address.mem << "\n";
			instr->in2->address.reg = NoReg;
			registerDescriptor.modify(r, instr->dest);
			done = 1;
		}
	}
	if (done == 0) {
		r = registerDescriptor.findEmptyRegister();
		if (r == NoReg) {
			r = registerDescriptor.getFarthestNextUseRegister();
			myfile << "\tmov " << reg2str(r) << ", " << registerDescriptor.lookup(r)->address.mem << "\n";
			registerDescriptor.lookup(r)->address.reg = NoReg;
			registerDescriptor.modify(r, instr->dest);
		}
		else {
			registerDescriptor.modify(r, instr->dest);
		}
	}
}

void generateCode() {
	myfile.open("result.s");
	myfile << ".data\n";

	vector<string> variableNames = symbolTable.printTableInts();
	for(int i = 0; i < variableNames.size(); i++){
		myfile << "\t" << variableNames[i] << ":\t.quad 0\n";
	}
	// variableNames = symbolTable.printTableArr();
	// for(int i = 0; i < variableNames.size(); i++){
	// 	myfile << "\t" << variableNames[i] << "\tDD 100 DUP(0)\n";
	// }

	myfile << "\tstr:\t.string \"%d\\n\"\n";

	myfile << ".text\n";
	myfile << ".globl main\n";
	myfile << "main:\n";

	for (int k = 0; k < noOfBasicBlocks; k++) {
		Instruction3AC* currentBB = basicBlocks[k].instructions;
		int lenCurrentBB = basicBlocks[k].numInstructions;
		int labelBB = basicBlocks[k].labelBB;

		myfile << "label" << labelBB << ":\n";

		for(int i = 0; i < lenCurrentBB; i++) {
			Instruction3AC ins = currentBB[i];
			allocateRegister(&ins);

			if (ins.type == Copy) {
				if (ins.in1->type == VarInt) {
					myfile << "\tmovq " << reg2str(ins.in1->address.reg) << ", " << reg2str(ins.dest->address.reg) << "\n";
				} else {
					myfile << "\tmovq " << "$" << ins.in1->value << ", " << reg2str(ins.dest->address.reg) << "\n";
				}
				myfile << "\n";
			} else if (ins.type == AssignBinaryOp) {
				if (ins.op == "+") {
					if (ins.in1->type == VarInt) {
						if (ins.in2->type == VarInt) {
							myfile << "\tmovq " << reg2str(ins.in1->address.reg) << ", " << reg2str(ins.dest->address.reg) << "\n";
							myfile << "\taddq " << reg2str(ins.in2->address.reg) << ", " << reg2str(ins.dest->address.reg) << "\n";
						} else {
							myfile << "\tmovq " << reg2str(ins.in1->address.reg) << ", " << reg2str(ins.dest->address.reg) << "\n";
							myfile << "\taddq " << "$" << ins.in2->value << ", " << reg2str(ins.dest->address.reg) << "\n";
						}
					} else {
						if (ins.in2->type == VarInt) {
							myfile << "\tmovq " << "$" << ins.in1->value << ", " << reg2str(ins.dest->address.reg) << "\n";
							myfile << "\taddq " << reg2str(ins.in2->address.reg) << ", " << reg2str(ins.dest->address.reg) << "\n";
						} else {
							myfile << "\tmovq " << "$" << ins.in1->value << ", " << reg2str(ins.dest->address.reg) << "\n";
							myfile << "\taddq " << "$" << ins.in2->value << ", " << reg2str(ins.dest->address.reg) << "\n";
						}
					}
					myfile << "\n";
				} else if (ins.op == "-") {
					if (ins.in1->type == VarInt) {
						if (ins.in2->type == VarInt) {
							myfile << "\tmovq " << reg2str(ins.in1->address.reg) << ", " << reg2str(ins.dest->address.reg) << "\n";
							myfile << "\tsubq " << reg2str(ins.in2->address.reg) << ", " << reg2str(ins.dest->address.reg) << "\n";
						} else {
							myfile << "\tmovq " << reg2str(ins.in1->address.reg) << ", " << reg2str(ins.dest->address.reg) << "\n";
							myfile << "\tsubq " << "$" << ins.in2->value << ", " << reg2str(ins.dest->address.reg) << "\n";
						}
					} else {
						if (ins.in2->type == VarInt) {
							myfile << "\tmovq " << "$" << ins.in1->value << ", " << reg2str(ins.dest->address.reg) << "\n";
							myfile << "\tsubq " << reg2str(ins.in2->address.reg) << ", " << reg2str(ins.dest->address.reg) << "\n";
						} else {
							myfile << "\tmovq " << "$" << ins.in1->value << ", " << reg2str(ins.dest->address.reg) << "\n";
							myfile << "\tsubq " << "$" << ins.in2->value << ", " << reg2str(ins.dest->address.reg) << "\n";
						}
					}
					myfile << "\n";
				} else if (ins.op == "*") {
					myfile << "\tpushq %RAX" << "\n";
					myfile << "\tpushq %RDX" << "\n";

					if (ins.in1->type == VarInt) {
						myfile << "\tmovq " << reg2str(ins.in1->address.reg) << ", %RAX\n";
					} else {
						myfile << "\tmovq " << "$" << ins.in1->value << ", %RAX\n";
					}
					if (ins.in2->type == VarInt) {
						myfile << "\tmovq " << reg2str(ins.in2->address.reg) << ", " << reg2str(ins.dest->address.reg) << "\n";
					} else {
						myfile << "\tmovq " << "$" << ins.in2->value << ", " << reg2str(ins.dest->address.reg) << "\n";
					}
					myfile << "\timulq " << reg2str(ins.dest->address.reg) << "\n";
					myfile << "\tmovq " << "%RAX, " << reg2str(ins.dest->address.reg) << "\n";

					myfile << "\tpopq %RDX" << "\n";
					myfile << "\tpopq %RAX" << "\n";
					myfile << "\n";
				} else if (ins.op == "/") {
					myfile << "\tpushq %RAX" << "\n";
					myfile << "\tpushq %RDX" << "\n";

					myfile << "\tmovq $0, %RDX\n";
					if (ins.in1->type == VarInt) {
						myfile << "\tmovq " << reg2str(ins.in1->address.reg) << ", %RAX\n";
					} else {
						myfile << "\tmovq " << "$" << ins.in1->value << ", %RAX\n";
					}
					if (ins.in1->type == VarInt) {
						myfile << "\tmovq " << reg2str(ins.in2->address.reg) << ", " << reg2str(ins.dest->address.reg) << "\n";
					} else {
						myfile << "\tmovq " << "$" << ins.in2->value << ", " << reg2str(ins.dest->address.reg) << "\n";
					}
					myfile << "\tidiv " << reg2str(ins.dest->address.reg) << "\n";
					myfile << "\tmovq " << "%RAX, " << reg2str(ins.dest->address.reg) << "\n";

					myfile << "\tpopq %RDX" << "\n";
					myfile << "\tpopq %RAX" << "\n";
					myfile << "\n";
				}
			} else if (ins.type == ConditionalJump) {
				myfile << "\tcmp " << reg2str(ins.in2->address.reg) << ", " << reg2str(ins.in1->address.reg) << "\n";
				// in1-in2
				// handles only =, !=, >=, <, <=
				// dosen't handle >
				if (ins.op == "eq") {
					myfile << "\tje " << reg2str(ins.dest->address.reg) << "\n";
				} else if (ins.op == "neq") {
					myfile << "\tjne " << reg2str(ins.dest->address.reg) << "\n";
				} else if (ins.op == "ge") {
					myfile << "\tjge " << reg2str(ins.dest->address.reg) << "\n";
				} else if (ins.op == "lt") {
					myfile << "\tjl " << reg2str(ins.dest->address.reg) << "\n";
				} else if (ins.op == "lteq") {
					myfile << "\tjle " << reg2str(ins.dest->address.reg) << "\n";
				}
			} else if (ins.type == UnconditionalJump){
				myfile << "\tjmp " << reg2str(ins.dest->address.reg) << "\n";
			} else if (ins.type == Procedure){
				myfile << "\tcall " << reg2str(ins.dest->address.reg) << "\n";
			} else if (ins.type == InstrLabel){
				// myfile << "label" << labelBB << ":\n";
			} else if (ins.type == Print){
				myfile << "\tpushq %RDI\n";
				myfile << "\tpushq %RSI\n";
				myfile << "\tpushq %RAX\n";

				myfile << "\tmovq $str, %RDI\n";
				myfile << "\tmovq " << reg2str(ins.in1->address.reg) << ", %RSI\n";
				myfile << "\tmovq $0, %RAX\n";

				myfile << "\tpushq %R10\n";
				myfile << "\tpushq %R11\n";

				myfile << "\tcall printf\n";

				myfile << "\tpopq %R11\n";
				myfile << "\tpopq %R10\n";

				myfile << "\tpopq %RAX\n";
				myfile << "\tpopq %RSI\n";
				myfile << "\tpopq %RDI\n";
				myfile << "\n";
			} else if (ins.type == Return){
				myfile << "\tret\n";
			// } else if (ins.type == IndexedCopyGet) {
			// 	myfile << "\tmovl " << "(" << reg2str(ins.in1->address.reg) << ", " << reg2str(ins.in1->address.reg) << ", 4)" << ", " << reg2str(ins.dest->address.reg) << "\n";
			// } else if (ins.type == IndexedCopyPut) {
			// 	// x[i] = y .... 2,put,x,i,y
			// 	myfile << "\tmovl " << reg2str(ins.in2->address.reg) << ", (" << reg2str(ins.dest->address.reg) << ", " << reg2str(ins.in1->address.reg) << ", 4)" << "\n";
			// 	// cout << reg2str(ins.in2->address.reg) << endl;
			}
		}
	}

	myfile << "\tret\n";
	myfile.close();
}
