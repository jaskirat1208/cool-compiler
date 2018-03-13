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

#ifndef YY_YY_PARSE_TAB_H_INCLUDED
# define YY_YY_PARSE_TAB_H_INCLUDED
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
    NEWLINE = 258,
    INTEGER = 259,
    KEY_PACKAGE = 260,
    KEY_IMPORT = 261,
    KEY_CLASS = 262,
    KEY_INTERFACE = 263,
    KEY_INHERITS = 264,
    KEY_IMPLEMENTS = 265,
    KEY_RETURN = 266,
    KEY_NEW = 267,
    KEY_BREAK = 268,
    KEY_CONTINUE = 269,
    KEY_ISVOID = 270,
    KEY_NOT = 271,
    KEY_CASE = 272,
    KEY_OF = 273,
    KEY_ESAC = 274,
    KEY_WHILE = 275,
    KEY_LOOP = 276,
    KEY_POOL = 277,
    KEY_DO = 278,
    KEY_FOR = 279,
    KEY_IF = 280,
    KEY_THEN = 281,
    KEY_ELSE = 282,
    KEY_FI = 283,
    KEY_LET = 284,
    KEY_IN = 285,
    KEY_TRUE = 286,
    KEY_FALSE = 287,
    IDENTIFIER = 288,
    TYPE = 289,
    OP_ASGN = 290,
    OP_IMPLIES = 291,
    STRING = 292,
    COLON = 293,
    STMT_TERMINATOR = 294,
    AT = 295,
    DOT = 296,
    DOTSTAR = 297,
    COMMA = 298,
    BLOCK_BEGIN = 299,
    BLOCK_END = 300,
    PARAN_OPEN = 301,
    PARAN_CLOSE = 302,
    ARRAY_OPEN = 303,
    ARRAY_CLOSE = 304,
    OP_ARITHMETIC_U = 305,
    OP_ARITHMETIC_B = 306,
    OP_RELATIONAL = 307,
    OP_LOGICAL = 308,
    OP_BITWISE = 309
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 17 "src/parse.y" /* yacc.c:1909  */

	int intValue;
	char* str;

#line 114 "parse.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSE_TAB_H_INCLUDED  */
