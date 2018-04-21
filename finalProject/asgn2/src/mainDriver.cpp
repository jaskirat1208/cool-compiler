#include "global.h"
#include "helper.cpp"
#include "allocateRegister.cpp"
#include "generateCode.cpp"
#include "loadData.cpp"
#include "basicBlocks.cpp"

int main(int argc, char** argv) {

	loadData(argv[1]);

	findLeaders();

	noOfBasicBlocks = leaders.size();

	assignBasicBlocks();

	assignIsLiveAndNextUseEachBB();

	generateCode();

	// printAssemblyCode();

	return 0;
}
