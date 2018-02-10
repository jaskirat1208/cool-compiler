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

void translate() {
	myfile.open("result.txt");
	myfile << "extern\tprintf\n";
	myfile << "SECTION\t.data\n";
	// here we can add all variables from symbolTable
	vector<string> variableNames = symbolTable.printTable();
	for(int i = 0; i < variableNames.size(); i++){
		myfile << "\t" << variableNames[i] << ":\t.quad 0\n";
	}

	myfile << "SECTION\t.text\n";
	myfile << ".globl main\n";
	myfile << "main:\n";

	// this is for printing integers
	myfile << "format:\n\tdb \"%d\", 10, 0\n";

	for (int k = 0; k < noOfBasicBlocks; k++) {
		Instruction3AC* currentBB = basicBlocks[k].instructions;
		int lenCurrentBB = basicBlocks[k].numInstructions;
		int labelBB = basicBlocks[k].labelBB;

		myfile << "label" << labelBB << ":\n";

		for(int i = 0; i < lenCurrentBB; i++) {
			Instruction3AC ins = currentBB[i];
			allocateRegister(&ins);

			if (ins.type == Copy) {
				myfile << "\tmov " << reg2str(ins.in1->address.reg) << ", " << reg2str(ins.dest->address.reg) << "\n";
			} else if (ins.type == AssignBinaryOp) {
				if (ins.op == "+") {
					myfile << "\tmov " << reg2str(ins.in1->address.reg) << ", " << reg2str(ins.dest->address.reg) << "\n";
					myfile << "\tadd " << reg2str(ins.in2->address.reg) << ", " << reg2str(ins.dest->address.reg) << "\n";
				} else if (ins.op == "-") {
					myfile << "\tmov " << reg2str(ins.in1->address.reg) << ", " << reg2str(ins.dest->address.reg) << "\n";
					myfile << "\tsub " << reg2str(ins.in2->address.reg) << ", " << reg2str(ins.dest->address.reg) << "\n";
				} else if (ins.op == "*") {
					myfile << "\tmov " << reg2str(ins.in1->address.reg) << ", " << reg2str(ins.dest->address.reg) << "\n";
					myfile << "\timul " << reg2str(ins.in2->address.reg) << ", " << reg2str(ins.dest->address.reg) << "\n";
				} else if (ins.op == "/") {
					// this is trickier here 2 specific registers are always required
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
				// print in x86
				myfile << "\tmov format, rdi\n";
				myfile << "\tmov " << reg2str(ins.in1->address.reg) <<", rsi\n";
				// ensure that rax is free
				myfile << "\txor rax, rax\n";
				myfile << "\tcall printf\n";
				myfile << "\tpop rcx\n";
				myfile << "\tpop rax\n"; 
			} else if (ins.type == Return){
				myfile << "\tret\n";
			} 
		}
	}

	myfile << "\tret\n";
	myfile.close();
}