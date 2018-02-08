#include <iostream>
#include <bits/stdc++.h>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

// this is intel version (not the AT&T version)
// differs slightly only in naming conventions like mov->movl
// refer to this link http://www.imada.sdu.dk/Courses/DM18/Litteratur/IntelnATT.htm for details

int main(){
	ofstream myfile;
	myfile.open("result.txt");
	myfile << "extern\tprintf"
	myfile << "SECTION\t.data\n";
	// here we can add all variables from symbolTable

	myfile << "SECTION\t.text\n";
	myfile << ".globl main\n";
	myfile << "main:\n";

	// this is for printing integers
	myfile << "format:\n\tdb \"%d\", 10, 0\n";

	Instruction3AC instructions[100];
	int i;
	int noOfInstructions;
	for(i=0;i<noOfInstructions;i++){
		Instruction3AC ins = instructions[i];

		if (ins.type == Copy) {
			myfile << "\tmov " << getReg(ins.in1->address) << ", " << getReg(ins.dest->address) << "\n";
		} else if (ins.type == AssignBinaryOp) {
			if (ins.op == "+") {
				myfile << "\tmov " << getReg(ins.in1->address) << ", " << getReg(ins.dest->address) << "\n";
				myfile << "\tadd " << getReg(ins.in2->address) << ", " << getReg(ins.dest->address) << "\n";
			} else if (ins.op == "-") {
				myfile << "\tmov " << getReg(ins.in1->address) << ", " << getReg(ins.dest->address) << "\n";
				myfile << "\tsub " << getReg(ins.in2->address) << ", " << getReg(ins.dest->address) << "\n";
			} else if (ins.op == "*") {
				myfile << "\tmov " << getReg(ins.in1->address) << ", " << getReg(ins.dest->address) << "\n";
				myfile << "\timul " << getReg(ins.in2->address) << ", " << getReg(ins.dest->address) << "\n";
			} else if (ins.op == "/") {
				// this is trickier here 2 specific registers are always required
			}
		} else if (ins.type == ConditionalJump) {
			myfile << "\tcmp " << getReg(ins.in2->address) << ", " << getReg(ins.in1->address) << "\n";
			// in1-in2
			// handles only =, !=, >=, <, <=
			// dosen't handle >
			if (ins.op == "eq") {
				myfile << "\tje " << getReg(ins.dest->address) << "\n";
			} else if (ins.op == "neq") {
				myfile << "\tjne " << getReg(ins.dest->address) << "\n";
			} else if (ins.op == "ge") {
				myfile << "\tjge " << getReg(ins.dest->address) << "\n";
			} else if (ins.op == "lt") {
				myfile << "\tjl " << getReg(ins.dest->address) << "\n";
			} else if (ins.op == "lteq") {
				myfile << "\tjle " << getReg(ins.dest->address) << "\n";
			}
		} else if (ins.type == UnconditionalJump){
			myfile << "\tjmp " << getReg(ins.dest->address) << "\n";
		} else if (ins.type == Procedure){
			myfile << "\tcall " << getReg(ins.dest->address) << "\n";
		} else if (ins.type == InstrLabel){
			myfile << getReg(ins.dest->address) << ":\n";
		} else if (ins.type == Print){
			// print in x86
			myfile << "\tmov format, rdi\n";
			myfile << "\tmov " << getReg(ins.in1->address) <<", rsi\n";
			// ensure that rax is free
			myfile << "\txor rax, rax\n";
			myfile << "\tcall printf\n";
			myfile << "\tpop rcx\n";
			myfile << "\tpop rax\n"; 
		} else if (ins.type == Return){
			myfile << "\tret\n";
		} 
	}
	myfile << "\tret\n";
	myfile.close();
	return 0;
}