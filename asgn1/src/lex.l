%{
#include <iostream>
#include <math.h>
#include <set>
#include <string>

using namespace std;
%}

				int numInteger = 0, numIdentifier = 0, numType = 0;
				int numKeyPackage = 0, numKeyImport = 0, numKeyClass = 0, numKeyInterface = 0;
				int numKeyInherits = 0, numKeyImplements = 0, numKeyReturn = 0, numKeyNew = 0;
				int numKeyBreak = 0, numKeyContinue = 0, numKeyIsvoid = 0, numKeyNot = 0;
				int numKeyCase = 0, numKeyOf = 0, numKeyEsac = 0, numKeyWhile = 0;
				int numKeyLoop = 0, numKeyPool = 0, numKeyDo = 0, numKeyFor = 0;
				int numKeyIf = 0, numKeyThen = 0, numKeyElse = 0, numKeyFi = 0;
				int numKeyLet = 0, numKeyIn = 0, numKeyTrue = 0, numKeyFalse = 0;
				int numOpArithmetic = 0, numOpRelational = 0;
				int numOpAsgn = 0, numOpImplies = 0;
				int numColon = 0, numStmtTerminator = 0;
				int numBlockBegin = 0, numBlockEnd = 0;
				int numParanOpen = 0, numParanClose = 0;
				int numArrayOpen = 0, numArrayClose = 0;
				int line_ctr=0;
				set<string> s_integer, s_identifiers, s_type;
				set<string> s_op_arithmetic, s_op_relational;
				set<string>	s_strings;
				set<string> s_unrecog;
				set<string> s_char;
DIGIT			[0-9]
NEWLINE			\n
INTEGER			{DIGIT}+
KEY_PACKAGE		(?i:package)
KEY_IMPORT		(?i:import)
KEY_CLASS		(?i:class)
KEY_INTERFACE	(?i:interface)
KEY_INHERITS	(?i:inherits)
KEY_IMPLEMENTS	(?i:implements)
KEY_RETURN		(?i:return)
KEY_NEW			(?i:new)
KEY_BREAK		(?i:break)
KEY_CONTINUE	(?i:continue)
KEY_ISVOID		(?i:isvoid)
KEY_NOT			(?i:not)
KEY_CASE		(?i:case)
KEY_OF			(?i:of)
KEY_ESAC		(?i:esac)
KEY_WHILE		(?i:while)
KEY_LOOP		(?i:loop)
KEY_POOL		(?i:pool)
KEY_DO			(?i:do)
KEY_FOR			(?i:for)
KEY_IF			(?i:if)
KEY_THEN		(?i:then)
KEY_ELSE		(?i:else)
KEY_FI			(?i:fi)
KEY_LET			(?i:let)
KEY_IN			(?i:in)
KEY_TRUE		"t"(?i:rue)
KEY_FALSE		"f"(?i:alse)
IDENTIFIER		[a-z][a-zA-Z0-9_]*
TYPE			[A-Z][a-zA-Z0-9_]*
OP_ASGN 		"<-"
OP_IMPLIES 		"=>"
CHARACTER 		\'(.)\'
STRING			\"(\\.|[^\\"])*\"
SL_COMMENT		"--"(.)*
ML_COMMENT		"(*"(.|\n)*"*)"
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
{NEWLINE}		{
					line_ctr++;
				}
{INTEGER}		{
					printf("[INTEGER : %s] (%d)\n", yytext, atoi(yytext));
					++numInteger;
					s_integer.insert(yytext);
				}
{KEY_PACKAGE}	{
					printf("[KEYWORD: %s]\n", yytext);
					++numKeyPackage;
				}
{KEY_IMPORT}	{
					printf("[KEYWORD: %s]\n", yytext);
					++numKeyImport;
				}
{KEY_CLASS}		{
					printf("[KEYWORD: %s]\n", yytext);
					++numKeyClass;
				}
{KEY_INTERFACE}	{
					printf("[KEYWORD: %s]\n", yytext);
					++numKeyInterface;
				}
{KEY_INHERITS}	{
					printf("[KEYWORD: %s]\n", yytext);
					++numKeyInherits;
				}
{KEY_IMPLEMENTS}	{
					printf("[KEYWORD: %s]\n", yytext);
					++numKeyImplements;
				}
{KEY_RETURN}	{
					printf("[KEYWORD: %s]\n", yytext);
					++numKeyReturn;
				}
{KEY_NEW}		{
					printf("[KEYWORD: %s]\n", yytext);
					++numKeyNew;
				}
{KEY_BREAK}		{
					printf("[KEYWORD: %s]\n", yytext);
					++numKeyBreak;
				}
{CHARACTER}		{
					s_char.insert(yytext);
					cout<<"CHARACTER: "<<yytext<<endl;
				}
{KEY_CONTINUE}	{
					printf("[KEYWORD: %s]\n", yytext);
					++numKeyContinue;
				}
{KEY_ISVOID}	{
					printf("[KEYWORD: %s]\n", yytext);
					++numKeyIsvoid;
				}
{KEY_NOT}		{
					printf("[KEYWORD: %s]\n", yytext);
					++numKeyNot;
				}
{KEY_CASE}		{
					printf("[KEYWORD: %s]\n", yytext);
					++numKeyCase;
				}
{KEY_OF}		{
					printf("[KEYWORD: %s]\n", yytext);
					++numKeyOf;
				}
{KEY_ESAC}		{
					printf("[KEYWORD: %s]\n", yytext);
					++numKeyEsac;
				}
{KEY_WHILE}		{
					printf("[KEYWORD: %s]\n", yytext);
					++numKeyWhile;
				}
{KEY_LOOP}		{
					printf("[KEYWORD: %s]\n", yytext);
					++numKeyLoop;
				}
{KEY_POOL}		{
					printf("[KEYWORD: %s]\n", yytext);
					++numKeyPool;
				}
{KEY_DO}		{
					printf("[KEYWORD: %s]\n", yytext);
					++numKeyDo;
				}
{KEY_FOR}		{
					printf("[KEYWORD: %s]\n", yytext);
					++numKeyFor;
				}
{KEY_IF}		{
					printf("[KEYWORD: %s]\n", yytext);
					++numKeyIf;
				}
{KEY_THEN}		{
					printf("[KEYWORD: %s]\n", yytext);
					++numKeyThen;
				}
{KEY_ELSE}		{
					printf("[KEYWORD: %s]\n", yytext);
					++numKeyElse;
				}
{KEY_FI}		{
					printf("[KEYWORD: %s]\n", yytext);
					++numKeyFi;
				}
{KEY_LET}		{
					printf("[KEYWORD: %s]\n", yytext);
					++numKeyLet;
				}
{KEY_IN}		{
					printf("[KEYWORD: %s]\n", yytext);
					++numKeyIn;
				}
{KEY_TRUE}		{
					printf("[KEYWORD: %s]\n", yytext);
					++numKeyTrue;
				}
{KEY_FALSE}		{
					printf("[KEYWORD: %s]\n", yytext);
					++numKeyFalse;
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
{OP_ASGN}		{
					printf("OP_ASGN\n");
					++numOpAsgn;
				}
{OP_IMPLIES}	{
					printf("OP_IMPLIES\n");
					++numOpImplies;
				}
{STRING}		{
					cout<<"[String:"<<yytext<<" ]"<<endl;
					s_strings.insert(yytext);
				}
{SL_COMMENT}	{
					cout<<"COMMENTING:"<<yytext<<endl;
				}
{ML_COMMENT}	{
					cout<<"M_COMMENTING:"<<yytext<<endl;
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
.				{
					printf("This one is Unrecognized character: %s--------------------------------------------------------------------------Line %d\n", yytext,line_ctr);
					s_unrecog.insert(yytext);
				}
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
	cout<<"INTEGER: 				"<<s_integer.size()<<"			";
	printset(s_integer);
	cout<<endl;
	
	// keywords start
	cout<<"KEY_PACKAGE:				"<<numKeyPackage<<"			";
	cout<<"package";
	cout<<endl;
	cout<<"KEY_IMPORT:				"<<numKeyImport<<"			";
	cout<<"import";
	cout<<endl;
	cout<<"KEY_CLASS:				"<<numKeyClass<<"			";
	cout<<"class";
	cout<<endl;
	cout<<"KEY_INTERFACE:				"<<numKeyInterface<<"			";
	cout<<"interface";
	cout<<endl;
	cout<<"KEY_INHERITS:				"<<numKeyInherits<<"			";
	cout<<"inherits";
	cout<<endl;
	cout<<"KEY_IMPLEMENTS:				"<<numKeyImplements<<"			";
	cout<<"implements";
	cout<<endl;
	cout<<"KEY_RETURN:				"<<numKeyReturn<<"			";
	cout<<"return";
	cout<<endl;
	cout<<"KEY_NEW:				"<<numKeyNew<<"			";
	cout<<"new";
	cout<<endl;
	cout<<"KEY_BREAK:				"<<numKeyBreak<<"			";
	cout<<"break";
	cout<<endl;
	cout<<"KEY_CONTINUE:				"<<numKeyContinue<<"			";
	cout<<"continue";
	cout<<endl;
	cout<<"KEY_ISVOID:				"<<numKeyIsvoid<<"			";
	cout<<"isvoid";
	cout<<endl;
	cout<<"KEY_NOT:				"<<numKeyNot<<"			";
	cout<<"not";
	cout<<endl;
	cout<<"KEY_CASE:				"<<numKeyCase<<"			";
	cout<<"case";
	cout<<endl;
	cout<<"KEY_OF:					"<<numKeyOf<<"			";
	cout<<"of";
	cout<<endl;
	cout<<"KEY_ESAC:				"<<numKeyEsac<<"			";
	cout<<"esac";
	cout<<endl;
	cout<<"KEY_WHILE:				"<<numKeyWhile<<"			";
	cout<<"while";
	cout<<endl;
	cout<<"KEY_LOOP:				"<<numKeyLoop<<"			";
	cout<<"loop";
	cout<<endl;
	cout<<"KEY_POOL:				"<<numKeyPool<<"			";
	cout<<"pool";
	cout<<endl;
	cout<<"KEY_DO:					"<<numKeyDo<<"			";
	cout<<"do";
	cout<<endl;
	cout<<"KEY_FOR:				"<<numKeyFor<<"			";
	cout<<"for";
	cout<<endl;
	cout<<"KEY_IF:					"<<numKeyIf<<"			";
	cout<<"if";
	cout<<endl;
	cout<<"KEY_THEN:				"<<numKeyThen<<"			";
	cout<<"then";
	cout<<endl;
	cout<<"KEY_ELSE:				"<<numKeyElse<<"			";
	cout<<"else";
	cout<<endl;
	cout<<"KEY_FI:					"<<numKeyFi<<"			";
	cout<<"fi";
	cout<<endl;
	cout<<"KEY_LET:				"<<numKeyLet<<"			";
	cout<<"let";
	cout<<endl;
	cout<<"KEY_IN:					"<<numKeyIn<<"			";
	cout<<"in";
	cout<<endl;
	cout<<"KEY_TRUE:				"<<numKeyTrue<<"			";
	cout<<"true";
	cout<<endl;
	cout<<"KEY_FALSE:				"<<numKeyFalse<<"			";
	cout<<"false";
	cout<<endl;
	// keywords end

	cout<<"IDENTIFIER: 				"<<s_identifiers.size()<<"			";
	printset(s_identifiers);
	cout<<endl;
	cout<<"TYPE: 					"<<s_type.size()<<"			";
	printset(s_type);
	cout<<endl;
	cout<<"OP_ASGN: 				"<<numOpAsgn<<"			";
	cout<<"<-";
	cout<<endl;
	cout<<"OP_IMPLIES:				"<<numOpImplies<<"			";
	cout<<"=>";
	cout<<endl;
	cout<<"STRING:					"<<s_strings.size()<<"			";
	printset(s_strings);
	cout<<endl;
	cout<<"CHARACTERS:				"<<s_char.size()<<"			";
	printset(s_char);
	cout<<endl;
	cout<<"COLON:					"<<numColon<<"			";
	cout<<":";
	cout<<endl;
	cout<<"STMT_TERMINATOR: 			"<<numStmtTerminator<<"			";
	cout<<";";
	cout<<endl;
	cout<<"BLOCK_BEGIN: 				"<<numBlockBegin<<"			";
	cout<<"{";
	cout<<endl;
	cout<<"BLOCK_END: 				"<<numBlockEnd<<"			";
	cout<<"}";
	cout<<endl;
	cout<<"PARAN_OPEN: 				"<<numParanOpen<<"			";
	cout<<"(";
	cout<<endl;
	cout<<"PARAN_CLOSE: 				"<<numParanClose<<"			";
	cout<<")";
	cout<<endl;
	cout<<"ARRAY_OPEN:	 			"<<numArrayOpen<<"			";
	cout<<"[";
	cout<<endl;
	cout<<"ARRAY_CLOSE: 				"<<numArrayClose<<"			";
	cout<<"]";
	cout<<endl;
	cout<<"OP_ARITHMETIC:				"<<s_op_arithmetic.size()<<"			";
	printset(s_op_arithmetic);
	cout<<endl;
	cout<<"OP_RELATIONAL:				"<<s_op_relational.size()<<"			";
	printset(s_op_relational);
	cout<<endl;
	cout<<"--------------------------------------------------------------------------"<<endl;
	cout<<"UNRECOGNIZED CHARACTERS: "<<endl;
	if(s_unrecog.size()==0){
		cout<<"NONE"<<endl;
	}
	else{
		printset(s_unrecog);
	}
	return 0;
}
