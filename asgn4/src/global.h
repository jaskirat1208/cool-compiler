int cntTemp = 1, cntLabel = 1;

class SymbolTableEntry {
	public:
		string type;
		bool isFeat;
		int paramCount;

		bool isArray;
		int arrayLength;
		vector<int>  arrayList;
		// SymbolTableEntry(string type1) {
		// 	type = type1;
		// }
};

class SymbolTable {
	private :
		unordered_map<string, SymbolTableEntry*> table;
	public :
		SymbolTable* prev;

		SymbolTable(SymbolTable* p) {
			prev = p;
		}

		void insert(string s, SymbolTableEntry* t) {
			table[s] = t;
		}

		SymbolTableEntry* lookup(string s) {
			for (SymbolTable* curr = this; curr != NULL; curr = curr->prev) {
				// cout << curr->table["a"];
				// cout << "anu " << j << " " << curr << " " << curr->prev << endl;

				unordered_map<string, SymbolTableEntry*>::iterator i = curr->table.find(s);
				if (i != curr->table.end()) {
					return i->second;
				}
			}
			return NULL;
		}

		void printSymbolTable() {
			for (SymbolTable* curr = this; curr != NULL; curr = curr->prev) {
				cout << curr << endl;
				vector<string> variableNames;
				unordered_map<string, SymbolTableEntry*>::iterator i = curr->table.begin();
				for (; i != curr->table.end(); ++i) {
					cout << i->first << " -=- " << i->second->type << "\n";
				}
				cout << "------------------------------------" << endl;
			}
		}
};

string newTemp() {
	stringstream ss;
	ss << cntTemp;
	string num = ss.str();
	string temp = "t" + num; 
	cntTemp++;
	return temp;
}

string newLabel() {
	stringstream ss;
	ss << cntLabel;
	string num = ss.str();
	string label = "t" + num; 
	cntLabel++;
	return label;
}

struct Node {
	string place;
	string type;
	vector<int> falselist;
	vector<int> truelist;
	vector<int> nextlist;
	vector<int> arrayList;
	int arrayLength;
	int paramCount;
};

struct Node *emptyNode = new Node();
// emptyNode->code = "";

// vector<int> envStack;
// envStack.push_back(1);
// SymbolTable currTable = SymbolTable(NULL);
// SymbolTable* symbolTable = &currTable;
// symbolTable = &headTable;
// envStack.push((SymbolTable*)symbolTable);

void printIrCode(vector<string> ircode) {
	cout << "1,call,main," << newTemp() << "\n"; 
	cout << "1,ret" << "\n";
	for (int i = 0; i < ircode.size(); i++) {
		// if (ircode[i] == "1,goto,")
		// 	continue;
		cout << ircode[i];
	}
}

string dictIeqToString(string input) {
	if (input == "<=")
		return "leq";
	if (input == "<")
		return "lt";
	if (input == ">=")
		return "geq";
	if (input == ">")
		return "gt";
}

vector<int> makelist(int init) {
	vector<int> temp;
	temp.push_back(init);
	return temp;
}

vector<string> backpatch(vector<int> list, int target, vector<string> ircode) {
	string label = "label" + to_string(target) + "\n";
	for (int i = 0; i < list.size(); i++) {
		// cout << "b" << ircode[list[i]] << "\n";
		ircode[list[i]].append(label);
		// cout << "1b" << ircode[list[i]] << "\n";
	}
	// cout << "c" << ircode[target];
	ircode[target] = "\n1,label," + label + ircode[target];
	// cout << "1c" << ircode[target] << "\n";
	// cout << "a" << label << "\n";
	return ircode;
}

vector<string> backpatchFeat(int target, string label, vector<string> ircode) {
	ircode[target] = "\n1,label," + label + "\n" + ircode[target];
	return ircode;
}

vector<int> merge(vector<int> list1, vector<int> list2) {
	for (int i = 0; i < list2.size(); i++) {
		list1.push_back(list2[i]);
	}
	return list1;
}