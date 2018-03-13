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
#line 1 "src/parse.y" /* yacc.c:339  */

#include <bits/stdc++.h>
#include "print_pretty.cpp"

extern int yylex();
extern int yyparse();
extern FILE* yyin;
void yyerror(const char* s);

using namespace std;



vector<string> parse_tree;

#line 82 "parse.tab.c" /* yacc.c:339  */

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
   by #include "parse.tab.h".  */
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
#line 17 "src/parse.y" /* yacc.c:355  */

	int intValue;
	char* str;

#line 182 "parse.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSE_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 199 "parse.tab.c" /* yacc.c:358  */

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
#define YYLAST   391

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  101
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  219

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   309

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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   122,   122,   126,   129,   132,   134,   138,   140,   143,
     146,   148,   152,   155,   158,   160,   164,   168,   172,   174,
     177,   180,   183,   186,   189,   192,   194,   198,   201,   204,
     206,   210,   212,   216,   219,   222,   224,   228,   232,   235,
     238,   240,   244,   246,   250,   252,   254,   256,   258,   262,
     264,   266,   268,   270,   272,   274,   276,   278,   280,   282,
     284,   286,   288,   290,   292,   294,   296,   298,   300,   302,
     304,   306,   308,   310,   312,   314,   318,   320,   324,   326,
     328,   332,   335,   338,   340,   344,   348,   350,   354,   358,
     362,   366,   370,   374,   378,   382,   386,   390,   392,   396,
     406,   409
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NEWLINE", "INTEGER", "KEY_PACKAGE",
  "KEY_IMPORT", "KEY_CLASS", "KEY_INTERFACE", "KEY_INHERITS",
  "KEY_IMPLEMENTS", "KEY_RETURN", "KEY_NEW", "KEY_BREAK", "KEY_CONTINUE",
  "KEY_ISVOID", "KEY_NOT", "KEY_CASE", "KEY_OF", "KEY_ESAC", "KEY_WHILE",
  "KEY_LOOP", "KEY_POOL", "KEY_DO", "KEY_FOR", "KEY_IF", "KEY_THEN",
  "KEY_ELSE", "KEY_FI", "KEY_LET", "KEY_IN", "KEY_TRUE", "KEY_FALSE",
  "IDENTIFIER", "TYPE", "OP_ASGN", "OP_IMPLIES", "STRING", "COLON",
  "STMT_TERMINATOR", "AT", "DOT", "DOTSTAR", "COMMA", "BLOCK_BEGIN",
  "BLOCK_END", "PARAN_OPEN", "PARAN_CLOSE", "ARRAY_OPEN", "ARRAY_CLOSE",
  "OP_ARITHMETIC_U", "OP_ARITHMETIC_B", "OP_RELATIONAL", "OP_LOGICAL",
  "OP_BITWISE", "$accept", "Compilation_unit", "Package_declaration",
  "Package_name", "Import_declarations", "Import_declaration", "Program",
  "Sub_Program", "Class", "Interface", "Interface_Inheritance_List",
  "Inheritance", "Implement_Interface", "Interfaces_list",
  "Features_list_opt", "Features_list", "Feature",
  "Interface_features_list_opt", "Interface_features_list",
  "Interface_feature", "Formal_params_list_opt", "Formal_params_list",
  "Formal_param", "Formal", "Expression", "Conditionals", "Loops",
  "Arguments_list_opt", "Arguments_list", "Case", "Actions", "Action",
  "If_then_else", "While", "For", "Do_while", "Break_statement",
  "Continue_statement", "Return_statement", "Block_Expression",
  "Block_list", "Let_Expression", "Formals", YY_NULLPTR
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
     305,   306,   307,   308,   309
};
# endif

#define YYPACT_NINF -171

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-171)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -2,   -23,     6,    27,  -171,     3,  -171,   -23,    27,  -171,
    -171,    10,    53,  -171,    47,  -171,  -171,    20,    39,    40,
      22,  -171,  -171,  -171,    70,    71,  -171,    52,    83,    62,
      21,  -171,    67,    58,  -171,    69,    72,  -171,    64,    75,
    -171,    68,    74,    72,    76,    82,    11,    77,    75,    78,
    -171,    87,  -171,    85,  -171,  -171,    99,    87,  -171,    96,
    -171,   102,    94,   105,  -171,  -171,   -27,    95,  -171,   115,
     112,    87,   243,   159,   118,   104,   119,  -171,  -171,   243,
     123,  -171,  -171,   243,   243,   243,   243,   138,   131,   243,
     128,  -171,  -171,   -26,  -171,   243,   243,   243,   243,   290,
    -171,  -171,  -171,  -171,  -171,  -171,  -171,  -171,  -171,  -171,
    -171,  -171,   134,   284,   144,   132,  -171,   290,  -171,   290,
     290,   -13,    -6,   243,   243,   -22,   142,  -171,   243,   243,
     243,   146,   200,   299,   114,   290,   155,   160,   243,   243,
     243,   243,   243,   166,   150,  -171,   162,   243,    31,   187,
     243,     7,   290,   290,   163,   175,   307,  -171,  -171,   261,
    -171,   314,   161,   173,   290,   290,   290,   290,   290,   243,
     243,   168,   202,   162,    59,   210,   243,    36,   243,   128,
    -171,   243,  -171,  -171,  -171,   189,   243,   290,   329,   201,
    -171,  -171,  -171,   243,   265,   243,   290,  -171,   290,   188,
     195,  -171,   207,   290,   243,   245,   243,  -171,   243,   337,
    -171,   204,   269,   215,  -171,  -171,   243,   230,  -171
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     9,     6,     0,     1,     0,    13,     8,
       3,     0,     0,     7,     2,     5,    10,     0,     0,     0,
       0,    14,    15,    11,    22,    20,    12,     0,    24,     0,
       0,    21,     0,     0,    18,     0,    34,    26,    23,    28,
      19,     0,     0,    33,     0,     0,     0,     0,    27,     0,
      32,    39,    17,     0,    36,    25,     0,    39,    16,     0,
      30,     0,     0,    38,    41,    35,    48,     0,    29,     0,
       0,     0,     0,     0,     0,    42,     0,    40,    74,     0,
       0,    93,    94,     0,     0,     0,     0,     0,     0,     0,
       0,    72,    73,    69,    75,     0,     0,     0,     0,    46,
      53,    54,    76,    77,    78,    79,    80,    60,    61,    59,
      55,    56,     0,     0,     0,     0,    37,    95,    57,    58,
      67,     0,     0,     0,     0,     0,     0,   101,     0,    82,
       0,     0,     0,     0,     0,    63,     0,     0,     0,     0,
       0,     0,     0,    47,     0,    43,     0,     0,     0,     0,
       0,     0,    49,    84,     0,    81,     0,    98,    96,     0,
      68,     0,     0,     0,    62,    64,    65,    66,    45,     0,
       0,     0,     0,    86,     0,     0,     0,     0,     0,     0,
      50,     0,    70,    97,    71,     0,    82,    44,     0,     0,
      85,    87,    90,     0,     0,     0,    99,   100,    83,     0,
       0,    31,     0,    92,     0,     0,    82,    52,     0,     0,
      89,     0,     0,     0,    51,    88,     0,     0,    91
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -171,  -171,  -171,   242,  -171,   253,  -171,  -171,  -171,  -171,
    -171,  -171,  -171,  -171,  -171,  -171,   205,  -171,  -171,   219,
     208,  -171,   193,   -88,   -72,  -171,  -171,  -170,  -171,  -171,
     106,  -171,  -171,  -171,  -171,  -171,  -171,  -171,  -171,  -171,
    -171,  -171,  -171
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     5,     8,     9,    14,    20,    21,    22,
      30,    28,    33,    38,    47,    48,    49,    42,    43,    44,
      62,    63,    64,    50,   153,   100,   101,   154,   155,   102,
     172,   173,   103,   104,   105,   106,   107,   108,   109,   110,
     132,   111,   151
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      99,   113,   127,     1,   150,   146,     6,   117,    72,   128,
       4,   119,   120,   121,   122,   147,   200,   125,   136,   137,
     129,    73,   130,   131,   133,   134,   135,   136,   137,   138,
     139,   140,   141,     7,   136,   137,   211,   178,   138,   139,
     140,   141,    10,    15,    11,   138,   139,   140,   141,    56,
     179,   148,   149,   175,    18,    19,   152,    57,   156,    23,
     159,    26,   161,   195,    35,    36,   164,   165,   166,   167,
     168,   136,   137,    24,    25,   174,   136,   137,   177,    27,
      29,   192,   138,   139,   140,   141,    31,   138,   139,   140,
     141,   197,    16,    32,    11,    17,    34,   187,   188,   136,
     137,    37,    39,    40,   194,    41,   196,    45,    46,   198,
     138,   139,   140,   141,    51,    54,    55,    60,    78,    52,
      61,   203,    58,   205,    65,    79,    80,    81,    82,    83,
      84,    85,   209,    66,    86,    68,   212,    87,    88,    89,
      69,    70,    74,    90,   217,    91,    92,    93,    71,    75,
      76,    94,   115,   116,   136,   137,   114,   118,    95,   123,
      96,   126,    97,    78,    98,   138,   139,   140,   141,   142,
      79,    80,    81,    82,    83,    84,    85,   124,   144,    86,
      56,   145,    87,    88,    89,   157,   136,   137,    90,   162,
      91,    92,    93,   163,   170,   171,    94,   138,   139,   140,
     141,   169,   185,    95,    78,    96,   189,    97,   112,    98,
     180,    79,    80,    81,    82,    83,    84,    85,   181,   186,
      86,   190,   199,    87,    88,    89,   176,   136,   137,    90,
     193,    91,    92,    93,   206,   202,   216,    94,   138,   139,
     140,   141,   207,   208,    95,   158,    96,    78,    97,    12,
      98,   214,   218,    59,    79,    80,    81,    82,    83,    84,
      85,    13,    53,    86,    77,    67,    87,    88,    89,     0,
     136,   137,    90,   210,    91,    92,    93,     0,     0,   191,
      94,   138,   139,   140,   141,   136,   137,    95,     0,    96,
       0,    97,     0,    98,     0,     0,   138,   139,   140,   141,
     183,   136,   137,     0,   204,   136,   137,     0,   215,   136,
     137,     0,   138,   139,   140,   141,   138,   139,   140,   141,
     138,   139,   140,   141,   136,   137,     0,     0,     0,     0,
     136,   137,     0,   143,     0,   138,   139,   140,   141,   136,
     137,   138,   139,   140,   141,     0,   160,   136,   137,     0,
     138,   139,   140,   141,   136,   137,   182,     0,   138,   139,
     140,   141,     0,   184,     0,   138,   139,   140,   141,   136,
     137,     0,     0,     0,   201,     0,     0,   136,   137,     0,
     138,   139,   140,   141,   213,     0,     0,     0,   138,   139,
     140,   141
};

static const yytype_int16 yycheck[] =
{
      72,    73,    90,     5,    26,    18,     0,    79,    35,    35,
      33,    83,    84,    85,    86,    21,   186,    89,    40,    41,
      46,    48,    48,    95,    96,    97,    98,    40,    41,    51,
      52,    53,    54,     6,    40,    41,   206,    30,    51,    52,
      53,    54,    39,    33,    41,    51,    52,    53,    54,    38,
      43,   123,   124,    22,     7,     8,   128,    46,   130,    39,
     132,    39,   134,    27,    43,    44,   138,   139,   140,   141,
     142,    40,    41,    34,    34,   147,    40,    41,   150,     9,
       9,    22,    51,    52,    53,    54,    34,    51,    52,    53,
      54,   179,    39,    10,    41,    42,    34,   169,   170,    40,
      41,    34,    44,    34,   176,    33,   178,    43,    33,   181,
      51,    52,    53,    54,    46,    39,    34,    39,     4,    45,
      33,   193,    45,   195,    39,    11,    12,    13,    14,    15,
      16,    17,   204,    34,    20,    39,   208,    23,    24,    25,
      38,    47,    47,    29,   216,    31,    32,    33,    43,    34,
      38,    37,    48,    34,    40,    41,    38,    34,    44,    21,
      46,    33,    48,     4,    50,    51,    52,    53,    54,    35,
      11,    12,    13,    14,    15,    16,    17,    46,    34,    20,
      38,    49,    23,    24,    25,    39,    40,    41,    29,    34,
      31,    32,    33,    33,    44,    33,    37,    51,    52,    53,
      54,    35,    41,    44,     4,    46,    38,    48,    49,    50,
      47,    11,    12,    13,    14,    15,    16,    17,    43,    46,
      20,    19,    33,    23,    24,    25,    39,    40,    41,    29,
      20,    31,    32,    33,    46,    34,    21,    37,    51,    52,
      53,    54,    47,    36,    44,    45,    46,     4,    48,     7,
      50,    47,    22,    48,    11,    12,    13,    14,    15,    16,
      17,     8,    43,    20,    71,    57,    23,    24,    25,    -1,
      40,    41,    29,    28,    31,    32,    33,    -1,    -1,   173,
      37,    51,    52,    53,    54,    40,    41,    44,    -1,    46,
      -1,    48,    -1,    50,    -1,    -1,    51,    52,    53,    54,
      39,    40,    41,    -1,    39,    40,    41,    -1,    39,    40,
      41,    -1,    51,    52,    53,    54,    51,    52,    53,    54,
      51,    52,    53,    54,    40,    41,    -1,    -1,    -1,    -1,
      40,    41,    -1,    49,    -1,    51,    52,    53,    54,    40,
      41,    51,    52,    53,    54,    -1,    47,    40,    41,    -1,
      51,    52,    53,    54,    40,    41,    49,    -1,    51,    52,
      53,    54,    -1,    49,    -1,    51,    52,    53,    54,    40,
      41,    -1,    -1,    -1,    45,    -1,    -1,    40,    41,    -1,
      51,    52,    53,    54,    47,    -1,    -1,    -1,    51,    52,
      53,    54
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,    56,    57,    33,    58,     0,     6,    59,    60,
      39,    41,    58,    60,    61,    33,    39,    42,     7,     8,
      62,    63,    64,    39,    34,    34,    39,     9,    66,     9,
      65,    34,    10,    67,    34,    43,    44,    34,    68,    44,
      34,    33,    72,    73,    74,    43,    33,    69,    70,    71,
      78,    46,    45,    74,    39,    34,    38,    46,    45,    71,
      39,    33,    75,    76,    77,    39,    34,    75,    39,    38,
      47,    43,    35,    48,    47,    34,    38,    77,     4,    11,
      12,    13,    14,    15,    16,    17,    20,    23,    24,    25,
      29,    31,    32,    33,    37,    44,    46,    48,    50,    79,
      80,    81,    84,    87,    88,    89,    90,    91,    92,    93,
      94,    96,    49,    79,    38,    48,    34,    79,    34,    79,
      79,    79,    79,    21,    46,    79,    33,    78,    35,    46,
      48,    79,    95,    79,    79,    79,    40,    41,    51,    52,
      53,    54,    35,    49,    34,    49,    18,    21,    79,    79,
      26,    97,    79,    79,    82,    83,    79,    39,    45,    79,
      47,    79,    34,    33,    79,    79,    79,    79,    79,    35,
      44,    33,    85,    86,    79,    22,    39,    79,    30,    43,
      47,    43,    49,    39,    49,    41,    46,    79,    79,    38,
      19,    85,    22,    20,    79,    27,    79,    78,    79,    33,
      82,    45,    34,    79,    39,    79,    46,    47,    36,    79,
      28,    82,    79,    47,    47,    39,    21,    79,    22
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    55,    56,    57,    57,    58,    58,    59,    59,    59,
      60,    60,    61,    61,    62,    62,    63,    64,    65,    65,
      65,    66,    66,    67,    67,    68,    68,    69,    69,    70,
      70,    71,    71,    72,    72,    73,    73,    74,    75,    75,
      76,    76,    77,    77,    78,    78,    78,    78,    78,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    80,    80,    81,    81,
      81,    82,    82,    83,    83,    84,    85,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    95,    96,
      97,    97
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     3,     0,     3,     1,     2,     1,     0,
       3,     4,     3,     0,     1,     1,     7,     6,     2,     3,
       0,     2,     0,     2,     0,     3,     1,     1,     0,     3,
       2,     9,     1,     1,     0,     3,     2,     6,     1,     0,
       3,     1,     3,     5,     8,     7,     5,     6,     3,     3,
       4,     8,     6,     1,     1,     1,     1,     2,     2,     1,
       1,     1,     3,     2,     3,     3,     3,     2,     3,     1,
       4,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     3,     1,     5,     1,     2,     6,     7,
       5,    11,     6,     1,     1,     2,     3,     3,     2,     5,
       3,     0
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
#line 123 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Compilation_unit -> Package_declaration Import_declarations Program"); }
#line 1473 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 127 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Package_declaration -> KEY_PACKAGE Package_name STMT_TERMINATOR"); }
#line 1479 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 129 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back( "Package_declaration -> EMPTY"); }
#line 1485 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 133 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Package_name -> Package_name DOT IDENTIFIER"); }
#line 1491 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 135 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Package_name -> IDENTIFIER"); }
#line 1497 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 139 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Import_declarations -> Import_declarations Import_declaration"); }
#line 1503 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 141 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Import_declarations -> Import_declaration"); }
#line 1509 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 143 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back( "Import_declarations -> EMPTY"); }
#line 1515 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 147 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Import_declaration -> KEY_IMPORT Package_name STMT_TERMINATOR"); }
#line 1521 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 149 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Import_declaration -> KEY_IMPORT Package_name DOTSTAR STMT_TERMINATOR"); }
#line 1527 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 153 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Program -> Program Sub_Program STMT_TERMINATOR"); }
#line 1533 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 155 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Program -> EMPTY"); }
#line 1539 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 159 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Sub_Program -> Class"); }
#line 1545 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 161 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Sub_Program -> Interface"); }
#line 1551 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 165 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Class -> KEY_CLASS TYPE Inheritance Implement_Interface BLOCK_BEGIN Features_list_opt BLOCK_END"); }
#line 1557 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 169 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Interface -> KEY_INTERFACE TYPE Interface_Inheritance_List BLOCK_BEGIN Interface_features_list_opt BLOCK_END"); }
#line 1563 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 173 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Interface_Inheritance_List -> KEY_INHERITS TYPE"); }
#line 1569 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 175 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Interface_Inheritance_List -> Interface_Inheritance_List COMMA TYPE"); }
#line 1575 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 177 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Interface_Inheritance_List -> EMPTY"); }
#line 1581 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 181 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Inheritance -> KEY_INHERITS TYPE"); }
#line 1587 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 183 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Inheritance -> EMPTY"); }
#line 1593 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 187 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Implement_Interface -> KEY_IMPLEMENTS Interfaces_list"); }
#line 1599 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 189 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Implement_Interface -> EMPTY"); }
#line 1605 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 193 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Interfaces_list -> Interfaces_list COMMA TYPE"); }
#line 1611 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 195 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Interfaces_list -> TYPE"); }
#line 1617 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 199 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Features_list_opt -> Features_list"); }
#line 1623 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 201 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Features_list_opt -> EMPTY"); }
#line 1629 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 205 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Features_list -> Features_list Feature STMT_TERMINATOR"); }
#line 1635 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 207 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Features_list -> Feature STMT_TERMINATOR"); }
#line 1641 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 211 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Feature -> IDENTIFIER PARAN_OPEN Formal_params_list_opt PARAN_CLOSE COLON TYPE BLOCK_BEGIN Expression BLOCK_END"); }
#line 1647 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 213 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Feature -> Formal"); }
#line 1653 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 217 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Interface_features_list_opt -> Interface_features_list"); }
#line 1659 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 219 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Interface_features_list_opt -> EMPTY"); }
#line 1665 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 223 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Interface_features_list -> Interface_features_list Interface_feature STMT_TERMINATOR"); }
#line 1671 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 225 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Interface_features_list -> Interface_feature STMT_TERMINATOR"); }
#line 1677 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 229 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Interface_feature -> IDENTIFIER PARAN_OPEN Formal_params_list_opt PARAN_CLOSE COLON TYPE"); }
#line 1683 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 233 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Formal_params_list_opt -> Formal_params_list"); }
#line 1689 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 235 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Formal_params_list_opt -> EMPTY"); }
#line 1695 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 239 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Formal_params_list -> Formal_params_list COMMA"); }
#line 1701 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 241 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Formal_params_list -> Formal_param"); }
#line 1707 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 245 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Formal_param -> IDENTIFIER COLON TYPE"); }
#line 1713 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 247 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Formal_param -> IDENTIFIER COLON TYPE ARRAY_OPEN ARRAY_CLOSE"); }
#line 1719 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 251 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Formal -> IDENTIFIER COLON TYPE ARRAY_OPEN Expression ARRAY_CLOSE OP_ASGN Expression"); }
#line 1725 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 253 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Formal -> IDENTIFIER COLON TYPE ARRAY_OPEN ARRAY_CLOSE OP_ASGN Expression"); }
#line 1731 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 255 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Formal -> IDENTIFIER COLON TYPE OP_ASGN Expression"); }
#line 1737 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 257 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Formal -> IDENTIFIER COLON TYPE ARRAY_OPEN Expression ARRAY_CLOSE"); }
#line 1743 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 259 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Formal -> IDENTIFIER COLON TYPE"); }
#line 1749 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 263 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> IDENTIFIER OP_ASGN Expression"); }
#line 1755 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 265 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> IDENTIFIER PARAN_OPEN Arguments_list_opt PARAN_CLOSE"); }
#line 1761 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 267 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> Expression AT TYPE DOT IDENTIFIER PARAN_OPEN Arguments_list_opt PARAN_CLOSE"); }
#line 1767 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 269 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> Expression DOT IDENTIFIER PARAN_OPEN Arguments_list_opt PARAN_CLOSE"); }
#line 1773 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 271 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> Conditionals"); }
#line 1779 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 273 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> Loops"); }
#line 1785 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 275 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> Block_Expression"); }
#line 1791 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 277 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> Let_Expression"); }
#line 1797 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 279 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> KEY_NEW TYPE"); }
#line 1803 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 281 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> KEY_ISVOID Expression"); }
#line 1809 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 283 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> Return_statement"); }
#line 1815 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 285 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> Break_statement"); }
#line 1821 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 287 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> Continue_statement"); }
#line 1827 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 289 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> Expression OP_ARITHMETIC_B Expression"); }
#line 1833 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 291 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> OP_ARITHMETIC_U Expression"); }
#line 1839 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 293 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> Expression OP_RELATIONAL Expression"); }
#line 1845 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 295 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> Expression OP_LOGICAL Expression"); }
#line 1851 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 297 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> Expression OP_BITWISE Expression"); }
#line 1857 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 299 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> KEY_NOT Expression"); }
#line 1863 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 301 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> PARAN_OPEN Expression PARAN_CLOSE"); }
#line 1869 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 303 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> IDENTIFIER"); }
#line 1875 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 305 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> IDENTIFIER ARRAY_OPEN Expression ARRAY_CLOSE"); }
#line 1881 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 307 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> ARRAY_OPEN Expression Expression ARRAY_CLOSE"); }
#line 1887 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 309 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> KEY_TRUE"); }
#line 1893 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 311 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> KEY_FALSE"); }
#line 1899 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 313 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> INTEGER"); }
#line 1905 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 315 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back( "Expression -> STRING"); }
#line 1911 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 319 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Conditionals -> Case"); }
#line 1917 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 321 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Conditionals -> If_then_else"); }
#line 1923 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 325 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Loops -> While"); }
#line 1929 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 327 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Loops -> For"); }
#line 1935 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 329 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Loops -> Do_while"); }
#line 1941 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 333 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Arguments_list_opt -> Arguments_list"); }
#line 1947 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 335 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back ("Arguments_list_opt -> EMPTY"); }
#line 1953 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 339 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Arguments_list -> Arguments_list COMMA Expression"); }
#line 1959 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 341 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Arguments_list -> Expression"); }
#line 1965 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 345 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Case -> KEY_CASE Expression KEY_OF Actions KEY_ESAC"); }
#line 1971 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 349 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Actions -> Action"); }
#line 1977 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 351 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Actions -> Action Actions"); }
#line 1983 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 355 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Action -> IDENTIFIER COLON TYPE OP_IMPLIES Expression STMT_TERMINATOR"); }
#line 1989 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 359 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("If_then_else -> KEY_IF Expression KEY_THEN Expression KEY_ELSE Expression KEY_FI"); }
#line 1995 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 363 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("While -> KEY_WHILE Expression KEY_LOOP Expression KEY_POOL"); }
#line 2001 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 367 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("For -> KEY_FOR PARAN_OPEN Expression STMT_TERMINATOR Expression STMT_TERMINATOR Expression PARAN_CLOSE KEY_LOOP Expression KEY_POOL"); }
#line 2007 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 371 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Do_while -> KEY_DO KEY_LOOP Expression KEY_POOL KEY_WHILE Expression"); }
#line 2013 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 375 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Break_statement -> KEY_BREAK"); }
#line 2019 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 379 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Continue_statement -> KEY_CONTINUE"); }
#line 2025 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 383 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Return_statement -> KEY_RETURN Expression"); }
#line 2031 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 387 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Block_Expression -> BLOCK_BEGIN Block_list BLOCK_END"); }
#line 2037 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 391 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Block_list -> Block_list Expression STMT_TERMINATOR"); }
#line 2043 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 393 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Block_list -> Expression STMT_TERMINATOR"); }
#line 2049 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 397 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Let_Expression -> KEY_LET Formal Formals KEY_IN Expression"); }
#line 2055 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 407 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Formals -> Formals COMMA Formal"); }
#line 2061 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 409 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Formals -> EMPTY"); }
#line 2067 "parse.tab.c" /* yacc.c:1646  */
    break;


#line 2071 "parse.tab.c" /* yacc.c:1646  */
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
#line 411 "src/parse.y" /* yacc.c:1906  */


int main(int argc, char **argv) {
	++argv, --argc;
	if (argc > 0)
		yyin = fopen(argv[0], "r");
	else
		yyin = stdin;
	do {
		yyparse();
	} while (!feof(yyin));

	reverse(parse_tree.begin() ,parse_tree.end());

	cout << "Printing the parse tree" << endl;

	/*for (int i = 0; i < parse_tree.size(); i++) {
		cout << parse_tree[i] << endl;
	}*/

	print_pretty(parse_tree);

	return 0;
}

void yyerror(const char* s) {
	fprintf(stderr, "Parse error: %s", s);
	exit(1);
}
