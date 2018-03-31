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

#line 82 "parser.tab.c" /* yacc.c:339  */

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
#line 17 "src/parser.y" /* yacc.c:355  */

	int intValue;
	char* str;
	struct Node* node; 

#line 187 "parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 204 "parser.tab.c" /* yacc.c:358  */

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
#define YYLAST   564

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  111
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  248

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
       0,   132,   132,   137,   141,   145,   148,   153,   156,   160,
     164,   167,   172,   176,   180,   183,   188,   197,   202,   205,
     209,   213,   217,   221,   225,   229,   232,   237,   242,   246,
     251,   257,   263,   270,   274,   278,   281,   286,   291,   295,
     299,   302,   307,   310,   315,   318,   321,   337,   345,   355,
     372,   375,   378,   381,   384,   388,   391,   395,   398,   401,
     404,   407,   410,   413,   420,   427,   430,   433,   436,   445,
     454,   469,   484,   499,   506,   510,   523,   526,   529,   535,
     541,   548,   557,   560,   566,   569,   572,   577,   581,   585,
     588,   593,   598,   601,   606,   611,   621,   626,   631,   636,
     641,   646,   651,   660,   668,   677,   682,   685,   690,   694,
     698,   702
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
  "Formals", "M", "N", YY_NULLPTR
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

#define YYPACT_NINF -196

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-196)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      15,     2,    34,    43,  -196,   -27,  -196,     2,    43,  -196,
    -196,    36,   -32,  -196,    11,  -196,  -196,    29,    37,    50,
      48,  -196,  -196,  -196,    86,    88,  -196,    73,    97,    78,
     -28,  -196,    90,    87,  -196,   109,    96,  -196,    99,   110,
     106,   108,   109,   113,  -196,   118,   -20,   119,   110,   125,
    -196,   131,  -196,   130,  -196,  -196,   136,   131,  -196,   138,
    -196,   140,   135,   133,  -196,  -196,    81,   151,  -196,   147,
     145,   131,   142,   190,   149,   139,   163,  -196,  -196,   158,
    -196,  -196,   167,   190,   190,   188,   168,   190,   179,  -196,
    -196,    65,  -196,   190,   190,   190,   169,   190,   182,   190,
     468,  -196,  -196,  -196,  -196,  -196,  -196,  -196,  -196,  -196,
    -196,  -196,  -196,   494,   184,   174,  -196,   190,   190,   -11,
      39,   190,   190,   234,   191,  -196,   190,   190,   190,   267,
     183,   441,   494,    85,   190,   166,  -196,   166,   181,  -196,
    -196,   190,   190,   190,   190,   190,   190,   190,   197,   193,
    -196,   363,   379,   199,   190,    84,   287,  -196,   -14,   494,
     192,   194,   481,   494,  -196,   200,  -196,   190,  -196,  -196,
     190,   494,   190,   190,   190,   137,    26,     0,     7,   -25,
       9,   166,   195,   190,  -196,  -196,   203,   223,   199,   202,
     224,   190,   190,   204,   179,  -196,   190,   198,   209,   307,
     494,   494,   506,    64,   190,   395,   213,  -196,  -196,  -196,
     220,   327,   494,   190,  -196,   494,   190,   201,  -196,   229,
    -196,   239,   190,   190,   250,   411,   494,   245,  -196,   190,
     427,   455,  -196,  -196,   236,   347,  -196,   259,   190,   190,
    -196,   190,   247,   237,   215,  -196,  -196,  -196
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     9,     6,     0,     1,     0,    13,     8,
       3,     0,     0,     7,     2,     5,    10,     0,     0,     0,
       0,    14,    15,    11,    22,    20,    12,     0,    24,     0,
       0,    21,     0,     0,    18,    34,     0,    26,    23,    28,
       0,     0,    33,     0,    19,     0,     0,     0,    27,     0,
      32,    39,    17,     0,    36,    25,     0,    39,    16,     0,
      30,     0,     0,    38,    41,    35,    48,     0,    29,     0,
       0,     0,     0,     0,     0,    42,     0,    40,    80,     0,
      99,   100,     0,     0,     0,     0,     0,     0,     0,    78,
      79,    75,    81,     0,     0,     0,     0,     0,     0,     0,
       0,    54,    55,    82,    83,    84,    85,    86,    61,    62,
      60,    56,    57,    46,     0,     0,    37,     0,     0,     0,
       0,     0,     0,     0,     0,   109,    88,     0,     0,     0,
     110,     0,   107,     0,     0,    73,    58,    72,    47,   110,
     110,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      43,     0,     0,     0,     0,     0,     0,   110,     0,    90,
       0,    87,     0,    49,   104,     0,   102,     0,    74,    77,
       0,    45,     0,     0,     0,    65,    66,    67,    68,    69,
      70,    71,     0,     0,   101,    59,     0,     0,    92,     0,
       0,     0,     0,     0,     0,    51,     0,    76,     0,     0,
     106,    44,    63,    64,    88,     0,     0,    91,    93,    96,
       0,     0,   111,     0,   108,    89,     0,     0,   103,     0,
      31,     0,     0,     0,     0,     0,    50,     0,    53,     0,
       0,     0,   110,   105,     0,     0,    98,     0,     0,    88,
      94,     0,     0,     0,     0,    95,    52,    97
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -196,  -196,  -196,   272,  -196,   281,  -196,  -196,  -196,  -196,
    -196,  -196,  -196,  -196,  -196,  -196,   242,  -196,  -196,   249,
     246,  -196,   233,   -86,   -72,  -196,  -196,  -195,  -196,  -196,
     120,  -196,  -196,  -196,  -196,  -196,  -196,  -196,  -196,  -196,
    -196,  -196,  -196,  -196,  -133,  -196
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     5,     8,     9,    14,    20,    21,    22,
      30,    28,    33,    38,    47,    48,    49,    41,    42,    43,
      62,    63,    64,    50,   159,   101,   102,   160,   161,   103,
     187,   188,   104,   105,   106,   107,   108,   109,   110,   111,
     130,   112,   133,   158,   167,   224
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
     100,   113,   125,    16,   153,    17,   173,   174,    10,   219,
      35,   119,   120,   193,    56,   123,    36,    18,    19,     1,
      57,   129,   131,   132,   192,   135,    11,   137,   146,   147,
     194,    11,     4,   148,     6,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   243,   151,   152,   148,     7,   155,
     156,   144,   145,   146,   147,   162,   163,   154,   148,   145,
     146,   147,   171,   147,    23,   148,    15,   148,    24,   175,
     176,   177,   178,   179,   180,   181,   143,   144,   145,   146,
     147,    25,   189,    26,   148,   139,   140,   141,   142,   143,
     144,   145,   146,   147,    27,   199,    29,   148,   200,   238,
     201,   202,   203,   190,    31,   126,    32,   127,   214,    34,
     128,   205,   141,   142,   143,   144,   145,   146,   147,   211,
     212,    37,   148,    72,   215,    39,    73,    44,   169,   170,
     139,   140,   141,   142,   143,   144,   145,   146,   147,    40,
      46,   225,   148,    45,   226,    78,    51,    52,    54,    55,
     230,   231,    79,    80,    81,    82,    83,   235,    58,    84,
      60,    61,    85,    86,    87,    65,   242,    66,    88,   244,
      89,    90,    91,    68,    69,    92,    70,    71,    75,    76,
      93,   115,    94,   114,    95,    96,   142,   143,   144,   145,
     146,   147,    74,    78,   116,   148,   117,    97,    98,    99,
      79,    80,    81,    82,    83,   118,   121,    84,   122,   124,
      85,    86,    87,   136,   134,   149,    88,   150,    89,    90,
      91,   209,   166,    92,   148,    56,   172,   182,    93,   186,
      94,   183,    95,   195,   247,   204,   198,   206,   196,   207,
     217,   210,   213,   216,   221,    97,    98,    99,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   157,   222,   227,
     148,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     228,   229,   245,   148,   232,   234,   239,   241,   246,    12,
     139,   140,   141,   142,   143,   144,   145,   146,   147,    13,
      59,    53,   148,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   164,    67,    77,   148,   165,     0,   208,     0,
       0,     0,     0,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   191,     0,     0,   148,     0,     0,     0,     0,
       0,     0,     0,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   218,     0,     0,   148,     0,     0,     0,     0,
       0,     0,     0,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   223,     0,     0,   148,     0,     0,     0,     0,
       0,     0,     0,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   240,     0,     0,   148,     0,     0,     0,     0,
       0,     0,     0,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   184,     0,     0,   148,     0,     0,     0,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   185,     0,
       0,   148,     0,     0,     0,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   220,     0,     0,   148,     0,     0,
       0,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     233,     0,     0,   148,     0,     0,     0,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   236,     0,     0,   148,
       0,     0,     0,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   168,     0,     0,   148,     0,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   237,     0,     0,   148,
       0,   139,   140,   141,   142,   143,   144,   145,   146,   147,
       0,   138,     0,   148,   139,   140,   141,   142,   143,   144,
     145,   146,   147,     0,   197,     0,   148,   139,   140,   141,
     142,   143,   144,   145,   146,   147,     0,     0,     0,   148,
     139,   140,   141,   142,   143,   144,   145,   146,   147,     0,
       0,     0,   148,   140,   141,   142,   143,   144,   145,   146,
     147,     0,     0,     0,   148
};

static const yytype_int16 yycheck[] =
{
      72,    73,    88,    35,    15,    37,   139,   140,    35,   204,
      38,    83,    84,    27,    34,    87,    44,     6,     7,     4,
      40,    93,    94,    95,   157,    97,    58,    99,    53,    54,
      44,    58,    30,    58,     0,    46,    47,    48,    49,    50,
      51,    52,    53,    54,   239,   117,   118,    58,     5,   121,
     122,    51,    52,    53,    54,   127,   128,    18,    58,    52,
      53,    54,   134,    54,    35,    58,    30,    58,    31,   141,
     142,   143,   144,   145,   146,   147,    50,    51,    52,    53,
      54,    31,   154,    35,    58,    46,    47,    48,    49,    50,
      51,    52,    53,    54,     8,   167,     8,    58,   170,   232,
     172,   173,   174,    19,    31,    40,     9,    42,   194,    31,
      45,   183,    48,    49,    50,    51,    52,    53,    54,   191,
     192,    31,    58,    42,   196,    38,    45,    31,    43,    44,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    30,
      30,   213,    58,    44,   216,     3,    40,    39,    35,    31,
     222,   223,    10,    11,    12,    13,    14,   229,    39,    17,
      35,    30,    20,    21,    22,    35,   238,    31,    26,   241,
      28,    29,    30,    35,    34,    33,    41,    44,    31,    34,
      38,    42,    40,    34,    42,    43,    49,    50,    51,    52,
      53,    54,    41,     3,    31,    58,    38,    55,    56,    57,
      10,    11,    12,    13,    14,    38,    18,    17,    40,    30,
      20,    21,    22,    31,    45,    31,    26,    43,    28,    29,
      30,    19,    39,    33,    58,    34,    45,    30,    38,    30,
      40,    38,    42,    41,    19,    40,    36,    34,    44,    16,
      31,    17,    38,    45,    31,    55,    56,    57,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    23,    38,    58,
      58,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      41,    32,    25,    58,    24,    30,    40,    18,    41,     7,
      46,    47,    48,    49,    50,    51,    52,    53,    54,     8,
      48,    42,    58,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    35,    57,    71,    58,    39,    -1,   188,    -1,
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
      -1,    -1,    58,    47,    48,    49,    50,    51,    52,    53,
      54,    -1,    -1,    -1,    58
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,    60,    61,    30,    62,     0,     5,    63,    64,
      35,    58,    62,    64,    65,    30,    35,    37,     6,     7,
      66,    67,    68,    35,    31,    31,    35,     8,    70,     8,
      69,    31,     9,    71,    31,    38,    44,    31,    72,    38,
      30,    76,    77,    78,    31,    44,    30,    73,    74,    75,
      82,    40,    39,    78,    35,    31,    34,    40,    39,    75,
      35,    30,    79,    80,    81,    35,    31,    79,    35,    34,
      41,    44,    42,    45,    41,    31,    34,    81,     3,    10,
      11,    12,    13,    14,    17,    20,    21,    22,    26,    28,
      29,    30,    33,    38,    40,    42,    43,    55,    56,    57,
      83,    84,    85,    88,    91,    92,    93,    94,    95,    96,
      97,    98,   100,    83,    34,    42,    31,    38,    38,    83,
      83,    18,    40,    83,    30,    82,    40,    42,    45,    83,
      99,    83,    83,   101,    45,    83,    31,    83,    43,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    58,    31,
      43,    83,    83,    15,    18,    83,    83,    23,   102,    83,
      86,    87,    83,    83,    35,    39,    39,   103,    41,    43,
      44,    83,    45,   103,   103,    83,    83,    83,    83,    83,
      83,    83,    30,    38,    39,    39,    30,    89,    90,    83,
      19,    35,   103,    27,    44,    41,    44,    43,    36,    83,
      83,    83,    83,    83,    40,    83,    34,    16,    89,    19,
      17,    83,    83,    38,    82,    83,    45,    31,    35,    86,
      39,    31,    38,    35,   104,    83,    83,    58,    41,    32,
      83,    83,    24,    39,    30,    83,    39,    41,   103,    40,
      35,    18,    83,    86,    83,    25,    41,    19
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
     103,   104
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     3,     0,     3,     1,     2,     1,     0,
       3,     4,     3,     0,     1,     1,     7,     6,     2,     3,
       0,     2,     0,     2,     0,     3,     1,     1,     0,     3,
       2,     9,     1,     1,     0,     3,     2,     6,     1,     0,
       3,     1,     3,     5,     8,     7,     5,     6,     3,     3,
       6,     4,    10,     6,     1,     1,     1,     1,     2,     4,
       1,     1,     1,     4,     4,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     3,     1,     4,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     3,
       1,     5,     1,     2,     6,    10,     5,    11,     8,     1,
       1,     4,     3,     4,     2,     7,     3,     1,     3,     0,
       0,     0
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
#line 133 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Compilation_unit -> Package_declaration Import_declarations Program");
		}
#line 1528 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 138 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Package_declaration -> KEY_PACKAGE Package_name STMT_TERMINATOR");
		}
#line 1535 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 141 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back( "Package_declaration -> EMPTY");
		}
#line 1542 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 146 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Package_name -> Package_name DOT IDENTIFIER");
		}
#line 1549 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 149 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Package_name -> IDENTIFIER");
		}
#line 1556 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 154 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Import_declarations -> Import_declarations Import_declaration");
		}
#line 1563 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 157 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Import_declarations -> Import_declaration");
		}
#line 1570 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 160 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back( "Import_declarations -> EMPTY");
		}
#line 1577 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 165 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Import_declaration -> KEY_IMPORT Package_name STMT_TERMINATOR");
		}
#line 1584 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 168 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Import_declaration -> KEY_IMPORT Package_name DOTSTAR STMT_TERMINATOR");
		}
#line 1591 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 173 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Program -> Program Sub_Program STMT_TERMINATOR");
		}
#line 1598 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 176 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Program -> EMPTY");
		}
#line 1605 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 181 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Sub_Program -> Class");
		}
#line 1612 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 184 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Sub_Program -> Interface");
		}
#line 1619 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 189 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Class -> KEY_CLASS TYPE Inheritance Implement_Interface BLOCK_BEGIN Features_list_opt BLOCK_END");
			// cout << "inside class\n";
			(yyval.node) = (yyvsp[-1].node);
			// cout << $$->code;
			// cout << "end of class\n";
		}
#line 1630 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 198 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Interface -> KEY_INTERFACE TYPE Interface_Inheritance_List BLOCK_BEGIN Interface_features_list_opt BLOCK_END");
		}
#line 1637 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 203 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Interface_Inheritance_List -> KEY_INHERITS TYPE");
		}
#line 1644 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 206 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Interface_Inheritance_List -> Interface_Inheritance_List COMMA TYPE");
		}
#line 1651 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 209 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Interface_Inheritance_List -> EMPTY");
		}
#line 1658 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 214 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Inheritance -> KEY_INHERITS TYPE");
		}
#line 1665 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 217 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Inheritance -> EMPTY");
		}
#line 1672 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 222 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Implement_Interface -> KEY_IMPLEMENTS Interfaces_list");
		}
#line 1679 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 225 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Implement_Interface -> EMPTY");
		}
#line 1686 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 230 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Interfaces_list -> Interfaces_list COMMA TYPE");
		}
#line 1693 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 233 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Interfaces_list -> TYPE");
		}
#line 1700 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 238 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Features_list_opt -> Features_list");
			(yyval.node) = (yyvsp[0].node);
		}
#line 1708 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 242 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Features_list_opt -> EMPTY");
		}
#line 1715 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 247 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Features_list -> Features_list Feature STMT_TERMINATOR");
			(yyval.node) = new Node();
			(yyval.node)->code = (yyvsp[-2].node)->code + (yyvsp[-1].node)->code;
		}
#line 1724 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 252 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Features_list -> Feature STMT_TERMINATOR");
			(yyval.node) = (yyvsp[-1].node);
		}
#line 1732 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 258 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Feature -> IDENTIFIER PARAN_OPEN Formal_params_list_opt PARAN_CLOSE COLON TYPE BLOCK_BEGIN Expression BLOCK_END");
			// currently there is only one feature main()
			(yyval.node) = (yyvsp[-1].node);
			// cout << $$->code;
		}
#line 1742 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 264 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Feature -> Formal");
			(yyval.node) = (yyvsp[0].node);
			// cout << $$->code;
		}
#line 1751 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 271 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Interface_features_list_opt -> Interface_features_list");
		}
#line 1758 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 274 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Interface_features_list_opt -> EMPTY");
		}
#line 1765 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 279 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Interface_features_list -> Interface_features_list Interface_feature STMT_TERMINATOR");
		}
#line 1772 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 282 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Interface_features_list -> Interface_feature STMT_TERMINATOR");
		}
#line 1779 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 287 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Interface_feature -> IDENTIFIER PARAN_OPEN Formal_params_list_opt PARAN_CLOSE COLON TYPE");
		}
#line 1786 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 292 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Formal_params_list_opt -> Formal_params_list");
		}
#line 1793 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 295 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Formal_params_list_opt -> EMPTY");
		}
#line 1800 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 300 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Formal_params_list -> Formal_params_list COMMA");
		}
#line 1807 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 303 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Formal_params_list -> Formal_param");
		}
#line 1814 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 308 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Formal_param -> IDENTIFIER COLON TYPE");
		}
#line 1821 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 311 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Formal_param -> IDENTIFIER COLON TYPE ARRAY_OPEN ARRAY_CLOSE");
		}
#line 1828 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 316 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Formal -> IDENTIFIER COLON TYPE ARRAY_OPEN Expression ARRAY_CLOSE OP_ASGN Expression");
		}
#line 1835 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 319 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Formal -> IDENTIFIER COLON TYPE ARRAY_OPEN ARRAY_CLOSE OP_ASGN Expression");
		}
#line 1842 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 322 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Formal -> IDENTIFIER COLON TYPE OP_ASGN Expression");
			SymbolTableEntry* entry = (SymbolTableEntry*) calloc(1, sizeof(SymbolTableEntry));
			entry->type = string((yyvsp[-2].str));
			symbolTable.insert((yyvsp[-4].str), entry);
			// symbolTable.printTableInts();
			if (entry->type != (yyvsp[0].node)->type) {
				cout << entry->type << ", " << (yyvsp[0].node)->type << ": Types don't match...\n";
				exit(0);
			}
			(yyval.node) = new Node();
			(yyval.node)->code = (yyvsp[0].node)->code + "1,=," + string((yyvsp[-4].str)) + "," + (yyvsp[0].node)->place + "\n";
			ircode.push_back("1,=," + string((yyvsp[-4].str)) + "," + (yyvsp[0].node)->place + "\n");
			// $$->nextlist = NULL;
			(yyval.node)->type = entry->type;
		}
#line 1862 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 338 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Formal -> IDENTIFIER COLON TYPE ARRAY_OPEN Expression ARRAY_CLOSE");
			SymbolTableEntry* entry = (SymbolTableEntry*) calloc(1, sizeof(SymbolTableEntry));
			entry->type = string((yyvsp[-3].str)) + "[]";
			symbolTable.insert((yyvsp[-5].str), entry);
			// symbolTable.printTableInts();
			(yyval.node) = emptyNode;
		}
#line 1874 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 346 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Formal -> IDENTIFIER COLON TYPE");
			SymbolTableEntry* entry = (SymbolTableEntry*) calloc(1, sizeof(SymbolTableEntry));
			entry->type = string((yyvsp[0].str));
			symbolTable.insert((yyvsp[-2].str), entry);
			// symbolTable.printTableInts();
			(yyval.node) = emptyNode;
		}
#line 1886 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 356 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> IDENTIFIER OP_ASGN Expression");
			SymbolTableEntry *entry = symbolTable.lookup((yyvsp[-2].str));
			if (entry == NULL) {
				cout << (yyvsp[-2].str) << ": Variable not found...\n";
				exit(0);
			}
			if (entry->type != (yyvsp[0].node)->type) {
				cout << entry->type << ", " << (yyvsp[0].node)->type << ": Types don't match...\n";
				exit(0);
			}
			(yyval.node) = new Node();
			(yyval.node)->code = (yyvsp[0].node)->code + "1,=," + string((yyvsp[-2].str)) + "," + (yyvsp[0].node)->place + "\n";
			ircode.push_back("1,=," + string((yyvsp[-2].str)) + "," + (yyvsp[0].node)->place + "\n");
			// $$->nextlist = NULL;
			(yyval.node)->type = entry->type;
		}
#line 1907 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 373 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> IDENTIFIER ARRAY_OPEN Expression ARRAY_CLOSE OP_ASGN Expression");
		}
#line 1914 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 376 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> IDENTIFIER PARAN_OPEN Arguments_list_opt PARAN_CLOSE");
		}
#line 1921 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 379 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> BLOCK_BEGIN Expression BLOCK_END AT TYPE DOT IDENTIFIER PARAN_OPEN Arguments_list_opt PARAN_CLOSE");
		}
#line 1928 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 382 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> Expression DOT IDENTIFIER PARAN_OPEN Arguments_list_opt PARAN_CLOSE");
		}
#line 1935 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 385 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> Conditionals");
			(yyval.node) = (yyvsp[0].node);
		}
#line 1943 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 389 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> Loops");
		}
#line 1950 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 392 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> Block_Expression");
			(yyval.node) = (yyvsp[0].node);
		}
#line 1958 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 396 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> Let_Expression");
		}
#line 1965 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 399 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> KEY_NEW TYPE");
		}
#line 1972 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 402 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> KEY_ISVOID BLOCK_BEGIN Expression BLOCK_END");
		}
#line 1979 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 405 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> Return_statement");
		}
#line 1986 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 408 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> Break_statement");
		}
#line 1993 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 411 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> Continue_statement");
		}
#line 2000 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 414 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> Expression OP_LOGICAL_OR Expression");
			(yyval.node) = new Node();
			ircode = backpatch((yyvsp[-3].node)->falselist, (yyvsp[-1].intValue), ircode);
			(yyval.node)->truelist = merge((yyvsp[-3].node)->truelist, (yyvsp[0].node)->truelist);
			(yyval.node)->falselist = (yyvsp[0].node)->falselist;
		}
#line 2011 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 421 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> Expression OP_LOGICAL_AND Expression");
			(yyval.node) = new Node();
			ircode = backpatch((yyvsp[-3].node)->truelist, (yyvsp[-1].intValue), ircode);
			(yyval.node)->truelist = (yyvsp[0].node)->truelist;
			(yyval.node)->falselist = merge((yyvsp[-3].node)->falselist, (yyvsp[0].node)->falselist);
		}
#line 2022 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 428 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> Expression OP_BITWISE_OR Expression");
		}
#line 2029 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 431 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> Expression OP_BITWISE_XOR Expression");
		}
#line 2036 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 434 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> Expression OP_BITWISE_AND Expression");
		}
#line 2043 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 437 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> Expression OP_RELATIONAL_EQ Expression");
			(yyval.node) = new Node();
			// $$->place = newTemp(); handling the place remains
			(yyval.node)->truelist = makelist(ircode.size());
			(yyval.node)->falselist = makelist(ircode.size() + 1);
			ircode.push_back("1,ifgoto,eq," + (yyvsp[-2].node)->place + "," + (yyvsp[0].node)->place + ",");
			ircode.push_back("1,goto,");
		}
#line 2056 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 446 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> Expression OP_RELATIONAL_IEQ Expression");
			(yyval.node) = new Node();
			// $$->place = newTemp(); handling the place remains
			(yyval.node)->truelist = makelist(ircode.size());
			(yyval.node)->falselist = makelist(ircode.size() + 1);
			ircode.push_back("1,ifgoto," + dictIeqToString(string((yyvsp[-1].str))) + "," + (yyvsp[-2].node)->place + "," + (yyvsp[0].node)->place + ",");
			ircode.push_back("1,goto,");
		}
#line 2069 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 455 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> Expression OP_ARITHMETIC_B_AD Expression"); 
			(yyval.node) = new Node();
			(yyval.node)->place = newTemp();
			if ((yyvsp[-2].node)->type == "Int" && (yyvsp[0].node)->type == "Int") {
				(yyval.node)->code = (yyvsp[-2].node)->code + (yyvsp[0].node)->code + "1," + string((yyvsp[-1].str)) + "," + (yyval.node)->place + "," + ((yyvsp[-2].node)->place) + "," + ((yyvsp[0].node)->place) + "\n";
				ircode.push_back("1," + string((yyvsp[-1].str)) + "," + (yyval.node)->place + "," + ((yyvsp[-2].node)->place) + "," + ((yyvsp[0].node)->place) + "\n");
				(yyval.node)->type = (yyvsp[-2].node)->type;
			} else {
				cout << "Operands not of type Int in B_AD" << endl;
				exit(0);
			}
			// cout << "here in expresseion temp = " << $$->place << "\n";
			// cout << "$$->code = " << $$->code << "\n";
		}
#line 2088 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 470 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> Expression OP_ARITHMETIC_B_MU Expression"); 
			(yyval.node) = new Node();
			(yyval.node)->place = newTemp();
			if ((yyvsp[-2].node)->type == "Int" && (yyvsp[0].node)->type == "Int") {
				(yyval.node)->code = (yyvsp[-2].node)->code + (yyvsp[0].node)->code + "1," + string((yyvsp[-1].str)) + "," + (yyval.node)->place + "," + ((yyvsp[-2].node)->place) + "," + ((yyvsp[0].node)->place) + "\n";
				ircode.push_back("1," + string((yyvsp[-1].str)) + "," + (yyval.node)->place + "," + ((yyvsp[-2].node)->place) + "," + ((yyvsp[0].node)->place) + "\n");
				(yyval.node)->type = (yyvsp[-2].node)->type;
			} else {
				cout << "Operands not of type Int in B_MU" << endl;
				exit(0);
			}
			// cout << "here in expresseion temp = " << $$->place << "\n";
			// cout << "$$->code = " << $$->code << "\n";
		}
#line 2107 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 485 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> OP_ARITHMETIC_U Expression"); 
			(yyval.node) = new Node();
			(yyval.node)->place = newTemp();
			if ((yyvsp[0].node)->type == "Int") {
				(yyval.node)->code = (yyvsp[0].node)->code + "1,-," + (yyval.node)->place + ",0," + ((yyvsp[0].node)->place) + "\n";
				ircode.push_back("1,-," + (yyval.node)->place + ",0," + ((yyvsp[0].node)->place) + "\n");
				(yyval.node)->type = (yyvsp[0].node)->type;
			} else {
				cout << "Operands not of type Int in U" << endl;
				exit(0);
			}
			// cout << "here in expresseion temp = " << $$->place << "\n";
			// cout << "$$->code = " << $$->code << "\n";
		}
#line 2126 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 500 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> KEY_NOT Expression");
			(yyval.node) = (yyvsp[0].node);
			vector<int> temp = (yyval.node)->falselist;
			(yyval.node)->falselist = (yyval.node)->truelist;
			(yyval.node)->truelist = temp;
		}
#line 2137 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 507 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> PARAN_OPEN Expression PARAN_CLOSE");
			(yyval.node) = (yyvsp[-1].node);
		}
#line 2145 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 511 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> IDENTIFIER"); 
			SymbolTableEntry *entry = symbolTable.lookup((yyvsp[0].str));
			if (entry){
				(yyval.node) = new Node();
				(yyval.node)->place = (yyvsp[0].str);
				(yyval.node)->type = entry->type;
				(yyval.node)->code = "";
			} else {
				cout << "ERROR :- VARIABLE (" << (yyvsp[0].str) << ") NOT FOUND\n";
				exit(0);
			}
		}
#line 2162 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 524 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> IDENTIFIER ARRAY_OPEN Expression ARRAY_CLOSE");
		}
#line 2169 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 527 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> ARRAY_OPEN Expressions ARRAY_CLOSE");
		}
#line 2176 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 530 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> KEY_TRUE");
			(yyval.node) = new Node();
			(yyval.node)->truelist = makelist(ircode.size());
			ircode.push_back("1,goto,");
		}
#line 2186 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 536 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> KEY_FALSE");
			(yyval.node) = new Node();
			(yyval.node)->falselist = makelist(ircode.size());
			ircode.push_back("1,goto,");
		}
#line 2196 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 542 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expression -> INTEGER");
			(yyval.node) = new Node();
			(yyval.node)->place = to_string((yyvsp[0].intValue));
			(yyval.node)->code = "";
			(yyval.node)->type = "Int";
		}
#line 2207 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 549 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back( "Expression -> STRING");
			(yyval.node) = new Node();
			(yyval.node)->place = string((yyvsp[0].str));
			(yyval.node)->code = "";
			(yyval.node)->type = "String";
		}
#line 2218 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 558 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Conditionals -> Case");
		}
#line 2225 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 561 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Conditionals -> If_then_else");
			(yyval.node) = (yyvsp[0].node);
		}
#line 2233 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 567 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Loops -> While");
		}
#line 2240 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 570 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Loops -> For");
		}
#line 2247 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 573 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Loops -> Do_while");
		}
#line 2254 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 578 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Arguments_list_opt -> Arguments_list");
		}
#line 2261 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 581 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back ("Arguments_list_opt -> EMPTY");
		}
#line 2268 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 586 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Arguments_list -> Arguments_list COMMA Expression");
		}
#line 2275 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 589 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Arguments_list -> Expression");
		}
#line 2282 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 594 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Case -> KEY_CASE Expression KEY_OF Actions KEY_ESAC");
		}
#line 2289 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 599 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Actions -> Action");
		}
#line 2296 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 602 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Actions -> Action Actions");
		}
#line 2303 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 607 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Action -> IDENTIFIER COLON TYPE OP_IMPLIES Expression STMT_TERMINATOR");
		}
#line 2310 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 612 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("If_then_else -> KEY_IF Expression KEY_THEN Expression KEY_ELSE Expression KEY_FI");
			(yyval.node) = new Node();
			ircode = backpatch((yyvsp[-8].node)->truelist, (yyvsp[-6].intValue), ircode);
			ircode = backpatch((yyvsp[-8].node)->falselist, (yyvsp[-2].intValue), ircode);
			vector<int> temp = merge((yyvsp[-5].node)->nextlist, (yyvsp[-4].node)->nextlist);
			(yyval.node)->nextlist = merge(temp, (yyvsp[-1].node)->nextlist);
		}
#line 2322 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 622 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("While -> KEY_WHILE Expression KEY_LOOP Expression KEY_POOL");
		}
#line 2329 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 627 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("For -> KEY_FOR PARAN_OPEN Expression STMT_TERMINATOR Expression STMT_TERMINATOR Expression PARAN_CLOSE KEY_LOOP Expression KEY_POOL");
		}
#line 2336 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 632 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Do_while -> KEY_DO KEY_LOOP Expression KEY_POOL KEY_WHILE BLOCK_BEGIN Expression BLOCK_END");
		}
#line 2343 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 637 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Break_statement -> KEY_BREAK");
		}
#line 2350 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 642 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Continue_statement -> KEY_CONTINUE");
		}
#line 2357 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 647 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Return_statement -> KEY_RETURN BLOCK_BEGIN Expression BLOCK_END");
		}
#line 2364 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 652 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Block_Expression -> BLOCK_BEGIN Block_list BLOCK_END");
			(yyval.node) = new Node();
			(yyval.node)->code = (yyvsp[-1].node)->code;
			(yyval.node)->type = (yyvsp[-1].node)->type;
			(yyval.node)->nextlist = (yyvsp[-1].node)->nextlist;
		}
#line 2375 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 661 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Block_list -> Block_list Expression STMT_TERMINATOR");
			(yyval.node) = new Node();
			(yyval.node)->code = (yyvsp[-3].node)->code + (yyvsp[-1].node)->code;
			(yyval.node)->type = (yyvsp[-1].node)->type;
			ircode = backpatch((yyvsp[-3].node)->nextlist, (yyvsp[-2].intValue), ircode);
			(yyval.node)->nextlist = (yyvsp[-1].node)->nextlist;
		}
#line 2387 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 669 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Block_list -> Expression STMT_TERMINATOR");
			(yyval.node) = new Node();
			(yyval.node)->code = (yyvsp[-1].node)->code;
			(yyval.node)->type = (yyvsp[-1].node)->type;
			(yyval.node)->nextlist = (yyvsp[-1].node)->nextlist;
		}
#line 2398 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 678 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Let_Expression -> KEY_LET Formal Formals KEY_IN BLOCK_BEGIN Expression BLOCK_END");
		}
#line 2405 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 683 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back( "Expressions -> Expressions COMMA Expression");
		}
#line 2412 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 686 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Expressions -> Expression");
		}
#line 2419 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 691 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Formals -> Formals COMMA Formal");
		}
#line 2426 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 694 "src/parser.y" /* yacc.c:1646  */
    {	parse_tree.push_back("Formals -> EMPTY");
		}
#line 2433 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 698 "src/parser.y" /* yacc.c:1646  */
    {	(yyval.intValue) = ircode.size();
		}
#line 2440 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 702 "src/parser.y" /* yacc.c:1646  */
    {	(yyval.node) = new Node();
			(yyval.node)->nextlist = makelist(ircode.size());
			ircode.push_back("1,goto,");
		}
#line 2449 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 2453 "parser.tab.c" /* yacc.c:1646  */
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
#line 706 "src/parser.y" /* yacc.c:1906  */


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
