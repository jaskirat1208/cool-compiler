%{
#include <bits/stdc++.h>
#include "print_pretty.cpp"
#include "global.h"

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
	struct Node* node; 
}

%expect 1

%token <intValue> INTEGER
%token KEY_PACKAGE
%token KEY_IMPORT
%token KEY_CLASS
%token KEY_INTERFACE
%token KEY_INHERITS
%token KEY_IMPLEMENTS
%token KEY_RETURN
%token KEY_BREAK
%token KEY_CONTINUE
%token KEY_ISVOID
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
%token OP_IMPLIES
%token <str> STRING
%token COLON
%token STMT_TERMINATOR
%token AT
%token DOTSTAR
%token BLOCK_BEGIN
%token BLOCK_END
%token PARAN_OPEN
%token PARAN_CLOSE
%token ARRAY_OPEN
%token ARRAY_CLOSE
%left COMMA
%right OP_ASGN
%left OP_LOGICAL_OR
%left OP_LOGICAL_AND
%left OP_BITWISE_OR
%left OP_BITWISE_XOR
%left OP_BITWISE_AND
%left OP_RELATIONAL_EQ
%left OP_RELATIONAL_IEQ
%left <str> OP_ARITHMETIC_B_AD
%left <str> OP_ARITHMETIC_B_MU
%right <str> KEY_NOT KEY_NEW OP_ARITHMETIC_U
%left DOT

%start Compilation_unit
%type <node> Compilation_unit
%type <node> Package_declaration
%type <node> Import_declarations
%type <node> Program
%type <node> Package_name
%type <node> Import_declaration
%type <node> Sub_Program
%type <node> Class
%type <node> Interface
%type <node> Inheritance
%type <node> Implement_Interface
%type <node> Features_list_opt
%type <node> Interface_Inheritance_List
%type <node> Interface_features_list_opt
%type <node> Interface_features_list
%type <node> Interface_feature
%type <node> Interfaces_list
%type <node> Features_list
%type <node> Feature
%type <node> Formal_params_list_opt
%type <node> Formal
%type <node> Formal_params_list
%type <node> Formal_param
%type <node> Expression
%type <node> Conditionals
%type <node> Loops
%type <node> Arguments_list_opt
%type <node> Arguments_list
%type <node> Case
%type <node> Actions
%type <node> Action
%type <node> If_then_else
%type <node> While
%type <node> For
%type <node> Do_while
%type <node> Break_statement
%type <node> Continue_statement
%type <node> Return_statement
%type <node> Block_Expression
%type <node> Block_list
%type <node> Let_Expression
%type <node> Expressions
%type <node> Formals
%%


/*Grammer Rules*/

Compilation_unit:
		Package_declaration Import_declarations Program
		{	parse_tree.push_back("Compilation_unit -> Package_declaration Import_declarations Program");
		}
		;
Package_declaration:
		KEY_PACKAGE Package_name STMT_TERMINATOR
		{	parse_tree.push_back("Package_declaration -> KEY_PACKAGE Package_name STMT_TERMINATOR");
		}
		|
		{	parse_tree.push_back( "Package_declaration -> EMPTY");
		}
		;
Package_name:
		Package_name DOT IDENTIFIER
		{	parse_tree.push_back("Package_name -> Package_name DOT IDENTIFIER");
		}
		|	IDENTIFIER
		{	parse_tree.push_back("Package_name -> IDENTIFIER");
		}
		;
Import_declarations:
		Import_declarations Import_declaration
		{	parse_tree.push_back("Import_declarations -> Import_declarations Import_declaration");
		}
		|	Import_declaration
		{	parse_tree.push_back("Import_declarations -> Import_declaration");
		}
		|
		{	parse_tree.push_back( "Import_declarations -> EMPTY");
		}
		;
Import_declaration:
		KEY_IMPORT Package_name STMT_TERMINATOR
		{	parse_tree.push_back("Import_declaration -> KEY_IMPORT Package_name STMT_TERMINATOR");
		}
		|	KEY_IMPORT Package_name DOTSTAR STMT_TERMINATOR
		{	parse_tree.push_back("Import_declaration -> KEY_IMPORT Package_name DOTSTAR STMT_TERMINATOR");
		}
		;
Program:
		Program Sub_Program STMT_TERMINATOR
		{	parse_tree.push_back("Program -> Program Sub_Program STMT_TERMINATOR");
		}
		|
		{	parse_tree.push_back("Program -> EMPTY");
		}
		;
Sub_Program:
		Class
		{	parse_tree.push_back("Sub_Program -> Class");
		}
		|	Interface
		{	parse_tree.push_back("Sub_Program -> Interface");
		}
		;
Class:
		KEY_CLASS TYPE Inheritance Implement_Interface BLOCK_BEGIN Features_list_opt BLOCK_END
		{	cout << "inside class\n";
			parse_tree.push_back("Class -> KEY_CLASS TYPE Inheritance Implement_Interface BLOCK_BEGIN Features_list_opt BLOCK_END");
			$$ = $6;
			cout << $$->code;
			cout << "end of class\n";
		}
		;
Interface:
		KEY_INTERFACE TYPE Interface_Inheritance_List BLOCK_BEGIN Interface_features_list_opt BLOCK_END
		{	parse_tree.push_back("Interface -> KEY_INTERFACE TYPE Interface_Inheritance_List BLOCK_BEGIN Interface_features_list_opt BLOCK_END");
		}
		;
Interface_Inheritance_List:
		KEY_INHERITS TYPE
		{	parse_tree.push_back("Interface_Inheritance_List -> KEY_INHERITS TYPE");
		}
		|	Interface_Inheritance_List COMMA TYPE
		{	parse_tree.push_back("Interface_Inheritance_List -> Interface_Inheritance_List COMMA TYPE");
		}
		|
		{	parse_tree.push_back("Interface_Inheritance_List -> EMPTY");
		}
		;
Inheritance:
		KEY_INHERITS TYPE
		{	parse_tree.push_back("Inheritance -> KEY_INHERITS TYPE");
		}
		|
		{	parse_tree.push_back("Inheritance -> EMPTY");
		}
		;
Implement_Interface:
		KEY_IMPLEMENTS Interfaces_list
		{	parse_tree.push_back("Implement_Interface -> KEY_IMPLEMENTS Interfaces_list");
		}
		|
		{	parse_tree.push_back("Implement_Interface -> EMPTY");
		}
		;
Interfaces_list:
		Interfaces_list COMMA TYPE
		{	parse_tree.push_back("Interfaces_list -> Interfaces_list COMMA TYPE");
		}
		|	TYPE
		{	parse_tree.push_back("Interfaces_list -> TYPE");
		}
		;
Features_list_opt:
		Features_list
		{	parse_tree.push_back("Features_list_opt -> Features_list");
			$$ = $1;
		}
		|
		{	parse_tree.push_back("Features_list_opt -> EMPTY");
		}
		;
Features_list:
		Features_list Feature STMT_TERMINATOR
		{	parse_tree.push_back("Features_list -> Features_list Feature STMT_TERMINATOR");
			$$ = new Node();
			$$->code = $1->code + $2->code;
		}
		|	Feature STMT_TERMINATOR
		{	parse_tree.push_back("Features_list -> Feature STMT_TERMINATOR");
			$$ = $1;
		}
		;
Feature:
		IDENTIFIER PARAN_OPEN Formal_params_list_opt PARAN_CLOSE COLON TYPE BLOCK_BEGIN Expression BLOCK_END
		{	parse_tree.push_back("Feature -> IDENTIFIER PARAN_OPEN Formal_params_list_opt PARAN_CLOSE COLON TYPE BLOCK_BEGIN Expression BLOCK_END");
			// currently there is only one feature main()
			$$ = $8;
			// cout << $$->code;
		}
		|	Formal
		{	parse_tree.push_back("Feature -> Formal");
			$$ = $1;
			// cout << $$->code;
		}
		;
Interface_features_list_opt:
		Interface_features_list
		{	parse_tree.push_back("Interface_features_list_opt -> Interface_features_list");
		}
		|
		{	parse_tree.push_back("Interface_features_list_opt -> EMPTY");
		}
		;
Interface_features_list:
		Interface_features_list Interface_feature STMT_TERMINATOR
		{	parse_tree.push_back("Interface_features_list -> Interface_features_list Interface_feature STMT_TERMINATOR");
		}
		|	Interface_feature STMT_TERMINATOR
		{	parse_tree.push_back("Interface_features_list -> Interface_feature STMT_TERMINATOR");
		}
		;
Interface_feature:
		IDENTIFIER PARAN_OPEN Formal_params_list_opt PARAN_CLOSE COLON TYPE
		{	parse_tree.push_back("Interface_feature -> IDENTIFIER PARAN_OPEN Formal_params_list_opt PARAN_CLOSE COLON TYPE");
		}
		;
Formal_params_list_opt:
		Formal_params_list
		{	parse_tree.push_back("Formal_params_list_opt -> Formal_params_list");
		}
		|
		{	parse_tree.push_back("Formal_params_list_opt -> EMPTY");
		}
		;
Formal_params_list:
		Formal_params_list COMMA Formal_param
		{	parse_tree.push_back("Formal_params_list -> Formal_params_list COMMA");
		}
		|	Formal_param
		{	parse_tree.push_back("Formal_params_list -> Formal_param");
		}
		;
Formal_param:
		IDENTIFIER COLON TYPE
		{	parse_tree.push_back("Formal_param -> IDENTIFIER COLON TYPE");
		}
		|	IDENTIFIER COLON TYPE ARRAY_OPEN ARRAY_CLOSE
		{	parse_tree.push_back("Formal_param -> IDENTIFIER COLON TYPE ARRAY_OPEN ARRAY_CLOSE");
		}
		;
Formal:
		IDENTIFIER COLON TYPE ARRAY_OPEN Expression ARRAY_CLOSE OP_ASGN Expression
		{	parse_tree.push_back("Formal -> IDENTIFIER COLON TYPE ARRAY_OPEN Expression ARRAY_CLOSE OP_ASGN Expression");
		}
		|	IDENTIFIER COLON TYPE ARRAY_OPEN ARRAY_CLOSE OP_ASGN Expression
		{	parse_tree.push_back("Formal -> IDENTIFIER COLON TYPE ARRAY_OPEN ARRAY_CLOSE OP_ASGN Expression");
		}
		|	IDENTIFIER COLON TYPE OP_ASGN Expression
		{	parse_tree.push_back("Formal -> IDENTIFIER COLON TYPE OP_ASGN Expression");
			SymbolTableEntry* entry = (SymbolTableEntry*) calloc(1, sizeof(SymbolTableEntry));
			entry->type = string($3);
			symbolTable.insert($1, entry);
			// symbolTable.printTableInts();
			if (entry->type != $5->type) {
				cout << entry->type << ", " << $5->type << ": Types don't match...\n";
				exit(0);
			}
			$$ = new Node();
			$$->code = $5->code + "1,=," + string($1) + "," + $5->place + "\n";
			$$->type = entry->type;
		}
		|	IDENTIFIER COLON TYPE ARRAY_OPEN Expression ARRAY_CLOSE
		{	parse_tree.push_back("Formal -> IDENTIFIER COLON TYPE ARRAY_OPEN Expression ARRAY_CLOSE");
			SymbolTableEntry* entry = (SymbolTableEntry*) calloc(1, sizeof(SymbolTableEntry));
			entry->type = string($3) + "[]";
			symbolTable.insert($1, entry);
			// symbolTable.printTableInts();
			$$ = emptyNode;
		}
		|	IDENTIFIER COLON TYPE 
		{	parse_tree.push_back("Formal -> IDENTIFIER COLON TYPE");
			SymbolTableEntry* entry = (SymbolTableEntry*) calloc(1, sizeof(SymbolTableEntry));
			entry->type = string($3);
			symbolTable.insert($1, entry);
			// symbolTable.printTableInts();
			$$ = emptyNode;
		}
		;
Expression:
		IDENTIFIER OP_ASGN Expression
		{	parse_tree.push_back("Expression -> IDENTIFIER OP_ASGN Expression");
			SymbolTableEntry *entry = symbolTable.lookup($1);
			if (entry == NULL) {
				cout << $1 << ": Variable not found...\n";
				exit(0);
			}
			if (entry->type != $3->type) {
				cout << entry->type << ", " << $3->type << ": Types don't match...\n";
				exit(0);
			}
			$$ = new Node();
			$$->code = $3->code + "1,=," + string($1) + "," + $3->place + "\n";
			$$->type = entry->type;
		}
		|	IDENTIFIER ARRAY_OPEN Expression ARRAY_CLOSE OP_ASGN Expression
		{	parse_tree.push_back("Expression -> IDENTIFIER ARRAY_OPEN Expression ARRAY_CLOSE OP_ASGN Expression");
		}
		|	IDENTIFIER PARAN_OPEN Arguments_list_opt PARAN_CLOSE
		{	parse_tree.push_back("Expression -> IDENTIFIER PARAN_OPEN Arguments_list_opt PARAN_CLOSE");
		}
		|	BLOCK_BEGIN Expression BLOCK_END AT TYPE DOT IDENTIFIER PARAN_OPEN Arguments_list_opt PARAN_CLOSE
		{	parse_tree.push_back("Expression -> BLOCK_BEGIN Expression BLOCK_END AT TYPE DOT IDENTIFIER PARAN_OPEN Arguments_list_opt PARAN_CLOSE");
		}
		|	Expression DOT IDENTIFIER PARAN_OPEN Arguments_list_opt PARAN_CLOSE
		{	parse_tree.push_back("Expression -> Expression DOT IDENTIFIER PARAN_OPEN Arguments_list_opt PARAN_CLOSE");
		}
		|	Conditionals
		{	parse_tree.push_back("Expression -> Conditionals");
		}
		|	Loops
		{	parse_tree.push_back("Expression -> Loops");
		}
		|	Block_Expression
		{	parse_tree.push_back("Expression -> Block_Expression");
			$$ = $1;
		}
		|	Let_Expression
		{	parse_tree.push_back("Expression -> Let_Expression");
		}
		|	KEY_NEW TYPE
		{	parse_tree.push_back("Expression -> KEY_NEW TYPE");
		}
		|	KEY_ISVOID BLOCK_BEGIN Expression BLOCK_END
		{	parse_tree.push_back("Expression -> KEY_ISVOID BLOCK_BEGIN Expression BLOCK_END");
		}
		|	Return_statement
		{	parse_tree.push_back("Expression -> Return_statement");
		}
		|	Break_statement
		{	parse_tree.push_back("Expression -> Break_statement");
		}
		|	Continue_statement
		{	parse_tree.push_back("Expression -> Continue_statement");
		}
		|	Expression OP_LOGICAL_OR Expression
		{	parse_tree.push_back("Expression -> Expression OP_LOGICAL_OR Expression");
		}
		|	Expression OP_LOGICAL_AND Expression
		{	parse_tree.push_back("Expression -> Expression OP_LOGICAL_AND Expression");
		}
		|	Expression OP_BITWISE_OR Expression
		{	parse_tree.push_back("Expression -> Expression OP_BITWISE_OR Expression");
		}
		|	Expression OP_BITWISE_XOR Expression
		{	parse_tree.push_back("Expression -> Expression OP_BITWISE_XOR Expression");
		}
		|	Expression OP_BITWISE_AND Expression
		{	parse_tree.push_back("Expression -> Expression OP_BITWISE_AND Expression");
		}
		|	Expression OP_RELATIONAL_EQ Expression
		{	parse_tree.push_back("Expression -> Expression OP_RELATIONAL_EQ Expression");
		}
		|	Expression OP_RELATIONAL_IEQ Expression
		{	parse_tree.push_back("Expression -> Expression OP_RELATIONAL_IEQ Expression");
		}
		|	Expression OP_ARITHMETIC_B_AD Expression
		{	parse_tree.push_back("Expression -> Expression OP_ARITHMETIC_B_AD Expression"); 
			$$ = new Node();
			$$->place = newTemp();
			if ($1->type == "Int" && $3->type == "Int") {
				$$->code = $1->code + $3->code + "1," + $2 + "," + $$->place + "," + ($1->place) + "," + ($3->place) + "\n";
				$$->type = $1->type;
			} else {
				cout << "Operands not of type Int in B_AD" << endl;
				exit(0);
			}
			// cout << "here in expresseion temp = " << $$->place << "\n";
			// cout << "$$->code = " << $$->code << "\n";
		}
		|	Expression OP_ARITHMETIC_B_MU Expression
		{	parse_tree.push_back("Expression -> Expression OP_ARITHMETIC_B_MU Expression"); 
			$$ = new Node();
			$$->place = newTemp();
			if ($1->type == "Int" && $3->type == "Int") {
				$$->code = $1->code + $3->code + "1," + $2 + "," + $$->place + "," + ($1->place) + "," + ($3->place) + "\n";
				$$->type = $1->type;
			} else {
				cout << "Operands not of type Int in B_MU" << endl;
				exit(0);
			}
			// cout << "here in expresseion temp = " << $$->place << "\n";
			// cout << "$$->code = " << $$->code << "\n";
		}
		|	OP_ARITHMETIC_U Expression
		{	parse_tree.push_back("Expression -> OP_ARITHMETIC_U Expression"); 
			$$ = new Node();
			$$->place = newTemp();
			if ($2->type == "Int") {
				$$->code = $2->code + "1,-," + $$->place + ",0," + ($2->place) + "\n";
				$$->type = $2->type;
			} else {
				cout << "Operands not of type Int in U" << endl;
				exit(0);
			}
			// cout << "here in expresseion temp = " << $$->place << "\n";
			// cout << "$$->code = " << $$->code << "\n";
		}
		|	KEY_NOT Expression
		{	parse_tree.push_back("Expression -> KEY_NOT Expression");
		}
		|	PARAN_OPEN Expression PARAN_CLOSE
		{	parse_tree.push_back("Expression -> PARAN_OPEN Expression PARAN_CLOSE");
			$$ = $2;
		}
		|	IDENTIFIER
		{	parse_tree.push_back("Expression -> IDENTIFIER"); 
			SymbolTableEntry *entry = symbolTable.lookup($1);
			if (entry){
				$$ = new Node();
				$$->place = $1;
				$$->type = entry->type;
				$$->code = "";
			} else {
				cout << "ERROR :- VARIABLE (" << $1 << ") NOT FOUND\n";
				exit(0);
			}
		}
		|	IDENTIFIER ARRAY_OPEN Expression ARRAY_CLOSE
		{	parse_tree.push_back("Expression -> IDENTIFIER ARRAY_OPEN Expression ARRAY_CLOSE");
		}
		|	ARRAY_OPEN Expressions ARRAY_CLOSE
		{	parse_tree.push_back("Expression -> ARRAY_OPEN Expressions ARRAY_CLOSE");
		}
		|	KEY_TRUE
		{	parse_tree.push_back("Expression -> KEY_TRUE");
		}
		|	KEY_FALSE
		{	parse_tree.push_back("Expression -> KEY_FALSE");
		}
		|	INTEGER
		{	parse_tree.push_back("Expression -> INTEGER");
			$$ = new Node();
			$$->place = to_string($1);
			$$->code = "";
			$$->type = "Int";
		}
		|	STRING
		{	parse_tree.push_back( "Expression -> STRING");
			$$ = new Node();
			$$->place = string($1);
			$$->code = "";
			$$->type = "String";
		}
		;
Conditionals:
		Case
		{	parse_tree.push_back("Conditionals -> Case");
		} 
		|	If_then_else
		{	parse_tree.push_back("Conditionals -> If_then_else");
		}
		;
Loops:
		While
		{	parse_tree.push_back("Loops -> While");
		}
		|	For
		{	parse_tree.push_back("Loops -> For");
		}
		|	Do_while
		{	parse_tree.push_back("Loops -> Do_while");
		}
		;
Arguments_list_opt:
		Arguments_list
		{	parse_tree.push_back("Arguments_list_opt -> Arguments_list");
		}
		|
		{	parse_tree.push_back ("Arguments_list_opt -> EMPTY");
		}
		;
Arguments_list:
		Arguments_list COMMA Expression
		{	parse_tree.push_back("Arguments_list -> Arguments_list COMMA Expression");
		}
		|	Expression
		{	parse_tree.push_back("Arguments_list -> Expression");
		}
		;
Case:
		KEY_CASE Expression KEY_OF Actions KEY_ESAC
		{	parse_tree.push_back("Case -> KEY_CASE Expression KEY_OF Actions KEY_ESAC");
		}
		;
Actions:
		Action
		{	parse_tree.push_back("Actions -> Action");
		}
		|	Action Actions
		{	parse_tree.push_back("Actions -> Action Actions");
		}
		;
Action:
		IDENTIFIER COLON TYPE OP_IMPLIES Expression STMT_TERMINATOR
		{	parse_tree.push_back("Action -> IDENTIFIER COLON TYPE OP_IMPLIES Expression STMT_TERMINATOR");
		}
		;
If_then_else:
		KEY_IF Expression KEY_THEN Expression KEY_ELSE Expression KEY_FI
		{	parse_tree.push_back("If_then_else -> KEY_IF Expression KEY_THEN Expression KEY_ELSE Expression KEY_FI");
		}
		;
While:
		KEY_WHILE Expression KEY_LOOP Expression KEY_POOL
		{	parse_tree.push_back("While -> KEY_WHILE Expression KEY_LOOP Expression KEY_POOL");
		}
		;
For:
		KEY_FOR PARAN_OPEN Expression STMT_TERMINATOR Expression STMT_TERMINATOR Expression PARAN_CLOSE KEY_LOOP Expression KEY_POOL
		{	parse_tree.push_back("For -> KEY_FOR PARAN_OPEN Expression STMT_TERMINATOR Expression STMT_TERMINATOR Expression PARAN_CLOSE KEY_LOOP Expression KEY_POOL");
		}
		;
Do_while:
		KEY_DO KEY_LOOP Expression KEY_POOL KEY_WHILE BLOCK_BEGIN Expression BLOCK_END
		{	parse_tree.push_back("Do_while -> KEY_DO KEY_LOOP Expression KEY_POOL KEY_WHILE BLOCK_BEGIN Expression BLOCK_END");
		}
		;
Break_statement:
		KEY_BREAK
		{	parse_tree.push_back("Break_statement -> KEY_BREAK");
		}
		;
Continue_statement:
		KEY_CONTINUE
		{	parse_tree.push_back("Continue_statement -> KEY_CONTINUE");
		}
		;
Return_statement:
		KEY_RETURN BLOCK_BEGIN Expression BLOCK_END
		{	parse_tree.push_back("Return_statement -> KEY_RETURN BLOCK_BEGIN Expression BLOCK_END");
		}
		;
Block_Expression:
		BLOCK_BEGIN Block_list BLOCK_END
		{	parse_tree.push_back("Block_Expression -> BLOCK_BEGIN Block_list BLOCK_END");
			$$ = new Node();
			$$->code = $2->code;
			$$->type = $2->type;
		}
		;
Block_list:
		Block_list Expression STMT_TERMINATOR
		{	parse_tree.push_back("Block_list -> Block_list Expression STMT_TERMINATOR");
			$$ = new Node();
			$$->code = $1->code + $2->code;
			$$->type = $2->type;
		}
		|	Expression STMT_TERMINATOR
		{	parse_tree.push_back("Block_list -> Expression STMT_TERMINATOR");
			$$ = new Node();
			$$->code = $1->code;
			$$->type = $1->type;
		}
		;
Let_Expression:
		KEY_LET Formal Formals KEY_IN BLOCK_BEGIN Expression BLOCK_END
		{	parse_tree.push_back("Let_Expression -> KEY_LET Formal Formals KEY_IN BLOCK_BEGIN Expression BLOCK_END");
		}
		;
Expressions:
		Expressions COMMA Expression
		{	parse_tree.push_back( "Expressions -> Expressions COMMA Expression");
		}
		|	Expression
		{	parse_tree.push_back("Expressions -> Expression");
		}
		;
Formals:
		Formals COMMA Formal
		{	parse_tree.push_back("Formals -> Formals COMMA Formal");
		}
		|
		{	parse_tree.push_back("Formals -> EMPTY");
		}
		;
%%

int main(int argc, char **argv) {
	/***********************************************************************************/
	

	/***********************************************************************************/
	++argv, --argc;
    string of = "";
	if (argc > 0){
		yyin = fopen(argv[0], "r");
        of = get_filename(argv[0]);
    }
	else{
		yyin = stdin;
        of = "parser.html";
    }
	do {
		yyparse();
	} while (!feof(yyin));

	reverse(parse_tree.begin() ,parse_tree.end());

	// cout << "Printing the parse tree" << endl;
	// print_pretty(parse_tree ,of);

	/*for (int i = 0; i < parse_tree.size(); i++) {
		cout << parse_tree[i] << endl;
	}*/


	return 0;
}

void yyerror(const char* s) {
	for (int i = 0; i < parse_tree.size(); i++) {
		cout << parse_tree[i] << endl;
	}
	fprintf(stderr, "Parse error: %s", s);
	exit(1);
}