void initializeRegisters(){
	for (int i = 0; i < 16; ++i)
	{
		registerDescriptor[i]==NULL;
	}
}
int checkEmptyRegister(){
	for (int i = 0; i < 16; ++i)
	{
		if (registerDescriptor[i]==NULL)
		{
			return i;
		}
	}
	return -1;
}
int getFarthestNextUse(){
	int max_next_use=-1;
	int max_next_use_index=-1;
	for (int i = 0; i < 16; ++i)
	{
		if(registerDescriptor[i]->nextUse > max_next_use){
			max_next_use = registerDescriptor[i]->nextUse;
			max_next_use_index = i;
		}
	}
	return max_next_use_index;
}
void allocate_register(Instruction3AC* instr) {
	int find_empty_reg;
	// x = y op z
	if (/*y is a constant*/1)
	{
		/* code */
	}
	else if (/*z is a constant*/1)
	{
		/* code */
	}
	else if (instr->in1NextUse==-1)		//if y is not used anymore
	{
		// int regForY=-1;
		//x's register = y's register
		for (int i = 0; i < 16; ++i)
		{
			if (registerDescriptor[i]==instr->in1)		//Register for y found
			{
				registerDescriptor[i]=instr->dest;		//Register for x assigned that of y
			}
		} 
	}
	else if ((find_empty_reg = checkEmptyRegister())!=-1)	//TODO::check_empty_register to be declared
	{
		registerDescriptor[find_empty_register] = instr->dest; 
	}
	else if (find_empty_reg == -1)
	{
		int i = getFarthestNextUse();
	}
	//run the heuristic: if input is constant : allocate an empty register
	//else: if the input y is not used again, allocate the register of y for the input
	//else: if y is used again, allocate an empty register
	//else: if no empty register, swap the register whose corresponding variable has farthest next use
	//else: allocate a memory unit for x

}
