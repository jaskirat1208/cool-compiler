#include <iostream>
#include "allocateReg.cpp"

using namespace std;

int main(){
	registerDescriptor = RegisterDescriptor();
	SymbolTableEntry s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12,s13,s14,s15,s16;
	registerDescriptor.modify(RAX, &s1);
	registerDescriptor.modify(RBX, &s2);
	registerDescriptor.modify(RCX, &s3);
	registerDescriptor.modify(RDX, &s4);
	registerDescriptor.modify(RSI, &s5);
	registerDescriptor.modify(RDI, &s6);
	registerDescriptor.modify(RBP, &s7);
	registerDescriptor.modify(RSP, &s8);
	registerDescriptor.modify(R8, &s9);
	registerDescriptor.modify(R9, &s10);
	registerDescriptor.modify(R10,&s11);
	registerDescriptor.modify(R11,&s12);
	registerDescriptor.modify(R12,&s13);
	registerDescriptor.modify(R13,&s14);
	registerDescriptor.modify(R14,&s15);
	registerDescriptor.findEmptyRegister();
	//modify(R15,&s16);
	return 0;

}
