/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INTEGER = 258,
    KEY_PACKAGE = 259,
    KEY_IMPORT = 260,
    KEY_CLASS = 261,
    KEY_INTERFACE = 262,
    KEY_INHERITS = 263,
    KEY_IMPLEMENTS = 264,
    KEY_RETURN = 265,
    KEY_BREAK = 266,
    KEY_CONTINUE = 267,
    KEY_ISVOID = 268,
    KEY_CASE = 269,
    KEY_OF = 270,
    KEY_ESAC = 271,
    KEY_WHILE = 272,
    KEY_LOOP = 273,
    KEY_POOL = 274,
    KEY_DO = 275,
    KEY_FOR = 276,
    KEY_IF = 277,
    KEY_THEN = 278,
    KEY_ELSE = 279,
    KEY_FI = 280,
    KEY_LET = 281,
    KEY_IN = 282,
    KEY_TRUE = 283,
    KEY_FALSE = 284,
    IDENTIFIER = 285,
    TYPE = 286,
    OP_IMPLIES = 287,
    STRING = 288,
    COLON = 289,
    STMT_TERMINATOR = 290,
    AT = 291,
    DOTSTAR = 292,
    BLOCK_BEGIN = 293,
    BLOCK_END = 294,
    PARAN_OPEN = 295,
    PARAN_CLOSE = 296,
    ARRAY_OPEN = 297,
    ARRAY_CLOSE = 298,
    COMMA = 299,
    OP_ASGN = 300,
    OP_LOGICAL_OR = 301,
    OP_LOGICAL_AND = 302,
    OP_BITWISE_OR = 303,
    OP_BITWISE_XOR = 304,
    OP_BITWISE_AND = 305,
    OP_RELATIONAL_EQ = 306,
    OP_RELATIONAL_IEQ = 307,
    OP_ARITHMETIC_B_AD = 308,
    OP_ARITHMETIC_B_MU = 309,
    KEY_NOT = 310,
    KEY_NEW = 311,
    OP_ARITHMETIC_U = 312,
    DOT = 313
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 22 "src/parser.y" /* yacc.c:1909  */

	int intValue;
	char* str;
	struct Node* node; 

#line 119 "parser.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
