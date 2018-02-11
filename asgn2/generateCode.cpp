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
			
			
			printRegisterDescriptorTable();

			if (ins.type == Copy) {
				allocateRegister(&ins);
				if (ins.in1->type == VarInt) {
					myfile << "\tmovq " << ins.in1->address.mem << ", " << reg2str(ins.dest->address.reg) << "\n";
				} else {
					myfile << "\tmovq " << "$" << ins.in1->value << ", " << reg2str(ins.dest->address.reg) << "\n";
				}
				myfile << "\tmovq " << reg2str(ins.dest->address.reg) << ", " << ins.dest->address.mem << "\n";
				myfile << "\n";
			} else if (ins.type == AssignBinaryOp) {
				allocateRegister(&ins);
				if (ins.op == "+") {
					if (ins.in1->type == VarInt) {
						if (ins.in2->type == VarInt) {
							myfile << "\tmovq " << ins.in1->address.mem << ", " << reg2str(ins.dest->address.reg) << "\n";
							myfile << "\taddq " << ins.in2->address.mem << ", " << reg2str(ins.dest->address.reg) << "\n";
						} else {
							myfile << "\tmovq " << ins.in1->address.mem << ", " << reg2str(ins.dest->address.reg) << "\n";
							myfile << "\taddq " << "$" << ins.in2->value << ", " << reg2str(ins.dest->address.reg) << "\n";
						}
					} else {
						if (ins.in2->type == VarInt) {
							myfile << "\tmovq " << "$" << ins.in1->value << ", " << reg2str(ins.dest->address.reg) << "\n";
							myfile << "\taddq " << ins.in2->address.mem << ", " << reg2str(ins.dest->address.reg) << "\n";
						} else {
							myfile << "\tmovq " << "$" << ins.in1->value << ", " << reg2str(ins.dest->address.reg) << "\n";
							myfile << "\taddq " << "$" << ins.in2->value << ", " << reg2str(ins.dest->address.reg) << "\n";
						}
					}
					myfile << "\tmovq " << reg2str(ins.dest->address.reg) << ", " << ins.dest->address.mem << "\n";
					myfile << "\n";
				} else if (ins.op == "-") {
					if (ins.in1->type == VarInt) {
						if (ins.in2->type == VarInt) {
							myfile << "\tmovq " << ins.in1->address.mem << ", " << reg2str(ins.dest->address.reg) << "\n";
							myfile << "\tsubq " << ins.in2->address.mem << ", " << reg2str(ins.dest->address.reg) << "\n";
						} else {
							myfile << "\tmovq " << ins.in1->address.mem << ", " << reg2str(ins.dest->address.reg) << "\n";
							myfile << "\tsubq " << "$" << ins.in2->value << ", " << reg2str(ins.dest->address.reg) << "\n";
						}
					} else {
						if (ins.in2->type == VarInt) {
							myfile << "\tmovq " << "$" << ins.in1->value << ", " << reg2str(ins.dest->address.reg) << "\n";
							myfile << "\tsubq " << ins.in2->address.mem << ", " << reg2str(ins.dest->address.reg) << "\n";
						} else {
							myfile << "\tmovq " << "$" << ins.in1->value << ", " << reg2str(ins.dest->address.reg) << "\n";
							myfile << "\tsubq " << "$" << ins.in2->value << ", " << reg2str(ins.dest->address.reg) << "\n";
						}
					}
					myfile << "\tmovq " << reg2str(ins.dest->address.reg) << ", " << ins.dest->address.mem << "\n";
					myfile << "\n";
				} else if (ins.op == "*") {
					if (ins.dest->address.reg == RAX) {
						Register r = registerDescriptor.findEmptyRegister();
						if (r == NoReg) {
							r = registerDescriptor.getFarthestNextUseRegister(true);
							myfile << "\tmovq " << reg2str(r) << ", " << registerDescriptor.lookup(r)->address.mem << "\n";
							registerDescriptor.lookup(r)->address.reg = NoReg;
							registerDescriptor.modify(r, ins.dest);
						}
						else {
							registerDescriptor.modify(r, ins.dest);
						}
						myfile << "\tmovq " << "%RAX, " << reg2str(ins.dest->address.reg) << "\n";
					}
					myfile << "\tpushq %RAX" << "\n";
					myfile << "\tpushq %RDX" << "\n";

					if (ins.in1->type == VarInt) {
						myfile << "\tmovq " << ins.in1->address.mem << ", %RAX\n";
					} else {
						myfile << "\tmovq " << "$" << ins.in1->value << ", %RAX\n";
					}
					if (ins.in2->type == VarInt) {
						myfile << "\tmovq " << ins.in2->address.mem << ", " << reg2str(ins.dest->address.reg) << "\n";
					} else {
						myfile << "\tmovq " << "$" << ins.in2->value << ", " << reg2str(ins.dest->address.reg) << "\n";
					}

					myfile << "\timulq " << reg2str(ins.dest->address.reg) << "\n";
					myfile << "\tmovq " << "%RAX, " << reg2str(ins.dest->address.reg) << "\n";
					myfile << "\tmovq " << reg2str(ins.dest->address.reg) << ", " << ins.dest->address.mem << "\n";

					myfile << "\tpopq %RDX" << "\n";
					myfile << "\tpopq %RAX" << "\n";
					myfile << "\n";
				} else if (ins.op == "/") {
					if (ins.dest->address.reg == RAX) {
						Register r = registerDescriptor.findEmptyRegister();
						if (r == NoReg) {
							r = registerDescriptor.getFarthestNextUseRegister(true);
							myfile << "\tmovq " << reg2str(r) << ", " << registerDescriptor.lookup(r)->address.mem << "\n";
							registerDescriptor.lookup(r)->address.reg = NoReg;
							registerDescriptor.modify(r, ins.dest);
						}
						else {
							registerDescriptor.modify(r, ins.dest);
						}
						myfile << "\tmovq " << "%RAX, " << reg2str(ins.dest->address.reg) << "\n";
					}

					myfile << "\tpushq %RAX" << "\n";
					myfile << "\tpushq %RDX" << "\n";

					if (ins.in1->type == VarInt) {
						myfile << "\tmovq " << ins.in1->address.mem << ", %RAX\n";
					} else {
						myfile << "\tmovq " << "$" << ins.in1->value << ", %RAX\n";
					}
					if (ins.in2->type == VarInt) {
						myfile << "\tmovq " << ins.in2->address.mem << ", " << reg2str(ins.dest->address.reg) << "\n";
					} else {
						myfile << "\tmovq " << "$" << ins.in2->value << ", " << reg2str(ins.dest->address.reg) << "\n";
					}
					myfile << "\tmovq $0, %RDX\n";
					// myfile << "\tcdqo\n";
					myfile << "\tidivq " << reg2str(ins.dest->address.reg) << "\n";
					myfile << "\tmovq " << "%RAX, " << reg2str(ins.dest->address.reg) << "\n";
					myfile << "\tmovq " << reg2str(ins.dest->address.reg) << ", " << ins.dest->address.mem << "\n";

					myfile << "\tpopq %RDX" << "\n";
					myfile << "\tpopq %RAX" << "\n";
					myfile << "\n";
				} else if (ins.op == "%") {
					if (ins.dest->address.reg == RAX) {
						Register r = registerDescriptor.findEmptyRegister();
						if (r == NoReg) {
							r = registerDescriptor.getFarthestNextUseRegister(true);
							myfile << "\tmovq " << reg2str(r) << ", " << registerDescriptor.lookup(r)->address.mem << "\n";
							registerDescriptor.lookup(r)->address.reg = NoReg;
							registerDescriptor.modify(r, ins.dest);
						}
						else {
							registerDescriptor.modify(r, ins.dest);
						}
						myfile << "\tmovq " << "%RAX, " << reg2str(ins.dest->address.reg) << "\n";
					}

					myfile << "\tpushq %RAX" << "\n";
					myfile << "\tpushq %RDX" << "\n";

					if (ins.in1->type == VarInt) {
						myfile << "\tmovq " << ins.in1->address.mem << ", %RAX\n";
					} else {
						myfile << "\tmovq " << "$" << ins.in1->value << ", %RAX\n";
					}
					if (ins.in2->type == VarInt) {
						myfile << "\tmovq " << ins.in2->address.mem << ", " << reg2str(ins.dest->address.reg) << "\n";
					} else {
						myfile << "\tmovq " << "$" << ins.in2->value << ", " << reg2str(ins.dest->address.reg) << "\n";
					}
					myfile << "\tmovq $0, %RDX\n";
					// myfile << "\tcdqo\n";
					myfile << "\tidivq " << reg2str(ins.dest->address.reg) << "\n";
					myfile << "\tmovq " << "%RDX, " << reg2str(ins.dest->address.reg) << "\n";
					myfile << "\tmovq " << reg2str(ins.dest->address.reg) << ", " << ins.dest->address.mem << "\n";

					myfile << "\tpopq %RDX" << "\n";
					myfile << "\tpopq %RAX" << "\n";
					myfile << "\n";
				}
			} else if (ins.type == ConditionalJump) {
				allocateRegister(&ins);
				if (ins.op == "gt") {
					if (ins.in1->type == VarInt) {
						if (ins.in2->type == VarInt) {
							myfile << "\tcmp " << ins.in1->address.mem << ", " << reg2str(ins.in2->address.reg) << "\n";
						} else {
							myfile << "\tcmp " << ins.in1->address.mem << ", " << "$" << ins.in2->value << "\n";
						}
					} else {
						if (ins.in2->type == VarInt) {
							myfile << "\tcmp " << "$" << ins.in1->value << ", " << reg2str(ins.in2->address.reg) << "\n";
						} else {
							myfile << "\tcmp " << "$" << ins.in1->value << ", " << "$" << ins.in2->value << "\n";
						}
					}
					myfile << "\tjl " << "label" << basicBlocks[k].targetLabelBB << "\n";
				} else {
					if (ins.in2->type == VarInt) {
						if (ins.in1->type == VarInt) {
							myfile << "\tcmp " << ins.in2->address.mem << ", " << reg2str(ins.in1->address.reg) << "\n";
						} else {
							myfile << "\tcmp " << ins.in2->address.mem << ", " << "$" << ins.in1->value << "\n";
						}
					} else {
						if (ins.in1->type == VarInt) {
							myfile << "\tcmp " << "$" << ins.in2->value << ", " << reg2str(ins.in1->address.reg) << "\n";
						} else {
							myfile << "\tcmp " << "$" << ins.in2->value << ", " << "$" << ins.in1->value << "\n";
						}
					}
					if (ins.op == "eq") {
						myfile << "\tje " << "label" << basicBlocks[k].targetLabelBB << "\n";
					} else if (ins.op == "neq") {
						myfile << "\tjne " << "label" << basicBlocks[k].targetLabelBB << "\n";
					} else if (ins.op == "geq") {
						myfile << "\tjge " << "label" << basicBlocks[k].targetLabelBB << "\n";
					} else if (ins.op == "lt") {
						myfile << "\tjl " << "label" << basicBlocks[k].targetLabelBB << "\n";
					} else if (ins.op == "leq") {
						myfile << "\tjle " << "label" << basicBlocks[k].targetLabelBB << "\n";
					}
				}
				myfile << "\n";
			} else if (ins.type == UnconditionalJump) {
				myfile << "\tjmp " << "label" << basicBlocks[k].targetLabelBB << "\n";
				myfile << "\n";
			} else if (ins.type == Procedure){
				myfile << "\tcall " << "label" << basicBlocks[k].targetLabelBB << "\n";
				myfile << "\n";
			} else if (ins.type == InstrLabel) {
				// we are putting labels at the start of each basic blocks
			} else if (ins.type == Print) {
				// if (registerDescriptor.lookup(RAX) != NULL) {
				// 	myfile << "\tmovq %RAX, " << registerDescriptor.lookup(RAX)->address.mem << "\n";
				// }
				// if (registerDescriptor.lookup(RBX) != NULL) {
				// 	myfile << "\tmovq %RBX, " << registerDescriptor.lookup(RBX)->address.mem << "\n";
				// }
				// if (registerDescriptor.lookup(RCX) != NULL) {
				// 	myfile << "\tmovq %RCX, " << registerDescriptor.lookup(RCX)->address.mem << "\n";
				// }
				// if (registerDescriptor.lookup(RDX) != NULL) {
				// 	myfile << "\tmovq %RDX, " << registerDescriptor.lookup(RDX)->address.mem << "\n";
				// }
				// if (registerDescriptor.lookup(RSI) != NULL) {
				// 	myfile << "\tmovq %RSI, " << registerDescriptor.lookup(RSI)->address.mem << "\n";
				// }
				// if (registerDescriptor.lookup(RDI) != NULL) {
				// 	myfile << "\tmovq %RDI, " << registerDescriptor.lookup(RDI)->address.mem << "\n";
				// }
				myfile << "\tpushq %RDI\n";
				myfile << "\tpushq %RSI\n";
				myfile << "\tpushq %RAX\n";

				myfile << "\tmovq $str, %RDI\n";
				myfile << "\tmovq " << ins.in1->address.mem << ", %RSI\n";
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
			} else if (ins.type == Return) {
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
