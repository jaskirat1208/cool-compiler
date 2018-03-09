
COMPILE:
	bison calc.y -d
	flex calc.l
	g++ calc.tab.c lex.yy.c  -o calculator


CLEAN:
	rm -rf *.c *.h calculator
