#include <iostream>
#include "allocateReg.cpp"

using namespace std;

int main(){
	RegisterDescriptor registerDescriptor1 = RegisterDescriptor();
	Register r = registerDescriptor1.findEmptyRegister(); 		//finds an empty register
	SymbolTableEntry s1;
	registerDescriptor1.modify(r,&s1);
	cout<<registerDescriptor1.findEmptyRegister();
	return 0;

}

