bin/irgen: src/parser.y src/lex.l src/global.h src/print_pretty.cpp
	bison src/parser.y -d
	flex src/lex.l
	mv parser.tab.c src/
	mv parser.tab.h src/
	mv lex.yy.c src/
	g++ -std=c++14 src/parser.tab.c src/lex.yy.c -o bin/irgen

bin/codegen: src/mainDriver.cpp src/globalCodeGen.h src/helper.cpp src/allocateRegister.cpp src/generateCode.cpp src/loadData.cpp src/basicBlocks.cpp
	g++ -o bin/codegen src/mainDriver.cpp

.PHONY: clean

clean: 
	rm src/parser.tab.* src/lex.yy.c bin/irgen bin/codegen
