void loadData() {
	ifstream infile("irSet.txt");
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
		getline(linestream, typeStr, ',');

		if (typeStr == "=") {
			type = Copy;
			op = typeStr;

			getline(linestream, destStr, ',');
			if (symbolTable.lookup(destStr) == NULL) {
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
		// } else if (typeStr == "get") {
		// 	type = IndexedCopyGet;
		// 	op = typeStr;

		// 	getline(linestream, destStr, ',');
		// 	if (symbolTable.lookup(destStr) == NULL) {
		// 		symbolTable.insert(destStr, dest);
		// 		dest->type = VarInt;
		// 	} else {
		// 		dest = symbolTable.lookup(destStr);
		// 	}

		// 	getline(linestream, in1Str, ',');
		// 	if (symbolTable.lookup(in1Str) == NULL) {
		// 		symbolTable.insert(in1Str, in1);
		// 		in1->type = VarArrInt;
		// 	} else {
		// 		in1 = symbolTable.lookup(in1Str);
		// 	}

		// 	getline(linestream, in2Str, ',');
		// 	if (symbolTable.lookup(in2Str) == NULL) {
		// 		symbolTable.insert(in2Str, in2);
		// 		if (isNum(in2Str[0])) {
		// 			in2->type = ConstInt;
		// 			in2->value = stoi(in2Str);
		// 		} else {
		// 			in2->type = VarInt;
		// 		}
		// 	} else {
		// 		in2 = symbolTable.lookup(in2Str);
		// 	}
		// } else if (typeStr == "put") {
		// 	type = IndexedCopyPut;
		// 	op = typeStr;

		// 	getline(linestream, destStr, ',');
		// 	if (symbolTable.lookup(destStr) == NULL) {
		// 		symbolTable.insert(destStr, dest);
		// 		dest->type = VarArrInt;
		// 	} else {
		// 		dest = symbolTable.lookup(destStr);
		// 	}

		// 	getline(linestream, in1Str, ',');
		// 	if (symbolTable.lookup(in1Str) == NULL) {
		// 		symbolTable.insert(in1Str, in1);
		// 		if (isNum(in1Str[0])) {
		// 			in1->type = ConstInt;
		// 		} else {
		// 			in1->type = VarInt;
		// 		}
		// 	} else {
		// 		in1 = symbolTable.lookup(in1Str);
		// 	}

		// 	getline(linestream, in2Str, ',');
		// 	if (symbolTable.lookup(in2Str) == NULL) {
		// 		symbolTable.insert(in2Str, in2);
		// 		in2->type = VarInt;
		// 	} else {
		// 		in2 = symbolTable.lookup(in2Str);
		// 	}
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

		// stringstream ss(lineNo);
	 //    int num = 0;
	 //    ss >> num;
		instructions[noOfInstructions].lineNo = noOfInstructions+1;
		instructions[noOfInstructions].type = type;
		instructions[noOfInstructions].op = op;
		instructions[noOfInstructions].in1 = in1;
		instructions[noOfInstructions].in2 = in2;
		instructions[noOfInstructions].dest = dest;

		noOfInstructions++;

		cout << "lineNo : " << lineNo << ", type : " << typeStr << ", op : " << op << endl;
		cout << "dest : " << destStr << ", in1 : " << in1Str << ", in2 : " << in2Str << endl << endl;
	}
}