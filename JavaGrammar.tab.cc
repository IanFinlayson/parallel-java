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
#define YYLAST   831

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  103
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  158
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  414

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
     202,   203,   208,   209,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   243,   244,   245,
     246,   247,   248,   252,   253,   254,   255,   256,   268,   269,
     273,   274,   275,   276,   281,   282,   283,   287,   288,   289,
     290,   291,   295,   296,   297,   298,   299,   303,   304,   308,
     309,   310,   311,   312,   316,   317,   318,   319,   320,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   372,   373,
     374,   375,   379,   380,   381,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   395,   396,   401,   405,   409,   413,
     414,   418,   419,   423,   424,   428,   429,   433,   435,   439,
     440,   444,   445,   449,   450,   454,   455,   459,   460
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
  "extendsorimplements", "implements", "mod", "classbody", "interfacebody",
  "abstractmethod", "method", "formalparameters", "argument", "datatype",
  "block", "statement", "expressionstatement", "expression",
  "assignmentstatement", "controlflowstatement", "declarationstatement",
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

#define YYPACT_NINF -273

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-273)))

#define YYTABLE_NINF -44

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-44)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -1,    53,    98,    23,  -273,   118,  -273,    53,   514,    23,
    -273,   117,   128,   514,   514,   514,   514,   514,   514,   514,
     514,   514,   514,   514,   514,  -273,   374,   402,   -32,  -273,
    -273,  -273,     3,  -273,  -273,  -273,  -273,  -273,  -273,  -273,
    -273,  -273,  -273,  -273,  -273,  -273,  -273,   124,   130,   -10,
     -16,    73,  -273,   135,   464,   143,   154,   486,    46,    64,
     464,   464,   228,    93,   464,   101,  -273,   155,   486,   486,
     416,   138,   486,   486,   464,  -273,  -273,   -40,  -273,  -273,
    -273,   211,  -273,  -273,     8,   147,  -273,  -273,   143,   143,
    -273,  -273,    49,    27,   150,   153,  -273,  -273,   160,   181,
     224,   426,   187,    58,   210,   464,  -273,  -273,   426,   112,
     218,   486,   486,  -273,  -273,   197,   220,    31,   198,  -273,
     200,   224,   231,   224,   229,   302,  -273,   223,   249,   312,
    -273,  -273,   426,   252,   257,   267,   224,   329,   271,   278,
     273,    -8,  -273,  -273,  -273,   350,   680,  -273,   283,   297,
     301,   373,   278,   301,   288,   293,   314,   382,  -273,   326,
     -17,    24,    84,   395,    10,   383,    57,   336,   206,   206,
     206,   206,   206,   206,   206,   206,   206,   206,   206,   206,
     206,   403,   405,    25,   326,   406,   504,   341,   347,   348,
     351,   349,   352,   417,   359,   362,   429,   432,    32,   368,
     293,   370,  -273,  -273,   371,   372,  -273,  -273,  -273,   409,
    -273,  -273,  -273,  -273,  -273,  -273,   283,  -273,  -273,   430,
     293,  -273,   426,    10,   293,  -273,   386,   270,   388,   387,
     619,   399,   283,    10,   103,   394,   389,   294,   694,   708,
     721,   733,   463,   500,   203,   232,   141,   158,   367,  -273,
     407,   399,   283,   426,    10,  -273,   320,   206,   206,   206,
     206,   206,  -273,  -273,  -273,   434,   206,   293,   206,  -273,
     400,   293,   206,  -273,  -273,   -53,  -273,  -273,  -273,  -273,
    -273,   201,   471,   408,   415,   412,   413,  -273,  -273,    10,
      10,   418,  -273,   393,  -273,    10,   424,   420,   444,   680,
    -273,   283,   680,   680,   680,   680,   680,   404,    33,   422,
     522,   428,   547,  -273,   433,   572,   293,  -273,   410,   437,
    -273,    38,  -273,  -273,  -273,  -273,  -273,  -273,   438,    40,
    -273,    60,   431,   442,    47,   206,   443,   436,   247,   466,
     447,   448,    10,   454,   452,  -273,   459,   458,    10,    45,
     445,   640,   488,   465,   293,  -273,   469,   293,  -273,   472,
    -273,    10,  -273,    10,   473,   467,   462,  -273,   538,   206,
      56,   206,   476,   224,   479,  -273,   480,   481,  -273,  -273,
      10,   157,   489,   661,   484,  -273,   597,  -273,   498,  -273,
    -273,  -273,   499,   501,   293,   293,   496,   505,  -273,   293,
     488,   515,  -273,   293,   516,  -273,  -273,   517,  -273,   519,
     520,   293,   518,  -273
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
       0,     0,    24,    24,    24,    47,    46,    65,    63,    66,
      62,     0,    64,    53,     0,     0,    15,    45,     0,     0,
      42,    41,    65,     0,     0,     0,    17,    40,     0,     0,
      54,     0,     0,     0,     0,    24,    23,    21,     0,   118,
       0,    24,    24,    18,    16,    65,     0,     0,    55,    65,
       0,    54,     0,    54,     0,     0,    44,     0,     0,     0,
      38,    39,     0,     0,   118,     0,    54,     0,     0,     0,
       0,    82,    79,    80,    81,     0,   122,   132,   131,     0,
       0,     0,   121,   120,     0,    67,     0,     0,    56,     0,
       0,     0,     0,     0,    57,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   119,     0,    65,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      67,     0,    78,    70,     0,     0,   109,   110,   111,   112,
     113,   114,    73,    76,    77,    74,    75,   121,   120,     0,
      67,    49,     0,    57,    67,    48,     0,    82,     0,    59,
      58,   157,   154,    57,     0,     0,    82,    96,    95,    89,
      90,    92,    94,    91,    93,    84,    85,    86,    87,    88,
       0,   158,   153,     0,    57,   119,     0,     0,     0,     0,
       0,     0,   150,   149,   116,     0,     0,    67,     0,   115,
       0,    67,     0,   152,   151,   118,    52,    68,    69,    71,
      72,     0,     0,     0,     0,     0,     0,    83,   155,    57,
      57,     0,   135,     0,   130,    57,     0,     0,     0,    97,
     108,   107,    98,    99,   100,   101,   102,    65,     0,     0,
       0,     0,     0,   117,     0,     0,    67,   142,     0,     0,
      51,     0,   126,    50,    61,    60,   129,   134,     0,     0,
     125,    65,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    57,     0,     0,   156,     0,     0,    57,     0,
       0,     0,     0,     0,    67,   140,     0,    67,   141,     0,
     124,    57,   123,    57,     0,     0,     0,   103,     0,     0,
       0,     0,     0,     0,     0,   133,     0,     0,   104,   106,
      57,     0,     0,     0,     0,   143,     0,   139,     0,   136,
     128,   127,     0,     0,    67,    67,     0,     0,   105,    67,
     145,     0,   137,    67,     0,   146,   144,     0,   138,   147,
       0,    67,     0,   148
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -273,  -273,  -273,   573,  -273,   585,   239,    81,    89,  -273,
     202,   343,   110,   180,  -273,   -37,    72,  -190,   -62,  -198,
    -272,  -161,   -92,  -273,  -273,   -69,   -58,  -253,  -273,  -273,
    -273,  -273,  -273,  -273,   193,  -273,   233,  -273,  -119,  -117,
    -273
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     8,     9,     5,    25,    68,    69,    58,
      66,    70,    71,    63,    83,    72,   116,   228,   198,   199,
     200,   201,   230,   202,   203,   204,   205,   167,   206,   207,
     208,   209,   210,   211,   370,   212,   213,   214,   215,   216,
     149
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      84,    94,   277,   229,    85,   147,    30,   148,    93,   317,
     128,   103,    95,   227,   142,   143,   144,    64,    47,   124,
       1,    48,   283,    64,    64,   100,   286,    64,    53,   319,
     109,   118,   146,   285,   134,   275,   334,    64,   117,   120,
     222,   253,   343,   291,   346,   333,   127,   101,   232,   365,
     220,    54,   118,   221,   118,   163,     4,   164,     7,   117,
      52,   117,   229,   165,   297,   252,   355,   118,    64,   311,
     154,   104,   229,   314,   117,   384,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,    26,
     110,   223,   254,   229,   135,   110,   104,    27,     6,   324,
     325,    49,   344,    55,   347,   328,   119,    26,    26,   366,
     122,   196,   197,    73,   100,    27,    27,    56,   341,   124,
      30,   122,   233,   123,   385,   348,    78,    50,   229,   229,
     124,    74,    79,    51,   229,    60,   108,   300,    59,   301,
      57,    60,    60,    61,   234,    60,    65,   234,    80,    61,
      61,   224,   359,    61,   225,    60,   372,    67,   364,   374,
     284,    86,    82,    61,   299,   302,   303,   304,   305,   306,
      88,   376,   293,   377,   310,   128,   312,   123,    90,    91,
     315,   229,    97,    98,   124,    89,    60,   229,    10,    11,
     392,   296,   292,   138,    61,   140,   400,   401,    31,    32,
     229,   404,   229,   308,   186,   407,    96,   309,   158,   236,
     142,   143,   144,   412,   102,   187,   188,   105,   189,   229,
     111,   130,   131,   112,    78,   190,   191,   115,   113,   192,
      79,    77,   141,   142,   143,   144,   332,   178,   179,   180,
      75,    76,   193,   351,    87,   145,    80,    78,   194,   114,
     186,    78,   121,    79,    99,   179,   180,    79,   262,   263,
      82,   187,   188,   195,   189,    45,    46,   136,   316,    80,
      78,   190,   191,    80,   125,   192,    79,   383,    47,   386,
      81,    48,   129,    82,   132,   126,   133,    82,   193,   137,
     106,   107,    80,   -44,   194,   139,   186,   176,   177,   178,
     179,   180,   196,   197,   388,   150,    82,   187,   188,   195,
     189,   117,   151,   152,   354,   153,    78,   190,   191,   155,
     156,   192,    79,   141,   142,   143,   144,   177,   178,   179,
     180,   157,   159,   163,   193,   164,   298,   160,    80,   162,
     194,   165,   256,   257,   258,   259,   260,   261,   196,   197,
     161,    28,    82,   166,   181,   195,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,   182,    28,
      28,   262,   263,   183,   -11,   169,   184,   185,   217,   170,
     171,   172,   173,   174,   175,   218,   231,    13,   176,   177,
     178,   179,   180,    14,   196,   197,    15,    62,   219,   226,
      16,   235,   -12,    62,    62,    17,   250,    62,   251,   255,
      18,   264,   265,   266,   268,    13,    19,    62,   267,    92,
     270,    14,   269,    20,    15,    21,   271,   272,    16,   119,
      22,    23,   273,    17,    24,   274,   276,   307,    18,    78,
     278,   279,   280,   281,    19,    79,   282,   331,    62,    78,
     287,    20,   163,    21,   288,    79,   289,    78,    22,    23,
     294,    80,    24,    79,   164,   180,    47,    78,    81,    48,
     313,    80,   295,    79,   318,    82,   320,    13,   321,    80,
     322,   323,   327,    14,   326,    82,    15,   329,   330,    80,
      16,   101,   335,    82,   349,    17,   337,   234,   353,    13,
      18,   339,   342,    82,   345,    14,    19,   350,    15,   356,
     352,   367,    16,    20,   357,    21,   358,    17,   360,   361,
      22,    23,    18,   362,    24,   363,   369,    13,    19,   380,
     371,   379,   -43,    14,   373,    20,    15,    21,   375,   378,
      16,   381,    22,    23,   387,    17,    24,   389,   390,   391,
      18,   -44,   174,   175,   -37,   393,    19,   176,   177,   178,
     179,   180,   395,    20,   397,    21,   402,   398,   399,   164,
      22,    23,   403,   410,    24,   165,   256,   257,   258,   259,
     260,   261,    29,   406,   408,   409,   413,   411,   336,   -44,
     175,   108,    12,   405,   176,   177,   178,   179,   180,     0,
       0,   382,   168,   169,     0,   262,   263,   170,   171,   172,
     173,   174,   175,   338,     0,     0,   176,   177,   178,   179,
     180,     0,     0,     0,     0,     0,     0,   168,   169,     0,
       0,     0,   170,   171,   172,   173,   174,   175,   340,     0,
       0,   176,   177,   178,   179,   180,     0,     0,     0,     0,
       0,     0,   168,   169,     0,     0,     0,   170,   171,   172,
     173,   174,   175,   396,     0,     0,   176,   177,   178,   179,
     180,     0,     0,     0,     0,     0,     0,   168,   169,     0,
       0,     0,   170,   171,   172,   173,   174,   175,   290,     0,
       0,   176,   177,   178,   179,   180,     0,     0,     0,   168,
     169,     0,     0,     0,   170,   171,   172,   173,   174,   175,
     368,     0,     0,   176,   177,   178,   179,   180,     0,     0,
     168,   169,     0,     0,     0,   170,   171,   172,   173,   174,
     175,     0,     0,     0,   176,   177,   178,   179,   180,   394,
       0,   168,   169,     0,     0,     0,   170,   171,   172,   173,
     174,   175,     0,     0,     0,   176,   177,   178,   179,   180,
     168,   169,     0,     0,     0,   170,   171,   172,   173,   174,
     175,     0,     0,     0,   176,   177,   178,   179,   180,   170,
     171,   172,   173,   174,   175,     0,     0,     0,   176,   177,
     178,   179,   180,   -44,   171,   172,   173,   174,   175,     0,
       0,     0,   176,   177,   178,   179,   180,   -44,   172,   173,
     174,   175,     0,     0,     0,   176,   177,   178,   179,   180,
     -44,   173,   174,   175,     0,     0,     0,   176,   177,   178,
     179,   180
};

static const yytype_int16 yycheck[] =
{
      62,    70,   200,   164,    62,   124,     3,   124,    70,   281,
      63,     3,    70,     3,     4,     5,     6,    54,    50,    72,
      21,    53,   220,    60,    61,    65,   224,    64,    44,   282,
       3,   100,   124,   223,     3,     3,     3,    74,   100,   101,
      16,    16,     4,   233,     4,   298,   108,    87,   165,     4,
      67,    67,   121,    70,   123,    63,     3,    65,    35,   121,
      70,   123,   223,    71,   254,   182,   338,   136,   105,   267,
     132,    63,   233,   271,   136,    19,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,     8,
      63,    67,    67,   254,    63,    63,    63,     8,     0,   289,
     290,    98,    64,    30,    64,   295,     3,    26,    27,    64,
      63,   101,   102,    67,    65,    26,    27,    44,   316,    72,
       3,    63,    65,    65,    68,    65,    23,     3,   289,   290,
      72,    67,    29,     3,   295,    54,    87,   256,     3,   256,
      67,    60,    61,    54,    87,    64,     3,    87,    45,    60,
      61,    67,   342,    64,    70,    74,   354,     3,   348,   357,
     222,    68,    59,    74,   256,   257,   258,   259,   260,   261,
      69,   361,   234,   363,   266,    63,   268,    65,    68,    69,
     272,   342,    72,    73,    72,    30,   105,   348,    70,    71,
     380,   253,    89,   121,   105,   123,   394,   395,    70,    71,
     361,   399,   363,   265,     3,   403,    68,   265,   136,     3,
       4,     5,     6,   411,     3,    14,    15,    70,    17,   380,
      70,   111,   112,    70,    23,    24,    25,     3,    68,    28,
      29,     3,     3,     4,     5,     6,   298,    96,    97,    98,
      60,    61,    41,   335,    64,    16,    45,    23,    47,    68,
       3,    23,    65,    29,    74,    97,    98,    29,   101,   102,
      59,    14,    15,    62,    17,    26,    27,    69,    67,    45,
      23,    24,    25,    45,    64,    28,    29,   369,    50,   371,
      52,    53,    64,    59,    87,   105,    66,    59,    41,    89,
      88,    89,    45,    90,    47,    64,     3,    94,    95,    96,
      97,    98,   101,   102,   373,     3,    59,    14,    15,    62,
      17,   373,    89,    64,    67,     3,    23,    24,    25,    67,
      63,    28,    29,     3,     4,     5,     6,    95,    96,    97,
      98,    64,     3,    63,    41,    65,    16,    66,    45,    66,
      47,    71,    72,    73,    74,    75,    76,    77,   101,   102,
      72,     8,    59,     3,    71,    62,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    71,    26,
      27,   101,   102,    72,     0,    81,     3,    89,    64,    85,
      86,    87,    88,    89,    90,     3,     3,    13,    94,    95,
      96,    97,    98,    19,   101,   102,    22,    54,    72,     4,
      26,    65,     0,    60,    61,    31,     3,    64,     3,     3,
      36,    70,    65,    65,    65,    13,    42,    74,    67,     3,
       3,    19,    70,    49,    22,    51,    67,    65,    26,     3,
      56,    57,     3,    31,    60,     3,    68,     3,    36,    23,
      70,    70,    70,    34,    42,    29,    16,     3,   105,    23,
      64,    49,    63,    51,    66,    29,    69,    23,    56,    57,
      66,    45,    60,    29,    65,    98,    50,    23,    52,    53,
      70,    45,    65,    29,     3,    59,    68,    13,    63,    45,
      68,    68,    89,    19,    66,    59,    22,    63,    68,    45,
      26,    87,    70,    59,    63,    31,    68,    87,    62,    13,
      36,    68,    65,    59,    66,    19,    42,    65,    22,    43,
      67,    66,    26,    49,    67,    51,    68,    31,    64,    67,
      56,    57,    36,    64,    60,    67,    38,    13,    42,    67,
      65,    64,    68,    19,    65,    49,    22,    51,    66,    66,
      26,     3,    56,    57,    68,    31,    60,    68,    68,    68,
      36,    88,    89,    90,    68,    66,    42,    94,    95,    96,
      97,    98,    78,    49,    66,    51,    70,    68,    67,    65,
      56,    57,    67,    54,    60,    71,    72,    73,    74,    75,
      76,    77,     9,    68,    68,    68,    68,    67,    66,    89,
      90,    87,     7,   400,    94,    95,    96,    97,    98,    -1,
      -1,   368,    80,    81,    -1,   101,   102,    85,    86,    87,
      88,    89,    90,    66,    -1,    -1,    94,    95,    96,    97,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    -1,
      -1,    -1,    85,    86,    87,    88,    89,    90,    66,    -1,
      -1,    94,    95,    96,    97,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    81,    -1,    -1,    -1,    85,    86,    87,
      88,    89,    90,    66,    -1,    -1,    94,    95,    96,    97,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    -1,
      -1,    -1,    85,    86,    87,    88,    89,    90,    69,    -1,
      -1,    94,    95,    96,    97,    98,    -1,    -1,    -1,    80,
      81,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
      70,    -1,    -1,    94,    95,    96,    97,    98,    -1,    -1,
      80,    81,    -1,    -1,    -1,    85,    86,    87,    88,    89,
      90,    -1,    -1,    -1,    94,    95,    96,    97,    98,    78,
      -1,    80,    81,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,    -1,    -1,    -1,    94,    95,    96,    97,    98,
      80,    81,    -1,    -1,    -1,    85,    86,    87,    88,    89,
      90,    -1,    -1,    -1,    94,    95,    96,    97,    98,    85,
      86,    87,    88,    89,    90,    -1,    -1,    -1,    94,    95,
      96,    97,    98,    85,    86,    87,    88,    89,    90,    -1,
      -1,    -1,    94,    95,    96,    97,    98,    86,    87,    88,
      89,    90,    -1,    -1,    -1,    94,    95,    96,    97,    98,
      87,    88,    89,    90,    -1,    -1,    -1,    94,    95,    96,
      97,    98
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    21,   104,   105,     3,   108,     0,    35,   106,   107,
      70,    71,   108,    13,    19,    22,    26,    31,    36,    42,
      49,    51,    56,    57,    60,   109,   110,   111,   114,   106,
       3,    70,    71,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   109,   109,    50,    53,    98,
       3,     3,    70,    44,    67,    30,    44,    67,   112,     3,
     110,   111,   114,   116,   118,     3,   113,     3,   110,   111,
     114,   115,   118,    67,    67,   116,   116,     3,    23,    29,
      45,    52,    59,   117,   121,   129,    68,   116,    69,    30,
     115,   115,     3,   121,   128,   129,    68,   115,   115,   116,
      65,    87,     3,     3,    63,    70,   113,   113,    87,     3,
      63,    70,    70,    68,    68,     3,   119,   121,   128,     3,
     121,    65,    63,    65,    72,    64,   116,   121,    63,    64,
     115,   115,    87,    66,     3,    63,    69,    89,   119,    64,
     119,     3,     4,     5,     6,    16,   125,   141,   142,   143,
       3,    89,    64,     3,   121,    67,    63,    64,   119,     3,
      66,    72,    66,    63,    65,    71,     3,   130,    80,    81,
      85,    86,    87,    88,    89,    90,    94,    95,    96,    97,
      98,    71,    71,    72,     3,    89,     3,    14,    15,    17,
      24,    25,    28,    41,    47,    62,   101,   102,   121,   122,
     123,   124,   126,   127,   128,   129,   131,   132,   133,   134,
     135,   136,   138,   139,   140,   141,   142,    64,     3,    72,
      67,    70,    16,    67,    67,    70,     4,     3,   120,   124,
     125,     3,   142,    65,    87,    65,     3,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
       3,     3,   142,    16,    67,     3,    72,    73,    74,    75,
      76,    77,   101,   102,    70,    65,    65,    67,    65,    70,
       3,    67,    65,     3,     3,     3,    68,   122,    70,    70,
      70,    34,    16,   122,   121,   120,   122,    64,    66,    69,
      69,   120,    89,   121,    66,    65,   121,   120,    16,   125,
     141,   142,   125,   125,   125,   125,   125,     3,   121,   129,
     125,   122,   125,    70,   122,   125,    67,   123,     3,   130,
      68,    63,    68,    68,   120,   120,    66,    89,   120,    63,
      68,     3,   121,   130,     3,    70,    66,    68,    66,    68,
      66,   122,    65,     4,    64,    66,     4,    64,    65,    63,
      65,   125,    67,    62,    67,   123,    43,    67,    68,   120,
      64,    67,    64,    67,   120,     4,    64,    66,    70,    38,
     137,    65,   122,    65,   122,    66,   120,   120,    66,    64,
      67,     3,   139,   125,    19,    68,   125,    68,   128,    68,
      68,    68,   120,    66,    78,    78,    66,    66,    68,    67,
     122,   122,    70,    67,   122,   137,    68,   122,    68,    68,
      54,    67,   122,    68
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   103,   104,   105,   105,   106,   106,   107,   107,   108,
     108,   109,   109,   109,   109,   110,   110,   111,   111,   112,
     112,   112,   113,   113,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   115,   115,   115,
     115,   115,   115,   116,   116,   116,   116,   116,   117,   117,
     118,   118,   118,   118,   119,   119,   119,   120,   120,   120,
     120,   120,   121,   121,   121,   121,   121,   122,   122,   123,
     123,   123,   123,   123,   124,   124,   124,   124,   124,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   127,
     127,   127,   127,   127,   127,   127,   127,   127,   128,   128,
     128,   128,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   130,   130,   131,   132,   133,   134,
     134,   135,   135,   136,   136,   137,   137,   138,   138,   139,
     139,   140,   140,   141,   141,   142,   142,   143,   143
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     0,     3,     0,     2,     3,     5,     1,
       3,     1,     1,     2,     2,     6,     8,     6,     7,     2,
       2,     4,     1,     3,     0,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     0,     4,     4,
       2,     2,     2,     0,     4,     2,     2,     2,     6,     6,
       9,     9,     8,     2,     0,     1,     3,     0,     1,     1,
       3,     3,     1,     1,     1,     1,     1,     0,     2,     2,
       1,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     6,     7,     9,     7,     3,     3,     1,
       1,     1,     1,     1,     1,     2,     2,     3,     2,     5,
       4,     4,     4,    10,    10,     8,     8,    12,    12,     8,
       7,     4,     4,    11,     4,     3,     7,     9,    11,     7,
       5,     5,     3,     7,    10,     4,     5,    11,    15,     2,
       2,     2,     2,     3,     3,     4,     6,     3,     3
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
      
#line 1709 "JavaGrammar.tab.cc" /* yacc.c:1646  */
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
#line 463 "JavaGrammar.yy" /* yacc.c:1906  */


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
