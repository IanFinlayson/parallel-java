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
    TOK_ADDADD = 339
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 15 "JavaGrammar.yy" /* yacc.c:355  */

//wasn't sure what to call these
	int iVal;
	double dVal;
	char stVal[100];
	bool bVal;
	float fVal;
	long lVal;
	short shVal;
	char cVal;
	struct Node* node;


#line 239 "JavaGrammar.tab.cc" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_JAVAGRAMMAR_TAB_HH_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 256 "JavaGrammar.tab.cc" /* yacc.c:358  */

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
#define YYFINAL  27
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   693

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  103
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  130
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  358

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   340

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
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
       2
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   142,   142,   148,   152,   158,   165,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   185,
     186,   187,   188,   189,   193,   194,   195,   199,   200,   201,
     205,   206,   207,   208,   209,   213,   214,   215,   216,   220,
     221,   225,   226,   227,   228,   229,   233,   234,   235,   236,
     237,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     289,   290,   291,   292,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   312,   313,   318,   322,
     326,   330,   331,   335,   336,   340,   341,   345,   346,   350,
     352,   356,   357,   361,   362,   366,   367,   371,   372,   376,
     377
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
  "TOK_WHILE", "TOK_LBRACKET", "TOK_RBRACKET", "TOK_LPAREN", "TOK_RPAREN",
  "TOK_LBRACE", "TOK_RBRACE", "TOK_COMMA", "TOK_SEMI", "TOK_DOT",
  "TOK_ASSIGN", "TOK_MODASSIGN", "TOK_DIVASSIGN", "TOK_MULASSIGN",
  "TOK_ADDASSIGN", "TOK_SUBASSIGN", "TOK_COLON", "TOK_QUESTION", "TOK_OR",
  "TOK_AND", "TOK_BITOR", "TOK_BITAND", "TOK_BITXOR", "TOK_EQUAL",
  "TOK_NEQUAL", "TOK_LESS", "TOK_LEQUAL", "TOK_GREATER", "TOK_GEQUAL",
  "TOK_LSHIFT", "TOK_RSHIFT", "TOK_RSHIFTZ", "TOK_ADD", "TOK_SUB",
  "TOK_MOD", "TOK_DIV", "TOK_MUL", "TOK_BITNEG", "TOK_NEG", "TOK_SUBSUB",
  "TOK_ADDADD", "$accept", "program", "classdecs", "classdec",
  "nestedclassdec", "mod", "classbody", "method", "formalparameters",
  "argument", "datatype", "block", "statement", "expressionstatement",
  "expression", "assignmentstatement", "controlflowstatement",
  "declarationstatement", "initializationstatement", "datastructure",
  "whileloop", "dowhileloop", "forloop", "ifstatement", "ifelsestatement",
  "switchstatement", "switchbody", "trycatchblock", "postdecrement",
  "predecrement", "instancemethodcall", "methodcall", "fieldreference", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   340,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339
};
# endif

#define YYPACT_NINF -188

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-188)))

#define YYTABLE_NINF -20

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-20)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,    21,  -188,   298,   -28,  -188,  -188,  -188,  -188,
    -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,  -188,    30,
      31,   265,   265,   172,    45,   265,  -188,   -26,  -188,  -188,
      33,    70,  -188,     3,    17,    47,  -188,  -188,    55,    67,
      53,    54,    -1,    72,   265,   265,    57,    87,     5,    86,
    -188,    75,    55,   265,   108,    55,   180,   170,  -188,  -188,
      67,   109,   115,   124,    55,   186,   126,   134,   122,   137,
     136,  -188,  -188,  -188,   212,   489,  -188,   145,   150,   151,
     138,    78,   171,   231,  -188,   173,   176,  -188,    -2,   179,
     245,     7,   249,     2,   189,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   254,   260,
      43,   264,   313,   198,   205,   206,   210,   219,   220,   286,
     225,   228,   291,   292,     6,   229,    78,   232,  -188,  -188,
     235,   236,  -188,  -188,  -188,   270,  -188,  -188,  -188,  -188,
    -188,  -188,   145,  -188,  -188,   282,    78,    67,     7,    78,
     246,   300,   233,   240,   428,   247,   145,     7,    15,   251,
     250,   507,   536,   550,   563,   575,   586,   309,   595,   178,
     183,    49,   217,  -188,   253,    34,   145,    67,     7,  -188,
     256,   234,   234,   234,   234,   234,  -188,  -188,  -188,    93,
     234,    78,   234,  -188,   257,    78,   234,  -188,  -188,   -37,
    -188,  -188,  -188,  -188,  -188,   146,   316,   258,   267,   263,
     269,  -188,  -188,     7,     7,   262,  -188,   255,  -188,     7,
    -188,   272,   271,   174,   489,  -188,   145,   489,   489,   489,
     489,   489,   261,    16,   268,   331,   277,   356,  -188,   285,
     381,    78,  -188,   273,   297,  -188,    18,  -188,  -188,  -188,
    -188,  -188,  -188,   284,    19,  -188,    10,   293,   299,    67,
      48,   304,   234,   290,   307,   241,   336,   314,   312,     7,
     318,   324,  -188,   319,   325,     7,    20,   327,   305,   332,
     392,   449,   370,   344,    78,  -188,   345,    78,  -188,   347,
    -188,     7,  -188,     7,   357,   360,   363,  -188,   429,   122,
     151,   430,   234,    23,   234,   366,    55,   367,  -188,   371,
     372,  -188,  -188,     7,   173,    56,   365,   470,   377,  -188,
     406,  -188,   382,  -188,  -188,  -188,   388,   390,    78,    78,
     368,   391,  -188,    78,   370,   395,  -188,    78,   396,  -188,
    -188,   397,  -188,   405,   393,    78,   412,  -188
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     0,     2,     4,     0,     9,    13,    17,    18,
      16,    14,     8,    11,    10,    15,    12,     1,     3,     0,
       0,     7,     7,     0,     0,     7,    23,    38,    36,    35,
       0,     0,    37,     0,     0,     0,     5,    22,    27,     0,
       0,     0,    90,     0,     7,     7,    38,     0,     0,    28,
      38,     0,    27,     7,     0,    27,     0,     0,    20,    21,
       0,     0,    90,     0,    27,     0,     0,     0,    93,     0,
      54,    51,    52,    53,     0,    94,   104,   103,     0,    92,
       0,    39,     0,     0,    29,    91,     0,     6,     0,     0,
       0,    30,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    38,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    39,     0,    50,    42,
       0,     0,    81,    82,    83,    84,    85,    86,    45,    48,
      49,    46,    47,    93,    92,     0,    39,     0,    30,    39,
       0,    54,     0,    32,    31,   129,   126,    30,     0,     0,
      54,    68,    67,    61,    62,    64,    66,    63,    65,    56,
      57,    58,    59,    60,     0,     0,   125,     0,    30,    91,
       0,     0,     0,     0,     0,     0,   122,   121,    88,     0,
       0,    39,     0,    87,     0,    39,     0,   124,   123,    90,
      26,    40,    41,    43,    44,     0,     0,     0,     0,     0,
       0,    55,   127,    30,    30,     0,   107,     0,   102,    30,
     130,     0,     0,     0,    69,    80,    79,    70,    71,    72,
      73,    74,    38,     0,     0,     0,     0,     0,    89,     0,
       0,    39,   114,     0,     0,    25,     0,    98,    24,    34,
      33,   101,   106,     0,     0,    97,    38,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    30,
       0,     0,   128,     0,     0,    30,     0,     0,     0,     0,
       0,     0,     0,     0,    39,   112,     0,    39,   113,     0,
      96,    30,    95,    30,     0,     0,     0,    75,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   105,     0,
       0,    76,    78,    30,     0,     0,     0,     0,     0,   115,
       0,   111,     0,   108,   100,    99,     0,     0,    39,    39,
       0,     0,    77,    39,   117,     0,   109,    39,     0,   118,
     116,     0,   110,   119,     0,    39,     0,   120
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -188,  -188,   435,  -188,  -188,   606,   127,  -188,   167,   -73,
     -33,  -129,  -187,   -81,   -61,  -188,  -188,   -31,   -32,  -153,
    -188,  -188,  -188,  -188,  -188,  -188,   129,  -188,   163,  -188,
     -63,   -62,  -188
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    12,    13,    14,    32,    33,    34,    35,    57,   162,
     134,   135,   136,   137,   164,   138,   139,   140,   141,   104,
     142,   143,   144,   145,   146,   147,   313,   148,   149,   150,
     151,   152,    88
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      43,    45,    44,    86,    87,    85,    52,   211,    72,   209,
     161,    81,    82,    83,   157,    58,    61,    59,    60,   270,
     163,    27,   280,   283,   305,    29,    64,   217,   252,    58,
     220,    59,    58,    30,    59,    66,    50,    90,    38,    48,
     166,    58,   328,    59,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   186,    56,   187,
      39,    49,    64,   254,    65,   158,    53,   167,    73,    53,
      60,    66,   246,    51,    42,   285,   249,   163,    38,   271,
     268,   122,   281,   284,   306,   219,   163,    54,   295,   168,
      38,   329,   123,   124,   225,   125,   242,   168,    31,   101,
      39,    38,   126,   127,   226,   230,   128,   163,   132,   133,
     188,   289,    39,    46,    42,   232,    38,    55,    62,   129,
      66,    63,   278,    39,   218,   130,    42,   235,   236,   234,
     237,   238,   239,   240,   241,   227,    67,    42,    39,   245,
     131,   247,   163,   163,    70,   250,   116,   117,   163,   122,
     259,   260,    42,    71,   231,    74,   263,   196,   197,    36,
     123,   124,    47,   125,    75,   315,   243,   244,   317,    38,
     126,   127,    78,    89,   128,    37,    91,   266,    92,   132,
     133,    68,    69,    80,    81,    82,    83,   129,    93,    95,
      77,    39,    96,   130,    98,    38,    84,    38,   163,   100,
     267,   101,    97,    99,   163,    42,   299,   102,   131,   344,
     345,   291,   304,   251,   348,   103,   118,    39,   351,    39,
     163,   119,   163,   120,    40,    41,   356,   121,   319,    76,
     320,    42,    79,    42,   154,   153,   288,   170,    81,    82,
      83,    94,   163,   156,   122,   155,   159,   132,   133,   160,
     336,   327,   165,   330,   169,   123,   124,   184,   125,    80,
      81,    82,    83,   185,    38,   126,   127,   189,   198,   128,
     199,   200,   233,   114,   115,   116,   117,   201,     1,   115,
     116,   117,   129,    58,   202,   332,    39,     2,   130,   204,
     203,     3,   205,   206,   207,   208,     4,   210,   216,   222,
      42,     5,   212,   131,   215,   213,   214,     6,   294,   223,
     221,     1,   101,   100,     7,   117,     8,   228,   229,   253,
       2,     9,    10,     1,     3,    11,   255,   248,   261,     4,
     256,   257,     2,   -19,     5,   264,     3,   258,   272,   265,
       6,     4,   132,   133,   262,   274,     5,     7,   269,     8,
     282,    -7,     6,   276,     9,    10,   286,   292,    11,     7,
     168,     8,   279,   100,   287,   101,     9,    10,   290,   293,
      11,   102,   190,   191,   192,   193,   194,   195,   101,   296,
     298,   297,   300,   302,   102,   190,   191,   192,   193,   194,
     195,   301,   303,   307,   308,   310,   309,   273,   -20,   112,
      49,   196,   197,   113,   114,   115,   116,   117,   312,   314,
     316,   105,   106,   318,   196,   197,   107,   108,   109,   110,
     111,   112,   275,   321,   322,   113,   114,   115,   116,   117,
     323,   337,   324,   325,   331,   333,   105,   106,   346,   334,
     335,   107,   108,   109,   110,   111,   112,   277,   341,    28,
     113,   114,   115,   116,   117,   339,   342,   343,   347,   354,
     355,   105,   106,   350,   352,   353,   107,   108,   109,   110,
     111,   112,   340,   349,   326,   113,   114,   115,   116,   117,
     357,     0,     0,     0,     0,     0,   105,   106,     0,     0,
       0,   107,   108,   109,   110,   111,   112,   224,     0,     0,
     113,   114,   115,   116,   117,     0,     0,     0,   105,   106,
       0,     0,     0,   107,   108,   109,   110,   111,   112,   311,
       0,     0,   113,   114,   115,   116,   117,     0,     0,   105,
     106,     0,     0,     0,   107,   108,   109,   110,   111,   112,
       0,     0,     0,   113,   114,   115,   116,   117,   338,     0,
     105,   106,     0,     0,     0,   107,   108,   109,   110,   111,
     112,     0,     0,     0,   113,   114,   115,   116,   117,   105,
     106,     0,     0,     0,   107,   108,   109,   110,   111,   112,
       0,     0,     0,   113,   114,   115,   116,   117,   106,     0,
       0,     0,   107,   108,   109,   110,   111,   112,     0,     0,
       0,   113,   114,   115,   116,   117,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
      15,   107,   108,   109,   110,   111,   112,     0,     0,     0,
     113,   114,   115,   116,   117,   -20,   108,   109,   110,   111,
     112,     0,     0,     0,   113,   114,   115,   116,   117,   -20,
     109,   110,   111,   112,     0,     0,     0,   113,   114,   115,
     116,   117,   -20,   110,   111,   112,     0,     0,     0,   113,
     114,   115,   116,   117,   -20,   111,   112,     0,     0,     0,
     113,   114,   115,   116,   117,   -20,     0,     0,     0,   113,
     114,   115,   116,   117
};

static const yytype_int16 yycheck[] =
{
      33,    33,    33,    66,    66,    66,     3,   136,     3,     3,
       3,     4,     5,     6,    16,    48,    49,    48,     3,     3,
     101,     0,     4,     4,     4,    53,    63,   156,   215,    62,
     159,    62,    65,     3,    65,    72,     3,    70,    23,    65,
     102,    74,    19,    74,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   119,     3,    16,
      45,    87,    63,   216,    65,    67,    63,    65,    63,    63,
       3,    72,   201,     3,    59,    65,   205,   158,    23,    63,
     233,     3,    64,    64,    64,   158,   167,    70,   275,    87,
      23,    68,    14,    15,   167,    17,     3,    87,    67,    65,
      45,    23,    24,    25,    89,    71,    28,   188,   101,   102,
      67,    63,    45,    68,    59,   188,    23,    70,    65,    41,
      72,    67,   251,    45,   157,    47,    59,   190,   190,   190,
     191,   192,   193,   194,   195,   168,    64,    59,    45,   200,
      62,   202,   223,   224,    87,   206,    97,    98,   229,     3,
     223,   224,    59,    66,   187,    69,   229,   101,   102,    32,
      14,    15,    35,    17,    89,   294,   199,   199,   297,    23,
      24,    25,    64,     3,    28,     3,    67,     3,    63,   101,
     102,    54,    55,     3,     4,     5,     6,    41,    64,     3,
      63,    45,    66,    47,    72,    23,    16,    23,   279,    63,
     233,    65,    68,    66,   285,    59,   279,    71,    62,   338,
     339,   272,   285,    67,   343,     3,    71,    45,   347,    45,
     301,    71,   303,    72,    52,    53,   355,    89,   301,    62,
     303,    59,    65,    59,     3,    64,   269,     3,     4,     5,
       6,    74,   323,    67,     3,    72,    67,   101,   102,     4,
     323,   312,     3,   314,    65,    14,    15,     3,    17,     3,
       4,     5,     6,     3,    23,    24,    25,     3,    70,    28,
      65,    65,    16,    95,    96,    97,    98,    67,    13,    96,
      97,    98,    41,   316,    65,   316,    45,    22,    47,     3,
      70,    26,    67,    65,     3,     3,    31,    68,    16,    66,
      59,    36,    70,    62,    34,    70,    70,    42,    67,    69,
      64,    13,    65,    63,    49,    98,    51,    66,    65,     3,
      22,    56,    57,    13,    26,    60,    68,    70,    66,    31,
      63,    68,    22,    68,    36,    63,    26,    68,    70,    68,
      42,    31,   101,   102,    89,    68,    36,    49,    87,    51,
      66,    53,    42,    68,    56,    57,    63,    67,    60,    49,
      87,    51,    65,    63,    65,    65,    56,    57,    64,    62,
      60,    71,    72,    73,    74,    75,    76,    77,    65,    43,
      68,    67,    64,    64,    71,    72,    73,    74,    75,    76,
      77,    67,    67,    66,    89,     3,    64,    66,    89,    90,
      87,   101,   102,    94,    95,    96,    97,    98,    38,    65,
      65,    80,    81,    66,   101,   102,    85,    86,    87,    88,
      89,    90,    66,    66,    64,    94,    95,    96,    97,    98,
      67,    66,     3,     3,    68,    68,    80,    81,    70,    68,
      68,    85,    86,    87,    88,    89,    90,    66,    66,    14,
      94,    95,    96,    97,    98,    78,    68,    67,    67,    54,
      67,    80,    81,    68,    68,    68,    85,    86,    87,    88,
      89,    90,    66,   344,   311,    94,    95,    96,    97,    98,
      68,    -1,    -1,    -1,    -1,    -1,    80,    81,    -1,    -1,
      -1,    85,    86,    87,    88,    89,    90,    69,    -1,    -1,
      94,    95,    96,    97,    98,    -1,    -1,    -1,    80,    81,
      -1,    -1,    -1,    85,    86,    87,    88,    89,    90,    70,
      -1,    -1,    94,    95,    96,    97,    98,    -1,    -1,    80,
      81,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
      -1,    -1,    -1,    94,    95,    96,    97,    98,    78,    -1,
      80,    81,    -1,    -1,    -1,    85,    86,    87,    88,    89,
      90,    -1,    -1,    -1,    94,    95,    96,    97,    98,    80,
      81,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
      -1,    -1,    -1,    94,    95,    96,    97,    98,    81,    -1,
      -1,    -1,    85,    86,    87,    88,    89,    90,    -1,    -1,
      -1,    94,    95,    96,    97,    98,     0,     1,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    -1,    -1,
      14,    85,    86,    87,    88,    89,    90,    -1,    -1,    -1,
      94,    95,    96,    97,    98,    85,    86,    87,    88,    89,
      90,    -1,    -1,    -1,    94,    95,    96,    97,    98,    86,
      87,    88,    89,    90,    -1,    -1,    -1,    94,    95,    96,
      97,    98,    87,    88,    89,    90,    -1,    -1,    -1,    94,
      95,    96,    97,    98,    88,    89,    90,    -1,    -1,    -1,
      94,    95,    96,    97,    98,    90,    -1,    -1,    -1,    94,
      95,    96,    97,    98
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    13,    22,    26,    31,    36,    42,    49,    51,    56,
      57,    60,   104,   105,   106,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   108,     0,   105,    53,
       3,    67,   107,   108,   109,   110,   109,     3,    23,    45,
      52,    53,    59,   113,   120,   121,    68,   109,    65,    87,
       3,     3,     3,    63,    70,    70,     3,   111,   113,   120,
       3,   113,    65,    67,    63,    65,    72,    64,   109,   109,
      87,    66,     3,    63,    69,    89,   111,   109,    64,   111,
       3,     4,     5,     6,    16,   117,   133,   134,   135,     3,
     113,    67,    63,    64,   111,     3,    66,    68,    72,    66,
      63,    65,    71,     3,   122,    80,    81,    85,    86,    87,
      88,    89,    90,    94,    95,    96,    97,    98,    71,    71,
      72,    89,     3,    14,    15,    17,    24,    25,    28,    41,
      47,    62,   101,   102,   113,   114,   115,   116,   118,   119,
     120,   121,   123,   124,   125,   126,   127,   128,   130,   131,
     132,   133,   134,    64,     3,    72,    67,    16,    67,    67,
       4,     3,   112,   116,   117,     3,   134,    65,    87,    65,
       3,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,     3,     3,   134,    16,    67,     3,
      72,    73,    74,    75,    76,    77,   101,   102,    70,    65,
      65,    67,    65,    70,     3,    67,    65,     3,     3,     3,
      68,   114,    70,    70,    70,    34,    16,   114,   113,   112,
     114,    64,    66,    69,    69,   112,    89,   113,    66,    65,
      71,   113,   112,    16,   117,   133,   134,   117,   117,   117,
     117,   117,     3,   113,   121,   117,   114,   117,    70,   114,
     117,    67,   115,     3,   122,    68,    63,    68,    68,   112,
     112,    66,    89,   112,    63,    68,     3,   113,   122,    87,
       3,    63,    70,    66,    68,    66,    68,    66,   114,    65,
       4,    64,    66,     4,    64,    65,    63,    65,   113,    63,
      64,   117,    67,    62,    67,   115,    43,    67,    68,   112,
      64,    67,    64,    67,   112,     4,    64,    66,    89,    64,
       3,    70,    38,   129,    65,   114,    65,   114,    66,   112,
     112,    66,    64,    67,     3,     3,   131,   117,    19,    68,
     117,    68,   120,    68,    68,    68,   112,    66,    78,    78,
      66,    66,    68,    67,   114,   114,    70,    67,   114,   129,
      68,   114,    68,    68,    54,    67,   114,    68
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   103,   104,   105,   105,   106,   107,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   108,   109,
     109,   109,   109,   109,   110,   110,   110,   111,   111,   111,
     112,   112,   112,   112,   112,   113,   113,   113,   113,   114,
     114,   115,   115,   115,   115,   115,   116,   116,   116,   116,
     116,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   119,   119,   119,   119,   119,   119,   119,   119,   119,
     120,   120,   120,   120,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   122,   122,   123,   124,
     125,   126,   126,   127,   127,   128,   128,   129,   129,   130,
     130,   131,   131,   132,   132,   133,   133,   134,   134,   135,
     135
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     6,     6,     0,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     0,
       4,     4,     2,     2,     9,     9,     8,     0,     1,     3,
       0,     1,     1,     3,     3,     1,     1,     1,     1,     0,
       2,     2,     1,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     6,     7,     9,     7,     3,
       3,     1,     1,     1,     1,     1,     1,     2,     2,     3,
       2,     5,     4,     4,     4,    10,    10,     8,     8,    12,
      12,     8,     7,     4,     4,    11,     4,     3,     7,     9,
      11,     7,     5,     5,     3,     7,    10,     4,     5,    11,
      15,     2,     2,     2,     2,     3,     3,     4,     6,     3,
       4
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
#line 142 "JavaGrammar.yy" /* yacc.c:1646  */
    {
	root = (yyvsp[0].node);
}
#line 1657 "JavaGrammar.tab.cc" /* yacc.c:1646  */
    break;

  case 3:
#line 148 "JavaGrammar.yy" /* yacc.c:1646  */
    {
	(yyvsp[-1].node)->attach_child(*(yyvsp[0].node));
	(yyval.node) = (yyvsp[-1].node);
}
#line 1666 "JavaGrammar.tab.cc" /* yacc.c:1646  */
    break;

  case 4:
#line 152 "JavaGrammar.yy" /* yacc.c:1646  */
    {
	(yyval.node) = (yyvsp[0].node);
}
#line 1674 "JavaGrammar.tab.cc" /* yacc.c:1646  */
    break;


#line 1678 "JavaGrammar.tab.cc" /* yacc.c:1646  */
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
#line 380 "JavaGrammar.yy" /* yacc.c:1906  */


//Node* root;

int main ()
{
	//root = new Node(0, 0, 0, "k");
	//printf("%s\n", root->get_tree_string(0).data());
	yyparse();
	root->print();
	return 0;
}

#include <stdio.h>
void yyerror (char const *s)
{
	std::cout << s << std::endl;
}
