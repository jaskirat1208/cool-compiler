%{
#include <iostream>
#include <math.h>
#include <set>
#include <string>

using namespace std;
%}

%union {
	int intValue;
	char* strValue;
}

%token DIGIT	
%token NEWLINE	
%token INTEGER	
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
%token<strValue> IDENTIFIER
%token<strValue> TYPE	
%token OP_ASGN 
%token OP_IMPLIES
%token<strValue> STRING	
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

%start<strValue> Compilation_unit
%type<strValue> ​Package_declaration
%type<strValue> Import_declarations
%type<strValue> Program
%type<strValue> Package_name
%type<strValue> Import_declaration
%type<strValue> Sub_Program
%type<strValue> Class
%type<strValue> Interface
%type<strValue> Inheritance
%type<strValue> ​Implement_Interface
%type<strValue> Features_list_opt
%type<strValue> Interface_Inheritance_List
%type<strValue> Interface_features_list_opt
%type<strValue> Interface_features_list
%type<strValue> Interface_feature
%type<strValue> Interfaces_list
%type<strValue> Features_list
%type<strValue> Feature
%type<strValue> Formal_params_list_opt
%type<strValue> Formal
%type<strValue> Formal_params_list
%type<strValue> Formal_param
%type<strValue> Conditionals
%type<strValue> Loops
%type<strValue> Arguments_list_opt
%type<strValue> Arguments_list
%type<strValue> Case
%type<strValue> Actions
%type<strValue> Action
%type<strValue> If_then_else
%type<strValue> While
%type<strValue> For
%type<strValue> Do_while
%type<strValue> Break_statement
%type<strValue> Continue_statement
%type<strValue> Return_statement
%type<strValue> Block_Expression
%type<strValue> Block_list
%type<strValue> Let_Expression
%type<strValue> Expressions
%type<strValue> Formals

/*Grammer Rules*/

Compilation_unit:
		​Package_declaration ​Import_declarations Program
		;
Package_declaration:
		KEY_PACKAGE Package_name STMT_TERMINATOR
		|
		;
Package_name:
		Package_name.IDENTIFIER
		| IDENTIFIER
		;
Import_declarations:
		| Import_declarations Import_declaration 
		| Import_declaration
		|
		;
Import_declaration:
		KEY_IMPORT Package_name STMT_TERMINATOR 
		| KEY_IMPORT Package_name DOTSTAR STMT_TERMINATOR
		;
Program:
		Program Sub_Program STMT_TERMINATOR
		|
		;
Sub_Program:
		Class
		| Interface
		;
Class:
		KEY_CLASS TYPE Inheritance ​Implement_Interface BLOCK_BEGIN Features_list_opt BLOCK_END
		;
Interface:
		KEY_INTERFACE TYPE Interface_Inheritance_List BLOCK_BEGIN Interface_features_list_opt BLOCK_END
		;
Interface_Inheritance_List:
		KEY_INHERITS TYPE 
		| Interface_Inheritance_List COMMA TYPE
		|
		;
Inheritance:
		KEY_INHERITS TYPE
		|
		;
Implement_Interface:
		KEY_IMPLEMENTS Interfaces_list
		|
		;
Interfaces_list:
		Interfaces_list COMMA TYPE
		| TYPE
		;
Features_list_opt:
		Features_list
		|
		;
Features_list:
		Features_list Feature STMT_TERMINATOR
		| Feature STMT_TERMINATOR
		;
Feature:
		IDENTIFIER PARAN_OPEN Formal_params_list_opt PARAN_CLOSE COLON TYPE BLOCK_BEGIN Expression BLOCK_END
		| Formal
		;
Interface_features_list_opt:
		Interface_features_list
		|
		;
Interface_features_list:
		Interface_features_list Interface_feature STMT_TERMINATOR
		| Interface_feature STMT_TERMINATOR
		;
Interface_feature:
		IDENTIFIER PARAN_OPEN Formal_params_list_opt PARAN_CLOSE COLON TYPE
		;
Formal_params_list_opt:
		Formal_params_list
		|
		;
Formal_params_list:
		Formal_params_list COMMA Formal_param
		| Formal_param
		;
Formal_param:
		IDENTIFIER COLON TYPE
		| IDENTIFIER COLON TYPE ARRAY_OPEN ARRAY_CLOSE
		;
Formal:
		IDENTIFIER COLON TYPE ARRAY_OPEN Expression ARRAY_CLOSE OP_ASGN Expression
		| IDENTIFIER COLON TYPE ARRAY_OPEN ARRAY_CLOSE OP_ASGN Expression
		| IDENTIFIER COLON TYPE OP_ASGN Expression
		| IDENTIFIER COLON TYPE ARRAY_OPEN Expression ARRAY_CLOSE
		| IDENTIFIER COLON TYPE
		;
Expression:
		IDENTIFIER OP_ASGN Expression
		| IDENTIFIER PARAN_OPEN Arguments_list_opt PARAN_CLOSE
		| Expression AT TYPE DOT IDENTIFIER PARAN_OPEN Arguments_list_opt PARAN_CLOSE
		| Expression DOT IDENTIFIER PARAN_OPEN Arguments_list_opt PARAN_CLOSE
		| Conditionals
		| Loops
		| Block_Expression
		| Let_Expression
		| KEY_NEW TYPE
		| KEY_ISVOID Expression
		| Return_statement
		| Break_statement
		| Continue_statement
		| Expression OP_ARITHMETIC_B Expression
		| OP_ARITHMETIC_U Expression
		| Expression OP_RELATIONAL Expression
		| Expression OP_LOGICAL Expression
 		| Expression OP_BITWISE Expression
		| KEY_NOT Expression
		| PARAN_OPEN Expression PARAN_CLOSE
		| IDENTIFIER
		| IDENTIFIER ARRAY_OPEN Expression ARRAY_CLOSE
		| ARRAY_OPEN Expression Expression ARRAY_CLOSE
		| KEY_TRUE
		| KEY_FALSE
		| INTEGER
		| STRING
		;
Conditionals:
		Case 
		| If_then_else
		;
Loops:
		While
		| For
		| Do_while
		;
Arguments_list_opt:
		Arguments_list
		|
		;
Arguments_list:
		Arguments_list COMMA Expression
		| Expression
		;
Case:
		KEY_CASE Expression KEY_OF Actions KEY_ESAC
		;
Actions:
		Action
		| Action Actions
		;
Action:
		IDENTIFIER COLON TYPE OP_IMPLIES Expression
		;
If_then_else:
		KEY_IF Expression KEY_THEN Expression else Expression KEY_FI
		;
While:
		KEY_WHILE Expression KEY_LOOP Expression KEY_POOL
		;
For:
		KEY_FOR PARAN_OPEN Expression STMT_TERMINATOR Expression STMT_TERMINATOR Expression PARAN_CLOSE KEY_LOOP Expression KEY_POOL
		;
Do_while:
		KEY_DO KEY_LOOP Expression KEY_POOL KEY_WHILE Expression
		;
Break_statement:
		 KEY_BREAK
		 ;
Continue_statement:
		KEY_CONTINUE
		;
Return_statement:
		KEY_RETURN
		;
Block_Expression:
		BLOCK_BEGIN Block_list BLOCK_END
		;
Block_list:
		Block_list Expression STMT_TERMINATOR
		| Expression STMT_TERMINATOR
		;
Let_Expression:
		KEY_LET Formal Formals KEY_IN Expression
		;
Expressions:
		| 
		| Expressions COMMA Expression
		;
Formals:
		|
		| Formals COMMA Formal
		;
%%

int main(){
	
}