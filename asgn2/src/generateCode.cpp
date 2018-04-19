void generateCode() {
	myfile.open("asmOut/result.s");
	myfile << ".data\n";

	vector<string> variableNames = symbolTable.printTableInts();
	for(int i = 0; i < variableNames.size(); i++){
        //if(variableNames[i] == )
		// myfile << "\t" << variableNames[i] << ":\t.quad 0\n";
		myfile <<"\t"<<variableNames[i];
	}

	myfile << "\tstr:\t.string \"%d\\n\"\n";
	myfile << "\tscan_str:\t.string \"%d\"\n";
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
		    	
			// printRegisterDescriptorTable();

			if (ins.type == Copy) {
				allocateRegister(&ins);
				if (ins.in1->type == VarInt) {
					myfile << "\tmovq " << ins.in1->address.mem << ", " << reg2str(ins.dest->address.reg) << "\n";
				} else {
					myfile << "\tmovq " << "$" << ins.in1->value << ", " << reg2str(ins.dest->address.reg) << "\n";
				}
				myfile << "\tmovq " << reg2str(ins.dest->address.reg) << ", " << ins.dest->address.mem << "\n";
				myfile << "\n";
			} else if (ins.type == ArrRead) {
				allocateRegister(&ins);
				// cout<<"AAAA"<<ins.in2->type<<endl;
				if (ins.in2->type == ConstInt)
				{
					myfile << "\tmovq $" << ins.in1->address.mem << ", " << reg2str(ins.dest->address.reg) << "\n";
					myfile << "\tadd $"<< 8*ins.in2->value<<", " << reg2str(ins.dest->address.reg) << "\n"; 
					myfile << "\tpush ("<<reg2str(ins.dest->address.reg)<<")"<<endl;
					myfile << "\tpop "<<(ins.dest->address.mem)<<""<<endl;
				}
			} else if (ins.type == ArrWrite)
			{
				allocateRegister(&ins);
				// cout<<"DEST mem addr: "<<ins.dest->address.mem<<endl;
				// cout<<"DEST offset: "<<8*stoi(ins.dest->auxValues)<<endl;
				// cout<<"IN1 address: " <<ins.in1->address.mem<<endl;
				cout << "-----" << ins.dest->address.mem << "--------" << ins.in1->address.mem << endl;
				myfile << "\tmovq $" << ins.dest->address.mem << ", " << reg2str(ins.dest->address.reg)<<endl;
				myfile << "\tadd $" << 8*ins.in2->value << ", " << reg2str(ins.dest->address.reg)<<""<<endl;
				myfile << "\tpush " << ins.in1->address.mem <<endl;
				myfile << "\tpop (" << reg2str(ins.dest->address.reg)<<")"<<endl;
			} 
			else if (ins.type == AssignBinaryOp) {
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
						registerDescriptor.modify(RAX, NULL);
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
					flushRegisters();
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
				flushRegisters();
				myfile << "\tjmp " << "label" << basicBlocks[k].targetLabelBB << "\n";
				myfile << "\n";
			} else if (ins.type == Procedure) {
				flushRegisters();
				myfile << "\tcall " << "label" << basicBlocks[k].targetLabelBB << "\n";
				myfile << "\n";
			} else if (ins.type == InstrLabel) {
				// we are putting labels at the start of each basic blocks
			} else if (ins.type == Scan) {
				allocateRegister(&ins);

				myfile << "\tpushq %RBP\n";
				myfile << "\tpushq %RDI\n";
				myfile << "\tpushq %RSI\n";

				myfile << "\tmovq $scan_str, %RDI\n";
				myfile << "\tmovq $" << ins.dest->address.mem << ", %RSI\n";
				myfile << "\tcall scanf\n";

				myfile << "\tpopq %RSI\n";
				myfile << "\tpopq %RDI\n";
				myfile << "\tpopq %RBP\n";

				myfile << "\tmovq " << ins.dest->address.mem << ", " << reg2str(ins.dest->address.reg) << "\n";
					
				myfile << "\n";
			} else if (ins.type == Print) {
				myfile << "\tpushq %RDI\n";
				myfile << "\tpushq %RSI\n";
				myfile << "\tpushq %RAX\n";

				myfile << "\tmovq $str, %RDI\n";
				if (ins.in1->type == ConstInt) {
					myfile << "\tmovq " << "$" << ins.in1->value << ", %RSI\n";
				} else {
					myfile << "\tmovq " << ins.in1->address.mem << ", %RSI\n";
				}
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
				flushRegisters();
				myfile << "\tret\n";
			}
		}
		// flushRegisters();
	}

	myfile << "\tret\n";

	myfile.close();
}
