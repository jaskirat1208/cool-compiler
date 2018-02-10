#include "global.h"

void allocate_register(Instruction3AC* instr) {
	// x = y op z
	if (instr->in1->type==ConstInt)			//y is a constant
	{
		cout<<"Case 1 occuring. Register allocated: ";
		Register r = registerDescriptor.findEmptyRegister();
		if(r==NoReg){
			cout<<"No vacant Register found. Selecting with farthest next use heuristic.";
		}
		else{
			registerDescriptor.modify(r,instr->dest);
			cout<<r<<endl;
		}
		/* Return an empty register */
	}
	else if (instr->in1NextUse==-1)		//if y is not used anymore
	{
		Register r = registerDescriptor.selectRegisterFor(instr->in1);
		if(r!=NoReg){
			registerDescriptor.modify(r,instr->dest);
		}
		else{
			cout<<"Register for y not found"<<endl;
			//TODO: do the same for z
		}

		// int regForY=-1;
		//x's register = y's register
	}
	else if (registerDescriptor.findEmptyRegister()!=NoReg)	//TODO::check_empty_register to be declared
	{
		Register r = registerDescriptor.findEmptyRegister();
		registerDescriptor.modify(r,instr->dest);
	}
	else if (registerDescriptor.findEmptyRegister()==NoReg)
	{
		Register r = registerDescriptor.getFarthestNextUseRegister();
	}
	//run the heuristic: if input is constant : allocate an empty register
	//else: if the input y is not used again, allocate the register of y for the input
	//else: if y is used again, allocate an empty register
	//else: if no empty register, swap the register whose corresponding variable has farthest next use
	//else: allocate a memory unit for x

}
