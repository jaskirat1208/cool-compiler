#include "global.h"

void allocateRegister(Instruction3AC* instr) {
	// x = y op z
	Register r;
	int done = 0;
	if (instr->in1->type!=ConstInt && instr->in1NextUse==-1) {
		r = registerDescriptor.selectRegisterFor(instr->in1);
		if(r!=NoReg){
			registerDescriptor.modify(r,instr->dest);
			done = 1;
		}
	}
	if (instr->in2->type!=ConstInt && instr->in2NextUse==-1 && done == 0) {
		r = registerDescriptor.selectRegisterFor(instr->in2);
		if(r!=NoReg){
			registerDescriptor.modify(r,instr->dest);
			done = 1;
		}
	}
	if (done==0) {
		r = registerDescriptor.findEmptyRegister();
		if(r==NoReg){
			cout<<"No vacant Register found. Selecting with farthest next use heuristic.";
			r = registerDescriptor.getFarthestNextUseRegister();
			registerDescriptor.modify(r,instr->dest);
		}
		else{
			registerDescriptor.modify(r,instr->dest);
		}
	}
}