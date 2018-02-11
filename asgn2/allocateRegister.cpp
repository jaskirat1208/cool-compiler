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