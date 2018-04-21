bool isNum(char a) {
	if (a >= 48 && a < 58) {
		return true;
	}
	return false;
}

void printSet(set<int> s) {
	set<int>::iterator itr = leaders.begin();
	for(itr = leaders.begin(); itr != leaders.end(); ++itr) {
		cout << (*itr) << " ";
	}
	cout << endl;
}

string reg2str(Register r) {
	switch (r) {
		case RAX : return "%RAX";
		case RBX : return "%RBX";
		case RCX : return "%RCX";
		case RSI : return "%RSI";
		case RDI : return "%RDI";
		case RDX : return "%RDX";
	}
	return "";
}

void printAssemblyCode() {
	ifstream infile("asmOut/result.s");
	string line;
	while(getline(infile, line)) {
		cout << line << "\n";
	}
}

void printRegisterDescriptorTable(){
	cout << "-----------------------------------------" << endl;
	if (registerDescriptor.lookup(RAX) != NULL) {
		cout << "RAX: " << registerDescriptor.lookup(RAX)->address.mem << endl;
	}
	if (registerDescriptor.lookup(RBX) != NULL) {
		cout << "RBX: " << registerDescriptor.lookup(RBX)->address.mem << endl;
	}
	if (registerDescriptor.lookup(RCX) != NULL) {
		cout << "RCX: " << registerDescriptor.lookup(RCX)->address.mem << endl;
	}
	if (registerDescriptor.lookup(RSI) != NULL) {
		cout << "RSI: " << registerDescriptor.lookup(RSI)->address.mem << endl;
	}
	if (registerDescriptor.lookup(RDI) != NULL) {
		cout << "RDI: " << registerDescriptor.lookup(RDI)->address.mem << endl;
	}
	if (registerDescriptor.lookup(RDX) != NULL) {
		cout << "RDX: " << registerDescriptor.lookup(RDX)->address.mem << endl;
	}
	cout << "-----------------------------------------" << endl;
}
