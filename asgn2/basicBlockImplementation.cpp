#include <iostream>
#include <bits/stdc++.h>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;


class Instruction3AC {
	public:
		int lineNo;
		string instrType;
		string in1;
		string in2;
		string dest;
		string target;
		string op;
};

class SymbolTableEntry {
	public:
		int *position;
		string type;		
};

// taken from textbook page-112 section 2.7
/*class Env{
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
};*/


//all instructions
Instruction3AC instructions[100];
int noOfInstructions = 0;

void loadData(){
	ifstream infile("irSet.txt");
	string line;

	while(getline(infile,line)){
		stringstream linestream(line);

		string lineNo = "NIL", op = "NIl",type = "NIL";
		string dest = "NIL", in1 = "NIL", in2 = "NIL", target = "NIL";

		
		getline(linestream,lineNo,',');	
		getline(linestream,type,',');

		if (type=="="){
			type = "assignment";
			op = "=";
			getline(linestream,dest,',');
			getline(linestream,in1,',');
		} else if (type=="+" || type=="-" || type=="*" || type=="/"){
			op = type;
			type = "arithmetic";
			getline(linestream,dest,',');
			getline(linestream,in1,',');
			getline(linestream,in2,',');			
		} else if (type=="ifgoto"){
			type = "conditional";
			getline(linestream,op,',');
			getline(linestream,in1,',');
			getline(linestream,in2,',');
			getline(linestream,target,',');
		} else if (type=="goto"){
			type = "unconditional";
			getline(linestream,target,',');
		} else if (type=="call"){
			getline(linestream,target,',');
		} else if (type=="label"){
			getline(linestream,dest,',');
		} else if (type=="print"){
			getline(linestream,in1,',');
		} else if (type=="ret"){

		}
		stringstream ss(lineNo);
	    int num = 0;
	    ss >> num;	
		instructions[noOfInstructions].lineNo = num;
		instructions[noOfInstructions].instrType = type;
		instructions[noOfInstructions].op = op;
		instructions[noOfInstructions].in1 = in1;
		instructions[noOfInstructions].in2 = in2;
		instructions[noOfInstructions].dest = dest;
		instructions[noOfInstructions].target = target;

		noOfInstructions++;

		cout << "lineNo = "<< lineNo << " type = " << type << " op = " << op << "\n";
		cout << "dest = " << dest << " in1 = "<< in1 << " in2 = " << in2 << " target = "<< target << "\n";
	}
}
int getTagetLabelLocation(string targetLabel){
	int i;
	for(i=0;i<noOfInstructions;i++){
		if(instructions[i].instrType == "label"){
			if(instructions[i].dest == targetLabel){
				return instructions[i].lineNo;
			}
		}	
	}
	return -1;
}

int main(){
	loadData();
	int n = noOfInstructions;
	int i;
	// algo for leaders from textbook pageNo-549 section 8.4.1 Basic Blocks
	set<int> leaders;
	leaders.insert(1);// first instruction always a leader

	// assuming lines have numbers 1-indexed

	for(i=1;i<n;i++){
		if(instructions[i].instrType=="unconditional"){
			cout << "lineNo = " << i+1 << "\n";
			int t1 = getTagetLabelLocation(instructions[i].target);
			leaders.insert(t1);
			leaders.insert(i+2);
			cout << "made leaders = " << t1 << ", " << i+2 << "\n";
		}
		if(instructions[i].instrType=="conditional"){
			stringstream ss(instructions[i].target);
		    int num = 0;
		    ss >> num;
		    cout << "lineNo = " << i+1 << "\n";
			leaders.insert(num);
			leaders.insert(i+2);
			cout << "made leaders = " << num << ", " << i+2 << "\n";
		}
		if(instructions[i].instrType=="call"){
			cout << "lineNo = " << i+1 << "\n";
			int t1 = getTagetLabelLocation(instructions[i].target);
			leaders.insert(t1);
			cout << "made leader = " << t1 << "\n";
		}
	}

	set<int>::iterator itr = leaders.begin();
	cout << "All leaders are:\n";
	for(itr = leaders.begin(); itr != leaders.end(); ++itr){
		cout << (*itr) << " ";
	}
	cout << "\n";
	cout << "noOfInstructions = " << noOfInstructions << "\n";

	map<string, SymbolTableEntry> symbolTable;
	
	return 0;
}