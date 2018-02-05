#include <iostream>
#include <bits/stdc++.h>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main(){
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
		} else if (type=="call"){
			type = "unconditional";
			getline(linestream,dest,',');
		} else if (type=="label"){
			getline(linestream,dest,',');
		} else if (type=="print"){
			getline(linestream,in1,',');
		} else if (type=="ret"){

		}
		cout << "lineNo = "<< lineNo << " type = " << type << " op = " << op << "\n";
		cout << "in1 = "<< in1 << " in2 = " << in2 << " dest = " << dest << " target = "<< target << "\n";
	}
}