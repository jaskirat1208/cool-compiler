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
				set<string> s_integer, s_identifiers, s_type;
				set<string> s_op_asgn, s_op_arithmetic, s_op_relational;
				set<string> s_block_begin, s_block_end;
				set<string> s_param_open, s_param_close;
				set<string> s_array_open, s_array_close;
				set<string> s_keyword;
				set<string>	s_strings;

DIGIT			[0-9]
INTEGER			{DIGIT}+
KEYWORD 		(package|import|class|interface|inherits|implements|return|new|break|continue|isvoid|not|case|of|esac|while|loop|pool|do|for|if|then|else|fi|let|in|true|false)
IDENTIFIER		[a-z][a-zA-Z0-9_]*
TYPE			[A-Z][a-zA-Z0-9_]*
OP_ASGN 		"<-"
STRING			\"(\\.|[^\\"])*\"
SL_COMMENT		"--"(.)*\n
ML_COMMENT		"(*"(.|\n)*"*)"
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
{STRING}		{
					s_strings.insert(yytext);
					cout<<"[String:"<<yytext<<" ]"<<endl;
				}
{SL_COMMENT}	{
					cout<<"COMMENTING:"<<yytext<<endl;
				}
{ML_COMMENT}	{
					cout<<"M_COMMENTING:"<<yytext<<endl;
				}			
{BLOCK_BEGIN}	{
					printf("BLOCK_BEGIN\n");
					++numBlockBegin;
					s_block_begin.insert(yytext);
				}
{BLOCK_END}		{
					printf("BLOCK_END\n");
					++numBlockEnd;
					s_block_end.insert(yytext);
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
					s_param_open.insert(yytext);
}
{PARAN_CLOSE}	{
					printf("PARAN_CLOSE\n");
					++numParanClose;
					s_param_close.insert(yytext);
}
{ARRAY_OPEN}	{
					printf("ARRAY_OPEN\n");
					++numArrayOpen;
					s_array_open.insert(yytext);
}
{ARRAY_CLOSE}	{
					printf("ARRAY_CLOSE\n");
					++numArrayClose;
					s_array_close.insert(yytext);
}
{OP_ASGN}		{
					printf("[OP_ASGN: %s]\n", yytext);
					++numOpAsgn;
					s_op_asgn.insert(yytext);
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
	cout<<"BLOCK_BEGINs: 				"<<s_block_begin.size()<<"			";
	printset(s_block_begin);
	cout<<endl;
	cout<<"BLOCK_ENDs: 				"<<s_block_end.size()<<"			";
	printset(s_block_end);
	cout<<endl;
	cout<<"PARAN_OPENs: 				"<<s_param_open.size()<<"			";
	printset(s_param_open);
	cout<<endl;
	cout<<"PARAN_CLOSEs: 				"<<s_param_close.size()<<"			";
	printset(s_param_close);
	cout<<endl;
	cout<<"ARRAY_OPENs: 				"<<s_array_open.size()<<"			";
	printset(s_array_open);
	cout<<endl;
	cout<<"ARRAY_CLOSEs: 				"<<s_array_close.size()<<"			";
	printset(s_array_close);
	cout<<endl;
	cout<<"OP_ASGNs: 				"<<s_op_asgn.size()<<"			";
	printset(s_op_asgn);
	cout<<endl;
	cout<<"OP_RELATIONALs: 			"<<s_op_relational.size()<<"			";
	printset(s_op_relational);
	cout<<endl;
	cout<<"OP_ARITHMETICs: 			"<<s_op_arithmetic.size()<<"			";
	printset(s_op_arithmetic);
	cout<<endl;
	return 0;
}
