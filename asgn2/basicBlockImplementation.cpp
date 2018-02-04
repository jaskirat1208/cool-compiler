#include <iostream>
#include <bits/stdc++.h>

using namespace std;


class Instruction3AC {
	public:
		string instrType;
		int *in1;
		int *in2;
		int *out;
		int target;
		string op;
};

class SymbolTableEntry {
	public:
		int *position;
		string type;		
};

// taken from textbook page-112 section 2.7
class Env{
	public:
		// string is used for storing lexeme
		// each lexeme has certain data associated which goes in its value
		map<string, SymbolTableEntry> symbolTable;
		Env *prev;

		Env(Env *prevTable){
			prev = prevTable;
		}

		void insertLexeme(string lexeme, SymbolTableEntry values){
			symbolTable.insert(std::pair<string, SymbolTableEntry>(lexeme, values));
		}

		SymbolTableEntry findLexeme(string lexeme){
			SymbolTableEntry entry;

			map<string, SymbolTableEntry>::iterator itr = symbolTable.find(lexeme);
			if(itr==symbolTable.end()){
				// not found here
				while(prev!=NULL){
					// trace back
				}
			} else {
				// found 
				entry = itr->second;
				return entry;
			}
		}
};

int main(){
	
	int n,i;
	//all instructions
	Instruction3AC instructions[n];
	// algo for leaders from textbook pageNo-549 section 8.4.1 Basic Blocks
	set<int> leaders;
	leaders.insert(1);// first instruction always a leader

	// assuming lines have numbers 1-indexed

	for(i=1;i<n;i++){
		if(instructions[i].instrType=="conditional"
			|| instructions[i].instrType=="unconditional"){
			leaders.insert(i+1);
			leaders.insert(instructions[i].target);
			leaders.insert(i+2);
		}
	}

	set<int>::iterator itr = leaders.begin();
	cout << "All leaders are:\n";
	for(itr = leaders.begin(); itr != leaders.end(); ++itr){
		cout << (*itr) << " ";
	}
	cout << "\n";
	return 0;
}