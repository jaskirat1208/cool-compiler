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

#line 81 "parser.tab.c" /* yacc.c:339  */

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
#line 16 "src/parser.y" /* yacc.c:355  */

	int intValue;
	char* str;
	struct Expression* expr; 

#line 186 "parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 203 "parser.tab.c" /* yacc.c:358  */

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
#define YYLAST   621

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  109
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  242

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
       0,   127,   127,   131,   134,   137,   139,   143,   145,   148,
     151,   153,   157,   160,   163,   165,   169,   174,   178,   180,
     183,   186,   189,   192,   195,   198,   200,   204,   207,   210,
     212,   216,   218,   222,   225,   228,   230,   234,   238,   241,
     244,   246,   250,   252,   256,   259,   261,   263,   271,   280,
     282,   284,   286,   288,   290,   292,   294,   296,   298,   300,
     302,   304,   306,   308,   310,   312,   314,   316,   318,   320,
     322,   330,   338,   346,   348,   353,   363,   365,   367,   369,
     371,   374,   378,   380,   384,   386,   388,   392,   395,   398,
     400,   404,   408,   410,   414,   418,   422,   426,   430,   434,
     438,   442,   446,   450,   452,   456,   460,   462,   466,   469
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
  "Formals", YY_NULLPTR
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

#define YYPACT_NINF -185

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-185)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      13,    14,    48,    61,  -185,   -29,  -185,    14,    61,  -185,
    -185,    23,   -32,  -185,    25,  -185,  -185,    46,    52,    55,
      62,  -185,  -185,  -185,    88,    98,  -185,    76,   101,    89,
     -25,  -185,    90,    85,  -185,    95,    96,  -185,    93,   111,
      86,   104,    95,   109,  -185,   114,    -6,   107,   111,   115,
    -185,   121,  -185,   117,  -185,  -185,   122,   121,  -185,   120,
    -185,   127,   123,   118,  -185,  -185,   -12,   128,  -185,   139,
     137,   121,   146,   242,   143,   131,   147,  -185,  -185,   142,
    -185,  -185,   144,   242,   242,   163,   145,   242,   153,  -185,
    -185,    12,  -185,   242,   242,   242,   151,   242,   156,   242,
     537,  -185,  -185,  -185,  -185,  -185,  -185,  -185,  -185,  -185,
    -185,  -185,  -185,   563,   167,   157,  -185,   242,   242,   -11,
      41,   242,   242,   286,   175,  -185,   242,   242,   242,   336,
     194,   510,   563,    20,   242,   152,  -185,   152,   168,   242,
     242,   242,   242,   242,   242,   242,   242,   242,   182,   179,
    -185,   432,   448,   188,   242,    82,   356,   242,   -20,   563,
     178,   177,   550,   563,  -185,   189,  -185,   376,  -185,  -185,
     242,   563,   242,   190,    64,   141,    26,    51,   -44,     7,
     -38,   152,   186,   242,  -185,  -185,   195,   212,   188,   254,
     213,   242,   299,   193,   153,  -185,   242,   201,   204,  -185,
     563,   563,   242,   464,   216,  -185,  -185,  -185,   219,   396,
     242,   242,  -185,   563,   242,   200,   220,  -185,   228,   242,
     242,   316,   480,   563,   235,  -185,   242,   496,   524,  -185,
    -185,   226,   416,  -185,   249,   242,  -185,   242,   233,   267,
    -185,  -185
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
       0,     0,   107,     0,     0,    73,    58,    72,    47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      43,     0,     0,     0,     0,     0,     0,     0,     0,    90,
       0,    87,     0,    49,   104,     0,   102,     0,    74,    77,
       0,    45,     0,    63,    64,    65,    66,    67,    68,    69,
      70,    71,     0,     0,   101,    59,     0,     0,    92,     0,
       0,     0,     0,     0,     0,    51,     0,    76,     0,   103,
     106,    44,    88,     0,     0,    91,    93,    96,     0,     0,
       0,     0,   108,    89,     0,     0,     0,    31,     0,     0,
       0,     0,     0,    50,     0,    53,     0,     0,     0,    95,
     105,     0,     0,    98,     0,    88,    94,     0,     0,     0,
      52,    97
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -185,  -185,  -185,   262,  -185,   268,  -185,  -185,  -185,  -185,
    -185,  -185,  -185,  -185,  -185,  -185,   229,  -185,  -185,   236,
     222,  -185,   210,   -86,   -72,  -185,  -185,  -184,  -185,  -185,
      97,  -185,  -185,  -185,  -185,  -185,  -185,  -185,  -185,  -185,
    -185,  -185,  -185,  -185
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     5,     8,     9,    14,    20,    21,    22,
      30,    28,    33,    38,    47,    48,    49,    41,    42,    43,
      62,    63,    64,    50,   159,   101,   102,   160,   161,   103,
     187,   188,   104,   105,   106,   107,   108,   109,   110,   111,
     130,   112,   133,   158
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
     100,   113,   125,    16,   153,    17,    10,   193,   145,   146,
     147,   119,   120,    35,   148,   123,   147,     1,   216,    36,
     148,   129,   131,   132,   194,   135,    11,   137,    56,    11,
      72,    18,    19,    73,    57,   139,   140,   141,   142,   143,
     144,   145,   146,   147,     4,   151,   152,   148,     6,   155,
     156,   238,   126,    15,   127,   162,   163,   128,   167,   154,
     146,   147,   171,   169,   170,   148,     7,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   143,   144,   145,   146,
     147,    23,   189,    24,   148,   192,    25,   139,   140,   141,
     142,   143,   144,   145,   146,   147,    27,    26,   200,   148,
     201,   190,   144,   145,   146,   147,    29,    31,   212,   148,
      32,   203,   141,   142,   143,   144,   145,   146,   147,   209,
      34,    37,   148,    39,   213,    40,    51,    44,   139,   140,
     141,   142,   143,   144,   145,   146,   147,    45,   221,   222,
     148,    46,   223,    52,    54,    55,    58,   227,   228,    78,
      60,    61,    65,    66,   232,    68,    79,    80,    81,    82,
      83,    69,    71,    84,    70,   239,    85,    86,    87,    74,
      75,    76,    88,   115,    89,    90,    91,   114,   116,    92,
     117,   121,   118,   124,    93,   122,    94,   136,    95,    96,
     142,   143,   144,   145,   146,   147,   134,    78,   149,   148,
     150,    97,    98,    99,    79,    80,    81,    82,    83,    56,
     148,    84,   182,   172,    85,    86,    87,   183,   186,   195,
      88,   196,    89,    90,    91,   198,   202,    92,   205,   204,
     208,   211,    93,   166,    94,   215,    95,   140,   141,   142,
     143,   144,   145,   146,   147,    78,   214,   218,   148,    97,
      98,    99,    79,    80,    81,    82,    83,   219,   224,    84,
     226,   225,    85,    86,    87,   231,   235,   237,    88,    12,
      89,    90,    91,   207,   240,    92,    13,    59,    53,    67,
      93,    77,    94,     0,    95,   206,   241,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    97,    98,    99,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   157,
       0,     0,   148,   139,   140,   141,   142,   143,   144,   145,
     146,   147,     0,   210,     0,   148,     0,     0,     0,     0,
       0,     0,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   229,     0,     0,   148,   139,   140,   141,   142,   143,
     144,   145,   146,   147,     0,     0,     0,   148,     0,     0,
       0,     0,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   164,     0,     0,   148,   165,     0,     0,     0,     0,
       0,     0,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   191,     0,     0,   148,     0,     0,     0,     0,     0,
       0,     0,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   199,     0,     0,   148,     0,     0,     0,     0,     0,
       0,     0,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   220,     0,     0,   148,     0,     0,     0,     0,     0,
       0,     0,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   236,     0,     0,   148,     0,     0,     0,     0,     0,
       0,     0,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   184,     0,     0,   148,     0,     0,     0,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   185,     0,     0,
     148,     0,     0,     0,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   217,     0,     0,   148,     0,     0,     0,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   230,
       0,     0,   148,     0,     0,     0,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   233,     0,     0,   148,     0,
       0,     0,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   168,     0,     0,   148,     0,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   234,     0,     0,   148,     0,
     139,   140,   141,   142,   143,   144,   145,   146,   147,     0,
     138,     0,   148,   139,   140,   141,   142,   143,   144,   145,
     146,   147,     0,   197,     0,   148,   139,   140,   141,   142,
     143,   144,   145,   146,   147,     0,     0,     0,   148,   139,
     140,   141,   142,   143,   144,   145,   146,   147,     0,     0,
       0,   148
};

static const yytype_int16 yycheck[] =
{
      72,    73,    88,    35,    15,    37,    35,    27,    52,    53,
      54,    83,    84,    38,    58,    87,    54,     4,   202,    44,
      58,    93,    94,    95,    44,    97,    58,    99,    34,    58,
      42,     6,     7,    45,    40,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    30,   117,   118,    58,     0,   121,
     122,   235,    40,    30,    42,   127,   128,    45,   130,    18,
      53,    54,   134,    43,    44,    58,     5,   139,   140,   141,
     142,   143,   144,   145,   146,   147,    50,    51,    52,    53,
      54,    35,   154,    31,    58,   157,    31,    46,    47,    48,
      49,    50,    51,    52,    53,    54,     8,    35,   170,    58,
     172,    19,    51,    52,    53,    54,     8,    31,   194,    58,
       9,   183,    48,    49,    50,    51,    52,    53,    54,   191,
      31,    31,    58,    38,   196,    30,    40,    31,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    44,   210,   211,
      58,    30,   214,    39,    35,    31,    39,   219,   220,     3,
      35,    30,    35,    31,   226,    35,    10,    11,    12,    13,
      14,    34,    44,    17,    41,   237,    20,    21,    22,    41,
      31,    34,    26,    42,    28,    29,    30,    34,    31,    33,
      38,    18,    38,    30,    38,    40,    40,    31,    42,    43,
      49,    50,    51,    52,    53,    54,    45,     3,    31,    58,
      43,    55,    56,    57,    10,    11,    12,    13,    14,    34,
      58,    17,    30,    45,    20,    21,    22,    38,    30,    41,
      26,    44,    28,    29,    30,    36,    40,    33,    16,    34,
      17,    38,    38,    39,    40,    31,    42,    47,    48,    49,
      50,    51,    52,    53,    54,     3,    45,    31,    58,    55,
      56,    57,    10,    11,    12,    13,    14,    38,    58,    17,
      32,    41,    20,    21,    22,    30,    40,    18,    26,     7,
      28,    29,    30,    19,    41,    33,     8,    48,    42,    57,
      38,    71,    40,    -1,    42,   188,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    23,
      -1,    -1,    58,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    -1,    24,    -1,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    25,    -1,    -1,    58,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    -1,    -1,    -1,    58,    -1,    -1,
      -1,    -1,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    35,    -1,    -1,    58,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    35,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    35,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    35,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    35,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    39,    -1,    -1,    58,    -1,    -1,    -1,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    39,    -1,    -1,
      58,    -1,    -1,    -1,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    39,    -1,    -1,    58,    -1,    -1,    -1,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    39,
      -1,    -1,    58,    -1,    -1,    -1,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    39,    -1,    -1,    58,    -1,
      -1,    -1,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    41,    -1,    -1,    58,    -1,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    41,    -1,    -1,    58,    -1,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    -1,
      43,    -1,    58,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    -1,    43,    -1,    58,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    -1,    -1,    -1,    58,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    -1,    -1,
      -1,    58
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
      86,    87,    83,    83,    35,    39,    39,    83,    41,    43,
      44,    83,    45,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    30,    38,    39,    39,    30,    89,    90,    83,
      19,    35,    83,    27,    44,    41,    44,    43,    36,    35,
      83,    83,    40,    83,    34,    16,    89,    19,    17,    83,
      24,    38,    82,    83,    45,    31,    86,    39,    31,    38,
      35,    83,    83,    83,    58,    41,    32,    83,    83,    25,
      39,    30,    83,    39,    41,    40,    35,    18,    86,    83,
      41,    19
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
      96,    97,    98,    99,    99,   100,   101,   101,   102,   102
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
       1,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     3,     1,     4,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     3,
       1,     5,     1,     2,     6,     7,     5,    11,     8,     1,
       1,     4,     3,     3,     2,     7,     3,     1,     3,     0
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
#line 128 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Compilation_unit -> Package_declaration Import_declarations Program"); }
#line 1535 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 132 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Package_declaration -> KEY_PACKAGE Package_name STMT_TERMINATOR"); }
#line 1541 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 134 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back( "Package_declaration -> EMPTY"); }
#line 1547 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 138 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Package_name -> Package_name DOT IDENTIFIER"); }
#line 1553 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 140 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Package_name -> IDENTIFIER"); }
#line 1559 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 144 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Import_declarations -> Import_declarations Import_declaration"); }
#line 1565 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 146 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Import_declarations -> Import_declaration"); }
#line 1571 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 148 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back( "Import_declarations -> EMPTY"); }
#line 1577 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 152 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Import_declaration -> KEY_IMPORT Package_name STMT_TERMINATOR"); }
#line 1583 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 154 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Import_declaration -> KEY_IMPORT Package_name DOTSTAR STMT_TERMINATOR"); }
#line 1589 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 158 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Program -> Program Sub_Program STMT_TERMINATOR"); }
#line 1595 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 160 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Program -> EMPTY"); }
#line 1601 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 164 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Sub_Program -> Class"); }
#line 1607 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 166 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Sub_Program -> Interface"); }
#line 1613 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 170 "src/parser.y" /* yacc.c:1646  */
    { cout << "inside class\n";
			parse_tree.push_back("Class -> KEY_CLASS TYPE Inheritance Implement_Interface BLOCK_BEGIN Features_list_opt BLOCK_END"); }
#line 1620 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 175 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Interface -> KEY_INTERFACE TYPE Interface_Inheritance_List BLOCK_BEGIN Interface_features_list_opt BLOCK_END"); }
#line 1626 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 179 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Interface_Inheritance_List -> KEY_INHERITS TYPE"); }
#line 1632 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 181 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Interface_Inheritance_List -> Interface_Inheritance_List COMMA TYPE"); }
#line 1638 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 183 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Interface_Inheritance_List -> EMPTY"); }
#line 1644 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 187 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Inheritance -> KEY_INHERITS TYPE"); }
#line 1650 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 189 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Inheritance -> EMPTY"); }
#line 1656 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 193 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Implement_Interface -> KEY_IMPLEMENTS Interfaces_list"); }
#line 1662 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 195 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Implement_Interface -> EMPTY"); }
#line 1668 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 199 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Interfaces_list -> Interfaces_list COMMA TYPE"); }
#line 1674 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 201 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Interfaces_list -> TYPE"); }
#line 1680 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 205 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Features_list_opt -> Features_list"); }
#line 1686 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 207 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Features_list_opt -> EMPTY"); }
#line 1692 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 211 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Features_list -> Features_list Feature STMT_TERMINATOR"); }
#line 1698 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 213 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Features_list -> Feature STMT_TERMINATOR"); }
#line 1704 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 217 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Feature -> IDENTIFIER PARAN_OPEN Formal_params_list_opt PARAN_CLOSE COLON TYPE BLOCK_BEGIN Expression BLOCK_END"); }
#line 1710 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 219 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Feature -> Formal"); }
#line 1716 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 223 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Interface_features_list_opt -> Interface_features_list"); }
#line 1722 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 225 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Interface_features_list_opt -> EMPTY"); }
#line 1728 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 229 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Interface_features_list -> Interface_features_list Interface_feature STMT_TERMINATOR"); }
#line 1734 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 231 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Interface_features_list -> Interface_feature STMT_TERMINATOR"); }
#line 1740 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 235 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Interface_feature -> IDENTIFIER PARAN_OPEN Formal_params_list_opt PARAN_CLOSE COLON TYPE"); }
#line 1746 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 239 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Formal_params_list_opt -> Formal_params_list"); }
#line 1752 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 241 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Formal_params_list_opt -> EMPTY"); }
#line 1758 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 245 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Formal_params_list -> Formal_params_list COMMA"); }
#line 1764 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 247 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Formal_params_list -> Formal_param"); }
#line 1770 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 251 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Formal_param -> IDENTIFIER COLON TYPE"); }
#line 1776 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 253 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Formal_param -> IDENTIFIER COLON TYPE ARRAY_OPEN ARRAY_CLOSE"); }
#line 1782 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 257 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Formal -> IDENTIFIER COLON TYPE ARRAY_OPEN Expression ARRAY_CLOSE OP_ASGN Expression");
		}
#line 1789 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 260 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Formal -> IDENTIFIER COLON TYPE ARRAY_OPEN ARRAY_CLOSE OP_ASGN Expression"); }
#line 1795 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 262 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Formal -> IDENTIFIER COLON TYPE OP_ASGN Expression"); }
#line 1801 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 264 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Formal -> IDENTIFIER COLON TYPE ARRAY_OPEN Expression ARRAY_CLOSE");
		  SymbolTableEntry* entry = (SymbolTableEntry*) malloc(1*sizeof(SymbolTableEntry));
		  string ty = (yyvsp[-3].str);
		  entry->type = ty.append("[]");   
		  symbolTable.insert((yyvsp[-5].str), entry);
		  // symbolTable.printTableInts();
		  }
#line 1813 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 272 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Formal -> IDENTIFIER COLON TYPE");
		  SymbolTableEntry* entry = (SymbolTableEntry*) malloc(1*sizeof(SymbolTableEntry));
		  entry->type = (yyvsp[0].str);   
		  symbolTable.insert((yyvsp[-2].str), entry);
		  // symbolTable.printTableInts();
		  }
#line 1824 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 281 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> IDENTIFIER OP_ASGN Expression"); }
#line 1830 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 283 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> IDENTIFIER ARRAY_OPEN Expression ARRAY_CLOSE OP_ASGN Expression"); }
#line 1836 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 285 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> IDENTIFIER PARAN_OPEN Arguments_list_opt PARAN_CLOSE"); }
#line 1842 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 287 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> BLOCK_BEGIN Expression BLOCK_END AT TYPE DOT IDENTIFIER PARAN_OPEN Arguments_list_opt PARAN_CLOSE"); }
#line 1848 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 289 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> Expression DOT IDENTIFIER PARAN_OPEN Arguments_list_opt PARAN_CLOSE"); }
#line 1854 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 291 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> Conditionals"); }
#line 1860 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 293 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> Loops"); }
#line 1866 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 295 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> Block_Expression"); }
#line 1872 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 297 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> Let_Expression"); }
#line 1878 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 299 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> KEY_NEW TYPE"); }
#line 1884 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 301 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> KEY_ISVOID BLOCK_BEGIN Expression BLOCK_END"); }
#line 1890 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 303 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> Return_statement"); }
#line 1896 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 305 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> Break_statement"); }
#line 1902 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 307 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> Continue_statement"); }
#line 1908 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 309 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> Expression OP_LOGICAL_OR Expression"); }
#line 1914 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 311 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> Expression OP_LOGICAL_AND Expression"); }
#line 1920 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 313 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> Expression OP_BITWISE_OR Expression"); }
#line 1926 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 315 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> Expression OP_BITWISE_XOR Expression"); }
#line 1932 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 317 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> Expression OP_BITWISE_AND Expression"); }
#line 1938 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 319 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> Expression OP_RELATIONAL_EQ Expression"); }
#line 1944 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 321 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> Expression OP_RELATIONAL_IEQ Expression"); }
#line 1950 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 323 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> Expression OP_ARITHMETIC_B_AD Expression"); 
		  (yyval.expr) = new Expression();
		  (yyval.expr)->place = newTemp();
		  (yyval.expr)->code = (yyvsp[-2].expr)->code + (yyvsp[0].expr)->code + "1," + (yyvsp[-1].str) + "," + (yyval.expr)->place + "," + ((yyvsp[-2].expr)->place) + "," + ((yyvsp[0].expr)->place) + "\n";
		  cout << "here in expresseion temp = " << (yyval.expr)->place << "\n";
		  cout << "$$.code = " << (yyval.expr)->code << "\n";
		}
#line 1962 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 331 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> Expression OP_ARITHMETIC_B_MU Expression"); 
		  (yyval.expr) = new Expression();
		  (yyval.expr)->place = newTemp();
		  (yyval.expr)->code = (yyvsp[-2].expr)->code + (yyvsp[0].expr)->code + "1," + (yyvsp[-1].str) + "," + (yyval.expr)->place + "," + ((yyvsp[-2].expr)->place) + "," + ((yyvsp[0].expr)->place) + "\n";
		  cout << "here in expresseion temp = " << (yyval.expr)->place << "\n";
		  cout << "$$.code = " << (yyval.expr)->code << "\n";
		}
#line 1974 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 339 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> OP_ARITHMETIC_U Expression"); 
		  (yyval.expr) = new Expression();
		  (yyval.expr)->place = newTemp();
		  (yyval.expr)->code = (yyvsp[0].expr)->code + "1,-," + (yyval.expr)->place + ",0," + ((yyvsp[0].expr)->place) + "\n";
		  cout << "here in expresseion temp = " << (yyval.expr)->place << "\n";
		  cout << "$$.code = " << (yyval.expr)->code << "\n";
		}
#line 1986 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 347 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> KEY_NOT Expression"); }
#line 1992 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 349 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> PARAN_OPEN Expression PARAN_CLOSE");
 		  //$$->place = $2->place;
 		  //$$->code = $2->code;
		}
#line 2001 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 354 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> IDENTIFIER"); 
		  if (symbolTable.lookup((yyvsp[0].str))){
			  (yyval.expr) = new Expression();
			  (yyval.expr)->place = (yyvsp[0].str);
			  (yyval.expr)->code = "";
		  } else {
		  	cout << "ERROR:- VARIABLE NOT FOUND\n";
		  }
		}
#line 2015 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 364 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> IDENTIFIER ARRAY_OPEN Expression ARRAY_CLOSE"); }
#line 2021 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 366 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> ARRAY_OPEN Expressions ARRAY_CLOSE"); }
#line 2027 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 368 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> KEY_TRUE"); }
#line 2033 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 370 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> KEY_FALSE"); }
#line 2039 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 372 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> INTEGER");
		   }
#line 2046 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 375 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back( "Expression -> STRING"); }
#line 2052 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 379 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Conditionals -> Case"); }
#line 2058 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 381 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Conditionals -> If_then_else"); }
#line 2064 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 385 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Loops -> While"); }
#line 2070 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 387 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Loops -> For"); }
#line 2076 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 389 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Loops -> Do_while"); }
#line 2082 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 393 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Arguments_list_opt -> Arguments_list"); }
#line 2088 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 395 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back ("Arguments_list_opt -> EMPTY"); }
#line 2094 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 399 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Arguments_list -> Arguments_list COMMA Expression"); }
#line 2100 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 401 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Arguments_list -> Expression"); }
#line 2106 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 405 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Case -> KEY_CASE Expression KEY_OF Actions KEY_ESAC"); }
#line 2112 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 409 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Actions -> Action"); }
#line 2118 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 411 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Actions -> Action Actions"); }
#line 2124 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 415 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Action -> IDENTIFIER COLON TYPE OP_IMPLIES Expression STMT_TERMINATOR"); }
#line 2130 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 419 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("If_then_else -> KEY_IF Expression KEY_THEN Expression KEY_ELSE Expression KEY_FI"); }
#line 2136 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 423 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("While -> KEY_WHILE Expression KEY_LOOP Expression KEY_POOL"); }
#line 2142 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 427 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("For -> KEY_FOR PARAN_OPEN Expression STMT_TERMINATOR Expression STMT_TERMINATOR Expression PARAN_CLOSE KEY_LOOP Expression KEY_POOL"); }
#line 2148 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 431 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Do_while -> KEY_DO KEY_LOOP Expression KEY_POOL KEY_WHILE BLOCK_BEGIN Expression BLOCK_END"); }
#line 2154 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 435 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Break_statement -> KEY_BREAK"); }
#line 2160 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 439 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Continue_statement -> KEY_CONTINUE"); }
#line 2166 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 443 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Return_statement -> KEY_RETURN BLOCK_BEGIN Expression BLOCK_END"); }
#line 2172 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 447 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Block_Expression -> BLOCK_BEGIN Block_list BLOCK_END"); }
#line 2178 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 451 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Block_list -> Block_list Expression STMT_TERMINATOR"); }
#line 2184 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 453 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Block_list -> Expression STMT_TERMINATOR"); }
#line 2190 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 457 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Let_Expression -> KEY_LET Formal Formals KEY_IN BLOCK_BEGIN Expression BLOCK_END"); }
#line 2196 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 461 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back( "Expressions -> Expressions COMMA Expression"); }
#line 2202 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 463 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expressions -> Expression"); }
#line 2208 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 467 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Formals -> Formals COMMA Formal"); }
#line 2214 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 469 "src/parser.y" /* yacc.c:1646  */
    { parse_tree.push_back("Formals -> EMPTY"); }
#line 2220 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 2224 "parser.tab.c" /* yacc.c:1646  */
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
#line 471 "src/parser.y" /* yacc.c:1906  */


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

	cout << "Printing the parse tree" << endl;

	/*for (int i = 0; i < parse_tree.size(); i++) {
		cout << parse_tree[i] << endl;
	}*/

	print_pretty(parse_tree,of);

	return 0;
}

void yyerror(const char* s) {
	for (int i = 0; i < parse_tree.size(); i++) {
		cout << parse_tree[i] << endl;
	}
	fprintf(stderr, "Parse error: %s", s);
	exit(1);
}
