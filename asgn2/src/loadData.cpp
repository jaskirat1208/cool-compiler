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
			cout<<destStr;
			if (destStr == "array")
			{
				string arrname;			// Array name is stored here
				getline(linestream, arrname, ',');
				cout<<arrname<<" to be inserted"<<endl;
				dest->type = Array;
                symbolTable.insert(arrname,dest);
                cout<<dest->address.mem<<" is the ";
				string aux;
				getline(linestream,aux,',');	//DISCARD THE SIZE BYTE
				getline(linestream,aux);
				dest->auxValues = aux;
				cout<<"aux_val: "<<dest->auxValues<<endl;
				symbolTable.printTableInts();
				// cout<<"OVER";
				continue;
			}
			

			if (destStr == "arrRead" || destStr == "arrWrite")
			{
				if (destStr =="arrRead")
				{
					type = ArrRead;
					getline(linestream, destStr, ',');		//address of the temporary where to read
					// cout<<destStr;	
					if (symbolTable.lookup(destStr) == NULL)
					{
						symbolTable.insert(destStr,dest);
						dest->type = VarInt;
					}						
					getline(linestream, destStr, ',');		//address of base of array
					if (symbolTable.lookup(destStr) == NULL)
					{
						cout<<"ERROR: COULD NOT FIND ENTRY"<<endl;
						break;
					}
					in1 = symbolTable.lookup(destStr);
					cout<<"\n"<<dest -> address.mem<<"\t"<<in1->address.mem<<endl;
					getline(linestream,destStr);		//offset
					cout<<destStr<<endl;
					if (symbolTable.lookup(destStr) == NULL) {
						symbolTable.insert(destStr, in2);
						if (isNum(destStr[0])) {
							in2->type = ConstInt;
							in2->value = stoi(destStr);
						} else {
							in2->type = VarInt;
						}
					} else {
						in2 = symbolTable.lookup(destStr);
					}
				
				}
				else if (destStr == "arrWrite")
				{
					type = ArrWrite;
					getline(linestream,destStr,',');
					string offset;
					getline(linestream,offset,',');
					
					in2->value = stoi(offset);			//in2 contains the offset to destination
					in2->type = ConstInt;
					symbolTable.insert(offset,in2);
					dest = symbolTable.lookup(destStr);
					string input;
					getline(linestream,input);
					in1 = symbolTable.lookup(input);
					if (in1 == NULL)
					{
						cout<<"ERROR: entry not found"<<endl;
						exit(0);
					}
				}
					// symbolTable.insert(destStr,in2);
				instructions[noOfInstructions].lineNo = noOfInstructions+1;
				instructions[noOfInstructions].type = type;
				instructions[noOfInstructions].op = op;
				instructions[noOfInstructions].in1 = in1;
				instructions[noOfInstructions].in2 = in2;
				instructions[noOfInstructions].dest = dest;
				noOfInstructions++;
				continue;
				// cout<<destStr<<endl;
			}
            else if (symbolTable.lookup(destStr) == NULL) {
				symbolTable.insert(destStr, dest);
				dest->type = VarInt;
			} else {
				dest = symbolTable.lookup(destStr);
			}

			getline(linestream, in1Str, ',');
			// cout<<in1Str<<endl;
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

			getline(linestream, destStr, ',');
			if (symbolTable.lookup(destStr) == NULL) {
				symbolTable.insert(destStr, dest);
				dest->type = VarLabel;
			} else {
				dest = symbolTable.lookup(destStr);
			}
		} else if (typeStr == "label") {
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
