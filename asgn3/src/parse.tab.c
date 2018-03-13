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

#line 80 "parse.tab.c" /* yacc.c:339  */

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
#line 15 "src/parse.y" /* yacc.c:355  */

	int intValue;
	char* str;

#line 180 "parse.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSE_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 197 "parse.tab.c" /* yacc.c:358  */

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
#define YYLAST   355

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  103
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  220

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
       0,   120,   120,   124,   127,   130,   132,   136,   138,   141,
     144,   146,   150,   153,   156,   158,   162,   166,   170,   172,
     175,   178,   181,   184,   187,   190,   192,   196,   199,   202,
     204,   208,   210,   214,   217,   220,   222,   226,   230,   233,
     236,   238,   242,   244,   248,   250,   252,   254,   256,   260,
     262,   264,   266,   268,   270,   272,   274,   276,   278,   280,
     282,   284,   286,   288,   290,   292,   294,   296,   298,   300,
     302,   304,   306,   308,   310,   312,   316,   318,   322,   324,
     326,   330,   333,   336,   338,   342,   346,   348,   352,   356,
     360,   364,   368,   372,   376,   380,   384,   388,   390,   394,
     398,   401,   404,   407
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
  "Block_list", "Let_Expression", "Expressions", "Formals", YY_NULLPTR
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

#define YYPACT_NINF -172

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-172)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       1,   -23,    25,    27,  -172,    35,  -172,   -23,    27,  -172,
    -172,     4,    70,  -172,    89,  -172,  -172,     5,    15,    20,
      26,  -172,  -172,  -172,    84,    91,  -172,    45,    49,    79,
      71,  -172,    82,    73,  -172,    86,    85,  -172,    78,    90,
    -172,    88,    80,    85,    97,   116,    42,   104,    90,   112,
    -172,   124,  -172,   119,  -172,  -172,   128,   124,  -172,   127,
    -172,   136,   130,   132,  -172,  -172,     7,   131,  -172,   152,
     153,   124,   199,   115,   154,   142,   164,  -172,  -172,   199,
     165,  -172,  -172,   199,   199,   199,   199,   184,   161,   199,
     176,  -172,  -172,    60,  -172,   199,   199,  -172,   199,   261,
    -172,  -172,  -172,  -172,  -172,  -172,  -172,  -172,  -172,  -172,
    -172,  -172,   182,   255,   187,   169,  -172,   261,  -172,   261,
     261,   -13,    -6,   199,   199,   -22,   191,  -172,   199,   199,
     199,   102,   156,   270,   -40,    10,   200,   192,   199,   199,
     199,   199,   199,   185,   197,  -172,   202,   199,    31,   143,
     199,    51,   261,   261,   195,   203,   278,  -172,  -172,   220,
    -172,   199,  -172,   207,   204,   -32,    33,     3,   213,   261,
     199,   199,   217,   235,   202,   186,   238,   199,    50,   199,
     176,  -172,   199,  -172,  -172,   261,   233,   199,   261,   293,
     244,  -172,  -172,  -172,   199,   236,   199,   261,  -172,   261,
     237,   239,  -172,   246,   261,   199,   216,   199,  -172,   199,
     301,  -172,   250,   240,   263,  -172,  -172,   199,   211,  -172
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
       0,    72,    73,    69,    75,     0,     0,   101,     0,    46,
      53,    54,    76,    77,    78,    79,    80,    60,    61,    59,
      55,    56,     0,     0,     0,     0,    37,    95,    57,    58,
      67,     0,     0,     0,     0,     0,     0,   103,     0,    82,
       0,     0,     0,     0,     0,    63,     0,     0,     0,     0,
       0,     0,     0,    47,     0,    43,     0,     0,     0,     0,
       0,     0,    49,    84,     0,    81,     0,    98,    96,     0,
      68,     0,    71,     0,     0,    62,    64,    65,    66,    45,
       0,     0,     0,     0,    86,     0,     0,     0,     0,     0,
       0,    50,     0,    70,    97,   100,     0,    82,    44,     0,
       0,    85,    87,    90,     0,     0,     0,    99,   102,    83,
       0,     0,    31,     0,    92,     0,     0,    82,    52,     0,
       0,    89,     0,     0,     0,    51,    88,     0,     0,    91
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -172,  -172,  -172,   291,  -172,   277,  -172,  -172,  -172,  -172,
    -172,  -172,  -172,  -172,  -172,  -172,   251,  -172,  -172,   257,
     248,  -172,   232,   -88,   -72,  -172,  -172,  -171,  -172,  -172,
     146,  -172,  -172,  -172,  -172,  -172,  -172,  -172,  -172,  -172,
    -172,  -172,  -172,  -172
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     5,     8,     9,    14,    20,    21,    22,
      30,    28,    33,    38,    47,    48,    49,    42,    43,    44,
      62,    63,    64,    50,   153,   100,   101,   154,   155,   102,
     173,   174,   103,   104,   105,   106,   107,   108,   109,   110,
     132,   111,   134,   151
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      99,   113,   127,   161,   150,   146,     1,   117,   136,   162,
       4,   119,   120,   121,   122,   147,   201,   125,   136,   137,
     139,   140,   141,   131,   133,     6,   135,   136,   137,   138,
     139,   140,   141,     7,   136,   137,   212,    15,   138,   139,
     140,   141,    72,   136,    23,   138,   139,   140,   141,    24,
     136,   148,   149,   176,    25,    73,   152,   141,   156,    32,
     159,   138,   139,   140,   141,    26,   165,   166,   167,   168,
     169,   136,   137,   136,    10,   175,    11,   196,   178,    31,
      56,   179,   138,   139,   140,   141,   140,   141,    57,   185,
     136,   137,   198,    27,   180,   128,    18,    19,   188,   189,
      29,   138,   139,   140,   141,   195,   129,   197,   130,    16,
     199,    11,    17,    34,    35,    36,    37,    39,    41,    78,
      40,    45,   204,    46,   206,    52,    79,    80,    81,    82,
      83,    84,    85,   210,    51,    86,    54,   213,    87,    88,
      89,   157,   136,   137,    90,   218,    91,    92,    93,    58,
      55,    60,    94,   138,   139,   140,   141,    61,    65,    95,
      78,    96,    66,    97,   112,    98,    68,    79,    80,    81,
      82,    83,    84,    85,    69,    71,    86,    70,    74,    87,
      88,    89,   177,   136,   137,    90,    75,    91,    92,    93,
     115,    76,   114,    94,   138,   139,   140,   141,   116,   118,
      95,   158,    96,    78,    97,   123,    98,   124,   193,   126,
      79,    80,    81,    82,    83,    84,    85,   142,   145,    86,
     170,   144,    87,    88,    89,   164,   136,   137,    90,    56,
      91,    92,    93,   219,   163,   172,    94,   138,   139,   140,
     141,   171,   181,    95,   211,    96,   182,    97,   186,    98,
     187,   136,   137,   136,   191,   190,   136,   137,   194,   184,
     136,   137,   138,   139,   140,   141,   200,   138,   139,   140,
     141,   138,   139,   140,   141,   205,   136,   137,   203,   216,
     136,   137,   209,   207,   217,    13,   208,   138,   139,   140,
     141,   138,   139,   140,   141,   136,   137,   215,    12,    59,
      53,   136,   137,    77,   143,    67,   138,   139,   140,   141,
     136,   137,   138,   139,   140,   141,     0,   160,   136,   137,
     192,   138,   139,   140,   141,     0,     0,   183,     0,   138,
     139,   140,   141,   136,   137,     0,     0,     0,   202,     0,
       0,   136,   137,     0,   138,   139,   140,   141,   214,     0,
       0,     0,   138,   139,   140,   141
};

static const yytype_int16 yycheck[] =
{
      72,    73,    90,    43,    26,    18,     5,    79,    40,    49,
      33,    83,    84,    85,    86,    21,   187,    89,    40,    41,
      52,    53,    54,    95,    96,     0,    98,    40,    41,    51,
      52,    53,    54,     6,    40,    41,   207,    33,    51,    52,
      53,    54,    35,    40,    39,    51,    52,    53,    54,    34,
      40,   123,   124,    22,    34,    48,   128,    54,   130,    10,
     132,    51,    52,    53,    54,    39,   138,   139,   140,   141,
     142,    40,    41,    40,    39,   147,    41,    27,   150,    34,
      38,    30,    51,    52,    53,    54,    53,    54,    46,   161,
      40,    41,   180,     9,    43,    35,     7,     8,   170,   171,
       9,    51,    52,    53,    54,   177,    46,   179,    48,    39,
     182,    41,    42,    34,    43,    44,    34,    44,    33,     4,
      34,    43,   194,    33,   196,    45,    11,    12,    13,    14,
      15,    16,    17,   205,    46,    20,    39,   209,    23,    24,
      25,    39,    40,    41,    29,   217,    31,    32,    33,    45,
      34,    39,    37,    51,    52,    53,    54,    33,    39,    44,
       4,    46,    34,    48,    49,    50,    39,    11,    12,    13,
      14,    15,    16,    17,    38,    43,    20,    47,    47,    23,
      24,    25,    39,    40,    41,    29,    34,    31,    32,    33,
      48,    38,    38,    37,    51,    52,    53,    54,    34,    34,
      44,    45,    46,     4,    48,    21,    50,    46,    22,    33,
      11,    12,    13,    14,    15,    16,    17,    35,    49,    20,
      35,    34,    23,    24,    25,    33,    40,    41,    29,    38,
      31,    32,    33,    22,    34,    33,    37,    51,    52,    53,
      54,    44,    47,    44,    28,    46,    43,    48,    41,    50,
      46,    40,    41,    40,    19,    38,    40,    41,    20,    39,
      40,    41,    51,    52,    53,    54,    33,    51,    52,    53,
      54,    51,    52,    53,    54,    39,    40,    41,    34,    39,
      40,    41,    36,    46,    21,     8,    47,    51,    52,    53,
      54,    51,    52,    53,    54,    40,    41,    47,     7,    48,
      43,    40,    41,    71,    49,    57,    51,    52,    53,    54,
      40,    41,    51,    52,    53,    54,    -1,    47,    40,    41,
     174,    51,    52,    53,    54,    -1,    -1,    49,    -1,    51,
      52,    53,    54,    40,    41,    -1,    -1,    -1,    45,    -1,
      -1,    40,    41,    -1,    51,    52,    53,    54,    47,    -1,
      -1,    -1,    51,    52,    53,    54
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
      48,    79,    95,    79,    97,    79,    40,    41,    51,    52,
      53,    54,    35,    49,    34,    49,    18,    21,    79,    79,
      26,    98,    79,    79,    82,    83,    79,    39,    45,    79,
      47,    43,    49,    34,    33,    79,    79,    79,    79,    79,
      35,    44,    33,    85,    86,    79,    22,    39,    79,    30,
      43,    47,    43,    49,    39,    79,    41,    46,    79,    79,
      38,    19,    85,    22,    20,    79,    27,    79,    78,    79,
      33,    82,    45,    34,    79,    39,    79,    46,    47,    36,
      79,    28,    82,    79,    47,    47,    39,    21,    79,    22
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
      97,    97,    98,    98
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
       4,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     3,     1,     5,     1,     2,     6,     7,
       5,    11,     6,     1,     1,     2,     3,     3,     2,     5,
       3,     0,     3,     0
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
#line 121 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Compilation_unit -> Package_declaration Import_declarations Program"); }
#line 1463 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 125 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Package_declaration -> KEY_PACKAGE Package_name STMT_TERMINATOR"); }
#line 1469 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 127 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back( "Package_declaration -> EMPTY"); }
#line 1475 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 131 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Package_name -> Package_name DOT IDENTIFIER"); }
#line 1481 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 133 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Package_name -> IDENTIFIER"); }
#line 1487 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 137 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Import_declarations -> Import_declarations Import_declaration"); }
#line 1493 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 139 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Import_declarations -> Import_declaration"); }
#line 1499 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 141 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back( "Import_declarations -> EMPTY"); }
#line 1505 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 145 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Import_declaration -> KEY_IMPORT Package_name STMT_TERMINATOR"); }
#line 1511 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 147 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Import_declaration -> KEY_IMPORT Package_name DOTSTAR STMT_TERMINATOR"); }
#line 1517 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 151 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Program -> Program Sub_Program STMT_TERMINATOR"); }
#line 1523 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 153 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Program -> EMPTY"); }
#line 1529 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 157 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Sub_Program -> Class"); }
#line 1535 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 159 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Sub_Program -> Interface"); }
#line 1541 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 163 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Class -> KEY_CLASS TYPE Inheritance Implement_Interface BLOCK_BEGIN Features_list_opt BLOCK_END"); }
#line 1547 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 167 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Interface -> KEY_INTERFACE TYPE Interface_Inheritance_List BLOCK_BEGIN Interface_features_list_opt BLOCK_END"); }
#line 1553 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 171 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Interface_Inheritance_List -> KEY_INHERITS TYPE"); }
#line 1559 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 173 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Interface_Inheritance_List -> Interface_Inheritance_List COMMA TYPE"); }
#line 1565 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 175 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Interface_Inheritance_List -> EMPTY"); }
#line 1571 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 179 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Inheritance -> KEY_INHERITS TYPE"); }
#line 1577 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 181 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Inheritance -> EMPTY"); }
#line 1583 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 185 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Implement_Interface -> KEY_IMPLEMENTS Interfaces_list"); }
#line 1589 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 187 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Implement_Interface -> EMPTY"); }
#line 1595 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 191 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Interfaces_list -> Interfaces_list COMMA TYPE"); }
#line 1601 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 193 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Interfaces_list -> TYPE"); }
#line 1607 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 197 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Features_list_opt -> Features_list"); }
#line 1613 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 199 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Features_list_opt -> EMPTY"); }
#line 1619 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 203 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Features_list -> Features_list Feature STMT_TERMINATOR"); }
#line 1625 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 205 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Features_list -> Feature STMT_TERMINATOR"); }
#line 1631 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 209 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Feature -> IDENTIFIER PARAN_OPEN Formal_params_list_opt PARAN_CLOSE COLON TYPE BLOCK_BEGIN Expression BLOCK_END"); }
#line 1637 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 211 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Feature -> Formal"); }
#line 1643 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 215 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Interface_features_list_opt -> Interface_features_list"); }
#line 1649 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 217 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Interface_features_list_opt -> EMPTY"); }
#line 1655 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 221 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Interface_features_list -> Interface_features_list Interface_feature STMT_TERMINATOR"); }
#line 1661 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 223 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Interface_features_list -> Interface_feature STMT_TERMINATOR"); }
#line 1667 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 227 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Interface_feature -> IDENTIFIER PARAN_OPEN Formal_params_list_opt PARAN_CLOSE COLON TYPE"); }
#line 1673 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 231 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Formal_params_list_opt -> Formal_params_list"); }
#line 1679 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 233 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Formal_params_list_opt -> EMPTY"); }
#line 1685 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 237 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Formal_params_list -> Formal_params_list COMMA"); }
#line 1691 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 239 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Formal_params_list -> Formal_param"); }
#line 1697 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 243 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Formal_param -> IDENTIFIER COLON TYPE"); }
#line 1703 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 245 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Formal_param -> IDENTIFIER COLON TYPE ARRAY_OPEN ARRAY_CLOSE"); }
#line 1709 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 249 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Formal -> IDENTIFIER COLON TYPE ARRAY_OPEN Expression ARRAY_CLOSE OP_ASGN Expression"); }
#line 1715 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 251 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Formal -> IDENTIFIER COLON TYPE ARRAY_OPEN ARRAY_CLOSE OP_ASGN Expression"); }
#line 1721 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 253 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Formal -> IDENTIFIER COLON TYPE OP_ASGN Expression"); }
#line 1727 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 255 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Formal -> IDENTIFIER COLON TYPE ARRAY_OPEN Expression ARRAY_CLOSE"); }
#line 1733 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 257 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Formal -> IDENTIFIER COLON TYPE"); }
#line 1739 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 261 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> IDENTIFIER OP_ASGN Expression"); }
#line 1745 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 263 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> IDENTIFIER PARAN_OPEN Arguments_list_opt PARAN_CLOSE"); }
#line 1751 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 265 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> Expression AT TYPE DOT IDENTIFIER PARAN_OPEN Arguments_list_opt PARAN_CLOSE"); }
#line 1757 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 267 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> Expression DOT IDENTIFIER PARAN_OPEN Arguments_list_opt PARAN_CLOSE"); }
#line 1763 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 269 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> Conditionals"); }
#line 1769 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 271 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> Loops"); }
#line 1775 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 273 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> Block_Expression"); }
#line 1781 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 275 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> Let_Expression"); }
#line 1787 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 277 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> KEY_NEW TYPE"); }
#line 1793 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 279 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> KEY_ISVOID Expression"); }
#line 1799 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 281 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> Return_statement"); }
#line 1805 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 283 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> Break_statement"); }
#line 1811 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 285 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> Continue_statement"); }
#line 1817 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 287 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> Expression OP_ARITHMETIC_B Expression"); }
#line 1823 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 289 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> OP_ARITHMETIC_U Expression"); }
#line 1829 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 291 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> Expression OP_RELATIONAL Expression"); }
#line 1835 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 293 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> Expression OP_LOGICAL Expression"); }
#line 1841 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 295 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> Expression OP_BITWISE Expression"); }
#line 1847 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 297 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> KEY_NOT Expression"); }
#line 1853 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 299 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> PARAN_OPEN Expression PARAN_CLOSE"); }
#line 1859 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 301 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> IDENTIFIER"); }
#line 1865 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 303 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> IDENTIFIER ARRAY_OPEN Expression ARRAY_CLOSE"); }
#line 1871 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 305 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> ARRAY_OPEN Expressions ARRAY_CLOSE"); }
#line 1877 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 307 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> KEY_TRUE"); }
#line 1883 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 309 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> KEY_FALSE"); }
#line 1889 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 311 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expression -> INTEGER"); }
#line 1895 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 313 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back( "Expression -> STRING"); }
#line 1901 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 317 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Conditionals -> Case"); }
#line 1907 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 319 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Conditionals -> If_then_else"); }
#line 1913 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 323 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Loops -> While"); }
#line 1919 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 325 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Loops -> For"); }
#line 1925 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 327 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Loops -> Do_while"); }
#line 1931 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 331 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Arguments_list_opt -> Arguments_list"); }
#line 1937 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 333 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back ("Arguments_list_opt -> EMPTY"); }
#line 1943 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 337 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Arguments_list -> Arguments_list COMMA Expression"); }
#line 1949 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 339 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Arguments_list -> Expression"); }
#line 1955 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 343 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Case -> KEY_CASE Expression KEY_OF Actions KEY_ESAC"); }
#line 1961 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 347 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Actions -> Action"); }
#line 1967 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 349 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Actions -> Action Actions"); }
#line 1973 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 353 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Action -> IDENTIFIER COLON TYPE OP_IMPLIES Expression STMT_TERMINATOR"); }
#line 1979 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 357 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("If_then_else -> KEY_IF Expression KEY_THEN Expression KEY_ELSE Expression KEY_FI"); }
#line 1985 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 361 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("While -> KEY_WHILE Expression KEY_LOOP Expression KEY_POOL"); }
#line 1991 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 365 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("For -> KEY_FOR PARAN_OPEN Expression STMT_TERMINATOR Expression STMT_TERMINATOR Expression PARAN_CLOSE KEY_LOOP Expression KEY_POOL"); }
#line 1997 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 369 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Do_while -> KEY_DO KEY_LOOP Expression KEY_POOL KEY_WHILE Expression"); }
#line 2003 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 373 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Break_statement -> KEY_BREAK"); }
#line 2009 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 377 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Continue_statement -> KEY_CONTINUE"); }
#line 2015 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 381 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Return_statement -> KEY_RETURN Expression"); }
#line 2021 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 385 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Block_Expression -> BLOCK_BEGIN Block_list BLOCK_END"); }
#line 2027 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 389 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Block_list -> Block_list Expression STMT_TERMINATOR"); }
#line 2033 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 391 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Block_list -> Expression STMT_TERMINATOR"); }
#line 2039 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 395 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Let_Expression -> KEY_LET Formal Formals KEY_IN Expression"); }
#line 2045 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 399 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back( "Expressions -> Expressions COMMA Expression"); }
#line 2051 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 401 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Expressions -> EMPTY"); }
#line 2057 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 405 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Formals -> Formals COMMA Formal"); }
#line 2063 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 407 "src/parse.y" /* yacc.c:1646  */
    { parse_tree.push_back("Formals -> EMPTY"); }
#line 2069 "parse.tab.c" /* yacc.c:1646  */
    break;


#line 2073 "parse.tab.c" /* yacc.c:1646  */
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
#line 409 "src/parse.y" /* yacc.c:1906  */


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
