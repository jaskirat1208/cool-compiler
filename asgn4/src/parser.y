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
vector<string> ircode;
queue<string> queueFunc;
stack<SymbolTable*> envStack;
SymbolTable* currTable;
SymbolTable* symbolTable = NULL;
int i = 0;
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
%left <str> OP_RELATIONAL_IEQ
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
%type <intValue> M
%type <node> N
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
		KEY_CLASS TYPE Inheritance Implement_Interface SCOPE_START BLOCK_BEGIN Features_list_opt BLOCK_END SCOPE_END
		{	parse_tree.push_back("Class -> KEY_CLASS TYPE Inheritance Implement_Interface BLOCK_BEGIN Features_list_opt BLOCK_END");
			$$ = emptyNode;
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
			$$ = emptyNode;
		}
		|
		{	parse_tree.push_back("Features_list_opt -> EMPTY");
			$$ = emptyNode;
		}
		;
Features_list:
		Features_list Feature STMT_TERMINATOR
		{	parse_tree.push_back("Features_list -> Features_list Feature STMT_TERMINATOR");
			$$ = emptyNode;
		}
		|	Feature STMT_TERMINATOR
		{	parse_tree.push_back("Features_list -> Feature STMT_TERMINATOR");
			$$ = emptyNode;
		}
		;
Feature:
		IDENTIFIER SCOPE_START PARAN_OPEN Formal_params_list_opt PARAN_CLOSE COLON TYPE BLOCK_BEGIN M Expression BLOCK_END SCOPE_END
		{	parse_tree.push_back("Feature -> IDENTIFIER PARAN_OPEN Formal_params_list_opt PARAN_CLOSE COLON TYPE BLOCK_BEGIN Expression BLOCK_END");
			$$ = $10;
			SymbolTableEntry* entry = (SymbolTableEntry*) calloc(1, sizeof(SymbolTableEntry));
			entry->type = string($7);
			entry->isFeat = true;
			entry->paramCount = $4->paramCount;
			symbolTable->insert(string($1), entry);
			ircode = backpatchFeat($9, string($1), ircode);
			// ircode.push_back("1,ret\n");
		}
		|	Formal
		{	parse_tree.push_back("Feature -> Formal");
			$$ = $1;
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
			$$ = $1;
		}
		|
		{	parse_tree.push_back("Formal_params_list_opt -> EMPTY");
			$$ = emptyNode;
		}
		;
Formal_params_list:
		Formal_params_list COMMA Formal_param
		{	parse_tree.push_back("Formal_params_list -> Formal_params_list COMMA Formal_param");
			$$ = new Node();
			$$->paramCount = $1->paramCount + 1;
		}
		|	Formal_param
		{	parse_tree.push_back("Formal_params_list -> Formal_param");
			$$ = new Node();
			$$->paramCount = 1;
		}
		;
Formal_param:
		IDENTIFIER COLON TYPE
		{	parse_tree.push_back("Formal_param -> IDENTIFIER COLON TYPE");
			SymbolTableEntry* entry = (SymbolTableEntry*) calloc(1, sizeof(SymbolTableEntry));
			entry->type = string($3);
			symbolTable->insert($1, entry);
			$$ = emptyNode;
		}
		|	IDENTIFIER COLON TYPE ARRAY_OPEN ARRAY_CLOSE
		{	parse_tree.push_back("Formal_param -> IDENTIFIER COLON TYPE ARRAY_OPEN ARRAY_CLOSE");
			SymbolTableEntry* entry = (SymbolTableEntry*) calloc(1, sizeof(SymbolTableEntry));
			entry->type = string($3) + "[]";
			symbolTable->insert($1, entry);
			$$ = emptyNode;
		}
		;
Formal:
		IDENTIFIER COLON TYPE ARRAY_OPEN Expression ARRAY_CLOSE OP_ASGN Expression
		{	parse_tree.push_back("Formal -> IDENTIFIER COLON TYPE ARRAY_OPEN Expression ARRAY_CLOSE OP_ASGN Expression");
			SymbolTableEntry* entry = (SymbolTableEntry*) calloc(1, sizeof(SymbolTableEntry));
			entry->type = string($3) + "[]";
			entry->isArray = true;
			entry->arrayLength = $8->arrayLength;
			if(entry->arrayLength != stoi($5->place)) {
				cout << $1 << ": Length mismatch in array initialization...\n";
				exit(0);
			}
			entry->arrayList = $8->arrayList;
			string elements = to_string(($8->arrayList)[0]);
			for (int i = 1; i < entry->arrayLength; i++) {
				elements = elements + "," + to_string(($8->arrayList)[i]);
			}
			ircode.push_back("1,=,array," + string($1) + "," + to_string(entry->arrayLength) + "," + elements + "\n");
			symbolTable->insert($1, entry);
		}
		|	IDENTIFIER COLON TYPE ARRAY_OPEN ARRAY_CLOSE OP_ASGN Expression
		{	parse_tree.push_back("Formal -> IDENTIFIER COLON TYPE ARRAY_OPEN ARRAY_CLOSE OP_ASGN Expression");
			SymbolTableEntry* entry = (SymbolTableEntry*) calloc(1, sizeof(SymbolTableEntry));
			entry->type = string($3) + "[]";
			entry->isArray = true;
			entry->arrayLength = $7->arrayLength;
			entry->arrayList = $7->arrayList;
			string elements = to_string(($7->arrayList)[0]);
			for (int i = 1; i < entry->arrayLength; i++) {
				elements = elements + "," + to_string(($7->arrayList)[i]);
			}
			ircode.push_back("1,=,array," + string($1) + "," + to_string(entry->arrayLength) + "," + elements + "\n");
			symbolTable->insert($1, entry);
		}
		|	IDENTIFIER COLON TYPE OP_ASGN Expression
		{	parse_tree.push_back("Formal -> IDENTIFIER COLON TYPE OP_ASGN Expression");
			SymbolTableEntry* entry = (SymbolTableEntry*) calloc(1, sizeof(SymbolTableEntry));
			entry->type = string($3);
			symbolTable->insert($1, entry);
			// symbolTable->printSymbolTable();
			if (entry->type != $5->type) {
				cout << entry->type << ", " << $5->type << ": Types don't match...\n";
				exit(0);
			}
			$$ = new Node();
			ircode.push_back("1,=," + string($1) + "," + $5->place + "\n");
			$$->type = entry->type;
		}
		|	IDENTIFIER COLON TYPE ARRAY_OPEN Expression ARRAY_CLOSE
		{	parse_tree.push_back("Formal -> IDENTIFIER COLON TYPE ARRAY_OPEN Expression ARRAY_CLOSE");
			SymbolTableEntry* entry = (SymbolTableEntry*) calloc(1, sizeof(SymbolTableEntry));
			entry->type = string($3) + "[]";
			entry->isArray = true;
			entry->arrayLength = stoi($5->place);
			vector<int> zeroList;
			zeroList.push_back(0);
			string elements = "0";
			for (int i = 1; i < entry->arrayLength; i++) {
				elements = elements + ",0";
				zeroList.push_back(0);
			}
			entry->arrayList = zeroList;
			ircode.push_back("1,=,array," + string($1) + "," + to_string(entry->arrayLength) + "," + elements + "\n");
			symbolTable->insert($1, entry);
			// symbolTable->printSymbolTable();
			$$ = emptyNode;
		}
		|	IDENTIFIER COLON TYPE 
		{	parse_tree.push_back("Formal -> IDENTIFIER COLON TYPE");
			SymbolTableEntry* entry = (SymbolTableEntry*) calloc(1, sizeof(SymbolTableEntry));
			entry->type = string($3);
			symbolTable->insert($1, entry);
			// symbolTable->printSymbolTable();
			$$ = emptyNode;
		}
		;
Expression:
		IDENTIFIER OP_ASGN Expression
		{	parse_tree.push_back("Expression -> IDENTIFIER OP_ASGN Expression");
			SymbolTableEntry *entry = symbolTable->lookup($1);
			if (entry == NULL) {
				cout << $1 << ": Variable not found...\n";
				exit(0);
			}
			if (entry->type != $3->type) {
				cout << entry->type << ", " << $3->type << ": Types don't match...\n";
				exit(0);
			}
			$$ = new Node();
			ircode.push_back("1,=," + string($1) + "," + $3->place + "\n");
			// $$->nextlist = NULL;
			$$->type = entry->type;
		}
		|	IDENTIFIER ARRAY_OPEN Expression ARRAY_CLOSE OP_ASGN Expression
		{	parse_tree.push_back("Expression -> IDENTIFIER ARRAY_OPEN Expression ARRAY_CLOSE OP_ASGN Expression");
			SymbolTableEntry *entry = symbolTable->lookup($1);
			if (entry == NULL) {
				cout << $1 << ": Variable not found...\n";
				exit(0);
			}
			string tempType = $6->type + "[]";
			if (entry->type != tempType) {
				cout << entry->type << ", " << $6->type << ": Types don't match...\n";
				exit(0);
			}
			if (stoi($3->place) >= entry->arrayLength) {
				cout << $1 << ": Index out of bound...\n";
				exit(0);
			}
			$$ = new Node();
			$$->type = "Int";
			ircode.push_back("1,=,arrWrite," + string($1) + "," + $3->place + "," + $6->place + "\n");
		}
		|	IDENTIFIER PARAN_OPEN Arguments_list_opt PARAN_CLOSE
		{	parse_tree.push_back("Expression -> IDENTIFIER PARAN_OPEN Arguments_list_opt PARAN_CLOSE");
			SymbolTableEntry *entry = symbolTable->lookup($1);
			if (entry == NULL) {
				cout << $1 << ": Feature not found...\n";
				exit(0);
			} else if (!entry->isFeat) {
				cout << $1 << ": Feature not found...\n";
				exit(0);
			} else if (entry->paramCount != $3->paramCount) {
				cout << $1 << ": Feature call has " << $3->paramCount << " arguments, but required is " << entry->paramCount << "...\n";
				exit(0);
			}
			$$ = new Node();
			$$->place = newTemp();
			$$->type = entry->type;
			while (!queueFunc.empty()) {
				ircode.push_back("1,param," + queueFunc.front() + "\n");
				queueFunc.pop();
			}
			ircode.push_back("1,call," + string($1) + "," + $$->place + "\n");
		}
		|	BLOCK_BEGIN Expression BLOCK_END AT TYPE DOT IDENTIFIER PARAN_OPEN Arguments_list_opt PARAN_CLOSE
		{	parse_tree.push_back("Expression -> BLOCK_BEGIN Expression BLOCK_END AT TYPE DOT IDENTIFIER PARAN_OPEN Arguments_list_opt PARAN_CLOSE");
		}
		|	Expression DOT IDENTIFIER PARAN_OPEN Arguments_list_opt PARAN_CLOSE
		{	parse_tree.push_back("Expression -> Expression DOT IDENTIFIER PARAN_OPEN Arguments_list_opt PARAN_CLOSE");
		}
		|	Conditionals
		{	parse_tree.push_back("Expression -> Conditionals");
			$$ = $1;
		}
		|	Loops
		{	parse_tree.push_back("Expression -> Loops");
			$$ = $1;
		}
		|	Block_Expression
		{	parse_tree.push_back("Expression -> Block_Expression");
			$$ = $1;
		}
		|	Let_Expression
		{	parse_tree.push_back("Expression -> Let_Expression");
			$$ = $1;
		}
		|	KEY_NEW TYPE
		{	parse_tree.push_back("Expression -> KEY_NEW TYPE");
		}
		|	KEY_ISVOID BLOCK_BEGIN Expression BLOCK_END
		{	parse_tree.push_back("Expression -> KEY_ISVOID BLOCK_BEGIN Expression BLOCK_END");
		}
		|	Return_statement
		{	parse_tree.push_back("Expression -> Return_statement");
			$$ = $1;
		}
		|	Break_statement
		{	parse_tree.push_back("Expression -> Break_statement");
		}
		|	Continue_statement
		{	parse_tree.push_back("Expression -> Continue_statement");
		}
		|	Expression OP_LOGICAL_OR M Expression
		{	parse_tree.push_back("Expression -> Expression OP_LOGICAL_OR Expression");
			if ($1->type != "Bool" || $4->type != "Bool") {
				cout << "Operands not of type Bool in OR" << endl;
				exit(0);
			}
			$$ = new Node();
			$$->place = newTemp();
			$$->type = "Bool";
			ircode = backpatch($1->falselist, $3, ircode);
			$$->truelist = merge($1->truelist, $4->truelist);
			$$->falselist = $4->falselist;
		}
		|	Expression OP_LOGICAL_AND M Expression
		{	parse_tree.push_back("Expression -> Expression OP_LOGICAL_AND Expression");
			if ($1->type != "Bool" || $4->type != "Bool") {
				cout << "Operands not of type Bool in AND" << endl;
				exit(0);
			}
			$$ = new Node();
			$$->place = newTemp();
			$$->type = "Bool";
			ircode = backpatch($1->truelist, $3, ircode);
			$$->truelist = $4->truelist;
			$$->falselist = merge($1->falselist, $4->falselist);
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
			if ($1->type != "Int" || $3->type != "Int") {
				cout << "Operands not of type Int in EQ" << endl;
				exit(0);
			}
			$$ = new Node();
			$$->place = newTemp();
			$$->type = "Bool";
			$$->truelist = makelist(ircode.size());
			$$->falselist = makelist(ircode.size() + 1);
			ircode.push_back("1,ifgoto,eq," + $1->place + "," + $3->place + ",");
			ircode.push_back("1,goto,");
		}
		|	Expression OP_RELATIONAL_IEQ Expression
		{	parse_tree.push_back("Expression -> Expression OP_RELATIONAL_IEQ Expression");
			if ($1->type != "Int" || $3->type != "Int") {
				cout << "Operands not of type Int in IEQ" << endl;
				exit(0);
			}
			$$ = new Node();
			$$->place = newTemp();
			$$->type = "Bool";
			$$->truelist = makelist(ircode.size());
			$$->falselist = makelist(ircode.size() + 1);
			ircode.push_back("1,ifgoto," + dictIeqToString(string($2)) + "," + $1->place + "," + $3->place + ",");
			ircode.push_back("1,goto,");
		}
		|	Expression OP_ARITHMETIC_B_AD Expression
		{	parse_tree.push_back("Expression -> Expression OP_ARITHMETIC_B_AD Expression"); 
			if ($1->type != "Int" || $3->type != "Int") {
				cout << "Operands not of type Int in B_AD" << endl;
				exit(0);
			}
			$$ = new Node();
			$$->place = newTemp();
			$$->type = "Int";
			ircode.push_back("1," + string($2) + "," + $$->place + "," + ($1->place) + "," + ($3->place) + "\n");
		}
		|	Expression OP_ARITHMETIC_B_MU Expression
		{	parse_tree.push_back("Expression -> Expression OP_ARITHMETIC_B_MU Expression"); 
			if ($1->type != "Int" || $3->type != "Int") {
				cout << "Operands not of type Int in B_MU" << endl;
				exit(0);
			}
			$$ = new Node();
			$$->place = newTemp();
			$$->type = "Int";
			ircode.push_back("1," + string($2) + "," + $$->place + "," + ($1->place) + "," + ($3->place) + "\n");
		}
		|	OP_ARITHMETIC_U Expression
		{	parse_tree.push_back("Expression -> OP_ARITHMETIC_U Expression"); 
			if ($2->type != "Int") {
				cout << "Operands not of type Int in U" << endl;
				exit(0);
			}
			$$ = new Node();
			$$->place = newTemp();
			$$->type = "Int";
			ircode.push_back("1,-," + $$->place + ",0," + ($2->place) + "\n");
		}
		|	KEY_NOT Expression
		{	parse_tree.push_back("Expression -> KEY_NOT Expression");
			if ($2->type != "Bool") {
				cout << "Operand not of type Bool in NOT" << endl;
				exit(0);
			}
			$$ = $2;
			$$->place = newTemp();
			vector<int> temp = $$->falselist;
			$$->falselist = $$->truelist;
			$$->truelist = temp;
		}
		|	PARAN_OPEN Expression PARAN_CLOSE
		{	parse_tree.push_back("Expression -> PARAN_OPEN Expression PARAN_CLOSE");
			$$ = $2;
		}
		|	IDENTIFIER
		{	parse_tree.push_back("Expression -> IDENTIFIER"); 
			SymbolTableEntry *entry = symbolTable->lookup($1);
			if (entry == NULL){
				cout << string($1) << ": Variable not found...\n";
				exit(0);
			}
			$$ = new Node();
			$$->place = $1;
			$$->type = entry->type;
		}
		|	IDENTIFIER ARRAY_OPEN Expression ARRAY_CLOSE
		{	parse_tree.push_back("Expression -> IDENTIFIER ARRAY_OPEN Expression ARRAY_CLOSE");
			SymbolTableEntry *entry = symbolTable->lookup($1);
			if (entry == NULL) {
				cout << $1 << ": Variable not found...\n";
				exit(0);
			}
			if (stoi($3->place) >= entry->arrayLength) {
				cout << $1 << ": Index out of bound...\n";
				exit(0);
			}
			$$ = new Node();
			$$->place = newTemp();
			$$->type = $3->type;
			// lineNo, =, arrRead, destination, source, index
			ircode.push_back("1,=,arrRead," + $$->place + "," + string($1) + "," + $3->place + "\n");
		}
		|	ARRAY_OPEN Expressions ARRAY_CLOSE
		{	parse_tree.push_back("Expression -> ARRAY_OPEN Expressions ARRAY_CLOSE");
			$$ = $2;
		}
		|	KEY_TRUE
		{	parse_tree.push_back("Expression -> KEY_TRUE");
			$$ = new Node();
			$$->place = newTemp();
			$$->type = "Bool";
			$$->truelist = makelist(ircode.size());
			ircode.push_back("1,goto,");
		}
		|	KEY_FALSE
		{	parse_tree.push_back("Expression -> KEY_FALSE");
			$$ = new Node();
			$$->type = "Bool";
			$$->falselist = makelist(ircode.size());
			ircode.push_back("1,goto,");
		}
		|	INTEGER
		{	parse_tree.push_back("Expression -> INTEGER");
			$$ = new Node();
			$$->place = to_string($1);
			$$->type = "Int";
		}
		|	STRING
		{	parse_tree.push_back( "Expression -> STRING");
			$$ = new Node();
			$$->place = string($1);
			$$->type = "String";
		}
		;
Conditionals:
		Case
		{	parse_tree.push_back("Conditionals -> Case");
		} 
		|	If_then_else
		{	parse_tree.push_back("Conditionals -> If_then_else");
			$$ = $1;
		}
		;
Loops:
		While
		{	parse_tree.push_back("Loops -> While");
			$$ = $1;
		}
		|	For
		{	parse_tree.push_back("Loops -> For");
			$$ = $1;
		}
		|	Do_while
		{	parse_tree.push_back("Loops -> Do_while");
			$$ = $1;
		}
		;
Arguments_list_opt:
		Arguments_list
		{	parse_tree.push_back("Arguments_list_opt -> Arguments_list");
			$$ = $1;
		}
		|
		{	parse_tree.push_back ("Arguments_list_opt -> EMPTY");
			$$ = emptyNode;
		}
		;
Arguments_list:
		Arguments_list COMMA Expression
		{	parse_tree.push_back("Arguments_list -> Arguments_list COMMA Expression");
			queueFunc.push($3->place);
			$$ = new Node();
			$$->paramCount = $1->paramCount + 1;
		}
		|	Expression
		{	parse_tree.push_back("Arguments_list -> Expression");
			queueFunc = queue<string>();
			queueFunc.push($1->place);
			$$ = new Node();
			$$->paramCount = 1;
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
		KEY_IF Expression KEY_THEN M Expression N KEY_ELSE M Expression KEY_FI
		{	parse_tree.push_back("If_then_else -> KEY_IF Expression KEY_THEN Expression KEY_ELSE Expression KEY_FI");
			$$ = new Node();
			ircode = backpatch($2->truelist, $4, ircode);
			ircode = backpatch($2->falselist, $8, ircode);
			vector<int> temp = merge($5->nextlist, $6->nextlist);
			$$->nextlist = merge(temp, $9->nextlist);
		}
		;
While:
		KEY_WHILE M Expression KEY_LOOP M Expression KEY_POOL
		{	parse_tree.push_back("While -> KEY_WHILE Expression KEY_LOOP Expression KEY_POOL");
			$$ = new Node();
			ircode = backpatch($6->nextlist, $2, ircode);
			ircode = backpatch($3->truelist, $5, ircode);
			$$->nextlist = $3->falselist;
			ircode.push_back("1,goto,label" + to_string($2) + "\n");
		}
		;
For:
		KEY_FOR PARAN_OPEN Expression STMT_TERMINATOR M Expression STMT_TERMINATOR 
		M Expression PARAN_CLOSE KEY_LOOP M Expression KEY_POOL
		{	parse_tree.push_back("For -> KEY_FOR PARAN_OPEN Expression STMT_TERMINATOR Expression STMT_TERMINATOR Expression PARAN_CLOSE KEY_LOOP Expression KEY_POOL");
			// $$ = new Node();
			
			// ircode.push_back("anu1,goto,label" + to_string($8) + "\n");
			// ircode = backpatch($13->nextlist, $8, ircode);
			// ircode = backpatch($6->truelist, $12, ircode);

			// $9->nextlist = $6->truelist;
			// cout << "bp for $9, nextlist = " << ($9->nextlist).size() << "\n";
			// ircode = backpatch($9->nextlist, $5, ircode);
			// $12->nextlist = $8->nextlist;
			// $$->nextlist = $6->falselist;
			// ircode.push_back("b1,goto,label" + to_string($5) + "\n");
		}
		;
Do_while:
		KEY_DO KEY_LOOP M Expression KEY_POOL KEY_WHILE BLOCK_BEGIN M Expression BLOCK_END
		{	parse_tree.push_back("Do_while -> KEY_DO KEY_LOOP Expression KEY_POOL KEY_WHILE BLOCK_BEGIN Expression BLOCK_END");
			$$ = new Node();
			ircode = backpatch($4->nextlist, $8, ircode);
			ircode = backpatch($9->truelist, $3, ircode);
			// ircode.push_back("1,goto,label" + to_string($8) + "\n");
			$$->nextlist = $9->falselist;
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
			$$ = $3;
			ircode.push_back("1,ret," + $3->place + "\n");
		}
		;
Block_Expression:
		BLOCK_BEGIN Block_list BLOCK_END
		{	parse_tree.push_back("Block_Expression -> BLOCK_BEGIN Block_list BLOCK_END");
			$$ = new Node();
			$$->type = $2->type;
			$$->nextlist = $2->nextlist;
		}
		;
Block_list:
		Block_list M Expression STMT_TERMINATOR
		{	parse_tree.push_back("Block_list -> Block_list Expression STMT_TERMINATOR");
			$$ = new Node();
			$$->type = $3->type;
			ircode = backpatch($1->nextlist, $2, ircode);
			$$->nextlist = $3->nextlist;
		}
		|	Expression STMT_TERMINATOR
		{	parse_tree.push_back("Block_list -> Expression STMT_TERMINATOR");
			$$ = new Node();
			$$->type = $1->type;
			$$->nextlist = $1->nextlist;
		}
		;
Let_Expression:
		KEY_LET SCOPE_START Formal Formals KEY_IN BLOCK_BEGIN Expression BLOCK_END SCOPE_END
		{	parse_tree.push_back("Let_Expression -> KEY_LET Formal Formals KEY_IN BLOCK_BEGIN Expression BLOCK_END");
			$$ = $7;
		}
		;
Expressions:
		Expressions COMMA Expression
		{	parse_tree.push_back( "Expressions -> Expressions COMMA Expression");
			$$ = new Node();
			$$->arrayLength = $1->arrayLength + 1;
			$$->arrayList = $1->arrayList;
			($$->arrayList).push_back(stoi($3->place));
		}
		|	Expression
		{	parse_tree.push_back("Expressions -> Expression");
			$$ = new Node();
			$$->arrayLength = 1;
			($$->arrayList).push_back(stoi($1->place));
		}
		;
Formals:
		Formals COMMA Formal
		{	parse_tree.push_back("Formals -> Formals COMMA Formal");
			$$ = emptyNode;
		}
		|
		{	parse_tree.push_back("Formals -> EMPTY");
			$$ = emptyNode;
		}
		;
M:
		{	$$ = ircode.size();
		}
		;
N:
		{	$$ = new Node();
			$$->nextlist = makelist(ircode.size());
			ircode.push_back("1,goto,");
		}
		;
SCOPE_START:
		{	envStack.push(symbolTable);
			currTable = new SymbolTable(symbolTable);
			symbolTable = currTable;
			i++;
		}
		;
SCOPE_END:
		{	symbolTable = envStack.top();
			envStack.pop();
		}
%%

int main(int argc, char **argv) {
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

	printIrCode(ircode);

	return 0;
}

void yyerror(const char* s) {
	for (int i = 0; i < parse_tree.size(); i++) {
		cout << parse_tree[i] << endl;
	}
	fprintf(stderr, "Parse error: %s", s);
	exit(1);
}