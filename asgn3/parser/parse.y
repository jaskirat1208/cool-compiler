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


%type<strValue> Compilation_unit
%type<strValue> ​Package_declaration
%type<strValue> Program
%type<strValue> Import_declarations
%type<strValue> Import_declaration
%%
/*Grammer Rules*/

Compilation_unit:
		​Package_declaration ​ Import_declarations Program
		;
Package_declaration: 
		| KEY_PACKAGE Package_name STMT_TERMINATOR
		;
Package_name:
		Package_name.IDENTIFIER
		| IDENTIFIER
		;
Import_declarations:
		| Import_declarations Import_declaration 
		| Import_declaration
		;
Import_declaration:
		KEY_IMPORT Package_name STMT_TERMINATOR 
		| KEY_IMPORT Package_name DOTSTAR STMT_TERMINATOR
		;
Program:
		| [[ ​ Class; | ​Interface; ​ ​]]*
		| Classes
		;

Classes: 
		Classes
		| Class
		;
Class:
	class TYPE Inheritance ​Implement_Interface { Features_list_opt }



%%

int main(){
	
}