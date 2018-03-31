int cntTemp = 1, cntLabel = 1;

class SymbolTableEntry {
	public:
		string type;
		// SymbolTableEntry(string type1) {
		// 	type = type1;
		// }
};

class SymbolTable {
	private :
		unordered_map<string, SymbolTableEntry*> table;
	public :
		void insert(string s, SymbolTableEntry* t) {
			table[s] = t;
		}

		SymbolTableEntry* lookup(string s) {
			unordered_map<string, SymbolTableEntry*>::iterator i = table.find(s);
			if (i != table.end()) {
				return i->second;
			}
			return NULL;
		}

		void printTableInts() {
			vector<string> variableNames;
			unordered_map<string, SymbolTableEntry*>::iterator i = table.begin();
			for (; i != table.end(); ++i) {
				cout << i->first << " -=- " << i->second->type << "\n";
			}
		}
};

string newTemp(){
	stringstream ss;
	ss << cntTemp;
	string num = ss.str();
	string temp = "t" + num; 
	cntTemp++;
	return temp;
}

string newLabel(){
	stringstream ss;
	ss << cntLabel;
	string num = ss.str();
	string label = "t" + num; 
	cntLabel++;
	return label;
}

struct Node {
	string code;
	string place;
	string type;
};

struct Node *emptyNode = new Node();
// emptyNode->code = "";

SymbolTable symbolTable;
