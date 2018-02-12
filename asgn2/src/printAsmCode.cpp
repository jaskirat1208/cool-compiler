void printAssemblyCode() {
	ifstream infile("asmOut/result.s");
	string line;
	while(getline(infile, line)) {
		cout << line << "\n";
	}
}