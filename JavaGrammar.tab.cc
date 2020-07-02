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


#line 240 "JavaGrammar.tab.cc" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_JAVAGRAMMAR_TAB_HH_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 257 "JavaGrammar.tab.cc" /* yacc.c:358  */

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
#define YYLAST   1170

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  104
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  56
/* YYNRULES -- Number of rules.  */
#define YYNRULES  194
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  462

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   341

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
     103,     2
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   143,   143,   149,   150,   154,   155,   159,   160,   164,
     165,   169,   170,   171,   172,   188,   189,   193,   197,   201,
     202,   203,   207,   208,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   229,   230,   231,
     232,   233,   234,   238,   239,   240,   241,   242,   246,   247,
     251,   252,   253,   254,   258,   259,   263,   264,   268,   269,
     273,   274,   275,   276,   277,   281,   282,   283,   284,   285,
     289,   290,   294,   295,   296,   297,   298,   299,   303,   304,
     305,   306,   307,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   343,   344,   345,   346,   347,   348,   349,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   366,
     367,   368,   369,   370,   371,   375,   376,   380,   381,   382,
     383,   384,   388,   389,   390,   391,   392,   393,   394,   395,
     399,   403,   404,   408,   412,   416,   420,   424,   425,   426,
     430,   431,   435,   436,   440,   441,   446,   450,   451,   455,
     456,   460,   461,   462,   466,   467,   470,   471,   475,   476,
     480,   481,   486,   488,   492,   496,   497,   501,   502,   506,
     507,   511,   512,   516,   517
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
  "TOK_ADDADD", "TOK_LAMBDA", "$accept", "program", "packagedec",
  "importstatements", "importstatement", "packagename", "typedec",
  "interfacedec", "classdec", "extendsorimplements", "basicidentifier",
  "mod", "classbody", "interfacebody", "abstractmethod", "method",
  "throwsclause", "formalparameters", "formalparameter", "argument",
  "datatype", "block", "statement", "expressionstatement", "expression",
  "assignmentstatement", "controlflowstatement", "identifier",
  "declarationstatement", "declarator", "initializer",
  "initializationstatement", "datastructure", "whileloop", "dowhileloop",
  "forloop", "enhancedfor", "forinit", "forupdate", "ifstatement",
  "ifelsestatement", "switchstatement", "switchblock", "switchrules",
  "switchrule", "switchblockstates", "switchblockstate", "switchlabel",
  "case", "trycatchblock", "throwstate", "postdecrement", "predecrement",
  "instancemethodcall", "methodcall", "fieldreference", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   341,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340
};
# endif

#define YYPACT_NINF -344

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-344)))

#define YYTABLE_NINF -141

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-141)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     112,    48,   125,   130,  -344,   -53,  -344,    48,   693,   130,
    -344,   134,   174,   693,   693,   693,   693,   693,   693,   693,
     693,   693,   693,   693,   693,  -344,   593,   621,   190,  -344,
    -344,  -344,     3,  -344,  -344,  -344,  -344,  -344,  -344,  -344,
    -344,  -344,  -344,  -344,  -344,  -344,  -344,   150,   199,   110,
     -20,   142,  -344,   214,   643,   250,   252,   671,   227,   238,
     643,   643,   288,   189,   643,   202,  -344,   247,   671,   671,
     438,   198,   671,   671,   643,  -344,  -344,    97,  -344,  -344,
    -344,   296,  -344,  -344,    12,   237,   240,   243,  -344,  -344,
     250,   250,  -344,  -344,   232,    13,   256,   264,  -344,  -344,
     262,   278,   204,   347,   236,   291,    -2,   300,   519,   643,
     364,  -344,  -344,   236,   235,   306,  -344,   671,   671,  -344,
    -344,    53,   307,   303,    18,  -344,  -344,  -344,   285,   204,
     311,   204,   374,   118,  -344,  -344,  -344,  -344,   339,   153,
     348,   153,   153,   978,  -344,  -344,   309,   312,  -344,  -344,
     299,   321,    19,   386,  -344,  -344,   354,   204,   331,   393,
     333,  -344,   345,  -344,   348,   348,   409,   -45,   357,   352,
     -44,   738,   243,   683,   420,   422,   358,   359,   900,  -344,
    -344,  -344,  -344,   309,   263,  -344,   153,   153,   153,   153,
     153,   153,   153,   153,   153,   153,   153,   153,   153,   153,
     153,   153,   153,   153,   153,   424,   430,    20,   210,    31,
     373,  -344,   249,   250,   371,  -344,  -344,   354,   354,   378,
     379,   381,   309,   348,   213,    21,   348,  -344,   560,   153,
     153,   153,   153,   153,  -344,  -344,  -344,  -344,  -344,   348,
     348,   996,  1013,  1029,  1044,  1058,  1072,   752,   507,   717,
     782,   814,   445,   485,   116,    47,   263,     1,   346,  -344,
     388,   381,   309,   215,  -344,    19,   391,   454,    19,  -344,
     530,   255,   269,  -344,  -344,   392,  -344,   370,   396,   401,
     412,   330,  -344,  -344,   978,   978,   978,   978,   978,  -344,
    -344,   348,  -344,   406,   410,  -344,   696,   414,   416,   417,
     418,   421,   426,   471,   491,   431,   434,    26,   432,   530,
     435,  -344,   441,   446,  -344,  -344,  -344,  -344,   467,  -344,
    -344,  -344,   449,   312,   530,  -344,   530,  -344,  -344,  -344,
    -344,   348,  -344,   436,  -344,    27,   153,   530,   153,  -344,
     517,   457,   530,   153,   260,  -344,  -344,  -344,  -344,  -344,
     407,  -344,   460,   461,   463,  -344,    28,  -344,  -344,  -344,
     462,   771,   478,   804,   487,  -344,   492,   837,   530,  -344,
    -344,  -344,  -344,   104,   153,   490,   499,   448,   348,   525,
     502,   504,   567,   959,    35,   508,   530,  -344,   521,   509,
     530,  -344,   522,    34,  -344,   153,   539,  -344,    35,  -344,
      35,   -50,   153,   540,  -344,   411,   541,   518,   715,   542,
     544,   312,   930,  -344,  -344,  -344,   510,  -344,   538,   489,
      30,   870,  -344,   533,    19,   551,  -344,   530,    34,   555,
     153,   530,  -344,   530,   553,   556,   558,   236,   563,   565,
    -344,   530,  -344,   568,   569,  -344,  -344,  -344,   549,   530,
    -344,   571,  -344,  -344,    19,   573,  -344,   591,   579,   530,
     580,  -344
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
       0,     0,    24,    24,    24,    47,    46,    68,    66,    69,
      65,     0,    67,    53,     0,     0,     0,   141,    15,    45,
       0,     0,    42,    41,    68,     0,     0,     0,    17,    40,
       0,     0,    58,     0,     0,     0,   137,     0,     0,    24,
       0,    23,    21,     0,   129,     0,   135,    24,    24,    18,
      16,    68,     0,    56,     0,    59,   193,    68,     0,    58,
       0,    58,     0,    88,    84,    85,    87,    86,     0,     0,
      60,     0,     0,   142,   150,   148,   147,    89,    44,   194,
       0,     0,     0,     0,    38,    39,    54,    58,   137,     0,
       0,   139,     0,   138,    60,    60,     0,    68,     0,     0,
      88,     0,    89,    88,     0,     0,     0,    62,    61,    82,
      80,    81,    78,    79,    91,    92,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   130,   129,
       0,   134,   131,     0,     0,    57,   140,    54,    54,     0,
       0,   193,   190,    60,     0,     0,    60,    83,     0,     0,
       0,     0,     0,     0,   186,   185,   188,   187,   144,    60,
      60,   105,   104,   106,   107,   108,    98,    99,   101,   103,
     100,   102,   109,   110,   111,    93,    94,    95,    96,    97,
       0,   194,   189,   129,   136,     0,     0,     0,     0,    55,
      70,     0,     0,    90,   191,     0,   152,     0,     0,     0,
       0,    88,   118,   117,   112,   113,   114,   115,   116,    64,
      63,    60,   132,   130,   131,   133,    68,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    70,
       0,    73,     0,     0,   119,   120,   121,   122,   123,   124,
     125,    76,     0,   141,    70,    49,    70,    48,   146,   151,
     143,    60,   149,     0,   127,     0,     0,    70,     0,   126,
       0,     0,    70,     0,   129,    52,    71,    72,    74,    75,
       0,    77,     0,     0,     0,   192,     0,   159,   158,   157,
       0,     0,     0,     0,     0,   128,     0,     0,    70,   165,
      51,    50,   145,   129,     0,     0,     0,     0,    60,     0,
       0,     0,     0,     0,     0,     0,    70,   163,     0,     0,
      70,   164,     0,     0,   179,     0,     0,   167,   169,   168,
     174,     0,     0,     0,   184,     0,     0,     0,     0,   160,
       0,     0,   180,   178,   166,   170,     0,   175,     0,    70,
       0,     0,   162,    68,     0,     0,   153,    70,     0,     0,
       0,    70,   177,    70,     0,     0,     0,     0,     0,     0,
     161,    70,   181,     0,     0,   171,   173,   154,     0,    70,
     156,     0,   176,   172,     0,     0,   155,   182,     0,    70,
       0,   183
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -344,  -344,  -344,   642,  -344,   647,   197,   161,   355,  -344,
     -86,   177,   102,   -25,  -344,   -16,    72,   -65,  -344,  -152,
     -61,   -41,  -343,   -85,   -82,   433,  -344,  -142,   -68,   103,
     439,   -59,  -344,  -344,  -344,  -344,  -344,  -344,   230,  -344,
    -344,  -344,  -344,   266,  -344,   268,  -344,  -170,   241,  -344,
     246,  -344,  -344,   -94,   -76,   -62
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     8,     9,     5,    25,    68,    69,    58,
      66,    70,    71,    63,    83,    72,   214,   122,   123,   176,
     307,   308,   309,   310,   178,   179,   311,   116,   312,    85,
     144,   313,   169,   314,   315,   316,   317,   360,   410,   318,
     319,   320,   396,   397,   398,   399,   400,   401,   413,   321,
     322,   180,   181,   182,   183,   172
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      87,    84,    96,    86,   111,   112,    30,   369,    87,    95,
     211,    97,   219,   220,   145,   106,   114,    10,    11,   164,
     223,   158,   209,   263,    53,   278,   143,   103,   419,   344,
     296,   373,   146,   408,   387,    75,    76,   408,    64,    89,
      87,   124,   224,   128,    64,    64,   147,    54,    64,   101,
      78,     4,   150,   420,   394,   177,    79,   171,    64,   184,
     185,   130,   303,   131,   160,   264,   162,    87,   124,    87,
     124,   275,    80,   395,   280,   107,   115,   168,   147,   177,
     177,   107,   210,   210,   148,   279,    82,   289,   290,   115,
     222,   115,   215,    64,   266,    87,   124,   433,   203,   204,
     152,    49,   147,   147,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   292,   103,     6,   295,   269,   174,   175,
     262,   174,   175,     1,   145,   174,   175,    30,   177,   333,
     104,   177,   201,   202,   203,   204,   143,   284,   285,   286,
     287,   288,   146,    50,   177,   177,   170,   134,   135,   136,
     137,   147,   102,   277,   147,     7,   147,   151,   103,    26,
      92,    93,    55,   152,    99,   100,  -137,   147,   147,   354,
      52,   164,   382,   165,   104,    28,    56,    26,    26,   166,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    51,    28,    28,   125,   177,   121,   323,    57,
     200,   201,   202,   203,   204,    60,   127,    59,   139,   154,
     155,    60,    60,    45,    46,    60,   388,    78,   416,   147,
     418,    62,   125,    79,   125,    60,    78,    62,    62,   127,
      47,    62,    79,    48,    31,    32,   177,   323,   141,    80,
     357,    62,   142,    65,   361,    67,   363,    88,    80,    78,
     125,   367,   323,    82,   323,    79,    98,   358,   346,   147,
      60,    90,    82,   323,   356,   323,   359,    91,   266,   265,
     323,    80,  -139,   352,   152,   353,    62,  -140,   323,   271,
     272,    77,   383,   177,    73,    82,   362,   102,   151,   105,
     131,   366,   276,   103,   152,    74,   323,  -137,   409,   108,
     109,    78,   264,   412,   110,   323,   147,    79,   268,   113,
     421,  -138,   324,   151,   323,   325,   117,   381,   323,   152,
     119,   411,  -137,    80,   118,   434,   326,   425,    47,   327,
      81,    48,   167,   409,   424,   403,   120,    82,   412,   406,
     126,   173,   134,   135,   136,   137,   129,   323,   411,   202,
     203,   204,    78,    27,   132,   323,   411,   149,    79,   323,
     153,   323,   157,   156,   159,   161,   448,   163,   432,   323,
     205,    27,    27,   206,    80,   208,   439,   323,   207,   212,
     443,   213,   444,   164,   130,   165,   216,   323,    82,   217,
     451,   166,   228,   229,   230,   231,   232,   233,   455,    61,
     296,   218,   221,   139,   423,    61,    61,   226,   460,    61,
     225,   297,   298,   236,   299,   237,   238,   260,   239,    61,
      78,   300,   301,   261,    78,   302,    79,   267,   270,   303,
      79,    94,   273,   141,   204,   274,   165,   142,   304,   174,
     175,   296,    80,   291,   305,   293,    80,   294,   328,   329,
     330,    78,   297,   298,    61,   299,    82,    79,   331,   306,
      82,    78,   300,   301,   368,   265,   302,    79,   332,   268,
     303,   335,   336,    80,   334,   337,   338,   340,    47,   304,
      81,    48,   296,    80,   341,   305,   339,    82,   342,   343,
     345,   350,   355,   297,   298,   347,   299,    82,   174,   175,
     306,   348,    78,   300,   301,   386,   349,   302,    79,   351,
     364,   303,   133,   134,   135,   136,   137,   365,   370,   371,
     304,   372,   374,   296,    80,   138,   305,   198,   199,   200,
     201,   202,   203,   204,   297,   298,   376,   299,    82,   174,
     175,   306,   378,    78,   300,   301,   431,   384,   302,    79,
     379,   385,   303,   281,   134,   135,   136,   137,   389,   390,
     392,   304,   391,   402,   405,    80,   138,   305,   199,   200,
     201,   202,   203,   204,   139,   427,   140,   404,   407,    82,
     174,   175,   306,   -11,  -141,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,    13,   414,   422,   426,
     429,   428,    14,   420,   141,    15,   419,   438,   142,    16,
     437,   -12,   441,   445,    17,   139,   446,   140,   447,    18,
     449,   174,   175,   450,    13,    19,   452,   453,   454,   456,
      14,   457,    20,    15,    21,   458,   459,    16,   461,    22,
      23,    29,    17,    24,    12,   141,    13,    18,   440,   142,
       0,   282,    14,    19,   415,    15,   435,   283,   417,    16,
      20,   442,    21,     0,    17,     0,     0,    22,    23,    18,
       0,    24,     0,     0,    13,    19,     0,     0,     0,     0,
      14,     0,    20,    15,    21,     0,     0,    16,     0,    22,
      23,     0,    17,    24,     0,     0,    13,    18,     0,     0,
       0,   -43,    14,    19,     0,    15,     0,     0,     0,    16,
      20,     0,    21,     0,    17,     0,     0,    22,    23,    18,
       0,    24,     0,     0,     0,    19,     0,     0,     0,   -37,
       0,     0,    20,     0,    21,     0,   164,     0,   165,    22,
      23,     0,     0,    24,   166,   228,   229,   230,   231,   232,
     233,   165,     0,     0,     0,     0,     0,   166,   228,   229,
     230,   231,   232,   233,     0,     0,     0,     0,     0,     0,
     165,     0,     0,   113,   234,   235,   166,   228,   229,   230,
     231,   232,   233,     0,     0,     0,     0,   234,   235,     0,
       0,     0,     0,     0,   227,  -141,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   234,   235,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   375,  -141,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     377,  -141,   196,   197,   198,   199,   200,   201,   202,   203,
     204,     0,     0,     0,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   380,  -141,   197,   198,   199,   200,   201,
     202,   203,   204,     0,     0,     0,     0,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   436,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   240,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   430,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   393,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,  -141,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204
};

static const yytype_int16 yycheck[] =
{
      62,    62,    70,    62,    90,    91,     3,   350,    70,    70,
     152,    70,   164,   165,   108,     3,     3,    70,    71,    63,
      65,     3,     3,     3,    44,     4,   108,    71,    78,     3,
       3,     3,   108,     3,   377,    60,    61,     3,    54,    64,
     102,   102,    87,   104,    60,    61,   108,    67,    64,    74,
      23,     3,   113,   103,    19,   140,    29,   139,    74,   141,
     142,    63,    32,    65,   129,   207,   131,   129,   129,   131,
     131,   223,    45,    38,   226,    63,    63,   138,   140,   164,
     165,    63,    63,    63,   109,    64,    59,   239,   240,    63,
     166,    63,   157,   109,    63,   157,   157,    67,    97,    98,
      69,    98,   164,   165,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   265,    71,     0,   268,   213,   101,   102,
     206,   101,   102,    21,   228,   101,   102,     3,   223,   291,
      87,   226,    95,    96,    97,    98,   228,   229,   230,   231,
     232,   233,   228,     3,   239,   240,     3,     4,     5,     6,
       7,   223,    65,   224,   226,    35,   228,    63,    71,     8,
      68,    69,    30,    69,    72,    73,    72,   239,   240,   331,
      70,    63,    78,    65,    87,     8,    44,    26,    27,    71,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     3,    26,    27,   102,   291,     3,   270,    67,
      94,    95,    96,    97,    98,    54,     3,     3,    65,   117,
     118,    60,    61,    26,    27,    64,   378,    23,   398,   291,
     400,    54,   129,    29,   131,    74,    23,    60,    61,     3,
      50,    64,    29,    53,    70,    71,   331,   309,    95,    45,
     335,    74,    99,     3,   336,     3,   338,    68,    45,    23,
     157,   343,   324,    59,   326,    29,    68,   335,   309,   331,
     109,    69,    59,   335,   335,   337,   335,    30,    63,    69,
     342,    45,    72,   324,    69,   326,   109,    72,   350,   217,
     218,     3,   374,   378,    67,    59,   337,    65,    63,     3,
      65,   342,    89,    71,    69,    67,   368,    72,   393,    72,
      70,    23,   454,   395,    71,   377,   378,    29,    69,    87,
     402,    72,    67,    63,   386,    70,    70,   368,   390,    69,
      68,   393,    72,    45,    70,   420,    67,   405,    50,    70,
      52,    53,     3,   428,   405,   386,    68,    59,   430,   390,
       3,     3,     4,     5,     6,     7,    65,   419,   420,    96,
      97,    98,    23,     8,    64,   427,   428,     3,    29,   431,
      64,   433,    69,    66,    89,    64,   437,     3,   419,   441,
      71,    26,    27,    71,    45,    64,   427,   449,    89,     3,
     431,    37,   433,    63,    63,    65,     3,   459,    59,    66,
     441,    71,    72,    73,    74,    75,    76,    77,   449,    54,
       3,    66,     3,    65,     3,    60,    61,    65,   459,    64,
      63,    14,    15,     3,    17,     3,    68,     3,    69,    74,
      23,    24,    25,     3,    23,    28,    29,    64,    67,    32,
      29,     3,    64,    95,    98,    66,    65,    99,    41,   101,
     102,     3,    45,    65,    47,    64,    45,     3,    66,    89,
      64,    23,    14,    15,   109,    17,    59,    29,    67,    62,
      59,    23,    24,    25,    67,    69,    28,    29,    66,    69,
      32,    65,    65,    45,    70,    67,    65,    16,    50,    41,
      52,    53,     3,    45,     3,    47,    70,    59,    67,    65,
      68,    34,    66,    14,    15,    70,    17,    59,   101,   102,
      62,    70,    23,    24,    25,    67,    70,    28,    29,    70,
       3,    32,     3,     4,     5,     6,     7,    70,    68,    68,
      41,    68,    70,     3,    45,    16,    47,    92,    93,    94,
      95,    96,    97,    98,    14,    15,    68,    17,    59,   101,
     102,    62,    65,    23,    24,    25,    67,    67,    28,    29,
      68,    62,    32,     3,     4,     5,     6,     7,    43,    67,
       3,    41,    68,    65,    65,    45,    16,    47,    93,    94,
      95,    96,    97,    98,    65,    67,    67,    66,    66,    59,
     101,   102,    62,     0,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    13,    68,    68,    68,
      66,    69,    19,   103,    95,    22,    78,    66,    99,    26,
      87,     0,    67,    70,    31,    65,    70,    67,    70,    36,
      67,   101,   102,    68,    13,    42,    68,    68,    89,    68,
      19,    68,    49,    22,    51,    54,    67,    26,    68,    56,
      57,     9,    31,    60,     7,    95,    13,    36,   428,    99,
      -1,   228,    19,    42,   398,    22,   420,   228,   400,    26,
      49,   430,    51,    -1,    31,    -1,    -1,    56,    57,    36,
      -1,    60,    -1,    -1,    13,    42,    -1,    -1,    -1,    -1,
      19,    -1,    49,    22,    51,    -1,    -1,    26,    -1,    56,
      57,    -1,    31,    60,    -1,    -1,    13,    36,    -1,    -1,
      -1,    68,    19,    42,    -1,    22,    -1,    -1,    -1,    26,
      49,    -1,    51,    -1,    31,    -1,    -1,    56,    57,    36,
      -1,    60,    -1,    -1,    -1,    42,    -1,    -1,    -1,    68,
      -1,    -1,    49,    -1,    51,    -1,    63,    -1,    65,    56,
      57,    -1,    -1,    60,    71,    72,    73,    74,    75,    76,
      77,    65,    -1,    -1,    -1,    -1,    -1,    71,    72,    73,
      74,    75,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    -1,    -1,    87,   101,   102,    71,    72,    73,    74,
      75,    76,    77,    -1,    -1,    -1,    -1,   101,   102,    -1,
      -1,    -1,    -1,    -1,    66,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,   101,   102,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    66,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      66,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    -1,    -1,    -1,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    66,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    -1,    -1,    -1,    -1,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    21,   105,   106,     3,   109,     0,    35,   107,   108,
      70,    71,   109,    13,    19,    22,    26,    31,    36,    42,
      49,    51,    56,    57,    60,   110,   111,   112,   115,   107,
       3,    70,    71,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   110,   110,    50,    53,    98,
       3,     3,    70,    44,    67,    30,    44,    67,   113,     3,
     111,   112,   115,   117,   119,     3,   114,     3,   111,   112,
     115,   116,   119,    67,    67,   117,   117,     3,    23,    29,
      45,    52,    59,   118,   124,   133,   135,   159,    68,   117,
      69,    30,   116,   116,     3,   124,   132,   135,    68,   116,
     116,   117,    65,    71,    87,     3,     3,    63,    72,    70,
      71,   114,   114,    87,     3,    63,   131,    70,    70,    68,
      68,     3,   121,   122,   124,   133,     3,     3,   124,    65,
      63,    65,    64,     3,     4,     5,     6,     7,    16,    65,
      67,    95,    99,   128,   134,   157,   158,   159,   117,     3,
     124,    63,    69,    64,   116,   116,    66,    69,     3,    89,
     121,    64,   121,     3,    63,    65,    71,     3,   124,   136,
       3,   128,   159,     3,   101,   102,   123,   127,   128,   129,
     155,   156,   157,   158,   128,   128,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    71,    71,    89,    64,     3,
      63,   131,     3,    37,   120,   121,     3,    66,    66,   123,
     123,     3,   158,    65,    87,    63,    65,    66,    72,    73,
      74,    75,    76,    77,   101,   102,     3,     3,    68,    69,
      69,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
       3,     3,   158,     3,   131,    69,    63,    64,    69,   114,
      67,   120,   120,    64,    66,   123,    89,   124,     4,    64,
     123,     3,   129,   134,   128,   128,   128,   128,   128,   123,
     123,    65,   131,    64,     3,   131,     3,    14,    15,    17,
      24,    25,    28,    32,    41,    47,    62,   124,   125,   126,
     127,   130,   132,   135,   137,   138,   139,   140,   143,   144,
     145,   153,   154,   159,    67,    70,    67,    70,    66,    89,
      64,    67,    66,   123,    70,    65,    65,    67,    65,    70,
      16,     3,    67,    65,     3,    68,   125,    70,    70,    70,
      34,    70,   125,   125,   123,    66,   124,   127,   132,   135,
     141,   128,   125,   128,     3,    70,   125,   128,    67,   126,
      68,    68,    68,     3,    70,    66,    68,    66,    65,    68,
      66,   125,    78,   128,    67,    62,    67,   126,   123,    43,
      67,    68,     3,    70,    19,    38,   146,   147,   148,   149,
     150,   151,    65,   125,    66,    65,   125,    66,     3,   127,
     142,   159,   128,   152,    68,   147,   151,   149,   151,    78,
     103,   128,    68,     3,   124,   132,    68,    67,    69,    66,
      69,    67,   125,    67,   127,   154,    66,    87,    66,   125,
     142,    67,   152,   125,   125,    70,    70,    70,   124,    67,
      68,   125,    68,    68,    89,   125,    68,    68,    54,    67,
     125,    68
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   104,   105,   106,   106,   107,   107,   108,   108,   109,
     109,   110,   110,   110,   110,   111,   111,   112,   112,   113,
     113,   113,   114,   114,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   116,   116,   116,
     116,   116,   116,   117,   117,   117,   117,   117,   118,   118,
     119,   119,   119,   119,   120,   120,   121,   121,   122,   122,
     123,   123,   123,   123,   123,   124,   124,   124,   124,   124,
     125,   125,   126,   126,   126,   126,   126,   126,   127,   127,
     127,   127,   127,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   129,   129,   129,   129,   129,   129,   129,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   131,
     131,   131,   131,   131,   131,   132,   132,   133,   133,   133,
     133,   133,   134,   134,   134,   134,   134,   134,   134,   134,
     135,   136,   136,   137,   138,   139,   140,   141,   141,   141,
     142,   142,   143,   143,   144,   144,   145,   146,   146,   147,
     147,   148,   148,   148,   149,   149,   150,   150,   151,   151,
     152,   152,   153,   153,   154,   155,   155,   156,   156,   157,
     157,   158,   158,   159,   159
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     0,     3,     0,     2,     3,     5,     1,
       3,     1,     1,     2,     2,     6,     8,     6,     7,     2,
       2,     4,     1,     3,     0,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     0,     4,     4,
       2,     2,     2,     0,     4,     2,     2,     2,     7,     7,
      10,    10,     9,     2,     0,     2,     1,     3,     0,     1,
       0,     1,     1,     3,     3,     1,     1,     1,     1,     1,
       0,     2,     2,     1,     2,     2,     1,     2,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       4,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     3,     1,
       3,     3,     5,     5,     3,     2,     5,     2,     4,     4,
       5,     1,     1,     5,     3,     7,     5,     1,     1,     5,
       3,     4,     3,     7,     9,    11,    10,     1,     1,     1,
       1,     3,     7,     5,     5,     3,     7,     1,     1,     1,
       2,     4,     5,     4,     1,     2,     5,     3,     2,     1,
       1,     3,    11,    15,     6,     2,     2,     2,     2,     3,
       3,     4,     6,     3,     3
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
      
#line 1811 "JavaGrammar.tab.cc" /* yacc.c:1646  */
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
#line 520 "JavaGrammar.yy" /* yacc.c:1906  */


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
