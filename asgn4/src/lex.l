%option noyywrap

%{
#include <iostream>
#include <math.h>
#include <set>
#include <string>
#include "parser.tab.h"

#define YY_DECL int yylex()

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
				int numOpArithmetic = 0, numOpRelational = 0, numOpLogical = 0, numOpBitwise = 0;
				int numOpAsgn = 0, numOpImplies = 0;
				int numColon = 0, numStmtTerminator = 0, numAt = 0;
				int numDot = 0, numDotStar = 0, numComma = 0;
				int numBlockBegin = 0, numBlockEnd = 0;
				int numParanOpen = 0, numParanClose = 0;
				int numArrayOpen = 0, numArrayClose = 0;
				int line_ctr=0;
				set<string> s_integer, s_identifiers, s_type;
				set<string> s_op_arithmetic, s_op_relational, s_op_logical, s_op_bitwise;
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
OP_IMPLIES 		"=>"
STRING			\"(\\.|[^\\"])*\"
SL_COMMENT		"--"(.)*
ML_COMMENT		"(*"([^*]|[\n]|(\*+([^*\)]|[\n])))*\*+")"
COLON			":"
STMT_TERMINATOR ";"
AT				"@"
DOTSTAR			".*"
BLOCK_BEGIN 	"{"
BLOCK_END 		"}"
PARAN_OPEN		"("
PARAN_CLOSE		")"
ARRAY_OPEN		"["
ARRAY_CLOSE 	"]"
COMMA			","
OP_ASGN 		"<-"
OP_LOGICAL_OR	(\|\|)
OP_LOGICAL_AND	(&&)
OP_BITWISE_OR	(\|)
OP_BITWISE_XOR	(^)
OP_BITWISE_AND	(&)
OP_RELATIONAL_EQ	(=)
OP_RELATIONAL_IEQ	(<|<=|>=|>)
OP_ARITHMETIC_B_AD	[+-]
OP_ARITHMETIC_B_MU	[/*]
DOT				"."
KEY_NOT			(?i:not)
OP_ARITHMETIC_U	"~"

%%
{NEWLINE}		{
					line_ctr++;
				}
{INTEGER}		{
					// printf("[INTEGER : %s] (%d)\n", yytext, atoi(yytext));
					++numInteger;
					s_integer.insert(yytext);
					yylval.intValue = atoi(yytext);
					return INTEGER;
				}
{KEY_PACKAGE}	{
					// printf("[KEYWORD: %s]\n", yytext);
					++numKeyPackage;
					return KEY_PACKAGE;
				}
{KEY_IMPORT}	{
					// printf("[KEYWORD: %s]\n", yytext);
					++numKeyImport;
					return KEY_IMPORT;
				}
{KEY_CLASS}		{
					// printf("[KEYWORD: %s]\n", yytext);
					++numKeyClass;
					return KEY_CLASS;
				}
{KEY_INTERFACE}	{
					// printf("[KEYWORD: %s]\n", yytext);
					++numKeyInterface;
					return KEY_INTERFACE;
				}
{KEY_INHERITS}	{
					// printf("[KEYWORD: %s]\n", yytext);
					++numKeyInherits;
					return KEY_INHERITS;
				}
{KEY_IMPLEMENTS}	{
					// printf("[KEYWORD: %s]\n", yytext);
					++numKeyImplements;
					return KEY_IMPLEMENTS;
				}
{KEY_RETURN}	{
					// printf("[KEYWORD: %s]\n", yytext);
					++numKeyReturn;
					return KEY_RETURN;
				}
{KEY_NEW}		{
					// printf("[KEYWORD: %s]\n", yytext);
					++numKeyNew;
					return KEY_NEW;
				}
{KEY_BREAK}		{
					// printf("[KEYWORD: %s]\n", yytext);
					++numKeyBreak;
					return KEY_BREAK;
				}
{KEY_CONTINUE}	{
					// printf("[KEYWORD: %s]\n", yytext);
					++numKeyContinue;
					return KEY_CONTINUE;
				}
{KEY_ISVOID}	{
					// printf("[KEYWORD: %s]\n", yytext);
					++numKeyIsvoid;
					return KEY_ISVOID;
				}
{KEY_NOT}		{
					// printf("[KEYWORD: %s]\n", yytext);
					++numKeyNot;
					return KEY_NOT;
				}
{KEY_CASE}		{
					// printf("[KEYWORD: %s]\n", yytext);
					++numKeyCase;
					return KEY_CASE;
				}
{KEY_OF}		{
					// printf("[KEYWORD: %s]\n", yytext);
					++numKeyOf;
					return KEY_OF;
				}
{KEY_ESAC}		{
					// printf("[KEYWORD: %s]\n", yytext);
					++numKeyEsac;
					return KEY_ESAC;
				}
{KEY_WHILE}		{
					// printf("[KEYWORD: %s]\n", yytext);
					++numKeyWhile;
					return KEY_WHILE;
				}
{KEY_LOOP}		{
					// printf("[KEYWORD: %s]\n", yytext);
					++numKeyLoop;
					return KEY_LOOP;
				}
{KEY_POOL}		{
					// printf("[KEYWORD: %s]\n", yytext);
					++numKeyPool;
					return KEY_POOL;
				}
{KEY_DO}		{
					// printf("[KEYWORD: %s]\n", yytext);
					++numKeyDo;
					return KEY_DO;
				}
{KEY_FOR}		{
					// printf("[KEYWORD: %s]\n", yytext);
					++numKeyFor;
					return KEY_FOR;
				}
{KEY_IF}		{
					// printf("[KEYWORD: %s]\n", yytext);
					++numKeyIf;
					return KEY_IF;
				}
{KEY_THEN}		{
					// printf("[KEYWORD: %s]\n", yytext);
					++numKeyThen;
					return KEY_THEN;
				}
{KEY_ELSE}		{
					// printf("[KEYWORD: %s]\n", yytext);
					++numKeyElse;
					return KEY_ELSE;
				}
{KEY_FI}		{
					// printf("[KEYWORD: %s]\n", yytext);
					++numKeyFi;
					return KEY_FI;
				}
{KEY_LET}		{
					// printf("[KEYWORD: %s]\n", yytext);
					++numKeyLet;
					return KEY_LET;
				}
{KEY_IN}		{
					// printf("[KEYWORD: %s]\n", yytext);
					++numKeyIn;
					return KEY_IN;
				}
{KEY_TRUE}		{
					// printf("[KEYWORD: %s]\n", yytext);
					++numKeyTrue;
					return KEY_TRUE;
				}
{KEY_FALSE}		{
					// printf("[KEYWORD: %s]\n", yytext);
					++numKeyFalse;
					return KEY_FALSE;
				}
{IDENTIFIER}	{
					// printf("[IDENTIFIER: %s]\n", yytext);
					++numIdentifier;
					s_identifiers.insert(yytext);
					yylval.str = strdup(yytext);
					return IDENTIFIER;	
				}
{TYPE}			{
					// printf("[TYPE: %s]\n", yytext);
					++numType;
					s_type.insert(yytext);
					yylval.str = strdup(yytext);
					return TYPE;
				}
{OP_ASGN}		{
					// printf("OP_ASGN\n");
					++numOpAsgn;
					return OP_ASGN;
				}
{OP_IMPLIES}	{
					// printf("OP_IMPLIES\n");
					++numOpImplies;
					return OP_IMPLIES;
				}
{STRING}		{
					// cout<<"[String:"<<yytext<<" ]"<<endl;
					s_strings.insert(yytext);
					yylval.str = strdup(yytext);
					return STRING;
				}
{SL_COMMENT}	{
					// cout<<"COMMENTING:"<<yytext<<endl;
				}
{ML_COMMENT}	{
					// cout<<"M_COMMENTING:"<<yytext<<endl;
				}			
{COLON}			{
					// printf("COLON\n");
					++numColon;
					return COLON;
				}
{STMT_TERMINATOR}	{
					// printf("STMT_TERMINATOR\n");
					++numStmtTerminator;
					return STMT_TERMINATOR;
				}
{AT}			{
					// printf("AT\n");
					++numAt;
					return AT;
				}
{DOT}			{
					// printf("DOT\n");
					++numDot;
					return DOT;
				}
{DOTSTAR}			{
					// printf("DOTSTAR\n");
					++numDotStar;
					return DOTSTAR;
				}
{COMMA}			{
					// printf("COMMA\n");
					++numComma;
					return COMMA;
				}
{BLOCK_BEGIN}	{
					// printf("BLOCK_BEGIN\n");
					++numBlockBegin;
					return BLOCK_BEGIN;
				}
{BLOCK_END}		{
					// printf("BLOCK_END\n");
					++numBlockEnd;
					return BLOCK_END;
				}
{PARAN_OPEN}	{
					// printf("PARAN_OPEN\n");
					++numParanOpen;
					return PARAN_OPEN;
}
{PARAN_CLOSE}	{
					// printf("PARAN_CLOSE\n");
					++numParanClose;
					return PARAN_CLOSE;
}
{ARRAY_OPEN}	{
					// printf("ARRAY_OPEN\n");
					++numArrayOpen;
					return ARRAY_OPEN;
}
{ARRAY_CLOSE}	{
					// printf("ARRAY_CLOSE\n");
					++numArrayClose;
					return ARRAY_CLOSE;
}
{OP_ARITHMETIC_U}	{
					// printf("[OP_ARITHMETIC_U: %s]\n", yytext);
					++numOpArithmetic;
					s_op_arithmetic.insert(yytext);
					return OP_ARITHMETIC_U;
				}
{OP_ARITHMETIC_B_AD}	{
					// printf("[OP_ARITHMETIC_B: %s]\n", yytext);
					++numOpArithmetic;
					s_op_arithmetic.insert(yytext);
					yylval.str = strdup(yytext);
					return OP_ARITHMETIC_B_AD;
				}
{OP_ARITHMETIC_B_MU}	{
					// printf("[OP_ARITHMETIC_B: %s]\n", yytext);
					++numOpArithmetic;
					s_op_arithmetic.insert(yytext);
					yylval.str = strdup(yytext);
					return OP_ARITHMETIC_B_MU;
				}
{OP_RELATIONAL_EQ}	{
					// printf("[OP_RELATIONAL: %s]\n", yytext);
					++numOpRelational;
					s_op_relational.insert(yytext);
					return OP_RELATIONAL_EQ;
				}
{OP_RELATIONAL_IEQ}	{
					// printf("[OP_RELATIONAL: %s]\n", yytext);
					++numOpRelational;
					s_op_relational.insert(yytext);
					yylval.str = strdup(yytext);
					return OP_RELATIONAL_IEQ;
				}
{OP_LOGICAL_OR}	{
					// printf("[OP_LOGICAL_OR: %s]\n", yytext);
					++numOpLogical;
					s_op_logical.insert(yytext);
					return OP_LOGICAL_OR;
				}
{OP_LOGICAL_AND}	{
					// printf("[OP_LOGICAL_AND: %s]\n", yytext);
					++numOpLogical;
					s_op_logical.insert(yytext);
					return OP_LOGICAL_AND;
				}
{OP_BITWISE_OR}	{
					// printf("[OP_BITWISE_OR: %s]\n", yytext);
					++numOpBitwise;
					s_op_bitwise.insert(yytext);
					return OP_BITWISE_OR;
				}
{OP_BITWISE_XOR}	{
					// printf("[OP_BITWISE_OR: %s]\n", yytext);
					++numOpBitwise;
					s_op_bitwise.insert(yytext);
					return OP_BITWISE_XOR;
				}
{OP_BITWISE_AND}	{
					// printf("[OP_BITWISE_OR: %s]\n", yytext);
					++numOpBitwise;
					s_op_bitwise.insert(yytext);
					return OP_BITWISE_AND;
				}
[ \t]+			/* eat up white spaces */
.				{
					// printf("This one is Unrecognized character: %s--------------------------------------------------------------------------Line %d\n", yytext,line_ctr);
					s_unrecog.insert(yytext);
				}
