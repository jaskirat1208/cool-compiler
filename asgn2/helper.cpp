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
		case RDX : return "%RDX";
		case RSI : return "%RSI";
		case RDI : return "%RDI";
		case RBP : return "%RBP";
		case RSP : return "%RSP";
		case R8 : return "%R8";
		case R9 : return "%R9";
		case R10 : return "%R10";
		case R11 : return "%R11";
		case R12 : return "%R12";
		case R13 : return "%R13";
		case R14 : return "%R14";
		case R15 : return "%R15";
	}
	return "";
}
void printRegisterDescriptorTable(){
	cout<<"RAX: "<<registerDescriptor.lookup(RAX)->address.mem<<endl;
	cout<<"RBX: "<<registerDescriptor.lookup(RBX)->address.mem<<endl;
	cout<<"RCX: "<<registerDescriptor.lookup(RCX)->address.mem<<endl;
	cout<<"RDX: "<<registerDescriptor.lookup(RDX)->address.mem<<endl;
	cout<<"RSI: "<<registerDescriptor.lookup(RSI)->address.mem<<endl;
	cout<<"RDI: "<<registerDescriptor.lookup(RDI)->address.mem<<endl;
	cout<<"RBP: "<<registerDescriptor.lookup(RBP)->address.mem<<endl;
	cout<<"RSP: "<<registerDescriptor.lookup(RSP)->address.mem<<endl;
	cout<<"R8: "<<registerDescriptor.lookup(R8)->address.mem<<endl;
	cout<<"R9: "<<registerDescriptor.lookup(R9)->address.mem<<endl;
	cout<<"R10: "<<registerDescriptor.lookup(R10)->address.mem<<endl;
	cout<<"R11: "<<registerDescriptor.lookup(R11)->address.mem<<endl;
	cout<<"R12: "<<registerDescriptor.lookup(R12)->address.mem<<endl;
	cout<<"R13: "<<registerDescriptor.lookup(R13)->address.mem<<endl;
	cout<<"R14: "<<registerDescriptor.lookup(R14)->address.mem<<endl;
	cout<<"R15: "<<registerDescriptor.lookup(R15)->address.mem<<endl;
}
