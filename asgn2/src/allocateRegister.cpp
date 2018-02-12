void flushRegisters() {
	if (registerDescriptor.lookup(RAX) != NULL) {
		myfile << "\tmovq %RAX, " << registerDescriptor.lookup(RAX)->address.mem << "\n";
		registerDescriptor.lookup(RAX)->address.reg = NoReg;
	}
	if (registerDescriptor.lookup(RBX) != NULL) {
		myfile << "\tmovq %RBX, " << registerDescriptor.lookup(RBX)->address.mem << "\n";
		registerDescriptor.lookup(RBX)->address.reg = NoReg;
	}
	if (registerDescriptor.lookup(RCX) != NULL) {
		myfile << "\tmovq %RCX, " << registerDescriptor.lookup(RCX)->address.mem << "\n";
		registerDescriptor.lookup(RCX)->address.reg = NoReg;
	}
	if (registerDescriptor.lookup(RDX) != NULL) {
		myfile << "\tmovq %RDX, " << registerDescriptor.lookup(RDX)->address.mem << "\n";
		registerDescriptor.lookup(RDX)->address.reg = NoReg;
	}
	if (registerDescriptor.lookup(RSI) != NULL) {
		myfile << "\tmovq %RSI, " << registerDescriptor.lookup(RSI)->address.mem << "\n";
		registerDescriptor.lookup(RSI)->address.reg = NoReg;
	}
	if (registerDescriptor.lookup(RDI) != NULL) {
		myfile << "\tmovq %RDI, " << registerDescriptor.lookup(RDI)->address.mem << "\n";
		registerDescriptor.lookup(RDI)->address.reg = NoReg;
	}
	myfile << "\n";
}

void allocateRegister(Instruction3AC* instr) {
	Register r;

	// r = registerDescriptor.findEmptyRegister();


	SymbolTableEntry* entry = instr->dest;

	// if (r != NoReg) {
	// 	r = registerDescriptor.getFarthestNextUseRegister(false);
	// 	myfile << "\tmovq " << reg2str(r) << ", " << registerDescriptor.lookup(r)->address.mem << "\n";
	// 	registerDescriptor.lookup(r)->address.reg = NoReg;
	// 	registerDescriptor.modify(r, entry);
	// }

	// allocating register to in1 or in2 depending on op for conditional
	// statements.
	if (instr->type == ConditionalJump) {
		if (instr->op == "gt") {
			entry = instr->in2;
		} else {
			entry = instr->in1;
		}

		if (entry->address.reg != NoReg) {
			r = entry->address.reg;
			registerDescriptor.modify(r, entry);
			return;
		}

		r = registerDescriptor.findEmptyRegister();
		if (r == NoReg) {
			r = registerDescriptor.getFarthestNextUseRegister(false);
			myfile << "\tmovq " << reg2str(r) << ", " << registerDescriptor.lookup(r)->address.mem << "\n";
			registerDescriptor.lookup(r)->address.reg = NoReg;
			registerDescriptor.modify(r, entry);
		}
		else {
			registerDescriptor.modify(r, entry);
		}
		myfile << "\tmovq " << entry->address.mem << ", " << reg2str(entry->address.reg) << "\n";
		return;
	}

	// x = y op z
	cout << instr->lineNo << endl;
	if (entry->address.reg != NoReg) {
		r = entry->address.reg;
		cout << "f1" << instr->lineNo << endl;
		registerDescriptor.modify(r, entry);
		return;
	}
	if (instr->in1->type != ConstInt && instr->in1NextUse == -1) {
		r = instr->in1->address.reg;
		if(r != NoReg) {
			myfile << "\tmovq " << reg2str(r) << ", " << instr->in1->address.mem << "\n";
			instr->in1->address.reg = NoReg;
			cout << "f2" << instr->lineNo << endl;
			registerDescriptor.modify(r, entry);
			return;
		}
	}
	// if (instr->type != Copy) {
	// 	if (instr->in2->type != ConstInt && instr->in2NextUse == -1) {
	// 		r = instr->in2->address.reg;
	// 		if(r!= NoReg) {
	// 			myfile << "\tmovq " << reg2str(r) << ", " << instr->in2->address.mem << "\n";
	// 			instr->in2->address.reg = NoReg;
	// 			cout << "f3" << instr->lineNo << endl;
	// 			registerDescriptor.modify(r, entry);
	// 			return;
	// 		}
	// 	}
	// }
	r = registerDescriptor.findEmptyRegister();
	if (r == NoReg) {
		r = registerDescriptor.getFarthestNextUseRegister(false);
		myfile << "\tmovq " << reg2str(r) << ", " << registerDescriptor.lookup(r)->address.mem << "\n";
		registerDescriptor.lookup(r)->address.reg = NoReg;
		cout << "f4" << instr->lineNo << endl;
		registerDescriptor.modify(r, entry);
	}
	else {
		cout << "f5" << instr->lineNo << endl;
		registerDescriptor.modify(r, entry);
	}
}