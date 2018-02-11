// The following method finds the target label of the statements such as :
// Procedure, ConditionalJump, UnconditionalJump
int getTargetLabelLocation(SymbolTableEntry* label) {
	for(int i = 0; i < noOfInstructions; i++) {
		if(instructions[i].type == InstrLabel) {
			if(instructions[i].dest == label) {
				return instructions[i].lineNo;
			}
		}
	}
	return -1;
}

// The following method finds and returns the set of all leaders in the program
void findLeaders() {
	// first instruction is always a leader
	leaders.insert(1);

	for (int i = 0; i < noOfInstructions; i++) {
		// if instruction type is Jump (Conditional or Unconditional)
		if(instructions[i].type == UnconditionalJump || instructions[i].type == ConditionalJump) {
			int t1 = getTargetLabelLocation(instructions[i].dest);
			if (t1 != -1) {
				leaders.insert(t1);
			}
			if (i+2 <= noOfInstructions) {
				leaders.insert(i+2);
			}
		}
		// if instruction type is procedure
		if (instructions[i].type == Procedure) {
			int t1 = getTargetLabelLocation(instructions[i].dest);
			if (t1 != -1) {
				leaders.insert(t1);
			}
			if (i+2 <= noOfInstructions) {
				leaders.insert(i+2);
			}
		}
		// if instruction type is Return
		if (instructions[i].type == Return) {
			if (i+2 <= noOfInstructions) {
				leaders.insert(i+2);
			}
		}

	}

}

// The following functions finds the basic block number to which the given line
// belongs.
int findBlock(int lineNo) {
	int totalInstructions = 0;
	for (int i = 0; i < noOfBasicBlocks; i++) {
		totalInstructions += basicBlocks[i].numInstructions;
		if (lineNo <= totalInstructions) {
			return i;
		}
	}
	return -1;
}

// The following method assigns the instructions to the corresponding basic
// blocks using the knowledge of leaders in the program.
void assignBasicBlocks() {
	set<int>::iterator itr = leaders.begin(), itr1 = ++leaders.begin();
	for (int i = 0; i < noOfBasicBlocks && itr != leaders.end(); i++, ++itr, ++itr1) {
		basicBlocks[i].instructions = instructions + (*itr) - 1;
		basicBlocks[i].labelBB = i;
		if (i < noOfBasicBlocks-1) {
			basicBlocks[i].numInstructions = *itr1 - *itr;
		} else {
			basicBlocks[i].numInstructions = noOfInstructions + 1 - *itr;
		}
	}
	for (int i = 0; i < noOfBasicBlocks; i++) {
		Instruction3AC* currentBB = basicBlocks[i].instructions;
		int lenCurrentBB = basicBlocks[i].numInstructions;
		Instruction3AC lastInstruction = currentBB[lenCurrentBB-1];
		if (lastInstruction.type == Procedure ||
			lastInstruction.type == ConditionalJump ||
			lastInstruction.type == UnconditionalJump) {
			int targetLineNo = getTargetLabelLocation(lastInstruction.dest);
			int targetBlockNo = findBlock(targetLineNo);
			basicBlocks[i].targetLabelBB = targetBlockNo;
		}
	}
}

// The following method assigns liveliness and next use of symbols in each
// instruction of the basic blocks.
void assignIsLiveAndNextUseEachBB() {
	for (int i = 0; i < noOfBasicBlocks; i++) {
		Instruction3AC* currentBB = basicBlocks[i].instructions;
		int lenCurrentBB = basicBlocks[i].numInstructions;
		symbolTable.initIsLiveAndNextUse();
		for (int j = lenCurrentBB-1; j >= 0; j--) {
			if (currentBB[j].in1->type == VarInt) {
				currentBB[j].in1IsLive = currentBB[j].in1->isLive;
				currentBB[j].in1NextUse = currentBB[j].in1->nextUse;
				// updations
				currentBB[j].in1->isLive = true;
				currentBB[j].in1->nextUse = j;
			}
			if (currentBB[j].in2->type == VarInt) {
				currentBB[j].in2IsLive = currentBB[j].in2->isLive;
				currentBB[j].in2NextUse = currentBB[j].in2->nextUse;
				// updations
				currentBB[j].in2->isLive = true;
				currentBB[j].in2->nextUse = j;
			}
			if (currentBB[j].dest->type == VarInt) {
				currentBB[j].destIsLive = currentBB[j].dest->isLive;
				currentBB[j].destNextUse = currentBB[j].dest->nextUse;
				// updations
				currentBB[j].dest->isLive = false;
				currentBB[j].dest->nextUse = -1;
			}

		}
	}
}
