void loadData(char* argv) {
	ifstream infile(argv);
	string line;

	while(getline(infile, line)) {
		stringstream linestream(line);

		string lineNo = "NIL", typeStr = "NIL", destStr = "NIL",
						in1Str = "NIL", in2Str = "NIL";
		InstrType type;
		Operator op;
		SymbolTableEntry *in1, *in2, *dest;
		in1 = (SymbolTableEntry*)calloc(1, sizeof(SymbolTableEntry));
		in2 = (SymbolTableEntry*)calloc(1, sizeof(SymbolTableEntry));
		dest = (SymbolTableEntry*)calloc(1, sizeof(SymbolTableEntry));

		getline(linestream, lineNo, ',');
		if (lineNo=="")
		{
			continue;
		}
		getline(linestream, typeStr, ',');

		if (typeStr == "=") {
			type = Copy;
			op = typeStr;
			getline(linestream, destStr, ',');
			if (destStr == "array")
			{
				getline(linestream, destStr, ',');
				if (symbolTable.lookup(destStr) == NULL) {
					symbolTable.insert(destStr, dest);
					dest->type = Array;
				} else {
					dest = symbolTable.lookup(destStr);
				}
				string aux;
				getline(linestream, aux, ',');	//DISCARD THE SIZE BYTE
				getline(linestream, aux);
				dest->auxValues = aux;
				continue;
			}
			

			if (destStr == "arrRead" || destStr == "arrWrite")
			{
				if (destStr =="arrRead")
				{
					type = ArrRead;
					getline(linestream, destStr, ',');
					if (symbolTable.lookup(destStr) == NULL)
					{
						symbolTable.insert(destStr,dest);
						dest->type = VarInt;
					} else {
						dest = symbolTable.lookup(destStr);
					}						
					getline(linestream, in1Str, ',');
					in1 = symbolTable.lookup(in1Str);
					getline(linestream, in2Str, ',');		//offset
					if (symbolTable.lookup(in2Str) == NULL) {
						symbolTable.insert(in2Str, in2);
						if (isNum(in2Str[0])) {
							in2->type = ConstInt;
							in2->value = stoi(in2Str);
						} else {
							in2->type = VarInt;
						}
					} else {
						in2 = symbolTable.lookup(in2Str);
					}
					
				}
				else if (destStr == "arrWrite")
				{
					type = ArrWrite;
					getline(linestream, destStr, ',');

					dest = symbolTable.lookup(destStr);

					string offset;
					getline(linestream,offset,',');
					
					if (symbolTable.lookup(offset) == NULL) {
						symbolTable.insert(offset, in2);
						if (isNum(offset[0])) {
							in2->type = ConstInt;
							in2->value = stoi(offset);
						} else {
							in2->type = VarInt;
						}
					} else {
						in2 = symbolTable.lookup(offset);
					}
					getline(linestream, in1Str, ',');

					if (symbolTable.lookup(in1Str) == NULL) {
						symbolTable.insert(in1Str, in1);
						if (isNum(in1Str[0])) {
							in1->type = ConstInt;
							in1->value = stoi(in1Str);
						} else {
							in1->type = VarInt;
						}
					} else {
						in1 = symbolTable.lookup(in1Str);
					}
				}
				instructions[noOfInstructions].lineNo = noOfInstructions+1;
				instructions[noOfInstructions].type = type;
				instructions[noOfInstructions].op = op;
				instructions[noOfInstructions].in1 = in1;
				instructions[noOfInstructions].in2 = in2;
				instructions[noOfInstructions].dest = dest;
				noOfInstructions++;
				continue;
			}
            else if (symbolTable.lookup(destStr) == NULL) {
				symbolTable.insert(destStr, dest);
				dest->type = VarInt;
			} else {
				dest = symbolTable.lookup(destStr);
			}

			getline(linestream, in1Str, ',');
			if (symbolTable.lookup(in1Str) == NULL) {
				symbolTable.insert(in1Str, in1);
				if (isNum(in1Str[0])) {
					in1->type = ConstInt;
					in1->value = stoi(in1Str);
				} else {
					in1->type = VarInt;
				}
			} else {
				in1 = symbolTable.lookup(in1Str);
			}
		} else if (typeStr == "+" || typeStr == "-" || typeStr == "*" ||
				   typeStr == "/" || typeStr == "%") {
			type = AssignBinaryOp;
			op = typeStr;

			getline(linestream, destStr, ',');
			if (symbolTable.lookup(destStr) == NULL) {
				symbolTable.insert(destStr, dest);
				dest->type = VarInt;
			} else {
				dest = symbolTable.lookup(destStr);
			}

			getline(linestream, in1Str, ',');
			getline(linestream, in2Str, ',');

			// takes care of the unary operations
			if (in2Str == "NIL" && typeStr == "-") {
				in2Str = in1Str;
				in1Str = "0";
			}

			if (symbolTable.lookup(in1Str) == NULL) {
				symbolTable.insert(in1Str, in1);
				if (isNum(in1Str[0])) {
					in1->type = ConstInt;
					in1->value = stoi(in1Str);
				} else {
					in1->type = VarInt;
				}
			} else {
				in1 = symbolTable.lookup(in1Str);
			}
			if (symbolTable.lookup(in2Str) == NULL) {
				symbolTable.insert(in2Str, in2);
				if (isNum(in2Str[0])) {
					in2->type = ConstInt;
					in2->value = stoi(in2Str);
				} else {
					in2->type = VarInt;
				}
			} else {
				in2 = symbolTable.lookup(in2Str);
			}
		} else if (typeStr == "ifgoto") {
			type = ConditionalJump;

			getline(linestream, op, ',');

			getline(linestream, in1Str, ',');
			if (symbolTable.lookup(in1Str) == NULL) {
				symbolTable.insert(in1Str, in1);
				if (isNum(in1Str[0])) {
					in1->type = ConstInt;
					in1->value = stoi(in1Str);
				} else {
					in1->type = VarInt;
				}
			} else {
				in1 = symbolTable.lookup(in1Str);
			}

			getline(linestream, in2Str, ',');
			if (symbolTable.lookup(in2Str) == NULL) {
				symbolTable.insert(in2Str, in2);
				if (isNum(in2Str[0])) {
					in2->type = ConstInt;
					in2->value = stoi(in2Str);
				} else {
					in2->type = VarInt;
				}
			} else {
				in2 = symbolTable.lookup(in2Str);
			}

			getline(linestream, destStr, ',');
			if (symbolTable.lookup(destStr) == NULL) {
				symbolTable.insert(destStr, dest);
				dest->type = VarLabel;
			} else {
				dest = symbolTable.lookup(destStr);
			}
		} else if (typeStr == "goto") {
			type = UnconditionalJump;

			getline(linestream, destStr, ',');
			if (symbolTable.lookup(destStr) == NULL) {
				symbolTable.insert(destStr, dest);
				dest->type = VarLabel;
			} else {
				dest = symbolTable.lookup(destStr);
			}
		} else if (typeStr == "call") {
			type = Procedure;
			string destVar;
			getline(linestream, destStr, ',');
			getline(linestream,destVar);
			cout << destVar << endl;
			if (symbolTable.lookup(destVar) == NULL)
			{
				// SymbolTableEntry* tmp_dest = (SymbolTableEntry*)calloc(1,sizeof(SymbolTableEntry));
				symbolTable.insert(destVar,in2);
				in2->type = VarInt;
			} else {
				in2 = symbolTable.lookup(destVar); 
			}

			// cout<<destStr<<endl;
			if (symbolTable.lookup(destStr) == NULL) {
				symbolTable.insert(destStr, dest);
				dest->type = VarLabel;
			} else {
				dest = symbolTable.lookup(destStr);
			}
		} else if (typeStr == "param")
		{
			type = ParamPass;
			string sourceVar;
			string destVar;
			getline(linestream, destVar, ',');
			getline(linestream, sourceVar, ',');
			if (symbolTable.lookup((destVar))==NULL)
			{
				symbolTable.insert(destVar,dest);
			} else {
				dest = symbolTable.lookup(destVar);
			}
			if (symbolTable.lookup(sourceVar) == NULL) {
				symbolTable.insert(sourceVar, in1);
				if (isNum(sourceVar[0])) {
					in1->type = ConstInt;
					in1->value = stoi(sourceVar);
				} else {
					in1->type = VarInt;
				}
			} else {
				in1 = symbolTable.lookup(sourceVar);
			}
			SymbolTableEntry* tmp_dest = (SymbolTableEntry*)calloc(1, sizeof(SymbolTableEntry)); 
			
			symbolTable.insert("PREV"+destVar,tmp_dest);
			tmp_dest->type = VarInt;
		} 
		else if (typeStr == "label") {
			type = InstrLabel;

			getline(linestream, destStr, ',');
			if (symbolTable.lookup(destStr) == NULL) {
				symbolTable.insert(destStr, dest);
				dest->type = VarLabel;
			} else {
				dest = symbolTable.lookup(destStr);
			}
		} else if (typeStr == "scan") {
			type = Scan;
			op = typeStr;

			getline(linestream, destStr, ',');
			if (symbolTable.lookup(destStr) == NULL) {
				symbolTable.insert(destStr, dest);
				dest->type = VarInt;
			} else {
				dest = symbolTable.lookup(destStr);
			}
		} else if (typeStr == "print") {
			type = Print;
			op = typeStr;

			getline(linestream, in1Str, ',');
			if (symbolTable.lookup(in1Str) == NULL) {
				symbolTable.insert(in1Str, in1);
				if (isNum(in1Str[0])) {
					in1->type = ConstInt;
					in1->value = stoi(in1Str);
				} else {
					in1->type = VarInt;
				}
			} else {
				in1 = symbolTable.lookup(in1Str);
			}
		} else if (typeStr == "ret") {
			type = Return;
			op = typeStr;
		}

		instructions[noOfInstructions].lineNo = noOfInstructions+1;
		instructions[noOfInstructions].type = type;
		instructions[noOfInstructions].op = op;
		instructions[noOfInstructions].in1 = in1;
		instructions[noOfInstructions].in2 = in2;
		instructions[noOfInstructions].dest = dest;

		noOfInstructions++;
	}
}
