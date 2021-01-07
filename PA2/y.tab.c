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
#line 1 "bar.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
int yylex(void);
int yyerror(char*);

#line 73 "y.tab.c" /* yacc.c:339  */

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
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    STRING = 259,
    ID = 260,
    STRUCT = 261,
    INT = 262,
    VOID = 263,
    CHAR = 264,
    FLOAT = 265,
    IF = 266,
    ELSE = 267,
    SWITCH = 268,
    CASE = 269,
    DEFAULT = 270,
    RETURN = 271,
    BREAK = 272,
    WHILE = 273,
    FOR = 274,
    app = 275,
    aapp = 276,
    sapp = 277,
    mapp = 278,
    dapp = 279,
    rapp = 280,
    aa = 281,
    ss = 282,
    mmm = 283,
    ddd = 284,
    rrr = 285,
    aaa = 286,
    sss = 287,
    lt = 288,
    gt = 289,
    le = 290,
    ge = 291,
    ee = 292,
    ne = 293,
    REAL = 294
  };
#endif
/* Tokens.  */
#define INTEGER 258
#define STRING 259
#define ID 260
#define STRUCT 261
#define INT 262
#define VOID 263
#define CHAR 264
#define FLOAT 265
#define IF 266
#define ELSE 267
#define SWITCH 268
#define CASE 269
#define DEFAULT 270
#define RETURN 271
#define BREAK 272
#define WHILE 273
#define FOR 274
#define app 275
#define aapp 276
#define sapp 277
#define mapp 278
#define dapp 279
#define rapp 280
#define aa 281
#define ss 282
#define mmm 283
#define ddd 284
#define rrr 285
#define aaa 286
#define sss 287
#define lt 288
#define gt 289
#define le 290
#define ge 291
#define ee 292
#define ne 293
#define REAL 294

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 7 "bar.y" /* yacc.c:355  */

	int   ival;
	float rval;

#line 196 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 213 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  18
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   241

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  51
/* YYNRULES -- Number of rules.  */
#define YYNRULES  120
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  197

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   294

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,    49,     2,     2,     2,     2,     2,    52,     2,
      44,    45,     2,     2,    41,     2,    50,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    48,    40,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    42,     2,    43,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    46,    51,    47,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    15,    15,    17,    19,    20,    22,    23,    24,    26,
      28,    29,    30,    31,    32,    33,    35,    36,    38,    39,
      41,    43,    45,    46,    47,    49,    50,    52,    54,    55,
      56,    57,    58,    60,    61,    63,    65,    67,    68,    70,
      71,    73,    74,    76,    77,    78,    79,    80,    81,    82,
      83,    85,    86,    88,    90,    91,    93,    94,    96,    97,
      99,   101,   102,   105,   106,   109,   112,   113,   116,   117,
     120,   121,   124,   125,   127,   128,   130,   131,   133,   134,
     135,   136,   137,   138,   142,   143,   147,   148,   151,   152,
     155,   156,   157,   160,   161,   162,   163,   164,   165,   166,
     169,   170,   173,   174,   177,   178,   181,   182,   185,   188,
     189,   192,   193,   194,   195,   198,   199,   200,   201,   202,
     203
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTEGER", "STRING", "ID", "STRUCT",
  "INT", "VOID", "CHAR", "FLOAT", "IF", "ELSE", "SWITCH", "CASE",
  "DEFAULT", "RETURN", "BREAK", "WHILE", "FOR", "app", "aapp", "sapp",
  "mapp", "dapp", "rapp", "aa", "ss", "mmm", "ddd", "rrr", "aaa", "sss",
  "lt", "gt", "le", "ge", "ee", "ne", "REAL", "';'", "','", "'['", "']'",
  "'('", "')'", "'{'", "'}'", "':'", "' '", "'.'", "'|'", "'&'", "$accept",
  "Start", "Program", "DeclarationList", "Declaration", "VarDeclaration",
  "IDs", "Value", "FuncDeclaration", "StructDeclaration",
  "StructTypeDeclaration", "Params", "ParamList", "Param", "TypeSpecifier",
  "StructType", "StructTypeReference", "CompoundStatement",
  "LocalDeclarationList", "StatementList", "Statement", "MatchedStatement",
  "OpenStatement", "SwitchStatement", "CaseList", "DefaultCase",
  "ReturnStatement", "BreakStatement", "ExpressionStatement", "Expression",
  "AssignExpression", "Variable", "SelectorList", "Selector",
  "SimpleExpression", "AndExpression", "RelExpression", "RelOperator",
  "AddExpression", "Oper1", "Term", "Oper2", "Factor", "NumberLiteral",
  "IncDec", "WhileStatement", "ForStatement", "FunctionCall", "Arguments",
  "ArgumentList", "Assign", YY_NULLPTR
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
      59,    44,    91,    93,    40,    41,   123,   125,    58,    32,
      46,   124,    38
};
# endif

#define YYPACT_NINF -151

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-151)))

#define YYTABLE_NINF -30

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     209,     9,  -151,  -151,  -151,  -151,    26,  -151,   209,  -151,
    -151,  -151,  -151,   -10,    27,  -151,  -151,     6,  -151,  -151,
    -151,    15,   -24,     0,  -151,   214,  -151,    43,    69,    63,
       2,    70,  -151,    45,    71,  -151,    43,  -151,     4,  -151,
    -151,    19,  -151,  -151,   150,  -151,   150,  -151,  -151,   175,
      37,    58,   170,    54,    97,  -151,  -151,   126,  -151,    89,
    -151,  -151,    43,   -13,   209,    91,   112,   150,   115,   132,
       1,  -151,    76,  -151,   101,  -151,  -151,  -151,  -151,  -151,
    -151,  -151,   150,    98,    96,  -151,  -151,  -151,  -151,  -151,
    -151,   150,  -151,  -151,   150,  -151,  -151,  -151,   150,     1,
     189,  -151,  -151,  -151,  -151,  -151,  -151,  -151,   109,  -151,
    -151,   116,   119,  -151,  -151,  -151,  -151,   150,   150,    54,
      97,  -151,  -151,   209,  -151,  -151,   131,    58,   170,    18,
    -151,  -151,   118,   120,   140,   125,   124,   127,  -151,   129,
    -151,  -151,  -151,  -151,  -151,  -151,  -151,  -151,   133,  -151,
    -151,   150,   150,  -151,   134,  -151,   150,   150,  -151,  -151,
     136,   138,  -151,   141,   145,    65,   142,    31,   150,  -151,
     166,   173,  -151,  -151,   151,    65,   187,   107,   150,  -151,
    -151,   144,   190,   177,   179,   182,  -151,   180,  -151,  -151,
      59,    65,  -151,    65,  -151,  -151,    65
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    28,    29,    30,    31,     0,     2,     3,     5,
       6,     7,     8,    33,     0,    32,    34,    35,     1,     4,
      20,    17,     0,    13,    38,    24,     9,     0,     0,     0,
       0,    23,    33,     0,    22,    26,     0,    17,    10,   100,
      15,    66,   102,   103,     0,   101,     0,    14,    63,    96,
      64,    73,    75,    77,    85,    89,    99,     0,    94,     0,
      21,    37,     0,     0,     0,    27,     0,     0,   110,     0,
      67,    69,    96,    95,     0,   115,   116,   117,   118,   119,
     120,    97,     0,     0,     0,    78,    79,    80,    81,    82,
      83,     0,    86,    87,     0,    90,    91,    92,     0,    66,
       0,    16,    19,    38,    18,    25,    12,    11,     0,   114,
     113,     0,   109,    70,    68,    93,    65,     0,     0,    76,
      84,    88,    98,    40,    71,   108,     0,    72,    74,     0,
     112,   111,     0,     0,     0,     0,     0,     0,    36,     0,
      47,    39,    41,    42,    49,    46,    48,    43,     0,    45,
      44,     0,     0,    59,     0,    60,     0,     0,    62,    61,
       0,     0,    58,     0,     0,     0,     0,     0,     0,    51,
      41,     0,   105,   104,     0,     0,     0,    57,     0,    50,
      52,     0,     0,     0,     0,     0,    40,     0,    40,    53,
       0,    55,    40,    56,   106,   107,    54
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -151,  -151,  -151,  -151,   221,   -29,  -151,   -14,  -151,  -151,
      47,  -151,  -151,   167,   -23,  -151,  -151,   -60,   130,   -99,
      67,  -150,    55,  -151,  -151,  -151,  -151,  -151,  -151,   -28,
    -151,   -38,  -151,   164,  -151,   121,   117,  -151,   146,  -151,
     147,  -151,   -40,  -151,   -44,  -151,  -151,  -151,  -151,  -151,
     139
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,     8,     9,    10,    22,    23,    11,    12,
      32,    33,    34,    35,    14,    15,    16,   140,    30,   129,
     141,   142,   143,   144,   177,   184,   145,   146,   147,   148,
      48,    49,    70,    71,    50,    51,    52,    91,    53,    94,
      54,    98,    55,    56,    57,   149,   150,    58,   111,   112,
      82
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      47,    61,    36,   104,    73,    81,    72,    62,     1,     2,
       3,     4,     5,    38,    17,   170,    26,    27,    74,   100,
      28,    39,    65,    41,    66,   179,    18,   102,    81,   132,
      20,   133,    21,   103,   134,   135,   136,   137,   107,   108,
     110,    36,    29,    67,    42,    43,    29,    13,    37,    60,
      44,    69,    24,    72,   116,    13,    72,    45,   121,    25,
      72,    67,    46,    68,   103,   138,    59,   139,    39,    69,
      41,   172,    39,    40,    41,   -29,   132,   103,   133,    72,
      72,   134,   135,   136,   137,    92,    93,   191,    83,   193,
      63,    42,    43,   196,    61,    42,    43,    44,   131,   194,
      62,    44,    42,    43,    45,   103,   154,   173,    45,    46,
      84,   103,    64,    46,   139,    39,   106,    41,    39,   109,
      41,   182,   183,   160,   161,    95,    96,    97,   163,   164,
     195,    99,   101,    29,    39,   130,    41,   113,    42,    43,
     174,    42,    43,    39,    44,    41,   115,    44,   118,   117,
     185,    45,   124,    39,    45,    41,    46,    42,    43,    46,
     126,   125,   151,    44,   152,   155,    42,    43,   156,   158,
      45,   157,    44,   159,   162,    46,    42,    43,   175,    45,
     153,   165,    44,   166,    46,   168,   167,   176,   171,    45,
     181,   178,   186,   187,    46,    75,    76,    77,    78,    79,
      80,    42,    43,    85,    86,    87,    88,    89,    90,    75,
      76,    77,    78,    79,    80,     1,     2,     3,     4,     5,
       1,     2,    31,     4,     5,   188,   189,   190,   192,    19,
     180,   105,   169,   123,   114,   128,     0,   119,   127,   122,
       0,   120
};

static const yytype_int16 yycheck[] =
{
      28,    30,    25,    63,    44,    49,    44,    30,     6,     7,
       8,     9,    10,    27,     5,   165,    40,    41,    46,    57,
      20,     3,    36,     5,    20,   175,     0,    40,    72,    11,
      40,    13,     5,    46,    16,    17,    18,    19,    66,    67,
      68,    64,    42,    42,    26,    27,    42,     0,     5,    47,
      32,    50,    46,    91,    82,     8,    94,    39,    98,    44,
      98,    42,    44,    44,    46,    47,     3,    49,     3,    50,
       5,    40,     3,     4,     5,     5,    11,    46,    13,   117,
     118,    16,    17,    18,    19,    31,    32,   186,    51,   188,
      45,    26,    27,   192,   123,    26,    27,    32,   126,    40,
     123,    32,    26,    27,    39,    46,   134,   167,    39,    44,
      52,    46,    41,    44,    49,     3,     4,     5,     3,     4,
       5,    14,    15,   151,   152,    28,    29,    30,   156,   157,
     190,     5,    43,    42,     3,     4,     5,     5,    26,    27,
     168,    26,    27,     3,    32,     5,    45,    32,    52,    51,
     178,    39,    43,     3,    39,     5,    44,    26,    27,    44,
      41,    45,    44,    32,    44,    40,    26,    27,    44,    40,
      39,    44,    32,    40,    40,    44,    26,    27,    12,    39,
      40,    45,    32,    45,    44,    40,    45,    14,    46,    39,
       3,    40,    48,     3,    44,    20,    21,    22,    23,    24,
      25,    26,    27,    33,    34,    35,    36,    37,    38,    20,
      21,    22,    23,    24,    25,     6,     7,     8,     9,    10,
       6,     7,     8,     9,    10,    48,    47,    45,    48,     8,
     175,    64,   165,   103,    70,   118,    -1,    91,   117,   100,
      -1,    94
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,     7,     8,     9,    10,    54,    55,    56,    57,
      58,    61,    62,    63,    67,    68,    69,     5,     0,    57,
      40,     5,    59,    60,    46,    44,    40,    41,    20,    42,
      71,     8,    63,    64,    65,    66,    67,     5,    60,     3,
       4,     5,    26,    27,    32,    39,    44,    82,    83,    84,
      87,    88,    89,    91,    93,    95,    96,    97,   100,     3,
      47,    58,    67,    45,    41,    60,    20,    42,    44,    50,
      85,    86,    84,    95,    82,    20,    21,    22,    23,    24,
      25,    97,   103,    51,    52,    33,    34,    35,    36,    37,
      38,    90,    31,    32,    92,    28,    29,    30,    94,     5,
      84,    43,    40,    46,    70,    66,     4,    82,    82,     4,
      82,   101,   102,     5,    86,    45,    82,    51,    52,    91,
      93,    95,   103,    71,    43,    45,    41,    88,    89,    72,
       4,    82,    11,    13,    16,    17,    18,    19,    47,    49,
      70,    73,    74,    75,    76,    79,    80,    81,    82,    98,
      99,    44,    44,    40,    82,    40,    44,    44,    40,    40,
      82,    82,    40,    82,    82,    45,    45,    45,    40,    73,
      74,    46,    40,    70,    82,    12,    14,    77,    40,    74,
      75,     3,    14,    15,    78,    82,    48,     3,    48,    47,
      45,    72,    48,    72,    40,    70,    72
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    55,    56,    56,    57,    57,    57,    58,
      59,    59,    59,    59,    59,    59,    60,    60,    61,    61,
      62,    63,    64,    64,    64,    65,    65,    66,    67,    67,
      67,    67,    67,    68,    68,    69,    70,    71,    71,    72,
      72,    73,    73,    74,    74,    74,    74,    74,    74,    74,
      74,    75,    75,    76,    77,    77,    78,    78,    79,    79,
      80,    81,    81,    82,    82,    83,    84,    84,    85,    85,
      86,    86,    87,    87,    88,    88,    89,    89,    90,    90,
      90,    90,    90,    90,    91,    91,    92,    92,    93,    93,
      94,    94,    94,    95,    95,    95,    95,    95,    95,    95,
      96,    96,    97,    97,    98,    98,    99,    99,   100,   101,
     101,   102,   102,   102,   102,   103,   103,   103,   103,   103,
     103
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     1,     3,
       3,     5,     5,     1,     3,     3,     4,     1,     6,     6,
       2,     5,     1,     1,     0,     3,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     2,     4,     2,     0,     2,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       7,     5,     7,     8,     5,     4,     3,     0,     3,     2,
       2,     2,     2,     1,     1,     3,     1,     2,     2,     1,
       2,     3,     4,     1,     4,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     3,     1,
       1,     1,     1,     3,     1,     2,     1,     2,     3,     1,
       1,     1,     1,     1,     5,     5,     9,     9,     4,     1,
       0,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1
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
#line 15 "bar.y" /* yacc.c:1646  */
    {;}
#line 1454 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 17 "bar.y" /* yacc.c:1646  */
    {printf("Program -> DeclarationList\n");}
#line 1460 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 19 "bar.y" /* yacc.c:1646  */
    {printf("DeclarationList -> DeclarationList Declaration\n");}
#line 1466 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 20 "bar.y" /* yacc.c:1646  */
    {printf("DeclarationList -> Declaration\n");}
#line 1472 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 22 "bar.y" /* yacc.c:1646  */
    {printf("Declaration -> VarDeclaration\n");}
#line 1478 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 23 "bar.y" /* yacc.c:1646  */
    {printf("Declaration -> FuncDeclaration\n");}
#line 1484 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 24 "bar.y" /* yacc.c:1646  */
    {printf("Declaration -> StructDeclaration\n");}
#line 1490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 26 "bar.y" /* yacc.c:1646  */
    {printf("VarDeclaration -> TypeSpecifier IDs ;\n");}
#line 1496 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 28 "bar.y" /* yacc.c:1646  */
    {printf("IDs -> IDs , Value\n");}
#line 1502 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 29 "bar.y" /* yacc.c:1646  */
    {printf("IDs -> IDs , Value = Expression\n");}
#line 1508 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 30 "bar.y" /* yacc.c:1646  */
    {printf("IDs -> IDs , Value = STRING\n");}
#line 1514 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 31 "bar.y" /* yacc.c:1646  */
    {printf("IDs -> Value\n");}
#line 1520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 32 "bar.y" /* yacc.c:1646  */
    {printf("IDs -> Value = Expression\n");}
#line 1526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 33 "bar.y" /* yacc.c:1646  */
    {printf("IDs -> Value = STRING\n");}
#line 1532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 35 "bar.y" /* yacc.c:1646  */
    {printf("Value -> Value [ %d ]\n", (yyvsp[-1].ival));}
#line 1538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 36 "bar.y" /* yacc.c:1646  */
    {printf("Value -> ID\n");}
#line 1544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 38 "bar.y" /* yacc.c:1646  */
    {printf("FuncDeclaration -> TypeSpecifier ID ( Params ) CompoundStatement\n");}
#line 1550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 39 "bar.y" /* yacc.c:1646  */
    {printf("FuncDeclaration -> TypeSpecifier ID ( Params ) ;\n");}
#line 1556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 41 "bar.y" /* yacc.c:1646  */
    {printf("StructDeclaraion -> StructTypeDeclaration ;\n");}
#line 1562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 43 "bar.y" /* yacc.c:1646  */
    {printf("StructTypeDeclaration -> STRUCT ID { LocalDeclarationList }\n");}
#line 1568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 45 "bar.y" /* yacc.c:1646  */
    {printf("Params -> ParamList\n");}
#line 1574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 46 "bar.y" /* yacc.c:1646  */
    {printf("Params -> void\n");}
#line 1580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 47 "bar.y" /* yacc.c:1646  */
    {printf("Params -> Empty\n");}
#line 1586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 49 "bar.y" /* yacc.c:1646  */
    {printf("ParamList -> ParamList , Param\n");}
#line 1592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 50 "bar.y" /* yacc.c:1646  */
    {printf("ParamList -> param\n");}
#line 1598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 52 "bar.y" /* yacc.c:1646  */
    {printf("Param -> TypeSpecifier Value\n");}
#line 1604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 54 "bar.y" /* yacc.c:1646  */
    {printf("TypeSpecifier -> int\n");}
#line 1610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 55 "bar.y" /* yacc.c:1646  */
    {printf("TypeSpecifier -> void\n");}
#line 1616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 56 "bar.y" /* yacc.c:1646  */
    {printf("TypeSpecifier -> char\n");}
#line 1622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 57 "bar.y" /* yacc.c:1646  */
    {printf("TypeSpecifier -> float\n");}
#line 1628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 58 "bar.y" /* yacc.c:1646  */
    {printf("TypeSpecifier -> StructType\n");}
#line 1634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 60 "bar.y" /* yacc.c:1646  */
    {printf("StructType -> StructTypeDeclaration\n");}
#line 1640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 61 "bar.y" /* yacc.c:1646  */
    {printf("StructType -> StructTypeReference\n");}
#line 1646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 63 "bar.y" /* yacc.c:1646  */
    {printf("StuctTypeReference -> STRUCT ID\n");}
#line 1652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 65 "bar.y" /* yacc.c:1646  */
    {printf("ConpoundStatement -> { LocalDeclarationList StatementList }\n");}
#line 1658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 67 "bar.y" /* yacc.c:1646  */
    {printf("LocalDeclaration -> LocalDeclarationList VarDeclaration\n");}
#line 1664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 68 "bar.y" /* yacc.c:1646  */
    {printf("LocalDeclarationList -> Empty\n");}
#line 1670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 70 "bar.y" /* yacc.c:1646  */
    {printf("StatementList -> StatementList Statement\n");}
#line 1676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 71 "bar.y" /* yacc.c:1646  */
    {printf("StatementList -> Empty\n");}
#line 1682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 73 "bar.y" /* yacc.c:1646  */
    {printf("Statement -> MatchedStatement\n");}
#line 1688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 74 "bar.y" /* yacc.c:1646  */
    {printf("Statemet -> OpenStatement\n");}
#line 1694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 76 "bar.y" /* yacc.c:1646  */
    {printf("MatchedStatement -> ExpressionStatement\n");}
#line 1700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 77 "bar.y" /* yacc.c:1646  */
    {printf("MatchedStatement -> ForStatement\n");}
#line 1706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 78 "bar.y" /* yacc.c:1646  */
    {printf("MatchedStatement -> WhileStatement\n");}
#line 1712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 79 "bar.y" /* yacc.c:1646  */
    {printf("MatchesStatement -> ReturnStatement\n");}
#line 1718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 80 "bar.y" /* yacc.c:1646  */
    {printf("MatchedStatement -> CompoundStatement\n");}
#line 1724 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 81 "bar.y" /* yacc.c:1646  */
    {printf("MatchedStatement -> BreakStatement\n");}
#line 1730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 82 "bar.y" /* yacc.c:1646  */
    {printf("MatchedStatement -> SwitchedStatement\n");}
#line 1736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 83 "bar.y" /* yacc.c:1646  */
    {printf("MatchedStatement -> if ( Expression ) MatchedStatment else MatchedStatement\n");}
#line 1742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 85 "bar.y" /* yacc.c:1646  */
    {printf("OpenStatement -> if ( Expression ) Statement\n");}
#line 1748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 86 "bar.y" /* yacc.c:1646  */
    {printf("OpenStatement -> if ( Expression ) MatchedStatement else OpenStatement\n");}
#line 1754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 88 "bar.y" /* yacc.c:1646  */
    {printf("SwitchStatement -> switch ( Expression ) { CaseList DefaultCase }\n");}
#line 1760 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 90 "bar.y" /* yacc.c:1646  */
    {printf("CaseList -> CaseList case %d : StatementList\n",(yyvsp[-2].ival));}
#line 1766 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 91 "bar.y" /* yacc.c:1646  */
    {printf("CaseList -> case %d : StatementList\n", (yyvsp[-2].ival));}
#line 1772 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 93 "bar.y" /* yacc.c:1646  */
    {printf("DefaultCase -> default : StatementList\n");}
#line 1778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 94 "bar.y" /* yacc.c:1646  */
    {printf("DefaultCase -> Empty\n");}
#line 1784 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 96 "bar.y" /* yacc.c:1646  */
    {printf("ReturnStatement -> return Expression ;\n");}
#line 1790 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 97 "bar.y" /* yacc.c:1646  */
    {printf("ReturnStatement -> return ;\n");}
#line 1796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 99 "bar.y" /* yacc.c:1646  */
    {printf("BreakStatement -> break ;\n");}
#line 1802 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 101 "bar.y" /* yacc.c:1646  */
    {printf("ExpressionStatement -> Expression ;\n");}
#line 1808 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 102 "bar.y" /* yacc.c:1646  */
    {printf("ExpressionStatement -> ;\n");}
#line 1814 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 105 "bar.y" /* yacc.c:1646  */
    {printf("Expression -> AssignExpression\n");}
#line 1820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 106 "bar.y" /* yacc.c:1646  */
    {printf("Expression -> SimpleExpression\n");}
#line 1826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 109 "bar.y" /* yacc.c:1646  */
    {printf("AssignExpression -> Variable Assign Expression\n");}
#line 1832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 112 "bar.y" /* yacc.c:1646  */
    {printf("Variable -> ID\n");}
#line 1838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 113 "bar.y" /* yacc.c:1646  */
    {printf("Variable -> ID SelectorList\n");}
#line 1844 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 116 "bar.y" /* yacc.c:1646  */
    {printf("SelectorList -> SelectorList Selector\n");}
#line 1850 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 117 "bar.y" /* yacc.c:1646  */
    {printf("SelctorList -> Selector\n");}
#line 1856 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 120 "bar.y" /* yacc.c:1646  */
    {printf("Selector -> . ID\n");}
#line 1862 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 121 "bar.y" /* yacc.c:1646  */
    {printf("Selector -> [ Expression ]\n");}
#line 1868 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 124 "bar.y" /* yacc.c:1646  */
    {printf("SimpleExpression -> SimpleExpression || AndExpression\n");}
#line 1874 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 125 "bar.y" /* yacc.c:1646  */
    {printf("SimpleExpression -> AndExpression\n");}
#line 1880 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 127 "bar.y" /* yacc.c:1646  */
    {printf("AndExpression -> AndExpression && RelExpression\n");}
#line 1886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 128 "bar.y" /* yacc.c:1646  */
    { printf("AndExpression -> RelExpression\n");}
#line 1892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 130 "bar.y" /* yacc.c:1646  */
    {printf("RelExpression -> RelExpression RelOperator AddExpression\n");}
#line 1898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 131 "bar.y" /* yacc.c:1646  */
    {printf("RelExpression -> AddExpression\n");}
#line 1904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 133 "bar.y" /* yacc.c:1646  */
    {printf("RelOperator -> <\n");}
#line 1910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 134 "bar.y" /* yacc.c:1646  */
    {printf("RelOperator -> >\n");}
#line 1916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 135 "bar.y" /* yacc.c:1646  */
    {printf("RelOperator -> <=\n");}
#line 1922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 136 "bar.y" /* yacc.c:1646  */
    {printf("RelOperator -> >=\n");}
#line 1928 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 137 "bar.y" /* yacc.c:1646  */
    {printf("RelOperator -> ==\n");}
#line 1934 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 138 "bar.y" /* yacc.c:1646  */
    {printf("RelOperator -> !=\n");}
#line 1940 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 142 "bar.y" /* yacc.c:1646  */
    {printf("AddExpression -> AddExpression Oper1 Term\n");}
#line 1946 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 143 "bar.y" /* yacc.c:1646  */
    { printf("AddExpression -> Term\n");}
#line 1952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 147 "bar.y" /* yacc.c:1646  */
    {printf("Oper1 -> +\n");}
#line 1958 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 148 "bar.y" /* yacc.c:1646  */
    {printf("Oper1 -> -\n");}
#line 1964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 151 "bar.y" /* yacc.c:1646  */
    {printf("Term -> Term Oper2 Factor\n");}
#line 1970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 152 "bar.y" /* yacc.c:1646  */
    { printf("Term -> Factor\n");}
#line 1976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 155 "bar.y" /* yacc.c:1646  */
    {printf("Oper2 -> *\n");}
#line 1982 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 156 "bar.y" /* yacc.c:1646  */
    {printf("Oper2-> /\n");}
#line 1988 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 157 "bar.y" /* yacc.c:1646  */
    {printf("Oper2 -> %s\n", "%");}
#line 1994 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 160 "bar.y" /* yacc.c:1646  */
    {printf("Factor -> ( Expression )\n");}
#line 2000 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 161 "bar.y" /* yacc.c:1646  */
    {printf("Factor -> FunctionCall\n");}
#line 2006 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 162 "bar.y" /* yacc.c:1646  */
    {printf("Factor -> - Factor\n");}
#line 2012 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 163 "bar.y" /* yacc.c:1646  */
    { printf("Factor -> Variable\n");}
#line 2018 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 164 "bar.y" /* yacc.c:1646  */
    {printf("Factor -> Variable IncDec\n");}
#line 2024 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 165 "bar.y" /* yacc.c:1646  */
    {printf("Factor -> IncDec Variable\n");}
#line 2030 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 166 "bar.y" /* yacc.c:1646  */
    {printf("Factor -> NumberLiteral\n");}
#line 2036 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 169 "bar.y" /* yacc.c:1646  */
    {printf("NumberLiteral -> %d\n", (yyvsp[0].ival));}
#line 2042 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 170 "bar.y" /* yacc.c:1646  */
    {printf("NumberLiteral -> %f\n", (yyvsp[0].rval));}
#line 2048 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 173 "bar.y" /* yacc.c:1646  */
    {printf("IncDec -> ++\n");}
#line 2054 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 174 "bar.y" /* yacc.c:1646  */
    {printf("IncDec -> --\n");}
#line 2060 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 177 "bar.y" /* yacc.c:1646  */
    {printf("WhileStatement -> while ( Expression ) CompoundStatement\n");}
#line 2066 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 178 "bar.y" /* yacc.c:1646  */
    {printf("WhileStatement -> while ( Expression ) ;\n");}
#line 2072 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 181 "bar.y" /* yacc.c:1646  */
    {printf("ForStatement -> for ( Expression ; Expression ; Expression ) ;\n");}
#line 2078 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 182 "bar.y" /* yacc.c:1646  */
    {printf("ForStatemant -> for ( Expression ; Expression ; Expression ) CompoundStatement\n");}
#line 2084 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 185 "bar.y" /* yacc.c:1646  */
    {printf("FunctionCall -> ID ( Arguments )\n");}
#line 2090 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 188 "bar.y" /* yacc.c:1646  */
    {printf("Arguments -> ArgumentList\n");}
#line 2096 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 189 "bar.y" /* yacc.c:1646  */
    {printf("Arguments -> Empty\n");}
#line 2102 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 192 "bar.y" /* yacc.c:1646  */
    {printf("ArgumentList -> ArgumentList , Expression\n");}
#line 2108 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 193 "bar.y" /* yacc.c:1646  */
    {printf("ArgumentList -> ArgumetList , STRING\n");}
#line 2114 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 194 "bar.y" /* yacc.c:1646  */
    {printf("ArgumentList -> Expression\n");}
#line 2120 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 195 "bar.y" /* yacc.c:1646  */
    { printf("ArgumentList -> STRING\n");}
#line 2126 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 198 "bar.y" /* yacc.c:1646  */
    {printf("Assign -> =\n");}
#line 2132 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 199 "bar.y" /* yacc.c:1646  */
    {printf("Assign -> +=\n");}
#line 2138 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 200 "bar.y" /* yacc.c:1646  */
    {printf("Assign -> -=\n");}
#line 2144 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 201 "bar.y" /* yacc.c:1646  */
    {printf("Assign -> *-\n");}
#line 2150 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 202 "bar.y" /* yacc.c:1646  */
    {printf("Assign -> /=\n");}
#line 2156 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 203 "bar.y" /* yacc.c:1646  */
    {printf("Assign -> %s\n", "%=");}
#line 2162 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2166 "y.tab.c" /* yacc.c:1646  */
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
#line 205 "bar.y" /* yacc.c:1906  */


int main(int argc, char *argv[]){
	if(argc == 1) exit(0);
	extern FILE *yyin;
 	yyin = fopen(argv[1], "r");
	yyparse();
	fclose(yyin);
	return 0;
}
