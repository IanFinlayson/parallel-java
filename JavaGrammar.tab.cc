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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   863

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  103
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  166
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  424

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
       0,   143,   143,   149,   150,   154,   155,   159,   160,   164,
     165,   169,   170,   171,   172,   188,   189,   193,   197,   201,
     202,   203,   207,   208,   212,   213,   214,   215,   216,   217,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   251,   252,   253,   254,   255,   256,   260,
     261,   262,   263,   264,   276,   277,   281,   282,   283,   284,
     289,   290,   294,   295,   296,   297,   298,   302,   303,   304,
     305,   306,   310,   311,   312,   313,   314,   318,   319,   323,
     324,   325,   326,   327,   331,   332,   333,   334,   335,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     389,   390,   391,   395,   396,   401,   402,   403,   404,   405,
     406,   407,   412,   413,   418,   422,   426,   430,   431,   435,
     436,   440,   441,   445,   446,   450,   452,   456,   457,   461,
     462,   466,   467,   471,   472,   476,   477
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
  "TOK_ADDADD", "$accept", "program", "packagedec", "importstatements",
  "importstatement", "packagename", "typedec", "interfacedec", "classdec",
  "extendsorimplements", "interfaceidentifier", "identifier", "mod",
  "classbody", "interfacebody", "abstractmethod", "method",
  "formalparameters", "formalparameter", "argument", "datatype", "block",
  "statement", "expressionstatement", "expression", "assignmentstatement",
  "controlflowstatement", "initializer", "declarationstatement",
  "initializationstatement", "datastructure", "whileloop", "dowhileloop",
  "forloop", "ifstatement", "ifelsestatement", "switchstatement",
  "switchbody", "trycatchblock", "postdecrement", "predecrement",
  "instancemethodcall", "methodcall", "fieldreference", YY_NULLPTR
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

#define YYPACT_NINF -242

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-242)))

#define YYTABLE_NINF -50

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-50)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -1,    19,    40,    22,  -242,    64,  -242,    19,   490,    22,
    -242,    60,   139,   490,   490,   490,   490,   490,   490,   490,
     490,   490,   490,   490,   490,  -242,   384,   412,   -41,  -242,
    -242,  -242,     2,  -242,  -242,  -242,  -242,  -242,  -242,  -242,
    -242,  -242,  -242,  -242,  -242,  -242,  -242,    62,    91,    28,
     -19,   128,  -242,   117,   440,   141,   166,   462,   104,   113,
     440,   440,   296,   119,   440,   116,  -242,   167,   462,   462,
     333,   146,   462,   462,   440,  -242,  -242,   -28,  -242,  -242,
    -242,   221,  -242,  -242,    15,   161,  -242,  -242,   141,   141,
    -242,  -242,    37,    30,   163,   165,  -242,  -242,   175,   198,
     160,   213,   183,   -42,   222,   440,  -242,  -242,   213,   157,
     225,  -242,   462,   462,  -242,  -242,   224,   231,   240,    32,
    -242,   211,   160,   250,   160,    10,   313,  -242,   235,   267,
      33,   317,  -242,  -242,   213,   266,   160,   277,   280,   344,
     297,   310,   323,   131,  -242,  -242,  -242,  -242,   387,   143,
     694,  -242,   322,   325,   330,    44,    -5,    92,   341,  -242,
      87,   320,    98,  -242,   347,   413,   346,   134,    -6,   185,
     126,   126,   416,   356,   359,   511,   143,   143,   143,   143,
     143,   143,   143,   143,   143,   143,   143,   143,   143,   420,
     425,    -6,    56,  -242,    33,   365,   433,    33,   434,   493,
     372,   380,   382,   383,   386,   379,   449,   388,   391,   454,
     461,    46,   397,    98,   400,  -242,  -242,   403,   404,  -242,
    -242,  -242,   443,  -242,  -242,  -242,  -242,  -242,  -242,   322,
    -242,  -242,   451,    98,  -242,   213,   126,  -242,    98,  -242,
     480,   414,   410,   633,   417,   415,   322,   126,  -242,   712,
     726,   740,   753,   765,   439,   173,   489,   256,   209,   177,
     389,  -242,   421,   415,   322,  -242,  -242,   423,   426,  -242,
    -242,    38,   143,   143,   143,   143,   143,  -242,  -242,  -242,
     273,   143,    98,   143,  -242,   424,    98,   143,  -242,  -242,
     210,  -242,  -242,  -242,  -242,  -242,   236,   482,   422,   436,
     437,   438,  -242,   126,   126,  -242,   435,   126,   305,   694,
    -242,   322,   694,   694,   694,   694,   694,   427,    48,   432,
     536,   442,   561,  -242,   447,   586,    98,  -242,   430,   455,
    -242,    52,  -242,  -242,  -242,  -242,  -242,   441,    75,   460,
     459,    42,   143,   458,   469,   298,   495,   473,   474,    47,
     126,   484,   477,  -242,   126,    54,   483,   654,   521,   496,
      98,  -242,   497,    98,  -242,  -242,   471,   505,  -242,   126,
     506,   499,   507,  -242,   570,   143,     0,   143,   508,   401,
     510,  -242,  -242,   520,  -242,  -242,   126,   191,   509,   675,
     512,  -242,   611,  -242,   502,    33,   527,  -242,  -242,   535,
     537,    98,    98,   540,   213,   544,  -242,    98,   521,   545,
    -242,   523,    98,   546,  -242,  -242,    33,   547,  -242,   564,
     552,    98,   560,  -242
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     5,     9,     0,     1,     0,    30,     5,
       4,     0,     0,    30,    30,    30,    30,    30,    30,    30,
      30,    30,    30,    30,    30,     2,    30,    30,     0,     6,
      10,     7,     0,    32,    42,    36,    40,    41,    39,    37,
      31,    34,    33,    38,    35,    14,    13,     0,     0,     0,
       0,     0,     8,     0,    30,     0,     0,    30,     0,     0,
      30,    30,     0,     0,    30,    22,    20,    19,    30,    30,
       0,     0,    30,    30,    30,    53,    52,    75,    73,    76,
      72,     0,    74,    59,     0,     0,    15,    51,     0,     0,
      48,    47,    75,     0,     0,     0,    17,    46,     0,     0,
      62,     0,     0,     0,     0,    30,    23,    21,     0,    24,
       0,   133,    30,    30,    18,    16,    75,     0,    60,     0,
      75,     0,    62,     0,    62,     0,     0,    50,     0,     0,
       0,     0,    44,    45,     0,     0,    62,    63,     0,     0,
       0,     0,     0,    94,    90,    91,    93,    92,     0,     0,
     135,   140,   139,     0,     0,     0,    25,    24,     0,    29,
      26,     0,    77,    61,     0,     0,     0,     0,     0,     0,
      67,    67,     0,     0,    94,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    24,   134,     0,     0,     0,     0,     0,    75,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    77,     0,    88,    80,     0,     0,   121,
     122,   123,   124,   125,   126,    83,    86,    87,    84,    85,
      65,    64,     0,    77,    55,     0,    67,   137,    77,    54,
      94,     0,    69,    68,     0,   165,   162,    67,    89,   108,
     107,   101,   102,   104,   106,   103,   105,    96,    97,    98,
      99,   100,     0,   166,   161,   136,    27,    25,    26,    28,
      66,     0,     0,     0,     0,     0,     0,   158,   157,   128,
       0,     0,    77,     0,   127,     0,    77,     0,   160,   159,
      24,    58,    78,    79,    81,    82,     0,     0,     0,     0,
       0,     0,    95,    67,    67,   163,     0,    67,     0,   109,
     120,   119,   110,   111,   112,   113,   114,    75,     0,     0,
       0,     0,     0,   129,     0,     0,    77,   150,     0,     0,
      57,     0,   131,    56,    71,    70,   138,     0,    75,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      67,     0,     0,   164,    67,     0,     0,     0,     0,     0,
      77,   148,     0,    77,   149,   143,     0,     0,   130,    67,
       0,     0,     0,   115,     0,     0,     0,     0,     0,     0,
       0,   142,   141,     0,   116,   118,    67,     0,     0,     0,
       0,   151,     0,   147,    75,     0,     0,   144,   132,     0,
       0,    77,    77,     0,     0,     0,   117,    77,   153,     0,
     145,     0,    77,     0,   154,   152,     0,     0,   146,   155,
       0,    77,     0,   156
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -242,  -242,  -242,   620,  -242,   613,   303,   180,   230,  -242,
     270,  -128,   353,    69,   334,  -242,   327,   101,  -242,  -137,
     -62,  -209,  -241,  -139,   -97,  -242,  -242,   444,   -69,   -59,
     328,  -242,  -242,  -242,  -242,  -242,  -242,   229,  -242,   264,
    -242,  -118,  -119,  -242
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     8,     9,     5,    25,    68,    69,    58,
      66,   111,    70,    71,    63,    83,    72,   117,   118,   241,
     211,   212,   213,   214,   243,   215,   216,   237,   217,   218,
     329,   219,   220,   221,   222,   223,   224,   376,   225,   226,
     227,   228,   229,   153
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      84,    94,   159,    85,   292,    30,   152,   151,    93,    47,
     235,    95,    48,   143,   144,   145,   146,   147,   103,   390,
       1,   123,     4,   124,   298,    53,   148,   193,   150,   301,
     125,   242,   242,   109,   244,   137,   157,   100,   119,   121,
       6,   143,   144,   145,   146,   147,   128,   192,    54,   290,
     120,   341,   175,   246,   308,   327,   351,     7,   371,   101,
     119,   236,   119,    30,   194,    50,   266,   168,   391,   269,
      78,   264,   161,   321,   119,   149,    79,   324,   104,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,    80,   110,    51,   138,   158,   242,    52,   300,
      49,   199,   100,   149,   361,   123,    82,   158,   242,   110,
     306,   104,   200,   201,   125,   202,   352,   348,   372,   195,
      59,    78,   203,   204,   108,   130,   205,    79,   232,   240,
     144,   145,   146,   147,    10,    11,   365,    90,    91,   206,
     354,    97,    98,    80,    65,   207,   174,   144,   145,   146,
     147,   378,   311,   310,   380,   195,   197,    82,    55,   191,
     208,   130,   349,   116,   242,   242,   334,   335,   242,    67,
     337,    73,    56,   299,   309,   312,   313,   314,   315,   316,
      74,   132,   133,    78,   320,    88,   322,    86,    26,    79,
     325,   149,   408,   409,   170,    57,   171,    89,   413,   209,
     210,   233,   172,   417,   234,    80,    26,    26,   149,    31,
      32,   242,   422,   367,    96,   242,   120,   370,   318,    82,
     129,   319,   124,   140,   102,   142,   130,   209,   210,   125,
     242,   105,   383,   112,    60,   113,    78,   163,    27,   199,
      60,    60,    79,   114,    60,   357,   339,   242,   122,   399,
     200,   201,   238,   202,    60,   239,    27,    27,    80,    78,
     203,   204,   -50,   183,   205,    79,   115,   184,   185,   186,
     187,   188,    82,   129,   187,   188,   317,   206,   389,   130,
     392,    80,   125,   207,    61,    60,   126,   366,   193,   131,
      61,    61,   277,   278,    61,    82,    78,   135,   208,    77,
     139,   199,    79,   326,    61,   186,   187,   188,   338,   136,
     396,   134,   200,   201,   141,   202,   154,   395,    80,    78,
     160,    78,   203,   204,   155,    79,   205,    79,    78,    45,
      46,   156,    82,   162,    79,    61,    92,   209,   210,   206,
     164,    80,   411,    80,   165,   207,    47,   166,    81,    48,
      80,   185,   186,   187,   188,    82,    78,    82,   106,   107,
     208,    28,    79,   167,    82,   360,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    80,    28,
      28,    64,   168,    47,   -11,    81,    48,    64,    64,   169,
     173,    64,    82,   189,    75,    76,   190,    13,    87,   209,
     210,    64,   191,    14,   394,   196,    15,    62,    99,   198,
      16,   230,   -12,    62,    62,    17,   231,    62,   232,   245,
      18,   247,   170,   262,    78,    13,    19,    62,   263,   267,
      79,    14,    64,    20,    15,    21,   268,   270,    16,   127,
      22,    23,   279,    17,    24,   280,    80,   281,    18,   284,
     282,   283,   285,    13,    19,   286,   287,   288,    62,    14,
      82,    20,    15,    21,   289,   291,    16,   297,    22,    23,
     293,    17,    24,   294,   295,    13,    18,   296,   302,   303,
     171,    14,    19,   305,    15,   328,   307,   188,    16,    20,
     330,    21,   194,    17,   323,   197,    22,    23,    18,   331,
      24,   336,   342,    13,    19,   332,   333,   353,   -49,    14,
     344,    20,    15,    21,   101,   346,    16,   349,    22,    23,
     350,    17,    24,   355,   356,   358,    18,   -50,   182,   183,
     -43,   359,    19,   184,   185,   186,   187,   188,   362,    20,
     363,    21,   364,   170,   369,   171,    22,    23,   368,   373,
      24,   172,   271,   272,   273,   274,   275,   276,   171,   375,
     381,   377,   379,   385,   172,   271,   272,   273,   274,   275,
     276,   382,   384,   387,   386,   400,   393,   248,   397,   -50,
     108,   277,   278,   184,   185,   186,   187,   188,   398,   404,
     402,   176,   177,   405,   277,   278,   178,   179,   180,   181,
     182,   183,   343,   406,   407,   184,   185,   186,   187,   188,
     410,   412,   416,   415,   418,   419,   176,   177,   420,   421,
      12,   178,   179,   180,   181,   182,   183,   345,   423,    29,
     184,   185,   186,   187,   188,   265,   340,   414,   388,     0,
       0,   176,   177,     0,     0,     0,   178,   179,   180,   181,
     182,   183,   347,     0,     0,   184,   185,   186,   187,   188,
       0,     0,     0,     0,     0,     0,   176,   177,     0,     0,
       0,   178,   179,   180,   181,   182,   183,   403,     0,     0,
     184,   185,   186,   187,   188,     0,     0,     0,     0,     0,
       0,   176,   177,     0,     0,     0,   178,   179,   180,   181,
     182,   183,   304,     0,     0,   184,   185,   186,   187,   188,
       0,     0,     0,   176,   177,     0,     0,     0,   178,   179,
     180,   181,   182,   183,   374,     0,     0,   184,   185,   186,
     187,   188,     0,     0,   176,   177,     0,     0,     0,   178,
     179,   180,   181,   182,   183,     0,     0,     0,   184,   185,
     186,   187,   188,   401,     0,   176,   177,     0,     0,     0,
     178,   179,   180,   181,   182,   183,     0,     0,     0,   184,
     185,   186,   187,   188,   176,   177,     0,     0,     0,   178,
     179,   180,   181,   182,   183,     0,     0,     0,   184,   185,
     186,   187,   188,   177,     0,     0,     0,   178,   179,   180,
     181,   182,   183,     0,     0,     0,   184,   185,   186,   187,
     188,   178,   179,   180,   181,   182,   183,     0,     0,     0,
     184,   185,   186,   187,   188,   -50,   179,   180,   181,   182,
     183,     0,     0,     0,   184,   185,   186,   187,   188,   -50,
     180,   181,   182,   183,     0,     0,     0,   184,   185,   186,
     187,   188,   -50,   181,   182,   183,     0,     0,     0,   184,
     185,   186,   187,   188
};

static const yytype_int16 yycheck[] =
{
      62,    70,   130,    62,   213,     3,   125,   125,    70,    50,
      16,    70,    53,     3,     4,     5,     6,     7,     3,    19,
      21,    63,     3,    65,   233,    44,    16,   155,   125,   238,
      72,   170,   171,     3,   171,     3,     3,    65,   100,   101,
       0,     3,     4,     5,     6,     7,   108,     3,    67,     3,
       3,     3,   149,   172,    16,   296,     4,    35,     4,    87,
     122,    67,   124,     3,    69,     3,   194,    72,    68,   197,
      23,   190,   134,   282,   136,    65,    29,   286,    63,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,    45,    63,     3,    63,    63,   236,    70,   236,
      98,     3,    65,    65,   345,    63,    59,    63,   247,    63,
     247,    63,    14,    15,    72,    17,    64,   326,    64,    63,
       3,    23,    24,    25,    87,    69,    28,    29,    72,     3,
       4,     5,     6,     7,    70,    71,    89,    68,    69,    41,
      65,    72,    73,    45,     3,    47,     3,     4,     5,     6,
       7,   360,   271,   271,   363,    63,    69,    59,    30,    72,
      62,    69,    87,     3,   303,   304,   303,   304,   307,     3,
     307,    67,    44,   235,   271,   272,   273,   274,   275,   276,
      67,   112,   113,    23,   281,    69,   283,    68,     8,    29,
     287,    65,   401,   402,    63,    67,    65,    30,   407,   101,
     102,    67,    71,   412,    70,    45,    26,    27,    65,    70,
      71,   350,   421,   350,    68,   354,     3,   354,   280,    59,
      63,   280,    65,   122,     3,   124,    69,   101,   102,    72,
     369,    70,   369,    70,    54,    70,    23,   136,     8,     3,
      60,    61,    29,    68,    64,   342,   308,   386,    65,   386,
      14,    15,    67,    17,    74,    70,    26,    27,    45,    23,
      24,    25,    89,    90,    28,    29,    68,    94,    95,    96,
      97,    98,    59,    63,    97,    98,     3,    41,   375,    69,
     377,    45,    72,    47,    54,   105,    64,   349,   416,    64,
      60,    61,   101,   102,    64,    59,    23,    66,    62,     3,
      89,     3,    29,    67,    74,    96,    97,    98,     3,    69,
     379,    87,    14,    15,    64,    17,     3,   379,    45,    23,
       3,    23,    24,    25,    89,    29,    28,    29,    23,    26,
      27,    64,    59,    67,    29,   105,     3,   101,   102,    41,
      63,    45,   404,    45,    64,    47,    50,     3,    52,    53,
      45,    95,    96,    97,    98,    59,    23,    59,    88,    89,
      62,     8,    29,    66,    59,    67,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    45,    26,
      27,    54,    72,    50,     0,    52,    53,    60,    61,    66,
       3,    64,    59,    71,    60,    61,    71,    13,    64,   101,
     102,    74,    72,    19,     3,    64,    22,    54,    74,    89,
      26,    64,     0,    60,    61,    31,     3,    64,    72,     3,
      36,    65,    63,     3,    23,    13,    42,    74,     3,    64,
      29,    19,   105,    49,    22,    51,     3,     3,    26,   105,
      56,    57,    70,    31,    60,    65,    45,    65,    36,    70,
      67,    65,     3,    13,    42,    67,    65,     3,   105,    19,
      59,    49,    22,    51,     3,    68,    26,    16,    56,    57,
      70,    31,    60,    70,    70,    13,    36,    34,    64,    69,
      65,    19,    42,    66,    22,     3,    65,    98,    26,    49,
      68,    51,    69,    31,    70,    69,    56,    57,    36,    63,
      60,    66,    70,    13,    42,    68,    68,    66,    68,    19,
      68,    49,    22,    51,    87,    68,    26,    87,    56,    57,
      65,    31,    60,    63,    65,    67,    36,    88,    89,    90,
      68,    62,    42,    94,    95,    96,    97,    98,    43,    49,
      67,    51,    68,    63,    67,    65,    56,    57,    64,    66,
      60,    71,    72,    73,    74,    75,    76,    77,    65,    38,
      89,    65,    65,    64,    71,    72,    73,    74,    75,    76,
      77,    66,    66,     3,    67,    66,    68,    66,    68,    90,
      87,   101,   102,    94,    95,    96,    97,    98,    68,    87,
      78,    80,    81,    66,   101,   102,    85,    86,    87,    88,
      89,    90,    66,    68,    67,    94,    95,    96,    97,    98,
      70,    67,    89,    68,    68,    68,    80,    81,    54,    67,
       7,    85,    86,    87,    88,    89,    90,    66,    68,     9,
      94,    95,    96,    97,    98,   191,   308,   408,   374,    -1,
      -1,    80,    81,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,    66,    -1,    -1,    94,    95,    96,    97,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    -1,    -1,
      -1,    85,    86,    87,    88,    89,    90,    66,    -1,    -1,
      94,    95,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    81,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,    69,    -1,    -1,    94,    95,    96,    97,    98,
      -1,    -1,    -1,    80,    81,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,    70,    -1,    -1,    94,    95,    96,
      97,    98,    -1,    -1,    80,    81,    -1,    -1,    -1,    85,
      86,    87,    88,    89,    90,    -1,    -1,    -1,    94,    95,
      96,    97,    98,    78,    -1,    80,    81,    -1,    -1,    -1,
      85,    86,    87,    88,    89,    90,    -1,    -1,    -1,    94,
      95,    96,    97,    98,    80,    81,    -1,    -1,    -1,    85,
      86,    87,    88,    89,    90,    -1,    -1,    -1,    94,    95,
      96,    97,    98,    81,    -1,    -1,    -1,    85,    86,    87,
      88,    89,    90,    -1,    -1,    -1,    94,    95,    96,    97,
      98,    85,    86,    87,    88,    89,    90,    -1,    -1,    -1,
      94,    95,    96,    97,    98,    85,    86,    87,    88,    89,
      90,    -1,    -1,    -1,    94,    95,    96,    97,    98,    86,
      87,    88,    89,    90,    -1,    -1,    -1,    94,    95,    96,
      97,    98,    87,    88,    89,    90,    -1,    -1,    -1,    94,
      95,    96,    97,    98
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    21,   104,   105,     3,   108,     0,    35,   106,   107,
      70,    71,   108,    13,    19,    22,    26,    31,    36,    42,
      49,    51,    56,    57,    60,   109,   110,   111,   115,   106,
       3,    70,    71,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   109,   109,    50,    53,    98,
       3,     3,    70,    44,    67,    30,    44,    67,   112,     3,
     110,   111,   115,   117,   119,     3,   113,     3,   110,   111,
     115,   116,   119,    67,    67,   117,   117,     3,    23,    29,
      45,    52,    59,   118,   123,   132,    68,   117,    69,    30,
     116,   116,     3,   123,   131,   132,    68,   116,   116,   117,
      65,    87,     3,     3,    63,    70,   113,   113,    87,     3,
      63,   114,    70,    70,    68,    68,     3,   120,   121,   123,
       3,   123,    65,    63,    65,    72,    64,   117,   123,    63,
      69,    64,   116,   116,    87,    66,    69,     3,    63,    89,
     120,    64,   120,     3,     4,     5,     6,     7,    16,    65,
     127,   144,   145,   146,     3,    89,    64,     3,    63,   114,
       3,   123,    67,   120,    63,    64,     3,    66,    72,    66,
      63,    65,    71,     3,     3,   127,    80,    81,    85,    86,
      87,    88,    89,    90,    94,    95,    96,    97,    98,    71,
      71,    72,     3,   114,    69,    63,    64,    69,    89,     3,
      14,    15,    17,    24,    25,    28,    41,    47,    62,   101,
     102,   123,   124,   125,   126,   128,   129,   131,   132,   134,
     135,   136,   137,   138,   139,   141,   142,   143,   144,   145,
      64,     3,    72,    67,    70,    16,    67,   130,    67,    70,
       3,   122,   126,   127,   122,     3,   145,    65,    66,   127,
     127,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     127,   127,     3,     3,   145,   130,   114,    64,     3,   114,
       3,    72,    73,    74,    75,    76,    77,   101,   102,    70,
      65,    65,    67,    65,    70,     3,    67,    65,     3,     3,
       3,    68,   124,    70,    70,    70,    34,    16,   124,   123,
     122,   124,    64,    69,    69,    66,   122,    65,    16,   127,
     144,   145,   127,   127,   127,   127,   127,     3,   123,   132,
     127,   124,   127,    70,   124,   127,    67,   125,     3,   133,
      68,    63,    68,    68,   122,   122,    66,   122,     3,   123,
     133,     3,    70,    66,    68,    66,    68,    66,   124,    87,
      65,     4,    64,    66,    65,    63,    65,   127,    67,    62,
      67,   125,    43,    67,    68,    89,   123,   122,    64,    67,
     122,     4,    64,    66,    70,    38,   140,    65,   124,    65,
     124,    89,    66,   122,    66,    64,    67,     3,   142,   127,
      19,    68,   127,    68,     3,   123,   131,    68,    68,   122,
      66,    78,    78,    66,    87,    66,    68,    67,   124,   124,
      70,   123,    67,   124,   140,    68,    89,   124,    68,    68,
      54,    67,   124,    68
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   103,   104,   105,   105,   106,   106,   107,   107,   108,
     108,   109,   109,   109,   109,   110,   110,   111,   111,   112,
     112,   112,   113,   113,   114,   114,   114,   114,   114,   114,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   116,   116,   116,   116,   116,   116,   117,
     117,   117,   117,   117,   118,   118,   119,   119,   119,   119,
     120,   120,   121,   121,   121,   121,   121,   122,   122,   122,
     122,   122,   123,   123,   123,   123,   123,   124,   124,   125,
     125,   125,   125,   125,   126,   126,   126,   126,   126,   127,
     127,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   127,   127,   127,   127,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     130,   130,   130,   131,   131,   132,   132,   132,   132,   132,
     132,   132,   133,   133,   134,   135,   136,   137,   137,   138,
     138,   139,   139,   140,   140,   141,   141,   142,   142,   143,
     143,   144,   144,   145,   145,   146,   146
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     0,     3,     0,     2,     3,     5,     1,
       3,     1,     1,     2,     2,     6,     8,     6,     7,     2,
       2,     4,     1,     3,     1,     3,     3,     5,     5,     3,
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     0,     4,     4,     2,     2,     2,     0,
       4,     2,     2,     2,     6,     6,     9,     9,     8,     2,
       1,     3,     0,     2,     4,     4,     5,     0,     1,     1,
       3,     3,     1,     1,     1,     1,     1,     0,     2,     2,
       1,     2,     2,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     1,     1,     4,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     6,     7,     9,     7,     3,
       3,     1,     1,     1,     1,     1,     1,     2,     2,     3,
       5,     3,     7,     2,     5,     4,     6,     6,     8,     4,
       4,    11,     4,     3,     7,     9,    11,     7,     5,     5,
       3,     7,    10,     4,     5,    11,    15,     2,     2,     2,
       2,     3,     3,     4,     6,     3,     3
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
      
#line 1722 "JavaGrammar.tab.cc" /* yacc.c:1646  */
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
#line 480 "JavaGrammar.yy" /* yacc.c:1906  */


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
