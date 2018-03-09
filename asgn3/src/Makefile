Compile:
	bison parse.y -d
	flex lex.l
	g++ -std=c++11 parse.tab.c lex.yy.c -o parse

Clean: 
	rm -r *.c *.h parse
