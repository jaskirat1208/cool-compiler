%{
#include <iostream>
#include <math.h>
#include <set>
#include <string>
using namespace std;
%}

				int numInteger = 0, numIdentifier = 0, numType = 0;
				int numOpAsgn = 0, numOpArithmetic = 0, numOpRelational = 0;
				int numBlockBegin = 0, numBlockEnd = 0;
				int numParanOpen = 0, numParanClose = 0;
				int numArrayOpen = 0, numArrayClose = 0;
				int numKeyword = 0;
				set<string> s_identifiers ;

DIGIT			[0-9]
INTEGER			{DIGIT}+
KEYWORD 		(package|import|class|interface|inherits|implements|return|new|break|continue|isvoid|not|case|of|esac|while|loop|pool|do|for|if|then|else|fi|let|in|true|false)
IDENTIFIER		[a-z][a-zA-Z0-9_]*
TYPE			[A-Z][a-zA-Z0-9_]*
OP_ASGN 		"<-"
BLOCK_BEGIN 	"{"
BLOCK_END 		"}"
COLON			":"
STMT_TERMINATOR ";"
PARAN_OPEN		"("
PARAN_CLOSE		")"
ARRAY_OPEN		"["
ARRAY_CLOSE 	"]"
OP_ARITHMETIC_U	"~"
OP_ARITHMETIC_B	[+-/*]
OP_RELATIONAL	(<|<=|=|>=|>)

%%
{INTEGER}		{
					printf("[INTEGER : %s] (%d)\n", yytext, atoi(yytext));
					++numInteger;
				}
{KEYWORD} 		{
					printf("[KEYWORD: %s]\n", yytext);
					++numKeyword;
				}
{IDENTIFIER}	{
					printf("[IDENTIFIER: %s]\n", yytext);
					++numIdentifier;
					s_identifiers.insert(yytext);
				}
{TYPE}			{
					printf("[TYPE: %s]\n", yytext);
					++numType;
				}
{BLOCK_BEGIN}	{
					printf("BLOCK_BEGIN\n");
					++numBlockBegin;
				}
{BLOCK_END}		{
					printf("BLOCK_END\n");
					++numBlockEnd;
				}
{COLON}			{
					printf("COLON\n");
				}
{STMT_TERMINATOR}	{
					printf("STMT_TERMINATOR\n");
				}
{PARAN_OPEN}	{
					printf("PARAN_OPEN\n");
					++numParanOpen;
}
{PARAN_CLOSE}	{
					printf("PARAN_CLOSE\n");
					++numParanClose;
}
{ARRAY_OPEN}	{
					printf("ARRAY_OPEN\n");
					++numArrayOpen;
}
{ARRAY_CLOSE}	{
					printf("ARRAY_CLOSE\n");
					++numArrayClose;
}
{OP_ASGN}		{
					printf("[OP_ASGN: %s]\n", yytext);
					++numOpAsgn;
				}
{OP_ARITHMETIC_U}	{
					printf("[OP_ARITHMETIC_U: %s]\n", yytext);
					++numOpArithmetic;
				}
{OP_ARITHMETIC_B}	{
					printf("[OP_ARITHMETIC_B: %s]\n", yytext);
					++numOpArithmetic;
				}
{OP_RELATIONAL}	{
					printf("[OP_RELATIONAL: %s]\n", yytext);
					++numOpRelational;
				}
[ \t\n]+		/* eat up white spaces */
.				printf("This one is Unrecognized character: %s\n", yytext);

%%
int main(int argc, char **argv)
{
	++argv, --argc;
	if (argc > 0)
		yyin = fopen(argv[0], "r");
	else
		yyin = stdin;
	yylex();
	printf("\n# of INTEGERs: %d\n", numInteger);
	printf("# of KEYWORD: %d\n", numKeyword);
	cout<<"# of IDENTIFIER: "<<s_identifiers.size()<<endl;
	printf("# of TYPEs: %d\n", numType);
	printf("# of BLOCK_BEGINs: %d\n", numBlockBegin);
	printf("# of BLOCK_ENDs: %d\n", numBlockEnd);
	printf("# of PARAN_OPENs: %d\n", numParanOpen);
	printf("# of PARAN_CLOSEs: %d\n", numParanClose);
	printf("# of ARRAY_OPENs: %d\n", numArrayOpen);
	printf("# of ARRAY_CLOSEs: %d\n", numArrayClose);
	printf("# of OP_ASGNs: %d\n", numOpAsgn);
	printf("# of OP_RELATIONALs: %d\n", numOpRelational);
	printf("# of OP_ARITHMETICs: %d\n", numOpArithmetic);
	return 0;
}
