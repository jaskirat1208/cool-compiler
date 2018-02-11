#include "global.h"
#include "helper.cpp"
#include "generateCode.cpp"
#include "loadData.cpp"
#include "basicBlocks.cpp"

int main() {
	loadData();

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
