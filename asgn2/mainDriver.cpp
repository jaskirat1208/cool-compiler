#include "global.h"
#include "helper.cpp"
#include "allocateRegister.cpp"
#include "generateCode.cpp"
#include "loadData.cpp"
#include "basicBlocks.cpp"

int main(int argc, char *argv[]) {
	// ifstream infile("irSet.txt");
	loadData(argv[0]);

	findLeaders();

	cout << "All leaders are:\n";
	printSet(leaders);

	noOfBasicBlocks = leaders.size();

	assignBasicBlocks();

	assignIsLiveAndNextUseEachBB();

	generateCode();

	cout << "--------------------------" << endl;

	return 0;
}
