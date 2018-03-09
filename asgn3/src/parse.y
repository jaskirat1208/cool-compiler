%{
#include <iostream>
#include <math.h>
#include <set>
#include <string>
#include <vector>

extern int yylex();
extern int yyparse();
extern FILE* yyin;
void yyerror(const char* s);

using namespace std;



vector<string> parse_tree;
%}

%union {
	int intValue;
	char* str;
}

%token NEWLINE	
%token <intValue> INTEGER	
%token KEY_PACKAGE
%token KEY_IMPORT
%token KEY_CLASS
%token KEY_INTERFACE
%token KEY_INHERITS
%token KEY_IMPLEMENTS
%token KEY_RETURN
%token KEY_NEW
%token KEY_BREAK
%token KEY_CONTINUE
%token KEY_ISVOID
%token KEY_NOT
%token KEY_CASE
%token KEY_OF
%token KEY_ESAC
%token KEY_WHILE
%token KEY_LOOP
%token KEY_POOL
%token KEY_DO
%token KEY_FOR
%token KEY_IF
%token KEY_THEN
%token KEY_ELSE
%token KEY_FI
%token KEY_LET
%token KEY_IN
%token KEY_TRUE
%token KEY_FALSE
%token <str> IDENTIFIER
%token <str> TYPE	
%token OP_ASGN 
%token OP_IMPLIES
%token <str> STRING	
%token COLON			
%token STMT_TERMINATOR 
%token AT				
%token DOT				
%token DOTSTAR
%token COMMA			
%token BLOCK_BEGIN 	
%token BLOCK_END
%token PARAN_OPEN		
%token PARAN_CLOSE		
%token ARRAY_OPEN		
%token ARRAY_CLOSE 	
%token OP_ARITHMETIC_U	
%token OP_ARITHMETIC_B
%token OP_RELATIONAL
%token OP_LOGICAL	
%token OP_BITWISE

%start Compilation_unit
%type <str> Compilation_unit
%type <str> Package_declaration
%type <str> Import_declarations
%type <str> Program
%type <str> Package_name
%type <str> Import_declaration
%type <str> Sub_Program
%type <str> Class
%type <str> Interface
%type <str> Inheritance
%type <str> Implement_Interface
%type <str> Features_list_opt
%type <str> Interface_Inheritance_List
%type <str> Interface_features_list_opt
%type <str> Interface_features_list
%type <str> Interface_feature
%type <str> Interfaces_list
%type <str> Features_list
%type <str> Feature
%type <str> Formal_params_list_opt
%type <str> Formal
%type <str> Formal_params_list
%type <str> Formal_param
%type <str> Conditionals
%type <str> Loops
%type <str> Arguments_list_opt
%type <str> Arguments_list
%type <str> Case
%type <str> Actions
%type <str> Action
%type <str> If_then_else
%type <str> While
%type <str> For
%type <str> Do_while
%type <str> Break_statement
%type <str> Continue_statement
%type <str> Return_statement
%type <str> Block_Expression
%type <str> Block_list
%type <str> Let_Expression
%type <str> Expressions
%type <str> Formals
%%
/*Grammer Rules*/

Compilation_unit:
		Package_declaration Import_declarations Program
		{ parse_tree.push_back("Compilation_unit -> Package_declaration Import_declarations Program\n"); }
		;
Package_declaration:
		KEY_PACKAGE Package_name STMT_TERMINATOR
		{ parse_tree.push_back("Package_declaration -> KEY_PACKAGE Package_name STMT_TERMINATOR\n"); }
		|
		{ parse_tree.push_back( "Package_declaration -> Empty\n"); }
		;
Package_name:
		Package_name DOT IDENTIFIER
		{ parse_tree.push_back("Package_name -> Package_name DOT IDENTIFIER\n"); }
		| IDENTIFIER
		{ parse_tree.push_back("Package_name -> IDENTIFIER\n"); }
		;
Import_declarations:
		Import_declarations Import_declaration
		{ parse_tree.push_back("Import_declarations -> Import_declarations Import_declaration\n"); }
		| Import_declaration
		{ parse_tree.push_back("Import_declarations -> Import_declaration\n"); }
		|
		{ parse_tree.push_back( "Import_declarations -> Empty\n"); }
		;
Import_declaration:
		KEY_IMPORT Package_name STMT_TERMINATOR
		{ parse_tree.push_back("Import_declaration -> KEY_IMPORT Package_name STMT_TERMINATOR\n"); }
		| KEY_IMPORT Package_name DOTSTAR STMT_TERMINATOR
		{ parse_tree.push_back("Import_declaration -> KEY_IMPORT Package_name DOTSTAR STMT_TERMINATOR\n"); }
		;
Program:
		Program Sub_Program STMT_TERMINATOR
		{ parse_tree.push_back("Program -> Program Sub_Program STMT_TERMINATOR\n"); }
		|
		{ parse_tree.push_back("Program -> Empty\n"); }
		;
Sub_Program:
		Class
		{ parse_tree.push_back("Sub_Program -> Class\n"); }
		| Interface
		{ parse_tree.push_back("Sub_Program -> Interface\n"); }
		;
Class:
		KEY_CLASS TYPE Inheritance Implement_Interface BLOCK_BEGIN Features_list_opt BLOCK_END
		{ parse_tree.push_back("Class -> KEY_CLASS TYPE Inheritance Implement_Interface BLOCK_BEGIN Features_list_opt BLOCK_END\n"); }
		;
Interface:
		KEY_INTERFACE TYPE Interface_Inheritance_List BLOCK_BEGIN Interface_features_list_opt BLOCK_END
		{ parse_tree.push_back("Interface -> KEY_INTERFACE TYPE Interface_Inheritance_List BLOCK_BEGIN Interface_features_list_opt BLOCK_END\n"); }
		;
Interface_Inheritance_List:
		KEY_INHERITS TYPE
		{ parse_tree.push_back("Interface_Inheritance_List -> KEY_INHERITS TYPE\n"); }
		| Interface_Inheritance_List COMMA TYPE
		{ parse_tree.push_back("Interface_Inheritance_List -> Interface_Inheritance_List COMMA TYPE\n"); }
		|
		{ parse_tree.push_back("Interface_Inheritance_List -> Empty\n"); }
		;
Inheritance:
		KEY_INHERITS TYPE
		{ parse_tree.push_back("Inheritance -> KEY_INHERITS TYPE\n"); }
		|
		{ parse_tree.push_back("Inheritance -> Empty\n"); }
		;
Implement_Interface:
		KEY_IMPLEMENTS Interfaces_list
		{ parse_tree.push_back("Implement_Interface -> KEY_IMPLEMENTS Interfaces_list\n"); }
		|
		{ parse_tree.push_back("Implement_Interface -> Empty\n"); }
		;
Interfaces_list:
		Interfaces_list COMMA TYPE
		{ parse_tree.push_back("Interfaces_list -> Interfaces_list COMMA TYPE\n"); }
		| TYPE
		{ parse_tree.push_back("Interfaces_list -> TYPE\n"); }
		;
Features_list_opt:
		Features_list
		{ parse_tree.push_back("Features_list_opt -> Features_list\n"); }
		|
		{ parse_tree.push_back("Features_list_opt -> Empty\n"); }
		;
Features_list:
		Features_list Feature STMT_TERMINATOR
		{ parse_tree.push_back("Features_list -> Features_list Feature STMT_TERMINATOR\n"); }
		| Feature STMT_TERMINATOR
		{ parse_tree.push_back("Features_list -> Feature STMT_TERMINATOR\n"); }
		;
Feature:
		IDENTIFIER PARAN_OPEN Formal_params_list_opt PARAN_CLOSE COLON TYPE BLOCK_BEGIN Expression BLOCK_END
		{ parse_tree.push_back("Feature -> IDENTIFIER PARAN_OPEN Formal_params_list_opt PARAN_CLOSE COLON TYPE BLOCK_BEGIN Expression BLOCK_END\n"); }
		| Formal
		{ parse_tree.push_back("Feature -> Formal\n"); }
		;
Interface_features_list_opt:
		Interface_features_list
		{ parse_tree.push_back("Interface_features_list_opt -> Interfaces_list\n"); }
		|
		{ parse_tree.push_back("Interface_features_list_opt -> Empty\n"); }
		;
Interface_features_list:
		Interface_features_list Interface_feature STMT_TERMINATOR
		{ parse_tree.push_back("Interface_features_list -> Interface_features_list Interface_feature STMT_TERMINATOR\n"); }
		| Interface_feature STMT_TERMINATOR
		{ parse_tree.push_back("Interface_features_list -> Interface_feature STMT_TERMINATOR\n"); }
		;
Interface_feature:
		IDENTIFIER PARAN_OPEN Formal_params_list_opt PARAN_CLOSE COLON TYPE
		{ parse_tree.push_back("Interface_feature -> IDENTIFIER PARAN_OPEN Formal_params_list_opt PARAN_CLOSE COLON TYPE\n"); }
		;
Formal_params_list_opt:
		Formal_params_list
		{ parse_tree.push_back("Formal_params_list_opt -> Formal_params_list\n"); }
		|
		{ parse_tree.push_back("Formal_params_list_opt -> Empty\n"); }
		;
Formal_params_list:
		Formal_params_list COMMA Formal_param
		{ parse_tree.push_back("Formal_params_list -> Formal_params_list COMMA\n"); }
		| Formal_param
		{ parse_tree.push_back("Formal_params_list -> Formal_param\n"); }
		;
Formal_param:
		IDENTIFIER COLON TYPE
		{ parse_tree.push_back("Formal_param -> IDENTIFIER COLON TYPE\n"); }
		| IDENTIFIER COLON TYPE ARRAY_OPEN ARRAY_CLOSE
		{ parse_tree.push_back("Formal_param -> IDENTIFIER COLON TYPE ARRAY_OPEN ARRAY_CLOSE\n"); }
		;
Formal:
		IDENTIFIER COLON TYPE ARRAY_OPEN Expression ARRAY_CLOSE OP_ASGN Expression
		{ parse_tree.push_back("Formal -> IDENTIFIER COLON TYPE ARRAY_OPEN Expression ARRAY_CLOSE OP_ASGN Expression\n"); }
		| IDENTIFIER COLON TYPE ARRAY_OPEN ARRAY_CLOSE OP_ASGN Expression
		{ parse_tree.push_back("Formal -> IDENTIFIER COLON TYPE ARRAY_OPEN ARRAY_CLOSE OP_ASGN Expression\n"); }
		| IDENTIFIER COLON TYPE OP_ASGN Expression
		{ parse_tree.push_back("Formal -> IDENTIFIER COLON TYPE OP_ASGN Expression\n"); }
		| IDENTIFIER COLON TYPE ARRAY_OPEN Expression ARRAY_CLOSE
		{ parse_tree.push_back("Formal -> IDENTIFIER COLON TYPE ARRAY_OPEN Expression ARRAY_CLOSE\n"); }
		| IDENTIFIER COLON TYPE
		{ parse_tree.push_back("Formal -> IDENTIFIER COLON TYPE\n"); }
		;
Expression:
		IDENTIFIER OP_ASGN Expression
		{ parse_tree.push_back("Expression -> IDENTIFIER OP_ASGN Expression\n"); }
		| IDENTIFIER PARAN_OPEN Arguments_list_opt PARAN_CLOSE
		{ parse_tree.push_back("Expression -> IDENTIFIER PARAN_OPEN Arguments_list_opt PARAN_CLOSE\n"); }
		| Expression AT TYPE DOT IDENTIFIER PARAN_OPEN Arguments_list_opt PARAN_CLOSE
		{ parse_tree.push_back("Expression -> Expression AT TYPE DOT IDENTIFIER PARAN_OPEN Arguments_list_opt PARAN_CLOSE\n"); }
		| Expression DOT IDENTIFIER PARAN_OPEN Arguments_list_opt PARAN_CLOSE
		{ parse_tree.push_back("Expression -> Expression DOT IDENTIFIER PARAN_OPEN Arguments_list_opt PARAN_CLOSE\n"); }
		| Conditionals
		{ parse_tree.push_back("Expression -> Conditionals\n"); }
		| Loops
		{ parse_tree.push_back("Expression -> Loops\n"); }
		| Block_Expression
		{ parse_tree.push_back("Expression -> Block_Expression\n"); }
		| Let_Expression
		{ parse_tree.push_back("Expression -> Let_Expression\n"); }
		| KEY_NEW TYPE
		{ parse_tree.push_back("Expression -> KEY_NEW TYPE\n"); }
		| KEY_ISVOID Expression
		{ parse_tree.push_back("Expression -> KEY_ISVOID Expression\n"); }
		| Return_statement
		{ parse_tree.push_back("Expression -> Return_statement\n"); }
		| Break_statement
		{ parse_tree.push_back("Expression -> Break_statement\n"); }
		| Continue_statement
		{ parse_tree.push_back("Expression -> Continue_statement\n"); }
		| Expression OP_ARITHMETIC_B Expression
		{ parse_tree.push_back("Expression -> Expression OP_ARITHMETIC_B Expression\n"); }
		| OP_ARITHMETIC_U Expression
		{ parse_tree.push_back("Expression -> OP_ARITHMETIC_U Expression\n"); }
		| Expression OP_RELATIONAL Expression
		{ parse_tree.push_back("Expression -> Expression OP_RELATIONAL Expression\n"); }
		| Expression OP_LOGICAL Expression
		{ parse_tree.push_back("Expression -> Expression OP_LOGICAL Expression\n"); }
		| Expression OP_BITWISE Expression
		{ parse_tree.push_back("Expression -> Expression OP_BITWISE Expression\n"); }
		| KEY_NOT Expression
		{ parse_tree.push_back("Expression -> KEY_NOT Expression\n"); }
		| PARAN_OPEN Expression PARAN_CLOSE
		{ parse_tree.push_back("Expression -> PARAN_OPEN Expression PARAN_CLOSE\n"); }
		| IDENTIFIER
		{ parse_tree.push_back("Expression -> IDENTIFIER\n"); }
		| IDENTIFIER ARRAY_OPEN Expression ARRAY_CLOSE
		{ parse_tree.push_back("Expression -> IDENTIFIER ARRAY_OPEN Expression ARRAY_CLOSE\n"); }
		| ARRAY_OPEN Expression Expression ARRAY_CLOSE
		{ parse_tree.push_back("Expression -> ARRAY_OPEN Expression Expression ARRAY_CLOSE\n"); }
		| KEY_TRUE
		{ parse_tree.push_back("Expression -> KEY_TRUE\n"); }
		| KEY_FALSE
		{ parse_tree.push_back("Expression -> KEY_FALSE\n"); }
		| INTEGER
		{ parse_tree.push_back("Expression -> INTEGER\n"); }
		| STRING
		{ parse_tree.push_back( "Expression -> STRING\n"); }
		;
Conditionals:
		Case
		{ parse_tree.push_back("Conditionals -> Case\n"); } 
		| If_then_else
		{ parse_tree.push_back("Conditionals -> If_then_else\n"); }
		;
Loops:
		While
		{ parse_tree.push_back("Loops -> While\n"); }
		| For
		{ parse_tree.push_back("Loops -> For\n"); }
		| Do_while
		{ parse_tree.push_back("Loops -> Do_while\n"); }
		;
Arguments_list_opt:
		Arguments_list
		{ parse_tree.push_back("Arguments_list_opt -> Arguments_list\n"); }
		|
		{ parse_tree.push_back ("Arguments_list_opt -> Empty\n"); }
		;
Arguments_list:
		Arguments_list COMMA Expression
		{ parse_tree.push_back("Arguments_list -> Arguments_list COMMA Expression\n"); }
		| Expression
		{ parse_tree.push_back("Arguments_list -> Expression\n"); }
		;
Case:
		KEY_CASE Expression KEY_OF Actions KEY_ESAC
		{ parse_tree.push_back("Case -> KEY_CASE Expression KEY_OF Actions KEY_ESAC\n"); }
		;
Actions:
		Action
		{ parse_tree.push_back("Actions -> Action\n"); }
		| Action Actions
		{ parse_tree.push_back("Actions -> Action Actions\n"); }
		;
Action:
		IDENTIFIER COLON TYPE OP_IMPLIES Expression
		{ parse_tree.push_back("Action -> IDENTIFIER COLON TYPE OP_IMPLIES Expression\n"); }
		;
If_then_else:
		KEY_IF Expression KEY_THEN Expression KEY_ELSE Expression KEY_FI
		{ parse_tree.push_back("If_then_else -> KEY_IF Expression KEY_THEN Expression KEY_ELSE Expression KEY_FI\n"); }
		;
While:
		KEY_WHILE Expression KEY_LOOP Expression KEY_POOL
		{ parse_tree.push_back("While -> KEY_WHILE Expression KEY_LOOP Expression KEY_POOL\n"); }
		;
For:
		KEY_FOR PARAN_OPEN Expression STMT_TERMINATOR Expression STMT_TERMINATOR Expression PARAN_CLOSE KEY_LOOP Expression KEY_POOL
		{ parse_tree.push_back("For -> KEY_FOR PARAN_OPEN Expression STMT_TERMINATOR Expression STMT_TERMINATOR Expression PARAN_CLOSE KEY_LOOP Expression KEY_POOL\n"); }
		;
Do_while:
		KEY_DO KEY_LOOP Expression KEY_POOL KEY_WHILE Expression
		{ parse_tree.push_back("Do_while -> KEY_DO KEY_LOOP Expression KEY_POOL KEY_WHILE Expression\n"); }
		;
Break_statement:
		KEY_BREAK
		{ parse_tree.push_back("Break_statement -> KEY_BREAK\n"); }
		;
Continue_statement:
		KEY_CONTINUE
		{ parse_tree.push_back("Continue_statement -> KEY_CONTINUE\n"); }
		;
Return_statement:
		KEY_RETURN
		{ parse_tree.push_back("Return_statement -> KEY_RETURN\n"); }
		;
Block_Expression:
		BLOCK_BEGIN Block_list BLOCK_END
		{ parse_tree.push_back("Block_Expression -> BLOCK_BEGIN Block_list BLOCK_END\n"); }
		;
Block_list:
		Block_list Expression STMT_TERMINATOR
		{ parse_tree.push_back("Block_list -> Block_list Expression STMT_TERMINATOR\n"); }
		| Expression STMT_TERMINATOR
		{ parse_tree.push_back("Block_list -> Expression STMT_TERMINATOR\n"); }
		;
Let_Expression:
		KEY_LET Formal Formals KEY_IN Expression
		{ parse_tree.push_back("Let_Expression -> KEY_LET Formal Formals KEY_IN Expression\n"); }
		;
Expressions:
		Expressions COMMA Expression
		{ parse_tree.push_back( "Expressions -> Expressions COMMA Expression\n"); }
		|
		{ parse_tree.push_back("Expressions -> Empty\n"); }
		;
Formals:
		Formals COMMA Formal
		{ parse_tree.push_back("Formals -> Formals COMMA Formal\n"); }
		|
		{ parse_tree.push_back("Formals -> Empty\n"); }
		;
%%

int main(int argc, char **argv)
{
	++argv, --argc;
	if (argc > 0)
		yyin = fopen(argv[0], "r");
	else
		yyin = stdin;
	do {
		yyparse();
	} while (!feof(yyin));


    cout<<"Printing the parse tree"<<endl;
    for(int i=0;i<parse_tree.size();i++){
        cout<<parse_tree[i];
    }
	return 0;
}
void yyerror(const char* s) {
	fprintf(stderr, "Parse error: %s\n", s);
	exit(1);
}
