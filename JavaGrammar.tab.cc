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
#line 1 "JavaGrammar.yy" /* yacc.c:339  */

	#include <cstdlib>
	#include "Node/Node.cpp"
	extern int yylex();
	void yyerror (char const *error);
	
	Node* root;

#line 75 "JavaGrammar.tab.cc" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "JavaGrammar.tab.hh".  */
#ifndef YY_YY_JAVAGRAMMAR_TAB_HH_INCLUDED
# define YY_YY_JAVAGRAMMAR_TAB_HH_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 10 "JavaGrammar.yy" /* yacc.c:355  */

	#include <string>
	#include <iostream> 

#line 110 "JavaGrammar.tab.cc" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TOK_IDENTIFIER = 100,
    TOK_INTVAL = 101,
    TOK_FLOATVAL = 102,
    TOK_STRINGVAL = 103,
    TOK_BOOLVAL = 104,
    TOK_CHARVAL = 105,
    TOK_DOUBLEVAL = 106,
    TOK_LONGVAL = 107,
    TOK_SHORTVAL = 108,
    TOK_NULLVAL = 109,
    TOK_ABSTRACT = 200,
    TOK_CONTINUE = 201,
    TOK_FOR = 202,
    TOK_NEW = 203,
    TOK_SWITCH = 204,
    TOK_ASSERT = 205,
    TOK_DEFAULT = 206,
    TOK_GOTO = 207,
    TOK_PACKAGE = 208,
    TOK_SYNCHRONIZED = 209,
    TOK_BOOLEAN = 210,
    TOK_DO = 211,
    TOK_IF = 212,
    TOK_PRIVATE = 213,
    TOK_THIS = 214,
    TOK_BREAK = 215,
    TOK_DOUBLE = 216,
    TOK_IMPLEMENTS = 217,
    TOK_PROTECTED = 218,
    TOK_THROW = 219,
    TOK_BYTE = 220,
    TOK_ELSE = 221,
    TOK_IMPORT = 222,
    TOK_PUBLIC = 223,
    TOK_THROWS = 224,
    TOK_CASE = 225,
    TOK_ENUM = 226,
    TOK_INSTANCEOF = 227,
    TOK_RETURN = 228,
    TOK_TRANSIENT = 229,
    TOK_CATCH = 230,
    TOK_EXTENDS = 231,
    TOK_INT = 232,
    TOK_SHORT = 233,
    TOK_TRY = 234,
    TOK_CHAR = 235,
    TOK_FINAL = 236,
    TOK_INTERFACE = 237,
    TOK_STATIC = 238,
    TOK_VOID = 239,
    TOK_CLASS = 240,
    TOK_FINALLY = 241,
    TOK_LONG = 242,
    TOK_STRICTFP = 243,
    TOK_VOLATILE = 244,
    TOK_CONST = 245,
    TOK_FLOAT = 246,
    TOK_NATIVE = 247,
    TOK_SUPER = 248,
    TOK_WHILE = 249,
    TOK_YIELD = 341,
    TOK_LBRACKET = 300,
    TOK_RBRACKET = 301,
    TOK_LPAREN = 302,
    TOK_RPAREN = 303,
    TOK_LBRACE = 304,
    TOK_RBRACE = 305,
    TOK_COMMA = 306,
    TOK_SEMI = 307,
    TOK_DOT = 308,
    TOK_ASSIGN = 309,
    TOK_MODASSIGN = 310,
    TOK_DIVASSIGN = 311,
    TOK_MULASSIGN = 312,
    TOK_ADDASSIGN = 313,
    TOK_SUBASSIGN = 314,
    TOK_COLON = 315,
    TOK_QUESTION = 316,
    TOK_OR = 317,
    TOK_AND = 318,
    TOK_BITOR = 319,
    TOK_BITAND = 320,
    TOK_BITXOR = 321,
    TOK_EQUAL = 322,
    TOK_NEQUAL = 323,
    TOK_LESS = 324,
    TOK_LEQUAL = 325,
    TOK_GREATER = 326,
    TOK_GEQUAL = 327,
    TOK_LSHIFT = 328,
    TOK_RSHIFT = 329,
    TOK_RSHIFTZ = 330,
    TOK_ADD = 331,
    TOK_SUB = 332,
    TOK_MOD = 333,
    TOK_DIV = 334,
    TOK_MUL = 335,
    TOK_BITNEG = 336,
    TOK_NEG = 337,
    TOK_SUBSUB = 338,
    TOK_ADDADD = 339,
    TOK_LAMBDA = 340
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 15 "JavaGrammar.yy" /* yacc.c:355  */

	int iVal;
	double dVal;
	char stVal[100];
	bool bVal;
	//still return float for everything?
	float fVal;
	long lVal;
	short shVal;
	char cVal;
	struct Node* node;


#line 241 "JavaGrammar.tab.cc" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_JAVAGRAMMAR_TAB_HH_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 258 "JavaGrammar.tab.cc" /* yacc.c:358  */

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
#define YYLAST   1304

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  105
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  58
/* YYNRULES -- Number of rules.  */
#define YYNRULES  201
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  475

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   342

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
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
       2,     2,     2,     2,     2,     2,     1,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,    63,     2
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   144,   144,   150,   151,   155,   156,   160,   161,   165,
     166,   170,   171,   172,   173,   189,   190,   194,   198,   202,
     203,   204,   208,   209,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   230,   231,   232,
     233,   234,   235,   239,   240,   241,   242,   243,   247,   248,
     252,   253,   254,   255,   259,   263,   264,   268,   269,   273,
     274,   278,   279,   280,   281,   282,   286,   287,   288,   289,
     290,   294,   295,   296,   300,   301,   302,   303,   304,   305,
     309,   310,   311,   312,   313,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   349,   350,   351,   352,   353,   354,
     355,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   373,   374,   375,   376,   377,   378,   382,   383,
     387,   388,   389,   390,   391,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   407,   411,   412,   416,   420,   424,
     428,   432,   433,   434,   438,   439,   443,   444,   448,   449,
     454,   458,   459,   463,   464,   468,   469,   470,   471,   475,
     476,   480,   481,   485,   486,   490,   491,   496,   498,   502,
     503,   508,   512,   513,   517,   518,   522,   523,   527,   528,
     532,   533
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOK_IDENTIFIER", "TOK_INTVAL",
  "TOK_FLOATVAL", "TOK_STRINGVAL", "TOK_BOOLVAL", "TOK_CHARVAL",
  "TOK_DOUBLEVAL", "TOK_LONGVAL", "TOK_SHORTVAL", "TOK_NULLVAL",
  "TOK_ABSTRACT", "TOK_CONTINUE", "TOK_FOR", "TOK_NEW", "TOK_SWITCH",
  "TOK_ASSERT", "TOK_DEFAULT", "TOK_GOTO", "TOK_PACKAGE",
  "TOK_SYNCHRONIZED", "TOK_BOOLEAN", "TOK_DO", "TOK_IF", "TOK_PRIVATE",
  "TOK_THIS", "TOK_BREAK", "TOK_DOUBLE", "TOK_IMPLEMENTS", "TOK_PROTECTED",
  "TOK_THROW", "TOK_BYTE", "TOK_ELSE", "TOK_IMPORT", "TOK_PUBLIC",
  "TOK_THROWS", "TOK_CASE", "TOK_ENUM", "TOK_INSTANCEOF", "TOK_RETURN",
  "TOK_TRANSIENT", "TOK_CATCH", "TOK_EXTENDS", "TOK_INT", "TOK_SHORT",
  "TOK_TRY", "TOK_CHAR", "TOK_FINAL", "TOK_INTERFACE", "TOK_STATIC",
  "TOK_VOID", "TOK_CLASS", "TOK_FINALLY", "TOK_LONG", "TOK_STRICTFP",
  "TOK_VOLATILE", "TOK_CONST", "TOK_FLOAT", "TOK_NATIVE", "TOK_SUPER",
  "TOK_WHILE", "TOK_YIELD", "TOK_LBRACKET", "TOK_RBRACKET", "TOK_LPAREN",
  "TOK_RPAREN", "TOK_LBRACE", "TOK_RBRACE", "TOK_COMMA", "TOK_SEMI",
  "TOK_DOT", "TOK_ASSIGN", "TOK_MODASSIGN", "TOK_DIVASSIGN",
  "TOK_MULASSIGN", "TOK_ADDASSIGN", "TOK_SUBASSIGN", "TOK_COLON",
  "TOK_QUESTION", "TOK_OR", "TOK_AND", "TOK_BITOR", "TOK_BITAND",
  "TOK_BITXOR", "TOK_EQUAL", "TOK_NEQUAL", "TOK_LESS", "TOK_LEQUAL",
  "TOK_GREATER", "TOK_GEQUAL", "TOK_LSHIFT", "TOK_RSHIFT", "TOK_RSHIFTZ",
  "TOK_ADD", "TOK_SUB", "TOK_MOD", "TOK_DIV", "TOK_MUL", "TOK_BITNEG",
  "TOK_NEG", "TOK_SUBSUB", "TOK_ADDADD", "TOK_LAMBDA", "$accept",
  "program", "packagedec", "importstatements", "importstatement",
  "packagename", "typedec", "interfacedec", "classdec",
  "extendsorimplements", "basicidentifier", "mod", "classbody",
  "interfacebody", "abstractmethod", "method", "parallelblock",
  "throwsclause", "formalparameters", "formalparameter", "argument",
  "datatype", "block", "statement", "expressionstatement", "expression",
  "assignmentstatement", "controlflowstatement", "identifier",
  "declarationstatement", "declarator", "initializer",
  "initializationstatement", "datastructure", "whileloop", "dowhileloop",
  "forloop", "enhancedfor", "forinit", "forupdate", "ifstatement",
  "ifelsestatement", "switchstatement", "switchblock", "switchrules",
  "switchrule", "switchblockstates", "switchblockstate", "switchlabel",
  "case", "trycatchblock", "exceptionname", "throwstate", "postdecrement",
  "predecrement", "instancemethodcall", "methodcall", "fieldreference", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   342,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   341,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340
};
# endif

#define YYPACT_NINF -341

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-341)))

#define YYTABLE_NINF -144

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-144)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       2,    33,    43,    64,  -341,   135,  -341,    33,   721,    64,
    -341,    65,   184,   721,   721,   721,   721,   721,   721,   721,
     721,   721,   721,   721,   721,  -341,   632,   671,    48,  -341,
    -341,  -341,    29,  -341,  -341,  -341,  -341,  -341,  -341,  -341,
    -341,  -341,  -341,  -341,  -341,  -341,  -341,    80,   157,   102,
     -10,    -2,  -341,   159,   332,   177,   199,   693,   143,   158,
     332,   332,   510,   172,   332,   169,  -341,   218,   693,   693,
     646,   181,   693,   693,   332,  -341,  -341,   116,  -341,  -341,
    -341,   254,  -341,  -341,     9,   190,   204,   198,  -341,  -341,
     177,   177,  -341,  -341,   133,    10,   219,   234,  -341,  -341,
     231,   238,    41,   305,   156,   264,   -11,   268,   391,   332,
     331,  -341,  -341,   156,   221,   272,  -341,   693,   693,  -341,
    -341,    95,   275,   278,    17,  -341,  -341,  -341,   251,    41,
     284,    41,   349,   148,  -341,  -341,  -341,  -341,   171,   165,
     229,   165,   165,  1111,  -341,  -341,   285,   294,  -341,  -341,
     266,   295,    18,   364,  -341,  -341,   335,    41,   309,   375,
     312,  -341,   323,  -341,   229,   229,   390,    60,   338,   340,
      91,   784,   198,   710,   405,   406,   343,   344,   946,  -341,
    -341,  -341,  -341,   285,    98,  -341,   165,   165,   165,   165,
     165,   165,   165,   165,   165,   165,   165,   165,   165,   165,
     165,   165,   165,   165,   165,   413,   416,    21,    72,   117,
     353,  -341,   154,   177,   352,  -341,  -341,   335,   335,   356,
     355,   358,   285,   229,    16,    22,   229,  -341,   500,   165,
     165,   165,   165,   165,  -341,  -341,  -341,  -341,  -341,   229,
     229,  1129,  1146,  1162,  1177,  1191,  1205,   798,   830,   862,
     894,   926,   954,   403,   224,   288,    98,   170,   326,  -341,
     361,   358,   285,   274,  -341,    18,   378,   441,    18,  -341,
     614,   151,   209,  -341,  -341,   379,  -341,   357,   384,   382,
     386,   782,  -341,  -341,  1111,  1111,  1111,  1111,  1111,  -341,
    -341,   229,  -341,   381,   385,  -341,   723,   383,   392,   394,
     388,   395,   396,   446,   165,   397,   402,   165,   614,    24,
     401,   614,   400,  -341,   409,   411,  -341,  -341,  -341,  -341,
     450,  -341,  -341,  -341,   412,   294,   614,  -341,   614,  -341,
     417,  -341,  -341,   229,  -341,   419,   614,  -341,   214,   165,
     614,   165,  -341,   485,  1005,   614,   165,  1034,  -341,   291,
    -341,  -341,  -341,  -341,  -341,   449,  -341,   423,   424,   693,
     426,  -341,   440,   742,    32,  -341,  -341,  -341,   439,   817,
     445,   850,   452,  -341,   451,   883,  -341,   614,  -341,  -341,
    -341,   453,  -341,  -341,   174,   165,   455,   457,   512,   229,
     478,   460,   456,  -341,   527,  1063,    11,   465,   614,  -341,
     467,   466,   614,  -341,   471,    34,  -341,   165,   473,  -341,
      11,  -341,    11,   -63,   165,   474,  -341,   542,   477,   479,
     761,   480,   481,   294,   976,  -341,  -341,  -341,   454,  -341,
     470,   562,   186,   916,  -341,   484,   551,  -341,   614,    34,
     488,   165,   614,  -341,   614,   490,  1092,   493,   499,   542,
     505,   504,  -341,   614,  -341,   509,   513,  -341,  -341,  -341,
    -341,  -341,   515,  -341,   519,  -341,  -341,   614,  -341,   520,
     530,   524,   614,   526,  -341
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     5,     9,     0,     1,     0,    24,     5,
       4,     0,     0,    24,    24,    24,    24,    24,    24,    24,
      24,    24,    24,    24,    24,     2,    24,    24,     0,     6,
      10,     7,     0,    26,    36,    30,    34,    35,    33,    31,
      25,    28,    27,    32,    29,    14,    13,     0,     0,     0,
       0,     0,     8,     0,    24,     0,     0,    24,     0,     0,
      24,    24,     0,     0,    24,    22,    20,    19,    24,    24,
       0,     0,    24,    24,    24,    47,    46,    69,    67,    70,
      66,     0,    68,    53,     0,     0,     0,   144,    15,    45,
       0,     0,    42,    41,    69,     0,     0,     0,    17,    40,
       0,     0,    59,     0,     0,     0,   140,     0,     0,    24,
       0,    23,    21,     0,   132,     0,   138,    24,    24,    18,
      16,    69,     0,    57,     0,    60,   200,    69,     0,    59,
       0,    59,     0,    90,    86,    87,    89,    88,     0,     0,
      61,     0,     0,   145,   154,   152,   151,    91,    44,   201,
       0,     0,     0,     0,    38,    39,    55,    59,   140,     0,
       0,   142,     0,   141,    61,    61,     0,    69,     0,     0,
      90,     0,    91,    90,     0,     0,     0,    63,    62,    84,
      82,    83,    80,    81,    93,    94,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   133,   132,
       0,   137,   134,     0,     0,    58,   143,    55,    55,     0,
       0,   200,   197,    61,     0,     0,    61,    85,     0,     0,
       0,     0,     0,     0,   193,   192,   195,   194,   147,    61,
      61,   107,   106,   108,   109,   110,   100,   101,   103,   105,
     102,   104,   111,   112,   113,    95,    96,    97,    98,    99,
       0,   201,   196,   132,   139,     0,     0,     0,     0,    56,
      71,     0,     0,    92,   198,     0,   156,     0,     0,     0,
       0,    90,   120,   119,   114,   115,   116,   117,   118,    65,
      64,    61,   135,   133,   134,   136,    69,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    71,     0,
       0,    71,     0,    75,     0,     0,   121,   122,   123,   124,
     125,   126,   127,    78,     0,   144,    71,    49,    71,    48,
     149,   155,   146,    61,   153,     0,    71,   129,     0,     0,
      71,     0,   128,     0,     0,    71,     0,     0,    73,   132,
      52,    72,    74,    76,    77,     0,    79,     0,     0,    24,
       0,   199,     0,    69,     0,   163,   162,   161,     0,     0,
       0,     0,     0,   130,     0,     0,   131,    71,   169,    51,
      50,     0,   148,    54,   132,     0,     0,     0,     0,    61,
       0,     0,     0,   150,     0,     0,     0,     0,    71,   167,
       0,     0,    71,   168,     0,     0,   184,     0,     0,   171,
     173,   172,   179,     0,     0,     0,   191,     0,     0,     0,
       0,   164,     0,     0,   185,   183,   170,   174,     0,   180,
       0,    71,     0,     0,   166,   189,     0,   157,    71,     0,
       0,     0,    71,   182,    71,     0,     0,     0,     0,     0,
       0,     0,   165,    71,   186,     0,     0,   175,   176,   178,
     158,   190,     0,   160,     0,   181,   177,    71,   159,     0,
     187,     0,    71,     0,   188
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -341,  -341,  -341,   572,  -341,   586,   271,    30,   149,  -341,
     -81,   415,   -67,   339,  -341,   250,  -341,    85,   -98,  -341,
    -147,    27,   -27,  -340,   -93,   -79,   369,  -341,  -130,   -66,
     -77,   370,   -59,  -341,  -341,  -341,  -341,  -341,  -341,   160,
    -341,  -341,  -341,  -341,   191,  -341,   192,  -341,  -269,   161,
    -341,   162,   173,  -341,  -341,   -94,  -101,   -62
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     8,     9,     5,    25,    68,    69,    58,
      66,    70,    71,    63,    83,    72,   308,   214,   122,   123,
     176,   309,   310,   311,   312,   178,   179,   313,   116,   314,
      85,   144,   315,   169,   316,   317,   318,   319,   368,   422,
     320,   321,   322,   408,   409,   410,   411,   412,   413,   425,
     323,   436,   324,   180,   181,   182,   183,   172
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      87,    92,    93,    86,    96,    99,   100,   146,    87,   111,
     112,    97,   106,   114,   145,   378,   431,   219,   220,   127,
     158,   209,   211,     1,   263,   125,   278,   349,    55,   143,
     406,   160,    30,   162,    53,   384,     4,   420,    26,    78,
      87,   432,    56,     6,   121,    79,   147,   177,   399,   407,
     154,   155,   125,   130,   125,   131,    26,    26,    54,   215,
     171,    80,   184,   185,    78,   222,    57,    87,    30,    87,
      79,   177,   177,   107,   115,    82,   275,   264,   147,   280,
     125,   107,   210,    50,    60,   210,    80,   279,   115,    84,
      60,    60,   289,   290,    60,    87,   115,    95,    47,     7,
      82,    48,   147,   147,    60,   262,   276,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   223,   146,    49,   124,
     177,   128,   269,   177,   145,   292,   174,   175,   295,    60,
     150,   428,   265,   430,   335,  -142,   177,   177,   224,   143,
     284,   285,   286,   287,   288,   164,   124,    27,   124,   127,
      51,   147,    59,   103,   147,   168,   147,   103,   170,   134,
     135,   136,   137,    52,   167,    27,    27,   147,   147,    78,
      65,   266,   102,   104,   124,    79,   360,   152,   103,   173,
     134,   135,   136,   137,    78,   202,   203,   204,   177,   102,
      79,    80,    67,    61,   104,   103,    10,    11,   325,    61,
      61,    73,   164,    61,   165,    82,    80,   363,   303,   326,
     166,   113,   327,    61,   268,   344,    74,  -141,   347,   147,
      82,   139,   173,   134,   135,   136,   137,    78,   151,    90,
     177,    88,   400,    79,   152,   365,   325,  -140,    91,   325,
      98,   277,   139,   394,   444,    31,    32,   105,    61,    80,
     369,   141,   371,   108,   325,   142,   325,   375,   203,   204,
     110,   147,   366,    82,   325,   109,   325,   328,   325,   367,
     329,   348,   141,   325,   351,   151,   142,   131,   174,   175,
     117,   152,   381,   325,  -140,   139,   177,    45,    46,   357,
     119,   358,   271,   272,    64,   118,   395,   120,   126,   362,
      64,    64,   421,   370,    64,   325,   174,   175,   374,   200,
     201,   202,   203,   204,    64,   141,   325,   147,   424,   142,
     129,   174,   175,   132,   149,   433,   325,   153,   266,   445,
     325,   159,   156,   423,   152,    13,   421,  -143,   157,   161,
     392,    14,   163,   446,    15,   151,   207,   205,    16,    64,
     208,   152,   424,    17,  -140,   364,   206,   212,    18,   325,
     147,   415,   213,   130,    19,   418,   325,   423,   216,   217,
     325,    20,   325,    21,   201,   202,   203,   204,    22,    23,
     218,   325,    24,   221,   133,   134,   135,   136,   137,    75,
      76,   -43,   225,    89,   443,   325,   226,   138,   236,   237,
     325,   451,   238,   101,   239,   455,   260,   456,   267,   261,
     270,   273,   274,    28,   165,   204,   464,   291,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
     469,    28,    28,   293,   294,   473,   330,   331,   148,   332,
     333,   265,   363,   334,   337,   268,   340,   139,   338,   140,
     339,   341,   343,   297,   298,   345,   299,   342,   346,    62,
     350,   352,    78,   300,   301,    62,    62,   302,    79,    62,
     353,   303,   354,   356,   355,   359,   361,   141,   372,    62,
     304,   142,   379,   380,    80,   382,   305,   199,   200,   201,
     202,   203,   204,   281,   134,   135,   136,   137,    82,   383,
     385,   306,   307,    77,   387,   363,   138,   377,   389,   397,
     390,   401,   393,   396,    62,   403,   297,   298,   402,   299,
     404,   414,   417,    78,   416,    78,   300,   301,   419,    79,
     302,    79,   426,   434,   303,   435,   437,   438,   440,   431,
     439,   174,   175,   304,   450,    80,   453,    80,   432,   305,
      47,   457,    81,    48,   459,   296,   139,   449,   140,    82,
     460,    82,   462,   463,   306,   307,   297,   298,   465,   299,
     398,    29,   466,   467,   471,    78,   300,   301,   468,   470,
     302,    79,   472,    12,   303,   474,   141,   282,   283,   452,
     142,   427,   454,   304,   429,   447,     0,    80,     0,   305,
       0,   461,     0,     0,   174,   175,     0,   296,     0,     0,
       0,    82,     0,     0,   306,   307,     0,     0,   297,   298,
     442,   299,   -11,     0,     0,     0,     0,    78,   300,   301,
       0,     0,   302,    79,     0,    13,   303,     0,     0,    94,
       0,    14,     0,     0,    15,   304,     0,     0,    16,    80,
       0,   305,     0,    17,   174,   175,     0,     0,    18,    78,
       0,   -12,     0,    82,    19,    79,   306,   307,     0,     0,
       0,    20,     0,    21,    13,     0,     0,     0,    22,    23,
      14,    80,    24,    15,     0,     0,    47,    16,    81,    48,
       0,     0,    17,     0,     0,    82,    13,    18,     0,     0,
       0,     0,    14,    19,     0,    15,   174,   175,     0,    16,
      20,     0,    21,     0,    17,     0,     0,    22,    23,    18,
       0,    24,     0,     0,    13,    19,     0,     0,     0,     0,
      14,     0,    20,    15,    21,     0,     0,    16,     0,    22,
      23,     0,    17,    24,     0,     0,     0,    18,     0,     0,
       0,     0,   -37,    19,     0,     0,     0,     0,     0,     0,
      20,     0,    21,     0,   164,     0,   165,    22,    23,     0,
       0,    24,   166,   228,   229,   230,   231,   232,   233,   165,
       0,   336,     0,     0,     0,   166,   228,   229,   230,   231,
     232,   233,     0,     0,     0,     0,     0,     0,   165,     0,
       0,   113,   234,   235,   166,   228,   229,   230,   231,   232,
     233,     0,     0,     0,     0,   234,   235,   165,     0,     0,
     113,     0,     0,   166,   228,   229,   230,   231,   232,   233,
       0,     0,     0,     0,   234,   235,   164,     0,   165,     0,
       0,   227,     0,     0,   166,   228,   229,   230,   231,   232,
     233,     0,     0,   234,   235,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   386,  -144,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   388,  -144,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
       0,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     391,  -144,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,     0,     0,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   448,  -144,   196,   197,   198,   199,   200,
     201,   202,   203,   204,     0,     0,     0,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   240,  -144,   197,   198,
     199,   200,   201,   202,   203,   204,     0,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   441,   198,   199,   200,
     201,   202,   203,   204,     0,     0,     0,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   373,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   376,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   405,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   458,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,  -144,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204
};

static const yytype_int16 yycheck[] =
{
      62,    68,    69,    62,    70,    72,    73,   108,    70,    90,
      91,    70,     3,     3,   108,   355,    79,   164,   165,     3,
       3,     3,   152,    21,     3,   102,     4,     3,    30,   108,
      19,   129,     3,   131,    44,     3,     3,     3,     8,    23,
     102,   104,    44,     0,     3,    29,   108,   140,   388,    38,
     117,   118,   129,    64,   131,    66,    26,    27,    68,   157,
     139,    45,   141,   142,    23,   166,    68,   129,     3,   131,
      29,   164,   165,    64,    64,    59,   223,   207,   140,   226,
     157,    64,    64,     3,    54,    64,    45,    65,    64,    62,
      60,    61,   239,   240,    64,   157,    64,    70,    50,    35,
      59,    53,   164,   165,    74,   206,    90,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,    66,   228,    99,   102,
     223,   104,   213,   226,   228,   265,   102,   103,   268,   109,
     113,   410,    70,   412,   291,    73,   239,   240,    88,   228,
     229,   230,   231,   232,   233,    64,   129,     8,   131,     3,
       3,   223,     3,    72,   226,   138,   228,    72,     3,     4,
       5,     6,     7,    71,     3,    26,    27,   239,   240,    23,
       3,    64,    66,    88,   157,    29,   333,    70,    72,     3,
       4,     5,     6,     7,    23,    97,    98,    99,   291,    66,
      29,    45,     3,    54,    88,    72,    71,    72,   270,    60,
      61,    68,    64,    64,    66,    59,    45,     3,    32,    68,
      72,    88,    71,    74,    70,   304,    68,    73,   307,   291,
      59,    66,     3,     4,     5,     6,     7,    23,    64,    70,
     333,    69,   389,    29,    70,   338,   308,    73,    30,   311,
      69,   224,    66,    79,    68,    71,    72,     3,   109,    45,
     339,    96,   341,    73,   326,   100,   328,   346,    98,    99,
      72,   333,   338,    59,   336,    71,   338,    68,   340,   338,
      71,   308,    96,   345,   311,    64,   100,    66,   102,   103,
      71,    70,   359,   355,    73,    66,   389,    26,    27,   326,
      69,   328,   217,   218,    54,    71,   385,    69,     3,   336,
      60,    61,   405,   340,    64,   377,   102,   103,   345,    95,
      96,    97,    98,    99,    74,    96,   388,   389,   407,   100,
      66,   102,   103,    65,     3,   414,   398,    65,    64,   432,
     402,    90,    67,   405,    70,    13,   439,    73,    70,    65,
     377,    19,     3,   432,    22,    64,    90,    72,    26,   109,
      65,    70,   441,    31,    73,   338,    72,     3,    36,   431,
     432,   398,    37,    64,    42,   402,   438,   439,     3,    67,
     442,    49,   444,    51,    96,    97,    98,    99,    56,    57,
      67,   453,    60,     3,     3,     4,     5,     6,     7,    60,
      61,    69,    64,    64,   431,   467,    66,    16,     3,     3,
     472,   438,    69,    74,    70,   442,     3,   444,    65,     3,
      68,    65,    67,     8,    66,    99,   453,    66,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
     467,    26,    27,    65,     3,   472,    67,    90,   109,    65,
      68,    70,     3,    67,    71,    70,    68,    66,    66,    68,
      66,    66,    16,    14,    15,    68,    17,    71,    66,    54,
      69,    71,    23,    24,    25,    60,    61,    28,    29,    64,
      71,    32,    71,    71,    34,    68,    67,    96,     3,    74,
      41,   100,    69,    69,    45,    69,    47,    94,    95,    96,
      97,    98,    99,     3,     4,     5,     6,     7,    59,    69,
      71,    62,    63,     3,    69,     3,    16,    68,    66,    62,
      69,    43,    69,    68,   109,    69,    14,    15,    68,    17,
       3,    66,    66,    23,    67,    23,    24,    25,    67,    29,
      28,    29,    69,    69,    32,     3,    69,    68,    67,    79,
      70,   102,   103,    41,     3,    45,    68,    45,   104,    47,
      50,    71,    52,    53,    71,     3,    66,    83,    68,    59,
      71,    59,    67,    69,    62,    63,    14,    15,    69,    17,
      68,     9,    69,    68,    54,    23,    24,    25,    69,    69,
      28,    29,    68,     7,    32,    69,    96,   228,   228,   439,
     100,   410,   441,    41,   412,   432,    -1,    45,    -1,    47,
      -1,   449,    -1,    -1,   102,   103,    -1,     3,    -1,    -1,
      -1,    59,    -1,    -1,    62,    63,    -1,    -1,    14,    15,
      68,    17,     0,    -1,    -1,    -1,    -1,    23,    24,    25,
      -1,    -1,    28,    29,    -1,    13,    32,    -1,    -1,     3,
      -1,    19,    -1,    -1,    22,    41,    -1,    -1,    26,    45,
      -1,    47,    -1,    31,   102,   103,    -1,    -1,    36,    23,
      -1,     0,    -1,    59,    42,    29,    62,    63,    -1,    -1,
      -1,    49,    -1,    51,    13,    -1,    -1,    -1,    56,    57,
      19,    45,    60,    22,    -1,    -1,    50,    26,    52,    53,
      -1,    -1,    31,    -1,    -1,    59,    13,    36,    -1,    -1,
      -1,    -1,    19,    42,    -1,    22,   102,   103,    -1,    26,
      49,    -1,    51,    -1,    31,    -1,    -1,    56,    57,    36,
      -1,    60,    -1,    -1,    13,    42,    -1,    -1,    -1,    -1,
      19,    -1,    49,    22,    51,    -1,    -1,    26,    -1,    56,
      57,    -1,    31,    60,    -1,    -1,    -1,    36,    -1,    -1,
      -1,    -1,    69,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    -1,    51,    -1,    64,    -1,    66,    56,    57,    -1,
      -1,    60,    72,    73,    74,    75,    76,    77,    78,    66,
      -1,    68,    -1,    -1,    -1,    72,    73,    74,    75,    76,
      77,    78,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,
      -1,    88,   102,   103,    72,    73,    74,    75,    76,    77,
      78,    -1,    -1,    -1,    -1,   102,   103,    66,    -1,    -1,
      88,    -1,    -1,    72,    73,    74,    75,    76,    77,    78,
      -1,    -1,    -1,    -1,   102,   103,    64,    -1,    66,    -1,
      -1,    67,    -1,    -1,    72,    73,    74,    75,    76,    77,
      78,    -1,    -1,   102,   103,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,    67,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,    67,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
      67,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,    -1,    -1,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,    67,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,    70,    91,    92,    93,
      94,    95,    96,    97,    98,    99,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,    70,    93,    94,    95,
      96,    97,    98,    99,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,    71,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,    71,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    21,   106,   107,     3,   110,     0,    35,   108,   109,
      71,    72,   110,    13,    19,    22,    26,    31,    36,    42,
      49,    51,    56,    57,    60,   111,   112,   113,   116,   108,
       3,    71,    72,   116,   116,   116,   116,   116,   116,   116,
     116,   116,   116,   116,   116,   111,   111,    50,    53,    99,
       3,     3,    71,    44,    68,    30,    44,    68,   114,     3,
     112,   113,   116,   118,   120,     3,   115,     3,   112,   113,
     116,   117,   120,    68,    68,   118,   118,     3,    23,    29,
      45,    52,    59,   119,   126,   135,   137,   162,    69,   118,
      70,    30,   117,   117,     3,   126,   134,   137,    69,   117,
     117,   118,    66,    72,    88,     3,     3,    64,    73,    71,
      72,   115,   115,    88,     3,    64,   133,    71,    71,    69,
      69,     3,   123,   124,   126,   135,     3,     3,   126,    66,
      64,    66,    65,     3,     4,     5,     6,     7,    16,    66,
      68,    96,   100,   130,   136,   160,   161,   162,   118,     3,
     126,    64,    70,    65,   117,   117,    67,    70,     3,    90,
     123,    65,   123,     3,    64,    66,    72,     3,   126,   138,
       3,   130,   162,     3,   102,   103,   125,   129,   130,   131,
     158,   159,   160,   161,   130,   130,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,    72,    72,    90,    65,     3,
      64,   133,     3,    37,   122,   123,     3,    67,    67,   125,
     125,     3,   161,    66,    88,    64,    66,    67,    73,    74,
      75,    76,    77,    78,   102,   103,     3,     3,    69,    70,
      70,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
       3,     3,   161,     3,   133,    70,    64,    65,    70,   115,
      68,   122,   122,    65,    67,   125,    90,   126,     4,    65,
     125,     3,   131,   136,   130,   130,   130,   130,   130,   125,
     125,    66,   133,    65,     3,   133,     3,    14,    15,    17,
      24,    25,    28,    32,    41,    47,    62,    63,   121,   126,
     127,   128,   129,   132,   134,   137,   139,   140,   141,   142,
     145,   146,   147,   155,   157,   162,    68,    71,    68,    71,
      67,    90,    65,    68,    67,   125,    68,    71,    66,    66,
      68,    66,    71,    16,   130,    68,    66,   130,   127,     3,
      69,   127,    71,    71,    71,    34,    71,   127,   127,    68,
     125,    67,   127,     3,   126,   129,   134,   137,   143,   130,
     127,   130,     3,    71,   127,   130,    71,    68,   128,    69,
      69,   117,    69,    69,     3,    71,    67,    69,    67,    66,
      69,    67,   127,    69,    79,   130,    68,    62,    68,   128,
     125,    43,    68,    69,     3,    71,    19,    38,   148,   149,
     150,   151,   152,   153,    66,   127,    67,    66,   127,    67,
       3,   129,   144,   162,   130,   154,    69,   149,   153,   151,
     153,    79,   104,   130,    69,     3,   156,    69,    68,    70,
      67,    70,    68,   127,    68,   129,   130,   157,    67,    83,
       3,   127,   144,    68,   154,   127,   127,    71,    71,    71,
      71,   156,    67,    69,   127,    69,    69,    68,    69,   127,
      69,    54,    68,   127,    69
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   105,   106,   107,   107,   108,   108,   109,   109,   110,
     110,   111,   111,   111,   111,   112,   112,   113,   113,   114,
     114,   114,   115,   115,   116,   116,   116,   116,   116,   116,
     116,   116,   116,   116,   116,   116,   116,   117,   117,   117,
     117,   117,   117,   118,   118,   118,   118,   118,   119,   119,
     120,   120,   120,   120,   121,   122,   122,   123,   123,   124,
     124,   125,   125,   125,   125,   125,   126,   126,   126,   126,
     126,   127,   127,   127,   128,   128,   128,   128,   128,   128,
     129,   129,   129,   129,   129,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   131,   131,   131,   131,   131,   131,
     131,   132,   132,   132,   132,   132,   132,   132,   132,   132,
     132,   132,   133,   133,   133,   133,   133,   133,   134,   134,
     135,   135,   135,   135,   135,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   137,   138,   138,   139,   140,   141,
     142,   143,   143,   143,   144,   144,   145,   145,   146,   146,
     147,   148,   148,   149,   149,   150,   150,   150,   150,   151,
     151,   152,   152,   153,   153,   154,   154,   155,   155,   156,
     156,   157,   158,   158,   159,   159,   160,   160,   161,   161,
     162,   162
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     0,     3,     0,     2,     3,     5,     1,
       3,     1,     1,     2,     2,     6,     8,     6,     7,     2,
       2,     4,     1,     3,     0,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     0,     4,     4,
       2,     2,     2,     0,     4,     2,     2,     2,     7,     7,
      10,    10,     9,     2,     4,     0,     2,     1,     3,     0,
       1,     0,     1,     1,     3,     3,     1,     1,     1,     1,
       1,     0,     2,     2,     2,     1,     2,     2,     1,     2,
       1,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     4,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       3,     3,     1,     3,     3,     5,     5,     3,     2,     5,
       2,     4,     4,     5,     1,     1,     5,     3,     7,     5,
       8,     1,     1,     5,     3,     4,     3,     7,     9,    11,
      10,     1,     1,     1,     1,     3,     7,     5,     5,     3,
       7,     1,     1,     1,     2,     4,     4,     5,     4,     1,
       2,     5,     3,     2,     1,     1,     3,    12,    16,     1,
       3,     6,     2,     2,     2,     2,     3,     3,     4,     6,
       3,     3
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
      
#line 1845 "JavaGrammar.tab.cc" /* yacc.c:1646  */
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
#line 536 "JavaGrammar.yy" /* yacc.c:1906  */


//Node* root;

int main ()
{
	//root = new Node(0, 0, 0, "k");
	//printf("%s\n", root->get_tree_string(0).data());
	yyparse();
//	root->print();
	return 0;
}

#include <stdio.h>
void yyerror (char const *s)
{
	std::cout << s << std::endl;
}
