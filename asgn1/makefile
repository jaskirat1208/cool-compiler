bin/lexer: lex.yy.c
	g++ -o bin/lexer lex.yy.c -ll

lex.yy.c: src/lex.l
	flex src/lex.l

.PHONY: clean

clean:
	rm lex.yy.c bin/lexer
