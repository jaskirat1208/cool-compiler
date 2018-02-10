#include <iostream>
#include "global.h"


using namespace std;

int main(){
	RegisterDescriptor registerDescriptor = RegisterDescriptor();
	Register r = registerDescriptor.findEmptyRegister(); 		//finds an empty register
	SymbolTableEntry s1;
	registerDescriptor.modify(r,&s1);
	cout<<registerDescriptor.findEmptyRegister();
	return 0;

}

