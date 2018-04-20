bin/codegen: src/mainDriver.cpp src/global.h src/helper.cpp src/allocateRegister.cpp src/generateCode.cpp src/loadData.cpp src/basicBlocks.cpp
	g++ -std=c++11 -o bin/codegen src/mainDriver.cpp

.PHONY: clean

clean:
	rm bin/codegen
