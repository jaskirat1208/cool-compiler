/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "src/parser.y" /* yacc.c:339  */

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

#line 87 "parser.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.tab.h".  */
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
#line 22 "src/parser.y" /* yacc.c:355  */

	int intValue;
	char* str;
	struct Node* node; 

#line 192 "parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 209 "parser.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   582

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  113
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  262

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   313

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   137,   137,   142,   146,   150,   153,   158,   161,   165,
     169,   172,   177,   181,   185,   188,   193,   199,   204,   207,
     211,   215,   219,   223,   227,   231,   234,   239,   244,   249,
     253,   259,   276,   282,   286,   290,   293,   298,   303,   308,
     313,   320,   329,   338,   347,   365,   379,   393,   412,   422,
     438,   460,   492,   495,   498,   502,   506,   510,   514,   517,
     520,   524,   527,   530,   543,   556,   559,   562,   565,   579,
     597,   608,   619,   630,   642,   646,   657,   677,   681,   689,
     696,   702,   710,   713,   719,   723,   727,   733,   738,   743,
     749,   758,   763,   766,   771,   776,   786,   796,   814,   824,
     829,   834,   841,   849,   856,   864,   870,   877,   885,   890,
     895,   899,   905,   912
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTEGER", "KEY_PACKAGE", "KEY_IMPORT",
  "KEY_CLASS", "KEY_INTERFACE", "KEY_INHERITS", "KEY_IMPLEMENTS",
  "KEY_RETURN", "KEY_BREAK", "KEY_CONTINUE", "KEY_ISVOID", "KEY_CASE",
  "KEY_OF", "KEY_ESAC", "KEY_WHILE", "KEY_LOOP", "KEY_POOL", "KEY_DO",
  "KEY_FOR", "KEY_IF", "KEY_THEN", "KEY_ELSE", "KEY_FI", "KEY_LET",
  "KEY_IN", "KEY_TRUE", "KEY_FALSE", "IDENTIFIER", "TYPE", "OP_IMPLIES",
  "STRING", "COLON", "STMT_TERMINATOR", "AT", "DOTSTAR", "BLOCK_BEGIN",
  "BLOCK_END", "PARAN_OPEN", "PARAN_CLOSE", "ARRAY_OPEN", "ARRAY_CLOSE",
  "COMMA", "OP_ASGN", "OP_LOGICAL_OR", "OP_LOGICAL_AND", "OP_BITWISE_OR",
  "OP_BITWISE_XOR", "OP_BITWISE_AND", "OP_RELATIONAL_EQ",
  "OP_RELATIONAL_IEQ", "OP_ARITHMETIC_B_AD", "OP_ARITHMETIC_B_MU",
  "KEY_NOT", "KEY_NEW", "OP_ARITHMETIC_U", "DOT", "$accept",
  "Compilation_unit", "Package_declaration", "Package_name",
  "Import_declarations", "Import_declaration", "Program", "Sub_Program",
  "Class", "Interface", "Interface_Inheritance_List", "Inheritance",
  "Implement_Interface", "Interfaces_list", "Features_list_opt",
  "Features_list", "Feature", "Interface_features_list_opt",
  "Interface_features_list", "Interface_feature", "Formal_params_list_opt",
  "Formal_params_list", "Formal_param", "Formal", "Expression",
  "Conditionals", "Loops", "Arguments_list_opt", "Arguments_list", "Case",
  "Actions", "Action", "If_then_else", "While", "For", "Do_while",
  "Break_statement", "Continue_statement", "Return_statement",
  "Block_Expression", "Block_list", "Let_Expression", "Expressions",
  "Formals", "M", "N", "SCOPE_START", "SCOPE_END", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313
};
# endif

#define YYPACT_NINF -200

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-200)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       1,   -15,    25,    36,  -200,   -31,  -200,   -15,    36,  -200,
    -200,    46,   -19,  -200,    44,  -200,  -200,    28,    65,    69,
      42,  -200,  -200,  -200,    81,    93,  -200,    71,    94,    87,
      50,  -200,    90,  -200,  -200,   104,   107,  -200,    99,   103,
     111,   113,   104,   119,  -200,   124,   127,   128,  -200,   125,
    -200,  -200,   129,   120,   127,   138,  -200,   130,   121,   132,
    -200,  -200,   143,   137,  -200,   146,  -200,   152,   151,   128,
      19,   128,  -200,  -200,   147,   159,  -200,   158,   206,   154,
     149,  -200,  -200,   155,  -200,  -200,   156,   206,  -200,   179,
     168,   206,  -200,  -200,  -200,    97,  -200,   206,   206,   206,
     165,   206,   181,   206,   498,  -200,  -200,  -200,  -200,  -200,
    -200,  -200,  -200,  -200,  -200,  -200,  -200,   524,   187,  -200,
     206,   206,    58,   206,  -200,   206,   264,   169,   206,   206,
     206,   297,   183,   471,   524,    31,   206,   166,  -200,   166,
     180,  -200,  -200,   206,   206,   206,   206,   206,   206,   206,
     199,   200,   393,   409,   203,   219,   206,   317,  -200,   129,
    -200,   524,   189,   194,   511,   524,  -200,   204,  -200,   206,
    -200,  -200,   206,   524,   206,   206,   206,   153,     4,    95,
      61,   -46,   -41,   166,   201,   205,  -200,  -200,   208,   229,
     203,  -200,   -16,  -200,   206,    -4,  -200,   206,   202,   218,
     337,   524,   524,    78,    33,   206,  -200,   221,  -200,  -200,
     206,   233,   206,   524,   215,   169,   524,   206,   196,  -200,
     214,   206,   224,   232,   220,   357,   235,   206,  -200,   524,
     227,  -200,   425,   206,  -200,  -200,  -200,  -200,   441,   234,
    -200,   377,   206,   206,   206,  -200,   206,  -200,  -200,   457,
     485,   277,  -200,   247,  -200,   242,  -200,  -200,  -200,   206,
     245,  -200
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     9,     6,     0,     1,     0,    13,     8,
       3,     0,     0,     7,     2,     5,    10,     0,     0,     0,
       0,    14,    15,    11,    22,    20,    12,     0,    24,     0,
       0,    21,     0,   112,    18,    34,     0,    26,    23,     0,
       0,     0,    33,     0,    19,     0,    28,    39,    17,     0,
      36,    25,   112,     0,    27,     0,    32,     0,     0,    38,
      41,    35,     0,     0,   113,     0,    30,     0,     0,     0,
      48,    39,    16,    29,    42,     0,    40,     0,     0,     0,
       0,    37,    80,     0,    99,   100,     0,     0,   110,     0,
       0,     0,   112,    78,    79,    75,    81,     0,     0,     0,
       0,     0,     0,     0,     0,    54,    55,    82,    83,    84,
      85,    86,    61,    62,    60,    56,    57,    46,     0,    43,
       0,     0,     0,     0,   110,     0,     0,     0,    88,     0,
       0,     0,   110,     0,   107,     0,     0,    73,    58,    72,
      47,   110,   110,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   110,     0,
     109,    90,     0,    87,     0,    49,   104,     0,   102,     0,
      74,    77,     0,    45,     0,     0,     0,    65,    66,    67,
      68,    69,    70,    71,     0,     0,   101,    59,     0,     0,
      92,   110,     0,   110,     0,     0,    51,     0,    76,     0,
       0,   106,    44,    63,    64,    88,   110,     0,    91,    93,
       0,     0,     0,   111,     0,     0,    89,     0,     0,   103,
       0,     0,     0,     0,     0,     0,     0,     0,   108,    50,
       0,    53,     0,     0,    96,   110,   110,   110,     0,     0,
     113,     0,     0,     0,     0,   113,    88,    31,    94,     0,
       0,     0,   105,     0,    98,     0,    95,    52,   110,     0,
       0,    97
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -200,  -200,  -200,   268,  -200,   281,  -200,  -200,  -200,  -200,
    -200,  -200,  -200,  -200,  -200,  -200,   222,  -200,  -200,   258,
     230,  -200,   236,  -125,   -77,  -200,  -200,  -199,  -200,  -200,
     114,  -200,  -200,  -200,  -200,  -200,  -200,  -200,  -200,  -200,
    -200,  -200,  -200,  -200,  -113,  -200,   -43,  -180
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     5,     8,     9,    14,    20,    21,    22,
      30,    28,    33,    38,    53,    54,    55,    41,    42,    43,
      58,    59,    60,    56,   161,   105,   106,   162,   163,   107,
     189,   190,   108,   109,   110,   111,   112,   113,   114,   115,
     132,   116,   135,   195,   123,   226,    39,    72
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
     104,   117,   160,   211,    10,     1,   220,   148,   149,    63,
     122,   156,   150,   149,   126,     4,    16,   150,    17,   169,
     131,   133,   134,   214,   137,     6,   139,    11,   175,   176,
     141,   142,   143,   144,   145,   146,   147,   148,   149,    11,
     215,     7,   150,   152,   153,   194,   155,   253,   157,   127,
      18,    19,   164,   165,   145,   146,   147,   148,   149,   173,
     247,    77,   150,    23,    78,   252,   177,   178,   179,   180,
     181,   182,   183,   154,   171,   172,    15,    26,   210,   192,
     212,   143,   144,   145,   146,   147,   148,   149,    35,    27,
     228,   150,   200,   221,    36,   201,    24,   202,   203,   204,
      25,    29,    31,    32,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   147,   148,   149,   150,   213,    34,   150,
     216,    37,   242,   243,   244,   142,   143,   144,   145,   146,
     147,   148,   149,   223,    40,   225,   150,   128,    44,   129,
     229,    46,   130,    45,   232,   259,   146,   147,   148,   149,
     238,    47,    48,   150,    50,    51,   241,    52,    57,    64,
      61,    82,    68,    62,    67,   249,   250,   251,    83,    84,
      85,    86,    87,    66,    70,    88,    69,    71,    89,    90,
      91,    73,   260,    74,    92,    75,    93,    94,    95,    80,
      81,    96,   119,   120,   121,   118,    97,   124,    98,   159,
      99,   100,   144,   145,   146,   147,   148,   149,   125,    82,
     136,   150,   138,   101,   102,   103,    83,    84,    85,    86,
      87,   151,   168,    88,   150,   174,    89,    90,    91,   184,
     196,   185,    92,   188,    93,    94,    95,   191,   197,    96,
     199,   205,   207,   206,    97,   208,    98,   217,    99,   218,
     224,   234,   222,   227,   230,   231,   233,   239,   235,   237,
     258,   101,   102,   103,   261,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   246,    12,    65,   150,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   158,   257,    13,
     150,   141,   142,   143,   144,   145,   146,   147,   148,   149,
      49,    79,   256,   150,   209,    76,     0,     0,     0,     0,
     141,   142,   143,   144,   145,   146,   147,   148,   149,     0,
       0,     0,   150,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   166,     0,     0,   150,   167,     0,     0,     0,
       0,     0,     0,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   193,     0,     0,   150,     0,     0,     0,     0,
       0,     0,     0,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   219,     0,     0,   150,     0,     0,     0,     0,
       0,     0,     0,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   236,     0,     0,   150,     0,     0,     0,     0,
       0,     0,     0,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   248,     0,     0,   150,     0,     0,     0,     0,
       0,     0,     0,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   186,     0,     0,   150,     0,     0,     0,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   187,     0,
       0,   150,     0,     0,     0,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   240,     0,     0,   150,     0,     0,
       0,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     245,     0,     0,   150,     0,     0,     0,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   254,     0,     0,   150,
       0,     0,     0,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   170,     0,     0,   150,     0,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   255,     0,     0,   150,
       0,   141,   142,   143,   144,   145,   146,   147,   148,   149,
       0,   140,     0,   150,   141,   142,   143,   144,   145,   146,
     147,   148,   149,     0,   198,     0,   150,   141,   142,   143,
     144,   145,   146,   147,   148,   149,     0,     0,     0,   150,
     141,   142,   143,   144,   145,   146,   147,   148,   149,     0,
       0,     0,   150
};

static const yytype_int16 yycheck[] =
{
      77,    78,   127,    19,    35,     4,   205,    53,    54,    52,
      87,   124,    58,    54,    91,    30,    35,    58,    37,   132,
      97,    98,    99,    27,   101,     0,   103,    58,   141,   142,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    58,
      44,     5,    58,   120,   121,   158,   123,   246,   125,    92,
       6,     7,   129,   130,    50,    51,    52,    53,    54,   136,
     240,    42,    58,    35,    45,   245,   143,   144,   145,   146,
     147,   148,   149,    15,    43,    44,    30,    35,   191,   156,
     193,    48,    49,    50,    51,    52,    53,    54,    38,     8,
     215,    58,   169,   206,    44,   172,    31,   174,   175,   176,
      31,     8,    31,     9,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    52,    53,    54,    58,   194,    31,    58,
     197,    31,   235,   236,   237,    47,    48,    49,    50,    51,
      52,    53,    54,   210,    30,   212,    58,    40,    31,    42,
     217,    38,    45,    44,   221,   258,    51,    52,    53,    54,
     227,    40,    39,    58,    35,    31,   233,    30,    30,    39,
      35,     3,    41,    34,    34,   242,   243,   244,    10,    11,
      12,    13,    14,    35,    31,    17,    44,    40,    20,    21,
      22,    35,   259,    31,    26,    34,    28,    29,    30,    42,
      31,    33,    43,    38,    38,    41,    38,    18,    40,    30,
      42,    43,    49,    50,    51,    52,    53,    54,    40,     3,
      45,    58,    31,    55,    56,    57,    10,    11,    12,    13,
      14,    34,    39,    17,    58,    45,    20,    21,    22,    30,
      41,    31,    26,    30,    28,    29,    30,    18,    44,    33,
      36,    40,    34,    38,    38,    16,    40,    45,    42,    31,
      17,    19,    31,    38,    58,    41,    32,    30,    38,    24,
      18,    55,    56,    57,    19,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    40,     7,    54,    58,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    23,    41,     8,
      58,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      42,    71,    25,    58,   190,    69,    -1,    -1,    -1,    -1,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
      -1,    -1,    58,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    35,    -1,    -1,    58,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    35,    -1,    -1,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    35,    -1,    -1,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    35,    -1,    -1,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    35,    -1,    -1,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    39,    -1,    -1,    58,    -1,    -1,    -1,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    39,    -1,
      -1,    58,    -1,    -1,    -1,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    39,    -1,    -1,    58,    -1,    -1,
      -1,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      39,    -1,    -1,    58,    -1,    -1,    -1,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    39,    -1,    -1,    58,
      -1,    -1,    -1,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    41,    -1,    -1,    58,    -1,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    41,    -1,    -1,    58,
      -1,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      -1,    43,    -1,    58,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    -1,    43,    -1,    58,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    -1,    -1,    -1,    58,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
      -1,    -1,    58
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,    60,    61,    30,    62,     0,     5,    63,    64,
      35,    58,    62,    64,    65,    30,    35,    37,     6,     7,
      66,    67,    68,    35,    31,    31,    35,     8,    70,     8,
      69,    31,     9,    71,    31,    38,    44,    31,    72,   105,
      30,    76,    77,    78,    31,    44,    38,    40,    39,    78,
      35,    31,    30,    73,    74,    75,    82,    30,    79,    80,
      81,    35,    34,   105,    39,    75,    35,    34,    41,    44,
      31,    40,   106,    35,    31,    34,    81,    42,    45,    79,
      42,    31,     3,    10,    11,    12,    13,    14,    17,    20,
      21,    22,    26,    28,    29,    30,    33,    38,    40,    42,
      43,    55,    56,    57,    83,    84,    85,    88,    91,    92,
      93,    94,    95,    96,    97,    98,   100,    83,    41,    43,
      38,    38,    83,   103,    18,    40,    83,   105,    40,    42,
      45,    83,    99,    83,    83,   101,    45,    83,    31,    83,
      43,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      58,    34,    83,    83,    15,    83,   103,    83,    23,    30,
      82,    83,    86,    87,    83,    83,    35,    39,    39,   103,
      41,    43,    44,    83,    45,   103,   103,    83,    83,    83,
      83,    83,    83,    83,    30,    31,    39,    39,    30,    89,
      90,    18,    83,    35,   103,   102,    41,    44,    43,    36,
      83,    83,    83,    83,    83,    40,    38,    34,    16,    89,
     103,    19,   103,    83,    27,    44,    83,    45,    31,    35,
      86,   103,    31,    83,    17,    83,   104,    38,    82,    83,
      58,    41,    83,    32,    19,    38,    35,    24,    83,    30,
      39,    83,   103,   103,   103,    39,    40,   106,    35,    83,
      83,    83,   106,    86,    39,    41,    25,    41,    18,   103,
      83,    19
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    59,    60,    61,    61,    62,    62,    63,    63,    63,
      64,    64,    65,    65,    66,    66,    67,    68,    69,    69,
      69,    70,    70,    71,    71,    72,    72,    73,    73,    74,
      74,    75,    75,    76,    76,    77,    77,    78,    79,    79,
      80,    80,    81,    81,    82,    82,    82,    82,    82,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    84,    84,    85,    85,    85,    86,    86,    87,
      87,    88,    89,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,    99,   100,   101,   101,   102,   102,
     103,   104,   105,   106
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     3,     0,     3,     1,     2,     1,     0,
       3,     4,     3,     0,     1,     1,     9,     6,     2,     3,
       0,     2,     0,     2,     0,     3,     1,     1,     0,     3,
       2,    12,     1,     1,     0,     3,     2,     6,     1,     0,
       3,     1,     3,     5,     8,     7,     5,     6,     3,     3,
       6,     4,    10,     6,     1,     1,     1,     1,     2,     4,
       1,     1,     1,     4,     4,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     3,     1,     4,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     3,
       1,     5,     1,     2,     6,    10,     7,    14,    10,     1,
       1,     4,     3,     4,     2,     9,     3,     1,     3,     0,
       0,     0,     0,     0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 138 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Compilation_unit -> Package_declaration Import_declarations Program");
		}
#line 1543 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 143 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Package_declaration -> KEY_PACKAGE Package_name STMT_TERMINATOR");
		}
#line 1550 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 146 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back( "Package_declaration -> EMPTY");
		}
#line 1557 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 151 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Package_name -> Package_name DOT IDENTIFIER");
		}
#line 1564 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 154 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Package_name -> IDENTIFIER");
		}
#line 1571 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 159 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Import_declarations -> Import_declarations Import_declaration");
		}
#line 1578 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 162 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Import_declarations -> Import_declaration");
		}
#line 1585 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 165 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back( "Import_declarations -> EMPTY");
		}
#line 1592 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 170 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Import_declaration -> KEY_IMPORT Package_name STMT_TERMINATOR");
		}
#line 1599 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 173 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Import_declaration -> KEY_IMPORT Package_name DOTSTAR STMT_TERMINATOR");
		}
#line 1606 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 178 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Program -> Program Sub_Program STMT_TERMINATOR");
		}
#line 1613 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 181 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Program -> EMPTY");
		}
#line 1620 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 186 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Sub_Program -> Class");
		}
#line 1627 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 189 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Sub_Program -> Interface");
		}
#line 1634 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 194 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Class -> KEY_CLASS TYPE Inheritance Implement_Interface BLOCK_BEGIN Features_list_opt BLOCK_END");
			(yyval.node) = emptyNode;
		}
#line 1642 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 200 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Interface -> KEY_INTERFACE TYPE Interface_Inheritance_List BLOCK_BEGIN Interface_features_list_opt BLOCK_END");
		}
#line 1649 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 205 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Interface_Inheritance_List -> KEY_INHERITS TYPE");
		}
#line 1656 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 208 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Interface_Inheritance_List -> Interface_Inheritance_List COMMA TYPE");
		}
#line 1663 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 211 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Interface_Inheritance_List -> EMPTY");
		}
#line 1670 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 216 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Inheritance -> KEY_INHERITS TYPE");
		}
#line 1677 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 219 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Inheritance -> EMPTY");
		}
#line 1684 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 224 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Implement_Interface -> KEY_IMPLEMENTS Interfaces_list");
		}
#line 1691 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 227 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Implement_Interface -> EMPTY");
		}
#line 1698 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 232 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Interfaces_list -> Interfaces_list COMMA TYPE");
		}
#line 1705 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 235 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Interfaces_list -> TYPE");
		}
#line 1712 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 240 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Features_list_opt -> Features_list");
			(yyval.node) = emptyNode;
		}
#line 1720 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 244 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Features_list_opt -> EMPTY");
			(yyval.node) = emptyNode;
		}
#line 1728 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 250 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Features_list -> Features_list Feature STMT_TERMINATOR");
			(yyval.node) = emptyNode;
		}
#line 1736 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 254 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Features_list -> Feature STMT_TERMINATOR");
			(yyval.node) = emptyNode;
		}
#line 1744 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 260 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Feature -> IDENTIFIER PARAN_OPEN Formal_params_list_opt PARAN_CLOSE COLON TYPE BLOCK_BEGIN Expression BLOCK_END");
			(yyval.node) = (yyvsp[-2].node);
			SymbolTableEntry* entry = (SymbolTableEntry*) calloc(1, sizeof(SymbolTableEntry));
			entry->type = string((yyvsp[-5].str));
			entry->isFeat = true;
			queue<string> tmpQueue = (yyvsp[-8].node)->paramFunc;
			entry->paramFunc = queue<string>();
			while (!tmpQueue.empty()) {
				(entry->paramFunc).push(tmpQueue.front());
				tmpQueue.pop();
			}
			entry->paramCount = (yyvsp[-8].node)->paramCount;
			symbolTable->insert(string((yyvsp[-11].str)), entry);
			ircode = backpatchFeat((yyvsp[-3].intValue), string((yyvsp[-11].str)), ircode);
			// ircode.push_back("1,ret\n");
		}
#line 1765 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 277 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Feature -> Formal");
			(yyval.node) = (yyvsp[0].node);
		}
#line 1773 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 283 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Interface_features_list_opt -> Interface_features_list");
		}
#line 1780 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 286 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Interface_features_list_opt -> EMPTY");
		}
#line 1787 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 291 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Interface_features_list -> Interface_features_list Interface_feature STMT_TERMINATOR");
		}
#line 1794 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 294 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Interface_features_list -> Interface_feature STMT_TERMINATOR");
		}
#line 1801 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 299 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Interface_feature -> IDENTIFIER PARAN_OPEN Formal_params_list_opt PARAN_CLOSE COLON TYPE");
		}
#line 1808 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 304 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Formal_params_list_opt -> Formal_params_list");
			(yyval.node) = (yyvsp[0].node);
		}
#line 1816 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 308 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Formal_params_list_opt -> EMPTY");
			(yyval.node) = emptyNode;
		}
#line 1824 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 314 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Formal_params_list -> Formal_params_list COMMA Formal_param");
			(yyval.node) = new Node();
			(yyval.node)->paramCount = (yyvsp[-2].node)->paramCount + 1;
			(yyvsp[-2].node)->paramFunc.push((yyvsp[0].node)->place);
			(yyval.node)->paramFunc = (yyvsp[-2].node)->paramFunc; 
		}
#line 1835 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 321 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Formal_params_list -> Formal_param");
			(yyval.node) = new Node();
			(yyval.node)->paramCount = 1;
			(yyval.node)->paramFunc.push((yyvsp[0].node)->place);
			(yyval.node)->type = (yyvsp[0].node)->type;
		}
#line 1846 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 330 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Formal_param -> IDENTIFIER COLON TYPE");
			SymbolTableEntry* entry = (SymbolTableEntry*) calloc(1, sizeof(SymbolTableEntry));
			entry->type = string((yyvsp[0].str));
			symbolTable->insert((yyvsp[-2].str), entry);
			(yyval.node) = new Node();
			(yyval.node)->place = string((yyvsp[-2].str));
			(yyval.node)->type = string((yyvsp[0].str));
		}
#line 1859 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 339 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Formal_param -> IDENTIFIER COLON TYPE ARRAY_OPEN ARRAY_CLOSE");
			SymbolTableEntry* entry = (SymbolTableEntry*) calloc(1, sizeof(SymbolTableEntry));
			entry->type = string((yyvsp[-2].str)) + "[]";
			symbolTable->insert((yyvsp[-4].str), entry);
			(yyval.node) = emptyNode;
		}
#line 1870 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 348 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Formal -> IDENTIFIER COLON TYPE ARRAY_OPEN Expression ARRAY_CLOSE OP_ASGN Expression");
			SymbolTableEntry* entry = (SymbolTableEntry*) calloc(1, sizeof(SymbolTableEntry));
			entry->type = string((yyvsp[-5].str)) + "[]";
			entry->isArray = true;
			entry->arrayLength = (yyvsp[0].node)->arrayLength;
			if(entry->arrayLength != stoi((yyvsp[-3].node)->place)) {
				cout << (yyvsp[-7].str) << ": Length mismatch in array initialization...\n";
				exit(0);
			}
			entry->arrayList = (yyvsp[0].node)->arrayList;
			string elements = to_string(((yyvsp[0].node)->arrayList)[0]);
			for (int i = 1; i < entry->arrayLength; i++) {
				elements = elements + "," + to_string(((yyvsp[0].node)->arrayList)[i]);
			}
			ircode.push_back("1,=,array," + string((yyvsp[-7].str)) + "," + to_string(entry->arrayLength) + "," + elements + "\n");
			symbolTable->insert((yyvsp[-7].str), entry);
		}
#line 1892 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 366 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Formal -> IDENTIFIER COLON TYPE ARRAY_OPEN ARRAY_CLOSE OP_ASGN Expression");
			SymbolTableEntry* entry = (SymbolTableEntry*) calloc(1, sizeof(SymbolTableEntry));
			entry->type = string((yyvsp[-4].str)) + "[]";
			entry->isArray = true;
			entry->arrayLength = (yyvsp[0].node)->arrayLength;
			entry->arrayList = (yyvsp[0].node)->arrayList;
			string elements = to_string(((yyvsp[0].node)->arrayList)[0]);
			for (int i = 1; i < entry->arrayLength; i++) {
				elements = elements + "," + to_string(((yyvsp[0].node)->arrayList)[i]);
			}
			ircode.push_back("1,=,array," + string((yyvsp[-6].str)) + "," + to_string(entry->arrayLength) + "," + elements + "\n");
			symbolTable->insert((yyvsp[-6].str), entry);
		}
#line 1910 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 380 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Formal -> IDENTIFIER COLON TYPE OP_ASGN Expression");
			SymbolTableEntry* entry = (SymbolTableEntry*) calloc(1, sizeof(SymbolTableEntry));
			entry->type = string((yyvsp[-2].str));
			symbolTable->insert((yyvsp[-4].str), entry);
			// symbolTable->printSymbolTable();
			if (entry->type != (yyvsp[0].node)->type) {
				cout << entry->type << ", " << (yyvsp[0].node)->type << ": Types don't match...\n";
				exit(0);
			}
			(yyval.node) = new Node();
			ircode.push_back("1,=," + string((yyvsp[-4].str)) + "," + (yyvsp[0].node)->place + "\n");
			(yyval.node)->type = entry->type;
		}
#line 1928 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 394 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Formal -> IDENTIFIER COLON TYPE ARRAY_OPEN Expression ARRAY_CLOSE");
			SymbolTableEntry* entry = (SymbolTableEntry*) calloc(1, sizeof(SymbolTableEntry));
			entry->type = string((yyvsp[-3].str)) + "[]";
			entry->isArray = true;
			entry->arrayLength = stoi((yyvsp[-1].node)->place);
			vector<int> zeroList;
			zeroList.push_back(0);
			string elements = "0";
			for (int i = 1; i < entry->arrayLength; i++) {
				elements = elements + ",0";
				zeroList.push_back(0);
			}
			entry->arrayList = zeroList;
			ircode.push_back("1,=,array," + string((yyvsp[-5].str)) + "," + to_string(entry->arrayLength) + "," + elements + "\n");
			symbolTable->insert((yyvsp[-5].str), entry);
			// symbolTable->printSymbolTable();
			(yyval.node) = emptyNode;
		}
#line 1951 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 413 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Formal -> IDENTIFIER COLON TYPE");
			SymbolTableEntry* entry = (SymbolTableEntry*) calloc(1, sizeof(SymbolTableEntry));
			entry->type = string((yyvsp[0].str));
			symbolTable->insert((yyvsp[-2].str), entry);
			// symbolTable->printSymbolTable();
			(yyval.node) = emptyNode;
		}
#line 1963 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 423 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> IDENTIFIER OP_ASGN Expression");
			SymbolTableEntry *entry = symbolTable->lookup((yyvsp[-2].str));
			if (entry == NULL) {
				cout << (yyvsp[-2].str) << ": Variable not found...\n";
				exit(0);
			}
			if (entry->type != (yyvsp[0].node)->type) {
				cout << entry->type << ", " << (yyvsp[0].node)->type << ": Types don't match...\n";
				exit(0);
			}
			(yyval.node) = new Node();
			ircode.push_back("1,=," + string((yyvsp[-2].str)) + "," + (yyvsp[0].node)->place + "\n");
			// $$->nextlist = NULL;
			(yyval.node)->type = entry->type;
		}
#line 1983 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 439 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> IDENTIFIER ARRAY_OPEN Expression ARRAY_CLOSE OP_ASGN Expression");
			SymbolTableEntry *entry = symbolTable->lookup((yyvsp[-5].str));
			if (entry == NULL) {
				cout << (yyvsp[-5].str) << ": Variable not found...\n";
				exit(0);
			}
			string tempType = (yyvsp[0].node)->type + "[]";
			if (entry->type != tempType) {
				cout << entry->type << ", " << (yyvsp[0].node)->type << ": Types don't match...\n";
				exit(0);
			}
			if (((yyvsp[-3].node)->place)[0] >= '0' && ((yyvsp[-3].node)->place)[0] <= '9' ) {
				if (stoi((yyvsp[-3].node)->place) >= entry->arrayLength) {
					cout << (yyvsp[-5].str) << ": Index out of bound...\n";
					exit(0);
				}
			} 
			(yyval.node) = new Node();
			(yyval.node)->type = "Int";
			ircode.push_back("1,=,arrWrite," + string((yyvsp[-5].str)) + "," + (yyvsp[-3].node)->place + "," + (yyvsp[0].node)->place + "\n");
		}
#line 2009 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 461 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> IDENTIFIER PARAN_OPEN Arguments_list_opt PARAN_CLOSE");
			SymbolTableEntry *entry = symbolTable->lookup((yyvsp[-3].str));
			if (entry == NULL) {
				cout << (yyvsp[-3].str) << ": Feature not found...\n";
				exit(0);
			} else if (!entry->isFeat) {
				cout << (yyvsp[-3].str) << ": Feature not found...\n";
				exit(0);
			} else if (entry->paramCount != (yyvsp[-1].node)->paramCount) {
				cout << (yyvsp[-3].str) << ": Feature call has " << (yyvsp[-1].node)->paramCount << " arguments, but required is " << entry->paramCount << "...\n";
				exit(0);
			}
			(yyval.node) = new Node();
			(yyval.node)->place = newTemp();
			if (string((yyvsp[-3].str)) == "print") {
				ircode.push_back("1,print," + queueFunc.front() + "\n");
				(yyval.node)->type = "void";
			} else if (string((yyvsp[-3].str)) == "scan") {
				ircode.push_back("1,scan," + queueFunc.front() + "\n");
				(yyval.node)->type = "void";
			} else {
				(yyval.node)->type = entry->type;
				queue<string> temp = entry->paramFunc;
				while (!queueFunc.empty()) {
					ircode.push_back("1,param," + temp.front() + "," + queueFunc.front() + "\n");
					queueFunc.pop();
					temp.pop();
				}
				ircode.push_back("1,call," + string((yyvsp[-3].str)) + "," + (yyval.node)->place + "\n");
			}
		}
#line 2045 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 493 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> BLOCK_BEGIN Expression BLOCK_END AT TYPE DOT IDENTIFIER PARAN_OPEN Arguments_list_opt PARAN_CLOSE");
		}
#line 2052 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 496 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> Expression DOT IDENTIFIER PARAN_OPEN Arguments_list_opt PARAN_CLOSE");
		}
#line 2059 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 499 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> Conditionals");
			(yyval.node) = (yyvsp[0].node);
		}
#line 2067 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 503 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> Loops");
			(yyval.node) = (yyvsp[0].node);
		}
#line 2075 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 507 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> Block_Expression");
			(yyval.node) = (yyvsp[0].node);
		}
#line 2083 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 511 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> Let_Expression");
			(yyval.node) = (yyvsp[0].node);
		}
#line 2091 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 515 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> KEY_NEW TYPE");
		}
#line 2098 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 518 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> KEY_ISVOID BLOCK_BEGIN Expression BLOCK_END");
		}
#line 2105 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 521 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> Return_statement");
			(yyval.node) = (yyvsp[0].node);
		}
#line 2113 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 525 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> Break_statement");
		}
#line 2120 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 528 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> Continue_statement");
		}
#line 2127 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 531 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> Expression OP_LOGICAL_OR Expression");
			if ((yyvsp[-3].node)->type != "Bool" || (yyvsp[0].node)->type != "Bool") {
				cout << "Operands not of type Bool in OR" << endl;
				exit(0);
			}
			(yyval.node) = new Node();
			(yyval.node)->place = newTemp();
			(yyval.node)->type = "Bool";
			ircode = backpatch((yyvsp[-3].node)->falselist, (yyvsp[-1].intValue), ircode);
			(yyval.node)->truelist = merge((yyvsp[-3].node)->truelist, (yyvsp[0].node)->truelist);
			(yyval.node)->falselist = (yyvsp[0].node)->falselist;
		}
#line 2144 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 544 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> Expression OP_LOGICAL_AND Expression");
			if ((yyvsp[-3].node)->type != "Bool" || (yyvsp[0].node)->type != "Bool") {
				cout << "Operands not of type Bool in AND" << endl;
				exit(0);
			}
			(yyval.node) = new Node();
			(yyval.node)->place = newTemp();
			(yyval.node)->type = "Bool";
			ircode = backpatch((yyvsp[-3].node)->truelist, (yyvsp[-1].intValue), ircode);
			(yyval.node)->truelist = (yyvsp[0].node)->truelist;
			(yyval.node)->falselist = merge((yyvsp[-3].node)->falselist, (yyvsp[0].node)->falselist);
		}
#line 2161 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 557 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> Expression OP_BITWISE_OR Expression");
		}
#line 2168 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 560 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> Expression OP_BITWISE_XOR Expression");
		}
#line 2175 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 563 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> Expression OP_BITWISE_AND Expression");
		}
#line 2182 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 566 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> Expression OP_RELATIONAL_EQ Expression");
			if ((yyvsp[-2].node)->type != "Int" || (yyvsp[0].node)->type != "Int") {
				cout << "Operands not of type Int in EQ" << endl;
				exit(0);
			}
			(yyval.node) = new Node();
			(yyval.node)->place = newTemp();
			(yyval.node)->type = "Bool";
			(yyval.node)->truelist = makelist(ircode.size());
			(yyval.node)->falselist = makelist(ircode.size() + 1);
			ircode.push_back("1,ifgoto,eq," + (yyvsp[-2].node)->place + "," + (yyvsp[0].node)->place + ",");
			ircode.push_back("1,goto,");
		}
#line 2200 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 580 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> Expression OP_RELATIONAL_IEQ Expression");
			if ((yyvsp[-2].node)->type != "Int" || (yyvsp[0].node)->type != "Int") {
				cout << "Operands not of type Int in IEQ" << endl;
				exit(0);
			}
			(yyval.node) = new Node();
			(yyval.node)->place = newTemp();
			(yyval.node)->type = "Bool";
			(yyval.node)->truelist = makelist(ircode.size());
			(yyval.node)->falselist = makelist(ircode.size() + 1);
			// string temp1 = newTemp();
			// string temp2 = newTemp();
			ircode.push_back("1,ifgoto," + dictIeqToString(string((yyvsp[-1].str))) + "," + (yyvsp[-2].node)->place + "," + (yyvsp[0].node)->place + ",");
			// ircode.push_back("1,=," + temp1 + "," + $1->place + "\n");
			// ircode.push_back("1,=," + temp2 + "," + $3->place + "\n");
			ircode.push_back("1,goto,");
		}
#line 2222 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 598 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> Expression OP_ARITHMETIC_B_AD Expression"); 
			if ((yyvsp[-2].node)->type != "Int" || (yyvsp[0].node)->type != "Int") {
				cout << "Operands not of type Int in B_AD" << endl;
				exit(0);
			}
			(yyval.node) = new Node();
			(yyval.node)->place = newTemp();
			(yyval.node)->type = "Int";
			ircode.push_back("1," + string((yyvsp[-1].str)) + "," + (yyval.node)->place + "," + ((yyvsp[-2].node)->place) + "," + ((yyvsp[0].node)->place) + "\n");
		}
#line 2237 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 609 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> Expression OP_ARITHMETIC_B_MU Expression"); 
			if ((yyvsp[-2].node)->type != "Int" || (yyvsp[0].node)->type != "Int") {
				cout << "Operands not of type Int in B_MU" << endl;
				exit(0);
			}
			(yyval.node) = new Node();
			(yyval.node)->place = newTemp();
			(yyval.node)->type = "Int";
			ircode.push_back("1," + string((yyvsp[-1].str)) + "," + (yyval.node)->place + "," + ((yyvsp[-2].node)->place) + "," + ((yyvsp[0].node)->place) + "\n");
		}
#line 2252 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 620 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> OP_ARITHMETIC_U Expression"); 
			if ((yyvsp[0].node)->type != "Int") {
				cout << "Operands not of type Int in U" << endl;
				exit(0);
			}
			(yyval.node) = new Node();
			(yyval.node)->place = newTemp();
			(yyval.node)->type = "Int";
			ircode.push_back("1,-," + (yyval.node)->place + ",0," + ((yyvsp[0].node)->place) + "\n");
		}
#line 2267 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 631 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> KEY_NOT Expression");
			if ((yyvsp[0].node)->type != "Bool") {
				cout << "Operand not of type Bool in NOT" << endl;
				exit(0);
			}
			(yyval.node) = (yyvsp[0].node);
			(yyval.node)->place = newTemp();
			vector<int> temp = (yyval.node)->falselist;
			(yyval.node)->falselist = (yyval.node)->truelist;
			(yyval.node)->truelist = temp;
		}
#line 2283 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 643 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> PARAN_OPEN Expression PARAN_CLOSE");
			(yyval.node) = (yyvsp[-1].node);
		}
#line 2291 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 647 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> IDENTIFIER"); 
			SymbolTableEntry *entry = symbolTable->lookup((yyvsp[0].str));
			if (entry == NULL){
				cout << string((yyvsp[0].str)) << ": Variable not found...\n";
				exit(0);
			}
			(yyval.node) = new Node();
			(yyval.node)->place = (yyvsp[0].str);
			(yyval.node)->type = entry->type;
		}
#line 2306 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 658 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> IDENTIFIER ARRAY_OPEN Expression ARRAY_CLOSE");
			SymbolTableEntry *entry = symbolTable->lookup((yyvsp[-3].str));
			if (entry == NULL) {
				cout << (yyvsp[-3].str) << ": Variable not found...\n";
				exit(0);
			}
			if (((yyvsp[-1].node)->place)[0] >= '0' && ((yyvsp[-1].node)->place)[0] <= '9') {
				if (stoi((yyvsp[-1].node)->place) >= entry->arrayLength) {
					cout << (yyvsp[-3].str) << ": Index out of bound...\n";
					exit(0);
				}
			} 
			(yyval.node) = new Node();
			(yyval.node)->place = newTemp();
			(yyval.node)->type = (yyvsp[-1].node)->type;
			
			// lineNo, =, arrRead, destination, source, index
			ircode.push_back("1,=,arrRead," + (yyval.node)->place + "," + string((yyvsp[-3].str)) + "," + (yyvsp[-1].node)->place + "\n");
		}
#line 2330 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 678 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> ARRAY_OPEN Expressions ARRAY_CLOSE");
			(yyval.node) = (yyvsp[-1].node);
		}
#line 2338 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 682 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> KEY_TRUE");
			(yyval.node) = new Node();
			(yyval.node)->place = newTemp();
			(yyval.node)->type = "Bool";
			(yyval.node)->truelist = makelist(ircode.size());
			ircode.push_back("1,goto,");
		}
#line 2350 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 690 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> KEY_FALSE");
			(yyval.node) = new Node();
			(yyval.node)->type = "Bool";
			(yyval.node)->falselist = makelist(ircode.size());
			ircode.push_back("1,goto,");
		}
#line 2361 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 697 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> INTEGER");
			(yyval.node) = new Node();
			(yyval.node)->place = to_string((yyvsp[0].intValue));
			(yyval.node)->type = "Int";
		}
#line 2371 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 703 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back( "Expression -> STRING");
			(yyval.node) = new Node();
			(yyval.node)->place = string((yyvsp[0].str));
			(yyval.node)->type = "String";
		}
#line 2381 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 711 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Conditionals -> Case");
		}
#line 2388 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 714 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Conditionals -> If_then_else");
			(yyval.node) = (yyvsp[0].node);
		}
#line 2396 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 720 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Loops -> While");
			(yyval.node) = (yyvsp[0].node);
		}
#line 2404 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 724 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Loops -> For");
			(yyval.node) = (yyvsp[0].node);
		}
#line 2412 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 728 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Loops -> Do_while");
			(yyval.node) = (yyvsp[0].node);
		}
#line 2420 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 734 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Arguments_list_opt -> Arguments_list");
			(yyval.node) = (yyvsp[0].node);
		}
#line 2428 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 738 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back ("Arguments_list_opt -> EMPTY");
			(yyval.node) = emptyNode;
		}
#line 2436 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 744 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Arguments_list -> Arguments_list COMMA Expression");
			queueFunc.push((yyvsp[0].node)->place);
			(yyval.node) = new Node();
			(yyval.node)->paramCount = (yyvsp[-2].node)->paramCount + 1;
		}
#line 2446 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 750 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Arguments_list -> Expression");
			queueFunc = queue<string>();
			queueFunc.push((yyvsp[0].node)->place);
			(yyval.node) = new Node();
			(yyval.node)->paramCount = 1;
		}
#line 2457 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 759 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Case -> KEY_CASE Expression KEY_OF Actions KEY_ESAC");
		}
#line 2464 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 764 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Actions -> Action");
		}
#line 2471 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 767 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Actions -> Action Actions");
		}
#line 2478 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 772 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Action -> IDENTIFIER COLON TYPE OP_IMPLIES Expression STMT_TERMINATOR");
		}
#line 2485 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 777 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("If_then_else -> KEY_IF Expression KEY_THEN Expression KEY_ELSE Expression KEY_FI");
			(yyval.node) = new Node();
			ircode = backpatch((yyvsp[-8].node)->truelist, (yyvsp[-6].intValue), ircode);
			ircode = backpatch((yyvsp[-8].node)->falselist, (yyvsp[-2].intValue), ircode);
			vector<int> temp = merge((yyvsp[-5].node)->nextlist, (yyvsp[-4].node)->nextlist);
			(yyval.node)->nextlist = merge(temp, (yyvsp[-1].node)->nextlist);
		}
#line 2497 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 787 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("While -> KEY_WHILE Expression KEY_LOOP Expression KEY_POOL");
			(yyval.node) = new Node();
			ircode = backpatch((yyvsp[-1].node)->nextlist, (yyvsp[-5].intValue), ircode);
			ircode = backpatch((yyvsp[-4].node)->truelist, (yyvsp[-2].intValue), ircode);
			(yyval.node)->nextlist = (yyvsp[-4].node)->falselist;
			ircode.push_back("1,goto,label" + to_string((yyvsp[-5].intValue)) + "\n");
		}
#line 2509 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 798 "src/parser.y" /* yacc.c:1646  */
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
#line 2528 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 815 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Do_while -> KEY_DO KEY_LOOP Expression KEY_POOL KEY_WHILE BLOCK_BEGIN Expression BLOCK_END");
			(yyval.node) = new Node();
			ircode = backpatch((yyvsp[-6].node)->nextlist, (yyvsp[-2].intValue), ircode);
			ircode = backpatch((yyvsp[-1].node)->truelist, (yyvsp[-7].intValue), ircode);
			// ircode.push_back("1,goto,label" + to_string($8) + "\n");
			(yyval.node)->nextlist = (yyvsp[-1].node)->falselist;
		}
#line 2540 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 825 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Break_statement -> KEY_BREAK");
		}
#line 2547 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 830 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Continue_statement -> KEY_CONTINUE");
		}
#line 2554 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 835 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Return_statement -> KEY_RETURN BLOCK_BEGIN Expression BLOCK_END");
			(yyval.node) = (yyvsp[-1].node);
			ircode.push_back("1,ret," + (yyvsp[-1].node)->place + "\n");
		}
#line 2563 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 842 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Block_Expression -> BLOCK_BEGIN Block_list BLOCK_END");
			(yyval.node) = new Node();
			(yyval.node)->type = (yyvsp[-1].node)->type;
			(yyval.node)->nextlist = (yyvsp[-1].node)->nextlist;
		}
#line 2573 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 850 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Block_list -> Block_list Expression STMT_TERMINATOR");
			(yyval.node) = new Node();
			(yyval.node)->type = (yyvsp[-1].node)->type;
			ircode = backpatch((yyvsp[-3].node)->nextlist, (yyvsp[-2].intValue), ircode);
			(yyval.node)->nextlist = (yyvsp[-1].node)->nextlist;
		}
#line 2584 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 857 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Block_list -> Expression STMT_TERMINATOR");
			(yyval.node) = new Node();
			(yyval.node)->type = (yyvsp[-1].node)->type;
			(yyval.node)->nextlist = (yyvsp[-1].node)->nextlist;
		}
#line 2594 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 865 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Let_Expression -> KEY_LET Formal Formals KEY_IN BLOCK_BEGIN Expression BLOCK_END");
			(yyval.node) = (yyvsp[-2].node);
		}
#line 2602 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 871 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back( "Expressions -> Expressions COMMA Expression");
			(yyval.node) = new Node();
			(yyval.node)->arrayLength = (yyvsp[-2].node)->arrayLength + 1;
			(yyval.node)->arrayList = (yyvsp[-2].node)->arrayList;
			((yyval.node)->arrayList).push_back(stoi((yyvsp[0].node)->place));
		}
#line 2613 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 878 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expressions -> Expression");
			(yyval.node) = new Node();
			(yyval.node)->arrayLength = 1;
			((yyval.node)->arrayList).push_back(stoi((yyvsp[0].node)->place));
		}
#line 2623 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 886 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Formals -> Formals COMMA Formal");
			(yyval.node) = emptyNode;
		}
#line 2631 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 890 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Formals -> EMPTY");
			(yyval.node) = emptyNode;
		}
#line 2639 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 895 "src/parser.y" /* yacc.c:1646  */
    {	(yyval.intValue) = ircode.size();
		}
#line 2646 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 899 "src/parser.y" /* yacc.c:1646  */
    {	(yyval.node) = new Node();
			(yyval.node)->nextlist = makelist(ircode.size());
			ircode.push_back("1,goto,");
		}
#line 2655 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 905 "src/parser.y" /* yacc.c:1646  */
    {	envStack.push(symbolTable);
			currTable = new SymbolTable(symbolTable);
			symbolTable = currTable;
			i++;
		}
#line 2665 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 912 "src/parser.y" /* yacc.c:1646  */
    {	symbolTable = envStack.top();
			envStack.pop();
		}
#line 2673 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 2677 "parser.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 915 "src/parser.y" /* yacc.c:1906  */


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
