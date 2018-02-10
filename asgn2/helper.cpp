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