bin/parse: src/parse.y src/lex.l
	bison src/parse.y -d
	flex src/lex.l
	mv parse.tab.c src/
	mv parse.tab.h src/
	mv lex.yy.c src/
	g++ -std=c++14 src/parse.tab.c src/lex.yy.c -o bin/parse

.PHONY: clean

clean: 
	rm src/parse.tab.* src/lex.yy.c bin/parse parser.html
