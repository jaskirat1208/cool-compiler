void allocateRegister(Instruction3AC* instr) {
	Register r;

	SymbolTableEntry* entry = instr->dest;

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
			r = registerDescriptor.getFarthestNextUseRegister();
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
	if (entry->address.reg != NoReg) {
		r = entry->address.reg;
		registerDescriptor.modify(r, entry);
		return;
	}
	if (instr->in1->type != ConstInt && instr->in1NextUse == -1) {
		r = instr->in1->address.reg;
		if(r != NoReg) {
			myfile << "\tmovq " << reg2str(r) << ", " << instr->in1->address.mem << "\n";
			instr->in1->address.reg = NoReg;
			registerDescriptor.modify(r, entry);
			return;
		}
	}
	if (instr->type != Copy) {
		if (instr->in2->type != ConstInt && instr->in2NextUse == -1) {
			r = instr->in2->address.reg;
			if(r!= NoReg) {
				myfile << "\tmovq " << reg2str(r) << ", " << instr->in2->address.mem << "\n";
				instr->in2->address.reg = NoReg;
				registerDescriptor.modify(r, entry);
				return;
			}
		}
	}
	r = registerDescriptor.findEmptyRegister();
	if (r == NoReg) {
		r = registerDescriptor.getFarthestNextUseRegister();
		myfile << "\tmovq " << reg2str(r) << ", " << registerDescriptor.lookup(r)->address.mem << "\n";
		registerDescriptor.lookup(r)->address.reg = NoReg;
		registerDescriptor.modify(r, entry);
	}
	else {
		registerDescriptor.modify(r, entry);
	}
}