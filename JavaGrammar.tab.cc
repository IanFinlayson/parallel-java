/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "JavaGrammar.yy"

#include <cstdlib>
#include "Node/Node.cpp"

enum ParseTreeNode{
	ptPackage,
	ptPackageId,
	ptImport,
	ptImportId,
	ptClassContainer,
	ptClass,
	ptClassAccessMod,
	ptClassMod,
	ptExtends,
	ptImplements,
	ptMethodContainer,
	ptMethod,
	ptMethodMod,
	ptMethodReturnVoid,
	ptDataType,
	ptInstanceType,
	ptNestedClassContainer,
	ptAccessMod,
	ptStatement,
	ptExpression,
	ptDeclaration,
	ptArrayDeclaration,
	ptEmpty,
	ptIf,
	ptSwitch,
	ptCase,
	ptCaseDefault,
	ptFor,
	ptWhile,
	ptDoWhile
};



extern int yylex();
void yyerror (char const *error);

Node* root;

#line 115 "JavaGrammar.tab.cc"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
#line 46 "JavaGrammar.yy"

	#include <string>
	#include <iostream> 

#line 163 "JavaGrammar.tab.cc"

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
#line 51 "JavaGrammar.yy"

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


#line 291 "JavaGrammar.tab.cc"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_JAVAGRAMMAR_TAB_HH_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
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
#define YYLAST   937

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  103
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  131
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  331

#define YYUNDEFTOK  2
#define YYMAXUTOK   340


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
static const yytype_int16 yyrline[] =
{
       0,   178,   178,   184,   189,   196,   209,   213,   216,   222,
     225,   228,   231,   238,   241,   244,   250,   253,   256,   259,
     262,   265,   268,   282,   289,   296,   302,   316,   319,   325,
     328,   335,   336,   337,   338,   339,   343,   346,   349,   352,
     358,   359,   363,   364,   365,   366,   367,   371,   372,   373,
     374,   375,   379,   380,   381,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,   396,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
     410,   411,   415,   416,   417,   418,   419,   420,   421,   422,
     423,   427,   431,   437,   441,   448,   449,   450,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   464,   465,   470,
     474,   478,   482,   483,   487,   488,   492,   493,   497,   498,
     502,   504,   508,   509,   513,   514,   518,   519,   523,   524,
     528,   529
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
  "nestedclassdec", "classaccessmod", "accessmod", "classmod", "methodmod",
  "classbody", "method", "returntype", "formalparameters", "argument",
  "datatype", "block", "statement", "expressionstatement", "expression",
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
static const yytype_int16 yytoknum[] =
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

#define YYPACT_NINF (-184)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-24)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -14,  -184,    47,  -184,    13,     5,  -184,  -184,  -184,  -184,
     -21,   107,    46,   133,  -184,  -184,  -184,   133,   230,   -44,
     133,  -184,    58,  -184,  -184,    64,  -184,  -184,    88,    42,
    -184,  -184,   148,  -184,  -184,  -184,  -184,  -184,   150,  -184,
     120,   135,   133,    93,   138,   116,    31,     1,  -184,  -184,
      95,   141,    93,   147,   149,   131,  -184,  -184,   158,   221,
     226,   143,  -184,  -184,  -184,   586,   169,   191,   192,   196,
     200,   201,   203,   207,   213,  -184,   283,   285,    12,  -184,
     219,  -184,  -184,   222,   224,  -184,  -184,  -184,   257,  -184,
    -184,  -184,  -184,  -184,  -184,   229,   231,     4,   298,    35,
     144,   144,   144,   144,   144,    95,  -184,  -184,  -184,   140,
     144,  -184,   144,  -184,  -184,  -184,   144,  -184,  -184,     0,
     239,  -184,  -184,  -184,   223,   304,   305,   570,  -184,  -184,
    -184,    76,  -184,   768,   245,   229,    44,   153,   768,  -184,
     229,   249,   768,   768,   768,   768,   768,   227,   228,    16,
     243,   611,   252,   636,   281,   661,   253,   212,   315,  -184,
    -184,   254,   245,   229,   317,  -184,     4,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     -34,   260,   264,   333,    95,    20,   273,   144,   271,   277,
     327,   302,   279,   275,   345,   768,  -184,   229,   288,   356,
       4,   297,  -184,   768,   786,   800,   814,   827,   839,   268,
     164,   237,    77,   136,   -55,   269,  -184,     4,    23,    21,
     303,   306,   286,   312,   374,   707,   347,   322,  -184,  -184,
     325,  -184,    28,   -32,   326,    32,  -184,   113,  -184,   117,
    -184,   307,   328,   331,  -184,   377,   392,   275,   288,   401,
     144,    -2,   144,   385,    93,   431,    95,     4,     4,   339,
      95,     4,  -184,  -184,  -184,  -184,     4,   403,   306,   -11,
     341,   728,   334,   144,  -184,   686,  -184,   348,  -184,   353,
      34,   125,  -184,   354,   109,   167,   324,   355,   352,  -184,
    -184,   749,   351,   358,    24,  -184,  -184,    25,  -184,  -184,
       4,  -184,   593,   460,  -184,  -184,  -184,   359,   360,   367,
     366,   127,   489,  -184,   593,   535,  -184,     4,  -184,     4,
    -184,  -184,   368,   173,   181,   369,  -184,  -184,  -184,   564,
    -184
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       7,     8,     0,     2,     7,    13,     1,     3,    15,    14,
       0,     0,     0,     9,    11,    12,    10,     9,    16,     0,
       9,    25,    19,    21,    20,    17,    18,    22,     0,     0,
       5,    24,     0,    39,    37,    36,    27,    38,     0,    28,
       0,     0,     9,     0,     0,    39,     0,     0,    29,     6,
       0,     0,     0,    91,     0,     0,    40,    30,     0,     0,
       0,     0,    94,    93,    92,    39,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,     0,     0,     0,    41,
       0,    51,    43,     0,     0,    82,    83,    84,    85,    86,
      87,    46,    49,    50,    47,    48,     0,    31,     0,     0,
       0,     0,     0,     0,     0,     0,   123,   122,    89,     0,
       0,    40,     0,    88,    90,    40,     0,   125,   124,    91,
       0,    42,    44,    45,     0,     0,     0,    55,    52,    53,
      54,     0,    33,    32,   130,   127,    55,     0,    70,    81,
      80,    55,    71,    72,    73,    74,    75,     0,    39,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    40,
     115,     0,   131,   126,     0,   128,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      39,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    94,     0,    95,   105,   104,    93,     0,
      31,     0,    35,    34,    69,    68,    62,    63,    65,    67,
      64,    66,    57,    58,    59,    60,    61,    31,     0,     0,
       0,    92,     0,     0,     0,     0,     0,     0,    40,   113,
       0,    40,     0,     0,     0,     0,   114,     0,    56,     0,
     108,     0,     0,     0,    76,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    31,    31,     0,
       0,    31,   129,    77,   107,    79,    31,     0,     0,     0,
       0,     0,     0,     0,   116,     0,   112,     0,   109,     0,
       0,     0,   103,     0,     0,     0,     0,     0,     0,    40,
      40,     0,     0,     0,     0,    99,   102,     0,    98,    78,
      31,    40,   118,     0,    40,   110,    40,     0,     0,     0,
       0,     0,     0,   117,   119,     0,    97,    31,    96,    31,
     106,   111,   120,     0,     0,     0,   101,   100,    40,     0,
     121
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -184,  -184,   433,  -184,  -184,  -184,  -184,   417,  -184,    10,
    -184,  -184,  -184,  -180,   -29,  -109,  -119,   -96,   -43,  -184,
    -184,   -40,   329,  -183,  -184,  -184,  -184,  -184,  -184,  -184,
    -184,  -184,   190,  -184,   -83,   -64,  -184
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,    17,     5,    18,    10,    29,    19,
      20,    38,    46,   131,    78,    61,    79,    80,   133,    81,
      82,    83,    84,   182,    85,    86,    87,    88,    89,    90,
     251,    91,    92,    93,    94,    95,    96
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      39,   132,   152,    48,    53,   160,   154,   127,   128,   129,
     130,   234,    57,    -4,    47,   119,   139,   272,     8,   185,
     237,    55,     1,    47,    30,   242,    33,    21,   307,   309,
      31,   217,    11,   258,   135,   140,   273,   239,   136,   128,
     129,   130,   178,   179,   256,    33,    34,     6,   260,     1,
     199,   137,    44,   218,     9,   218,   138,   142,   143,   144,
     145,   146,   163,   156,    54,    34,   274,   151,    35,   153,
     202,   229,   157,   155,   196,   120,   147,   280,   281,   186,
     149,   284,    37,   223,   287,   243,   285,    35,   308,   310,
     106,   107,   157,   197,    36,   257,    45,    51,    33,   261,
      52,    37,   295,   166,   132,    76,    77,   164,   181,    97,
      12,   -15,   240,    13,   195,    98,    34,   -14,    34,   253,
     311,   132,   255,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   323,    35,   324,
      35,    32,   165,   148,   225,   166,    65,   141,   128,   129,
     130,    40,    37,    41,    37,   222,   180,    66,    67,    14,
      68,   132,   132,    34,    15,   132,    34,    69,    70,    16,
     132,    71,   176,   177,   178,   179,    34,   298,   166,   262,
     302,   303,   166,   263,    72,    35,   166,    42,    35,   241,
      73,   296,   312,   320,   166,   314,   166,   315,    35,    37,
      43,   -23,    37,    50,   132,    74,    49,   271,    56,   275,
      58,    75,    37,    59,   277,   136,   128,   129,   130,   329,
      60,   132,    62,   132,    63,    47,    65,   279,   194,    64,
     291,   283,   177,   178,   179,   299,   166,    66,    67,   108,
      68,   326,   166,    22,    76,    77,    34,    69,    70,   327,
     166,    71,    23,   -24,   174,    65,   109,   110,   175,   176,
     177,   178,   179,   111,    72,   112,    66,    67,    35,    68,
      73,   113,    24,   114,   115,    34,    69,    70,   116,    25,
      71,    26,    37,   -13,    65,    74,   117,    27,   118,   121,
     159,   124,   122,    72,   123,    66,    67,    35,    68,    73,
     125,   134,   126,   158,    34,    69,    70,   161,   162,    71,
      97,    37,   164,   187,    74,   184,   183,   193,   198,   200,
     189,   201,    72,   219,    76,    77,    35,   -24,    73,   220,
      65,   175,   176,   177,   178,   179,   221,   224,   226,   227,
      37,    66,    67,    74,    68,   230,   231,   232,   233,   191,
      34,    69,    70,    76,    77,    71,   -24,   173,   174,    65,
     235,   238,   175,   176,   177,   178,   179,   179,    72,   244,
      66,    67,    35,    68,    73,   246,   247,   248,   245,    34,
      69,    70,    76,    77,    71,   250,    37,   252,    65,    74,
     254,   259,   265,   267,   228,   268,   264,    72,   266,    66,
      67,    35,    68,    73,   269,   282,   286,   288,    34,    69,
      70,   218,   290,    71,   293,    37,   294,   297,    74,   301,
     300,   305,   325,   316,   236,   306,    72,   317,    76,    77,
      35,   318,    73,   319,    65,    28,   328,     7,   150,   270,
       0,     0,     0,     0,    37,    66,    67,    74,    68,     0,
       0,     0,     0,   276,    34,    69,    70,    76,    77,    71,
       0,     0,     0,    65,     0,     0,     0,     0,     0,     0,
       0,     0,    72,     0,    66,    67,    35,    68,    73,     0,
       0,     0,     0,    34,    69,    70,    76,    77,    71,     0,
      37,     0,    65,    74,     0,     0,     0,     0,     0,   278,
       0,    72,     0,    66,    67,    35,    68,    73,     0,     0,
       0,     0,    34,    69,    70,     0,     0,    71,     0,    37,
       0,     0,    74,     0,     0,     0,     0,     0,   313,     0,
      72,     0,    76,    77,    35,     0,    73,     0,    65,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    37,    66,
      67,    74,    68,     0,     0,     0,     0,   321,    34,    69,
      70,    76,    77,    71,     0,     0,     0,    65,     0,     0,
       0,     0,     0,     0,     0,     0,    72,     0,    66,    67,
      35,    68,    73,     0,     0,     0,     0,    34,    69,    70,
      76,    77,    71,     0,    37,     0,    65,    74,     0,     0,
       0,     0,     0,   322,     0,    72,     0,    66,    67,    35,
      68,    73,     0,     0,     0,     0,    34,    69,    70,     0,
       0,    71,     0,    37,     0,     0,    74,     0,     0,     0,
       0,     0,   330,   164,    72,    97,    76,    77,    35,     0,
      73,    98,    99,   100,   101,   102,   103,   104,     0,     0,
       0,    97,    37,     0,     0,    74,     0,    98,    99,   100,
     101,   102,   103,   104,     0,    76,    77,     0,     0,     0,
       0,   106,   107,   105,     0,     0,     0,   188,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   106,   107,     0,
       0,   167,   168,     0,    76,    77,   169,   170,   171,   172,
     173,   174,   190,     0,     0,   175,   176,   177,   178,   179,
       0,     0,     0,     0,     0,     0,   167,   168,     0,     0,
       0,   169,   170,   171,   172,   173,   174,   192,     0,     0,
     175,   176,   177,   178,   179,     0,     0,     0,     0,     0,
       0,   167,   168,     0,     0,     0,   169,   170,   171,   172,
     173,   174,   292,     0,     0,   175,   176,   177,   178,   179,
       0,     0,     0,     0,     0,     0,   167,   168,     0,     0,
       0,   169,   170,   171,   172,   173,   174,   249,     0,     0,
     175,   176,   177,   178,   179,     0,     0,   167,   168,     0,
       0,     0,   169,   170,   171,   172,   173,   174,     0,     0,
       0,   175,   176,   177,   178,   179,   289,     0,   167,   168,
       0,     0,     0,   169,   170,   171,   172,   173,   174,     0,
       0,     0,   175,   176,   177,   178,   179,   304,     0,   167,
     168,     0,     0,     0,   169,   170,   171,   172,   173,   174,
       0,     0,     0,   175,   176,   177,   178,   179,   167,   168,
       0,     0,     0,   169,   170,   171,   172,   173,   174,     0,
       0,     0,   175,   176,   177,   178,   179,   168,     0,     0,
       0,   169,   170,   171,   172,   173,   174,     0,     0,     0,
     175,   176,   177,   178,   179,   169,   170,   171,   172,   173,
     174,     0,     0,     0,   175,   176,   177,   178,   179,   -24,
     170,   171,   172,   173,   174,     0,     0,     0,   175,   176,
     177,   178,   179,   -24,   171,   172,   173,   174,     0,     0,
       0,   175,   176,   177,   178,   179,   -24,   172,   173,   174,
       0,     0,     0,   175,   176,   177,   178,   179
};

static const yytype_int16 yycheck[] =
{
      29,    97,   111,    43,     3,   124,   115,     3,     4,     5,
       6,   194,    52,     0,    43,     3,    99,    19,    13,     3,
     200,    50,    36,    52,    68,     4,     3,    17,     4,     4,
      20,    65,    53,    65,    98,    99,    38,   217,     3,     4,
       5,     6,    97,    98,    16,     3,    23,     0,    16,    36,
     159,    16,    42,    87,    49,    87,    99,   100,   101,   102,
     103,   104,   126,    63,    63,    23,    68,   110,    45,   112,
     166,   190,    72,   116,   157,    63,   105,   257,   258,    63,
     109,   261,    59,    63,   267,    64,   266,    45,    64,    64,
     101,   102,    72,   157,    52,    67,     3,    66,     3,    67,
      69,    59,    68,    69,   200,   101,   102,    63,   137,    65,
       3,    53,    89,    67,   157,    71,    23,    53,    23,   228,
     300,   217,   231,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   317,    45,   319,
      45,    53,    66,     3,   187,    69,     3,     3,     4,     5,
       6,     3,    59,     3,    59,   184,     3,    14,    15,    26,
      17,   257,   258,    23,    31,   261,    23,    24,    25,    36,
     266,    28,    95,    96,    97,    98,    23,    68,    69,    66,
     289,   290,    69,    66,    41,    45,    69,    67,    45,   218,
      47,    66,   301,    66,    69,   304,    69,   306,    45,    59,
      65,    68,    59,    87,   300,    62,    68,   250,    67,   252,
      63,    68,    59,    64,   254,     3,     4,     5,     6,   328,
      89,   317,    64,   319,     3,   254,     3,   256,    16,     3,
     273,   260,    96,    97,    98,    68,    69,    14,    15,    70,
      17,    68,    69,    13,   101,   102,    23,    24,    25,    68,
      69,    28,    22,    89,    90,     3,    65,    65,    94,    95,
      96,    97,    98,    67,    41,    65,    14,    15,    45,    17,
      47,    70,    42,    70,    67,    23,    24,    25,    65,    49,
      28,    51,    59,    53,     3,    62,     3,    57,     3,    70,
      67,    34,    70,    41,    70,    14,    15,    45,    17,    47,
      71,     3,    71,    64,    23,    24,    25,     3,     3,    28,
      65,    59,    63,    70,    62,    87,    89,    64,     3,    65,
      68,     4,    41,    63,   101,   102,    45,    90,    47,    65,
       3,    94,    95,    96,    97,    98,     3,    64,    67,    62,
      59,    14,    15,    62,    17,    43,    67,    72,     3,    68,
      23,    24,    25,   101,   102,    28,    88,    89,    90,     3,
      72,    64,    94,    95,    96,    97,    98,    98,    41,    66,
      14,    15,    45,    17,    47,    89,    64,     3,    72,    23,
      24,    25,   101,   102,    28,    38,    59,    65,     3,    62,
      65,    65,    64,    16,    67,     3,    89,    41,    67,    14,
      15,    45,    17,    47,     3,    66,     3,    66,    23,    24,
      25,    87,    78,    28,    66,    59,    63,    63,    62,    67,
      65,    70,    54,    64,    68,    67,    41,    67,   101,   102,
      45,    64,    47,    67,     3,    18,    67,     4,   109,   249,
      -1,    -1,    -1,    -1,    59,    14,    15,    62,    17,    -1,
      -1,    -1,    -1,    68,    23,    24,    25,   101,   102,    28,
      -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    -1,    14,    15,    45,    17,    47,    -1,
      -1,    -1,    -1,    23,    24,    25,   101,   102,    28,    -1,
      59,    -1,     3,    62,    -1,    -1,    -1,    -1,    -1,    68,
      -1,    41,    -1,    14,    15,    45,    17,    47,    -1,    -1,
      -1,    -1,    23,    24,    25,    -1,    -1,    28,    -1,    59,
      -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    68,    -1,
      41,    -1,   101,   102,    45,    -1,    47,    -1,     3,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    14,
      15,    62,    17,    -1,    -1,    -1,    -1,    68,    23,    24,
      25,   101,   102,    28,    -1,    -1,    -1,     3,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    14,    15,
      45,    17,    47,    -1,    -1,    -1,    -1,    23,    24,    25,
     101,   102,    28,    -1,    59,    -1,     3,    62,    -1,    -1,
      -1,    -1,    -1,    68,    -1,    41,    -1,    14,    15,    45,
      17,    47,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,
      -1,    28,    -1,    59,    -1,    -1,    62,    -1,    -1,    -1,
      -1,    -1,    68,    63,    41,    65,   101,   102,    45,    -1,
      47,    71,    72,    73,    74,    75,    76,    77,    -1,    -1,
      -1,    65,    59,    -1,    -1,    62,    -1,    71,    72,    73,
      74,    75,    76,    77,    -1,   101,   102,    -1,    -1,    -1,
      -1,   101,   102,    87,    -1,    -1,    -1,    66,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,   102,    -1,
      -1,    80,    81,    -1,   101,   102,    85,    86,    87,    88,
      89,    90,    66,    -1,    -1,    94,    95,    96,    97,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    -1,    -1,
      -1,    85,    86,    87,    88,    89,    90,    66,    -1,    -1,
      94,    95,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    81,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,    66,    -1,    -1,    94,    95,    96,    97,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    -1,    -1,
      -1,    85,    86,    87,    88,    89,    90,    70,    -1,    -1,
      94,    95,    96,    97,    98,    -1,    -1,    80,    81,    -1,
      -1,    -1,    85,    86,    87,    88,    89,    90,    -1,    -1,
      -1,    94,    95,    96,    97,    98,    78,    -1,    80,    81,
      -1,    -1,    -1,    85,    86,    87,    88,    89,    90,    -1,
      -1,    -1,    94,    95,    96,    97,    98,    78,    -1,    80,
      81,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
      -1,    -1,    -1,    94,    95,    96,    97,    98,    80,    81,
      -1,    -1,    -1,    85,    86,    87,    88,    89,    90,    -1,
      -1,    -1,    94,    95,    96,    97,    98,    81,    -1,    -1,
      -1,    85,    86,    87,    88,    89,    90,    -1,    -1,    -1,
      94,    95,    96,    97,    98,    85,    86,    87,    88,    89,
      90,    -1,    -1,    -1,    94,    95,    96,    97,    98,    85,
      86,    87,    88,    89,    90,    -1,    -1,    -1,    94,    95,
      96,    97,    98,    86,    87,    88,    89,    90,    -1,    -1,
      -1,    94,    95,    96,    97,    98,    87,    88,    89,    90,
      -1,    -1,    -1,    94,    95,    96,    97,    98
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    36,   104,   105,   106,   108,     0,   105,    13,    49,
     110,    53,     3,    67,    26,    31,    36,   107,   109,   112,
     113,   112,    13,    22,    42,    49,    51,    57,   110,   111,
      68,   112,    53,     3,    23,    45,    52,    59,   114,   117,
       3,     3,    67,    65,   112,     3,   115,   117,   124,    68,
      87,    66,    69,     3,    63,   117,    67,   124,    63,    64,
      89,   118,    64,     3,     3,     3,    14,    15,    17,    24,
      25,    28,    41,    47,    62,    68,   101,   102,   117,   119,
     120,   122,   123,   124,   125,   127,   128,   129,   130,   131,
     132,   134,   135,   136,   137,   138,   139,    65,    71,    72,
      73,    74,    75,    76,    77,    87,   101,   102,    70,    65,
      65,    67,    65,    70,    70,    67,    65,     3,     3,     3,
      63,    70,    70,    70,    34,    71,    71,     3,     4,     5,
       6,   116,   120,   121,     3,   138,     3,    16,   121,   137,
     138,     3,   121,   121,   121,   121,   121,   117,     3,   117,
     125,   121,   118,   121,   118,   121,    63,    72,    64,    67,
     119,     3,     3,   138,    63,    66,    69,    80,    81,    85,
      86,    87,    88,    89,    90,    94,    95,    96,    97,    98,
       3,   117,   126,    89,    87,     3,    63,    70,    66,    68,
      66,    68,    66,    64,    16,   121,   137,   138,     3,   118,
      65,     4,   120,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   121,    65,    87,    63,
      65,     3,   117,    63,    64,   121,    67,    62,    67,   119,
      43,    67,    72,     3,   126,    72,    68,   116,    64,   116,
      89,   117,     4,    64,    66,    72,    89,    64,     3,    70,
      38,   133,    65,   118,    65,   118,    16,    67,    65,    65,
      16,    67,    66,    66,    89,    64,    67,    16,     3,     3,
     135,   121,    19,    38,    68,   121,    68,   124,    68,   117,
     116,   116,    66,   117,   116,   116,     3,   126,    66,    78,
      78,   121,    66,    66,    63,    68,    66,    63,    68,    68,
      65,    67,   118,   118,    78,    70,    67,     4,    64,     4,
      64,   116,   118,    68,   118,   118,    64,    67,    64,    67,
      66,    68,    68,   116,   116,    54,    68,    68,    67,   118,
      68
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   103,   104,   105,   105,   106,   107,   108,   108,   109,
     109,   109,   109,   110,   110,   110,   111,   111,   111,   111,
     111,   111,   111,   112,   112,   112,   113,   114,   114,   115,
     115,   116,   116,   116,   116,   116,   117,   117,   117,   117,
     118,   118,   119,   119,   119,   119,   119,   120,   120,   120,
     120,   120,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   123,   123,   123,   123,   123,   123,   123,   123,
     123,   124,   124,   124,   124,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   126,   126,   127,
     128,   129,   130,   130,   131,   131,   132,   132,   133,   133,
     134,   134,   135,   135,   136,   136,   137,   137,   138,   138,
     139,   139
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     7,     7,     0,     1,     0,
       1,     1,     1,     0,     1,     1,     0,     1,     1,     1,
       1,     1,     1,     0,     2,     2,    10,     1,     1,     1,
       3,     0,     1,     1,     3,     3,     1,     1,     1,     1,
       0,     2,     2,     1,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     6,     7,     9,     7,
       3,     3,     1,     1,     1,     1,     1,     1,     2,     2,
       2,     2,     5,     4,     4,     4,    10,    10,     8,     8,
      12,    12,     8,     7,     4,     4,    11,     4,     3,     7,
       9,    11,     7,     5,     5,     3,     7,    10,     4,     5,
      11,    15,     2,     2,     2,     2,     3,     3,     4,     6,
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

#define YYBACKUP(Token, Value)                                    \
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
#line 178 "JavaGrammar.yy"
          {
	root = (yyvsp[0].node);
}
#line 1832 "JavaGrammar.tab.cc"
    break;

  case 3:
#line 184 "JavaGrammar.yy"
                   {
	(yyval.node) = new Node(ptClassContainer, 0, 0, "");
	(yyval.node)->attach_child(*(yyvsp[-1].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 1842 "JavaGrammar.tab.cc"
    break;

  case 4:
#line 189 "JavaGrammar.yy"
         {
	(yyval.node) = new Node(ptClassContainer, 0, 0, "");
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 1851 "JavaGrammar.tab.cc"
    break;

  case 5:
#line 196 "JavaGrammar.yy"
                                                                                 {
	(yyval.node) = new Node(ptClass, 0, 0, (yyvsp[-3].stVal));
	(yyval.node)->attach_child(*(yyvsp[-6].node)); //left branch of class node starts with access modifier
	(yyvsp[-6].node)->attach_child(*(yyvsp[-5].node)); //left branch class modifier
	//have to add extends
	//have to add implements
	if((yyvsp[-1].node)->get_type() != ptEmpty){
		(yyval.node)->attach_child(*(yyvsp[-1].node)); //right branch of class node is the class body tree
	}
}
#line 1866 "JavaGrammar.tab.cc"
    break;

  case 7:
#line 213 "JavaGrammar.yy"
       {
	(yyval.node) = new Node(ptClassAccessMod, 0, 0, "default");
}
#line 1874 "JavaGrammar.tab.cc"
    break;

  case 8:
#line 216 "JavaGrammar.yy"
            {
	(yyval.node) = new Node(ptClassAccessMod, 0, 0, "public");
}
#line 1882 "JavaGrammar.tab.cc"
    break;

  case 9:
#line 222 "JavaGrammar.yy"
       {
	(yyval.node) = new Node(ptAccessMod, 0, 0, "default");
}
#line 1890 "JavaGrammar.tab.cc"
    break;

  case 10:
#line 225 "JavaGrammar.yy"
            {
	(yyval.node) = new Node(ptAccessMod, 0, 0, "pulic");
}
#line 1898 "JavaGrammar.tab.cc"
    break;

  case 11:
#line 228 "JavaGrammar.yy"
             {
	(yyval.node) = new Node(ptAccessMod, 0, 0, "private");
}
#line 1906 "JavaGrammar.tab.cc"
    break;

  case 12:
#line 231 "JavaGrammar.yy"
               {
	(yyval.node) = new Node(ptAccessMod, 0, 0, "protected");
}
#line 1914 "JavaGrammar.tab.cc"
    break;

  case 13:
#line 238 "JavaGrammar.yy"
       {
	(yyval.node) = new Node(ptClassMod, 0, 0, "default");
}
#line 1922 "JavaGrammar.tab.cc"
    break;

  case 14:
#line 241 "JavaGrammar.yy"
           {
	(yyval.node) = new Node(ptClassMod, 0, 0, "final");
}
#line 1930 "JavaGrammar.tab.cc"
    break;

  case 15:
#line 244 "JavaGrammar.yy"
              {
	(yyval.node) = new Node(ptClassMod, 0, 0, "abstract");
}
#line 1938 "JavaGrammar.tab.cc"
    break;

  case 16:
#line 250 "JavaGrammar.yy"
       {
	(yyval.node) = new Node(ptMethodMod, 0, 0, "default");
}
#line 1946 "JavaGrammar.tab.cc"
    break;

  case 17:
#line 253 "JavaGrammar.yy"
           {
	(yyval.node) = new Node(ptMethodMod, 0, 0, "final");
}
#line 1954 "JavaGrammar.tab.cc"
    break;

  case 18:
#line 256 "JavaGrammar.yy"
            {
	(yyval.node) = new Node(ptMethodMod, 0, 0, "static");
}
#line 1962 "JavaGrammar.tab.cc"
    break;

  case 19:
#line 259 "JavaGrammar.yy"
              {
	(yyval.node) = new Node(ptMethodMod, 0, 0, "abstract");
}
#line 1970 "JavaGrammar.tab.cc"
    break;

  case 20:
#line 262 "JavaGrammar.yy"
               {
	(yyval.node) = new Node(ptMethodMod, 0, 0, "transient");
}
#line 1978 "JavaGrammar.tab.cc"
    break;

  case 21:
#line 265 "JavaGrammar.yy"
                  {
	(yyval.node) = new Node(ptMethodMod, 0, 0, "synchronized");
}
#line 1986 "JavaGrammar.tab.cc"
    break;

  case 22:
#line 268 "JavaGrammar.yy"
              {
	(yyval.node) = new Node(ptMethodMod, 0, 0, "volatile");
}
#line 1994 "JavaGrammar.tab.cc"
    break;

  case 23:
#line 282 "JavaGrammar.yy"
       {
	(yyval.node) = new Node(ptEmpty, 0, 0, "");
}
#line 2002 "JavaGrammar.tab.cc"
    break;

  case 24:
#line 289 "JavaGrammar.yy"
                 {
	(yyval.node) = new Node(ptMethodContainer, 0, 0, "");
	(yyval.node)->attach_child(*(yyvsp[-1].node));
	if((yyvsp[0].node)->get_type() != ptEmpty){
		(yyval.node)->attach_child(*(yyvsp[0].node));
	}
}
#line 2014 "JavaGrammar.tab.cc"
    break;

  case 25:
#line 296 "JavaGrammar.yy"
                          {
	(yyval.node) = new Node(ptNestedClassContainer, 0, 0, "a nested class");	
}
#line 2022 "JavaGrammar.tab.cc"
    break;

  case 26:
#line 302 "JavaGrammar.yy"
                                                                                                                 {
	(yyval.node) = new Node(ptMethod, 0, 0, (yyvsp[-6].stVal));
	//method info
	(yyval.node)->attach_child(*(yyvsp[-9].node));
	(yyvsp[-9].node)->attach_child(*(yyvsp[-8].node));
	(yyvsp[-8].node)->attach_child(*(yyvsp[-7].node));
	//method parameters
	(yyvsp[-7].node)->attach_child(*(yyvsp[-4].node));
	//method body
	//$$->attach_child(*$9);
}
#line 2038 "JavaGrammar.tab.cc"
    break;

  case 27:
#line 316 "JavaGrammar.yy"
         {
	(yyval.node) = new Node(ptMethodReturnVoid, 0, 0, "");
}
#line 2046 "JavaGrammar.tab.cc"
    break;

  case 28:
#line 319 "JavaGrammar.yy"
          {
	(yyval.node) = (yyvsp[0].node);
}
#line 2054 "JavaGrammar.tab.cc"
    break;

  case 29:
#line 325 "JavaGrammar.yy"
                     {
	(yyval.node) = (yyvsp[0].node);
}
#line 2062 "JavaGrammar.tab.cc"
    break;

  case 30:
#line 328 "JavaGrammar.yy"
                                                 {
	(yyval.node) = (yyvsp[0].node);
	(yyval.node)->attach_child(*(yyvsp[-2].node));
}
#line 2071 "JavaGrammar.tab.cc"
    break;

  case 36:
#line 343 "JavaGrammar.yy"
        {
	(yyval.node) = new Node(ptDataType, 0, 0, "int");
}
#line 2079 "JavaGrammar.tab.cc"
    break;

  case 37:
#line 346 "JavaGrammar.yy"
             {
	(yyval.node) = new Node(ptDataType, 0, 0, "boolean");
}
#line 2087 "JavaGrammar.tab.cc"
    break;

  case 38:
#line 349 "JavaGrammar.yy"
           {
	(yyval.node) = new Node(ptDataType, 0, 0, "float");
}
#line 2095 "JavaGrammar.tab.cc"
    break;

  case 39:
#line 352 "JavaGrammar.yy"
                {
	(yyval.node) = new Node(ptInstanceType, 0, 0, (yyvsp[0].stVal));
}
#line 2103 "JavaGrammar.tab.cc"
    break;

  case 91:
#line 427 "JavaGrammar.yy"
                        {
	(yyval.node) = new Node(ptDeclaration, 0, 0, (yyvsp[0].stVal));
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 2112 "JavaGrammar.tab.cc"
    break;

  case 92:
#line 431 "JavaGrammar.yy"
                                                             {
	(yyval.node) = new Node(ptDeclaration, 0, 0, (yyvsp[0].stVal));
	Node* _n = new Node(ptInstanceType, 0, 0, (yyvsp[-4].stVal));
	_n->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*_n);
}
#line 2123 "JavaGrammar.tab.cc"
    break;

  case 93:
#line 437 "JavaGrammar.yy"
                                                   {
	(yyval.node) = new Node(ptArrayDeclaration, 0, 0, (yyvsp[0].stVal));
	(yyval.node)->attach_child(*(yyvsp[-3].node));
}
#line 2132 "JavaGrammar.tab.cc"
    break;

  case 94:
#line 441 "JavaGrammar.yy"
                                                   {
	(yyval.node) = new Node(ptArrayDeclaration, 0, 0, (yyvsp[-2].stVal));
	(yyval.node)->attach_child(*(yyvsp[-3].node));
}
#line 2141 "JavaGrammar.tab.cc"
    break;


#line 2145 "JavaGrammar.tab.cc"

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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
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
#line 532 "JavaGrammar.yy"


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
