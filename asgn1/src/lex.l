%{
#include <iostream>
#include <math.h>
#include <set>
#include <string>
using namespace std;
%}

				int numInteger = 0, numIdentifier = 0, numType = 0;
				int numOpAsgn = 0, numOpArithmetic = 0, numOpRelational = 0;
				int numColon = 0, numStmtTerminator = 0;
				int numBlockBegin = 0, numBlockEnd = 0;
				int numParanOpen = 0, numParanClose = 0;
				int numArrayOpen = 0, numArrayClose = 0;
				int numKeyword = 0;
				set<string> s_integer, s_identifiers, s_type;
				set<string> s_op_arithmetic, s_op_relational;
				set<string> s_keyword;

DIGIT			[0-9]
INTEGER			{DIGIT}+
KEYWORD 		(package|import|class|interface|inherits|implements|return|new|break|continue|isvoid|not|case|of|esac|while|loop|pool|do|for|if|then|else|fi|let|in|true|false)
IDENTIFIER		[a-z][a-zA-Z0-9_]*
TYPE			[A-Z][a-zA-Z0-9_]*
OP_ASGN 		"<-"
COLON			":"
STMT_TERMINATOR ";"
BLOCK_BEGIN 	"{"
BLOCK_END 		"}"
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
					s_integer.insert(yytext);
				}
{KEYWORD} 		{
					printf("[KEYWORD: %s]\n", yytext);
					++numKeyword;
					s_keyword.insert(yytext);
				}
{IDENTIFIER}	{
					printf("[IDENTIFIER: %s]\n", yytext);
					++numIdentifier;
					s_identifiers.insert(yytext);
				}
{TYPE}			{
					printf("[TYPE: %s]\n", yytext);
					++numType;
					s_type.insert(yytext);
				}
{COLON}			{
					printf("COLON\n");
					++numColon;
				}
{STMT_TERMINATOR}	{
					printf("STMT_TERMINATOR\n");
					++numStmtTerminator;
				}
{BLOCK_BEGIN}	{
					printf("BLOCK_BEGIN\n");
					++numBlockBegin;
				}
{BLOCK_END}		{
					printf("BLOCK_END\n");
					++numBlockEnd;
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
					s_op_arithmetic.insert(yytext);
				}
{OP_ARITHMETIC_B}	{
					printf("[OP_ARITHMETIC_B: %s]\n", yytext);
					++numOpArithmetic;
					s_op_arithmetic.insert(yytext);
				}
{OP_RELATIONAL}	{
					printf("[OP_RELATIONAL: %s]\n", yytext);
					++numOpRelational;
					s_op_relational.insert(yytext);
				}
(\")		printf("sdfjcscvbnvbbvcxcvbvcxcv: %s", yytext);
[ \t\n]+		/* eat up white spaces */
.				printf("This one is Unrecognized character: %s\n", yytext);

%%
void printset(set<string> myset){
	set<string>::iterator iter=myset.begin();
	if(myset.empty())	return;
	cout<<(*iter)<<" ";
	for(iter=myset.begin(); iter!=myset.end();++iter){
		if(iter!=myset.begin())
			cout<<endl<<"								"<<(*iter);
	}
}
int main(int argc, char **argv)
{
	++argv, --argc;
	if (argc > 0)
		yyin = fopen(argv[0], "r");
	else
		yyin = stdin;
	yylex();
	cout<<"TOKENS 					"<<"COUNT	"<<"		VALUE"<<endl;
	cout<<"--------------------------------------------------------------------------"<<endl;
	cout<<"INTEGERs: 				"<<s_integer.size()<<"			";
	printset(s_integer);
	cout<<endl;
	cout<<"KEYWORDs:				"<<s_keyword.size()<<"			";
	printset(s_keyword);
	cout<<endl;
	cout<<"IDENTIFIERs: 				"<<s_identifiers.size()<<"			";
	printset(s_identifiers);
	cout<<endl;
	cout<<"TYPEs: 					"<<s_type.size()<<"			";
	printset(s_type);
	cout<<endl;
	cout<<"COLONs: 				"<<numColon<<"			";
	cout<<":";
	cout<<endl;
	cout<<"STMT_TERMINATORs: 			"<<numStmtTerminator<<"			";
	cout<<";";
	cout<<endl;
	cout<<"BLOCK_BEGINs: 				"<<numBlockBegin<<"			";
	cout<<"{";
	cout<<endl;
	cout<<"BLOCK_ENDs: 				"<<numBlockEnd<<"			";
	cout<<"}";
	cout<<endl;
	cout<<"PARAN_OPENs: 				"<<numParanOpen<<"			";
	cout<<"(";
	cout<<endl;
	cout<<"PARAN_CLOSEs: 				"<<numParanClose<<"			";
	cout<<")";
	cout<<endl;
	cout<<"ARRAY_OPENs: 				"<<numArrayOpen<<"			";
	cout<<"[";
	cout<<endl;
	cout<<"ARRAY_CLOSEs: 				"<<numArrayClose<<"			";
	cout<<"]";
	cout<<endl;
	cout<<"OP_ASGNs: 				"<<numOpAsgn<<"			";
	cout<<"<-";
	cout<<endl;
	cout<<"OP_RELATIONALs: 			"<<s_op_relational.size()<<"			";
	printset(s_op_relational);
	cout<<endl;
	cout<<"OP_ARITHMETICs: 			"<<s_op_arithmetic.size()<<"			";
	printset(s_op_arithmetic);
	cout<<endl;
	return 0;
}
