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
	#include <fstream>
	#include "Node/Node.hpp"
	#include "nodeTypes.h"
	#include "expandParallel.cpp"
	#include "Dump/JavaDumper.cpp"

	extern int yylex();
	void yyerror(char const *error);

	Node* root;

#line 84 "JavaGrammar.tab.cc"

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
#line 15 "JavaGrammar.yy"

	#include <string>
	#include <iostream> 

#line 132 "JavaGrammar.tab.cc"

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
#line 20 "JavaGrammar.yy"

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


#line 262 "JavaGrammar.tab.cc"

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
#define YYLAST   1304

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  105
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  58
/* YYNRULES -- Number of rules.  */
#define YYNRULES  201
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  475

#define YYUNDEFTOK  2
#define YYMAXUTOK   342


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
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,    63,     2
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   167,   167,   180,   185,   192,   195,   203,   207,   215,
     218,   227,   231,   235,   240,   248,   253,   262,   267,   276,
     279,   283,   292,   295,   303,   307,   311,   315,   319,   323,
     327,   331,   335,   339,   343,   347,   351,   358,   362,   368,
     374,   379,   384,   392,   396,   402,   407,   412,   420,   426,
     436,   450,   464,   475,   483,   490,   493,   500,   503,   510,
     513,   519,   522,   526,   530,   535,   543,   546,   549,   552,
     555,   561,   564,   568,   575,   579,   583,   587,   591,   596,
     603,   606,   609,   612,   615,   621,   625,   628,   631,   634,
     637,   640,   643,   647,   651,   655,   660,   665,   670,   675,
     680,   685,   690,   695,   700,   705,   710,   715,   720,   725,
     730,   735,   740,   745,   753,   758,   763,   768,   773,   778,
     783,   791,   794,   797,   800,   803,   806,   809,   812,   815,
     818,   822,   829,   833,   837,   841,   846,   851,   859,   864,
     874,   878,   882,   886,   892,   898,   901,   906,   910,   914,
     919,   924,   927,   930,   938,   948,   953,   960,   968,   976,
     990,  1006,  1009,  1012,  1018,  1021,  1029,  1034,  1042,  1047,
    1056,  1064,  1067,  1073,  1077,  1085,  1090,  1095,  1100,  1108,
    1112,  1120,  1125,  1133,  1137,  1144,  1148,  1157,  1169,  1187,
    1191,  1200,  1208,  1213,  1221,  1226,  1234,  1239,  1247,  1253,
    1264,  1269
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
static const yytype_int16 yytoknum[] =
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

#define YYPACT_NINF (-341)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-144)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

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
       0,   199,     0,    69,     0,   162,   161,   163,     0,     0,
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
static const yytype_int8 yyr2[] =
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
#line 167 "JavaGrammar.yy"
                                    {
	// root is always a package (but the package can be no package)
	root = (yyvsp[-2].node);
	Node* _im = new Node(ptImports); //import section node
	_im->attach_child(*(yyvsp[-1].node));
	//right child of root is the import section
	root->attach_child(*_im);
	//right child of import section is the rest of the program starting with a class definition
	_im->attach_child(*(yyvsp[0].node));
}
#line 1957 "JavaGrammar.tab.cc"
    break;

  case 3:
#line 180 "JavaGrammar.yy"
       {
	//empty package section
	(yyval.node) = new Node(ptPackageContainer);
	(yyval.node)->attach_child(*(new Node(ptEmpty)));
}
#line 1967 "JavaGrammar.tab.cc"
    break;

  case 4:
#line 185 "JavaGrammar.yy"
                                  {
	(yyval.node) = new Node(ptPackageContainer);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 1976 "JavaGrammar.tab.cc"
    break;

  case 5:
#line 192 "JavaGrammar.yy"
       {
	(yyval.node) = new Node(ptEmpty);
}
#line 1984 "JavaGrammar.tab.cc"
    break;

  case 6:
#line 195 "JavaGrammar.yy"
                                  {
	(yyval.node) = new Node(ptImportContainer);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 1994 "JavaGrammar.tab.cc"
    break;

  case 7:
#line 203 "JavaGrammar.yy"
                                {
	(yyval.node) = new Node(ptImport);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 2003 "JavaGrammar.tab.cc"
    break;

  case 8:
#line 207 "JavaGrammar.yy"
                                                 {
	(yyval.node) = new Node(ptImport);
	(yyval.node)->attach_child(*(yyvsp[-3].node));
	(yyval.node)->attach_child(*(new Node(TOK_MUL)));
}
#line 2013 "JavaGrammar.tab.cc"
    break;

  case 9:
#line 215 "JavaGrammar.yy"
               {
	(yyval.node) = new Node(ptPackage, 0, 0, (yyvsp[0].stVal));
}
#line 2021 "JavaGrammar.tab.cc"
    break;

  case 10:
#line 218 "JavaGrammar.yy"
                                    {
	//$$ = new Node(ptPackage, 0, 0, $3);
	//$$->attach_child(*$1);
	(yyval.node) = (yyvsp[-2].node);
	(yyval.node)->attach_child(*(new Node(ptPackage, 0, 0, (yyvsp[0].stVal))));
}
#line 2032 "JavaGrammar.tab.cc"
    break;

  case 11:
#line 227 "JavaGrammar.yy"
             {
	(yyval.node) = new Node(ptTypeDec);
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2041 "JavaGrammar.tab.cc"
    break;

  case 12:
#line 231 "JavaGrammar.yy"
          {
	(yyval.node) = new Node(ptTypeDec);
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2050 "JavaGrammar.tab.cc"
    break;

  case 13:
#line 235 "JavaGrammar.yy"
                  {
	(yyval.node) = new Node(ptTypeDec);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2060 "JavaGrammar.tab.cc"
    break;

  case 14:
#line 240 "JavaGrammar.yy"
                      {
	(yyval.node) = new Node(ptTypeDec);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2070 "JavaGrammar.tab.cc"
    break;

  case 15:
#line 248 "JavaGrammar.yy"
                                                                     {
	(yyval.node) = new Node(ptInterface, 0, 0, (yyvsp[-3].stVal));
	(yyval.node)->attach_child(*(yyvsp[-5].node));
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 2080 "JavaGrammar.tab.cc"
    break;

  case 16:
#line 253 "JavaGrammar.yy"
                                                                                                 {
	(yyval.node) = new Node(ptInterface, 0, 0, (yyvsp[-5].stVal));
	(yyval.node)->attach_child(*(yyvsp[-7].node));
	(yyval.node)->attach_child(*(yyvsp[-1].node));
	(yyvsp[-7].node)->attach_child(*(new Node(ptExtends, 0, 0, (yyvsp[-3].stVal))));
}
#line 2091 "JavaGrammar.tab.cc"
    break;

  case 17:
#line 262 "JavaGrammar.yy"
                                                             {
	(yyval.node) = new Node(ptClass, 0, 0, (yyvsp[-3].stVal));
	(yyval.node)->attach_child(*(yyvsp[-5].node));
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 2101 "JavaGrammar.tab.cc"
    break;

  case 18:
#line 267 "JavaGrammar.yy"
                                                                                  {
	(yyval.node) = new Node(ptClass, 0, 0, (yyvsp[-4].stVal));
	(yyval.node)->attach_child(*(yyvsp[-6].node));
	(yyval.node)->attach_child(*(yyvsp[-1].node));
	(yyvsp[-6].node)->attach_child(*(yyvsp[-3].node));
}
#line 2112 "JavaGrammar.tab.cc"
    break;

  case 19:
#line 276 "JavaGrammar.yy"
                           {
	(yyval.node) = new Node(ptExtends, 0, 0, (yyvsp[0].stVal));
}
#line 2120 "JavaGrammar.tab.cc"
    break;

  case 20:
#line 279 "JavaGrammar.yy"
                                {
	(yyval.node) = new Node(ptImplements);
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2129 "JavaGrammar.tab.cc"
    break;

  case 21:
#line 283 "JavaGrammar.yy"
                                                           {
	(yyval.node) = new Node(ptExtends, 0, 0, (yyvsp[-2].stVal));
	Node* _imp = new Node(ptImplements);
	_imp->attach_child(*(yyvsp[0].node));
	(yyval.node)->attach_child(*_imp);
}
#line 2140 "JavaGrammar.tab.cc"
    break;

  case 22:
#line 292 "JavaGrammar.yy"
               {
	(yyval.node) = new Node(ptBasicIdentifier, 0, 0, (yyvsp[0].stVal));
}
#line 2148 "JavaGrammar.tab.cc"
    break;

  case 23:
#line 295 "JavaGrammar.yy"
                                          {
	(yyval.node) = new Node(ptBasicIdentifier, 0, 0, (yyvsp[-2].stVal));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2157 "JavaGrammar.tab.cc"
    break;

  case 24:
#line 303 "JavaGrammar.yy"
       {
	(yyval.node) = new Node(ptEmpty);
	(yyval.node)->attach_child(*(new Node(ptEmpty))); //ensure that whatever gets attached to $$ is a right node
}
#line 2166 "JavaGrammar.tab.cc"
    break;

  case 25:
#line 307 "JavaGrammar.yy"
               {
	(yyval.node) = new Node(ptMod, 0, 0, "final");
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2175 "JavaGrammar.tab.cc"
    break;

  case 26:
#line 311 "JavaGrammar.yy"
                  {
	(yyval.node) = new Node(ptMod, 0, 0, "abstract");
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2184 "JavaGrammar.tab.cc"
    break;

  case 27:
#line 315 "JavaGrammar.yy"
                  {
	(yyval.node) = new Node(ptMod, 0, 0, "strictfp");
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2193 "JavaGrammar.tab.cc"
    break;

  case 28:
#line 319 "JavaGrammar.yy"
                {
	(yyval.node) = new Node(ptMod, 0, 0, "static");
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2202 "JavaGrammar.tab.cc"
    break;

  case 29:
#line 323 "JavaGrammar.yy"
                {
	(yyval.node) = new Node(ptMod, 0, 0, "native");
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2211 "JavaGrammar.tab.cc"
    break;

  case 30:
#line 327 "JavaGrammar.yy"
                      {
	(yyval.node) = new Node(ptMod, 0, 0, "synchronized");
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2220 "JavaGrammar.tab.cc"
    break;

  case 31:
#line 331 "JavaGrammar.yy"
                   {
	(yyval.node) = new Node(ptMod, 0, 0, "transient");
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2229 "JavaGrammar.tab.cc"
    break;

  case 32:
#line 335 "JavaGrammar.yy"
                  {
	(yyval.node) = new Node(ptMod, 0, 0, "volatile");
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2238 "JavaGrammar.tab.cc"
    break;

  case 33:
#line 339 "JavaGrammar.yy"
                {
	(yyval.node) = new Node(ptMod, 0, 0, "public");
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2247 "JavaGrammar.tab.cc"
    break;

  case 34:
#line 343 "JavaGrammar.yy"
                 {
	(yyval.node) = new Node(ptMod, 0, 0, "private");
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2256 "JavaGrammar.tab.cc"
    break;

  case 35:
#line 347 "JavaGrammar.yy"
                   {
	(yyval.node) = new Node(ptMod, 0, 0, "protected");
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2265 "JavaGrammar.tab.cc"
    break;

  case 36:
#line 351 "JavaGrammar.yy"
                 {
	(yyval.node) = new Node(ptMod, 0, 0, "default");
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2274 "JavaGrammar.tab.cc"
    break;

  case 37:
#line 358 "JavaGrammar.yy"
       {
	(yyval.node) = new Node(ptClassBody);
	(yyval.node)->attach_child(*(new Node(ptEmpty)));
}
#line 2283 "JavaGrammar.tab.cc"
    break;

  case 38:
#line 362 "JavaGrammar.yy"
                                             {
	(yyval.node) = new Node(ptClassBody);
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyvsp[-2].node)->attach_child(*(yyvsp[-3].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2294 "JavaGrammar.tab.cc"
    break;

  case 39:
#line 368 "JavaGrammar.yy"
                                                {
	(yyval.node) = new Node(ptClassBody);
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyvsp[-2].node)->attach_child(*(yyvsp[-3].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2305 "JavaGrammar.tab.cc"
    break;

  case 40:
#line 374 "JavaGrammar.yy"
                  {
	(yyval.node) = new Node(ptClassBody);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2315 "JavaGrammar.tab.cc"
    break;

  case 41:
#line 379 "JavaGrammar.yy"
                    {
	(yyval.node) = new Node(ptClassBody);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2325 "JavaGrammar.tab.cc"
    break;

  case 42:
#line 384 "JavaGrammar.yy"
                        {
	(yyval.node) = new Node(ptClassBody);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2335 "JavaGrammar.tab.cc"
    break;

  case 43:
#line 392 "JavaGrammar.yy"
       {
	(yyval.node) = new Node(ptClassBody);
	(yyval.node)->attach_child(*(new Node(ptEmpty)));
}
#line 2344 "JavaGrammar.tab.cc"
    break;

  case 44:
#line 396 "JavaGrammar.yy"
                                                    {
	(yyval.node) = new Node(ptClassBody);
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyvsp[-2].node)->attach_child(*(yyvsp[-3].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2355 "JavaGrammar.tab.cc"
    break;

  case 45:
#line 402 "JavaGrammar.yy"
                      {
	(yyval.node) = new Node(ptClassBody);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2365 "JavaGrammar.tab.cc"
    break;

  case 46:
#line 407 "JavaGrammar.yy"
                        {
	(yyval.node) = new Node(ptClassBody);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2375 "JavaGrammar.tab.cc"
    break;

  case 47:
#line 412 "JavaGrammar.yy"
                            {
	(yyval.node) = new Node(ptClassBody);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2385 "JavaGrammar.tab.cc"
    break;

  case 48:
#line 420 "JavaGrammar.yy"
                                                                                     {
	(yyval.node) = new Node(ptAbstractMethodLabel, 0, 0, (yyvsp[-5].stVal));
	(yyval.node)->attach_child(*(yyvsp[-6].node));
	(yyvsp[-6].node)->attach_child(*(yyvsp[-1].node));
	(yyval.node)->attach_child(*(yyvsp[-3].node));
}
#line 2396 "JavaGrammar.tab.cc"
    break;

  case 49:
#line 426 "JavaGrammar.yy"
                                                                                      {
	(yyval.node) = new Node(ptAbstractMethodLabel, 0, 0, (yyvsp[-5].stVal));
	Node* _ret = new Node(TOK_VOID);
	_ret->attach_child(*(yyvsp[-1].node));
	(yyval.node)->attach_child(*_ret);
	(yyval.node)->attach_child(*(yyvsp[-3].node));
}
#line 2408 "JavaGrammar.tab.cc"
    break;

  case 50:
#line 436 "JavaGrammar.yy"
                                                                                                            {
	(yyval.node) = new Node(ptMethod, 0, 0, (yyvsp[-7].stVal));
	Node* _m1 = new Node(ptMethodLabel);
	_m1->attach_child(*(yyvsp[-9].node));
	_m1->attach_child(*(yyvsp[-8].node));
	Node* _m2 = new Node(ptMethodLabel);
	_m2->attach_child(*_m1);
	_m2->attach_child(*(yyvsp[-5].node));
	Node* _m3 = new Node(ptMethodLabel);
	_m3->attach_child(*_m2);
	_m3->attach_child(*(yyvsp[-3].node));
	(yyval.node)->attach_child(*_m3);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 2427 "JavaGrammar.tab.cc"
    break;

  case 51:
#line 450 "JavaGrammar.yy"
                                                                                                             {
	(yyval.node) = new Node(ptMethod, 0, 0, (yyvsp[-7].stVal));
	Node* _m1 = new Node(ptMethodLabel);
	_m1->attach_child(*(yyvsp[-9].node));
	_m1->attach_child(*(new Node(TOK_VOID)));
	Node* _m2 = new Node(ptMethodLabel);
	_m2->attach_child(*_m1);
	_m2->attach_child(*(yyvsp[-5].node));
	Node* _m3 = new Node(ptMethodLabel);
	_m3->attach_child(*_m2);
	_m3->attach_child(*(yyvsp[-3].node));
	(yyval.node)->attach_child(*_m3);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 2446 "JavaGrammar.tab.cc"
    break;

  case 52:
#line 464 "JavaGrammar.yy"
                                                                                                    {
	(yyval.node) = new Node(ptMethod, 0, 0, (yyvsp[-7].stVal));
	Node* _c1 = new Node(ptConstructorLabel);
	_c1->attach_child(*(yyvsp[-8].node));
	_c1->attach_child(*(yyvsp[-5].node));
	Node* _c2 = new Node(ptConstructorLabel);
	_c2->attach_child(*_c1);
	_c2->attach_child(*(yyvsp[-3].node));
	(yyval.node)->attach_child(*_c2);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 2462 "JavaGrammar.tab.cc"
    break;

  case 53:
#line 475 "JavaGrammar.yy"
                    {
	(yyval.node) = new Node(ptAbstractMethod);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2472 "JavaGrammar.tab.cc"
    break;

  case 54:
#line 483 "JavaGrammar.yy"
                                           {
	(yyval.node) = new Node(ptParallelBlock);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 2481 "JavaGrammar.tab.cc"
    break;

  case 55:
#line 490 "JavaGrammar.yy"
       {
	(yyval.node) = new Node(ptEmpty);
}
#line 2489 "JavaGrammar.tab.cc"
    break;

  case 56:
#line 493 "JavaGrammar.yy"
                            {
	(yyval.node) = new Node(ptThrows);
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2498 "JavaGrammar.tab.cc"
    break;

  case 57:
#line 500 "JavaGrammar.yy"
                {
	(yyval.node) = (yyvsp[0].node);
}
#line 2506 "JavaGrammar.tab.cc"
    break;

  case 58:
#line 503 "JavaGrammar.yy"
                                           {
	(yyval.node) = (yyvsp[-2].node);
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2515 "JavaGrammar.tab.cc"
    break;

  case 59:
#line 510 "JavaGrammar.yy"
       {
	(yyval.node) = new Node(ptEmpty);
}
#line 2523 "JavaGrammar.tab.cc"
    break;

  case 60:
#line 513 "JavaGrammar.yy"
            {
	(yyval.node) = (yyvsp[0].node);
}
#line 2531 "JavaGrammar.tab.cc"
    break;

  case 61:
#line 519 "JavaGrammar.yy"
       {
	(yyval.node) = new Node(ptEmpty);
}
#line 2539 "JavaGrammar.tab.cc"
    break;

  case 62:
#line 522 "JavaGrammar.yy"
            {
	(yyval.node) = new Node(ptArgument);
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2548 "JavaGrammar.tab.cc"
    break;

  case 63:
#line 526 "JavaGrammar.yy"
                     {
	(yyval.node) = new Node(ptArgument);
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2557 "JavaGrammar.tab.cc"
    break;

  case 64:
#line 530 "JavaGrammar.yy"
                               {
	(yyval.node) = new Node(ptArgument);
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2567 "JavaGrammar.tab.cc"
    break;

  case 65:
#line 535 "JavaGrammar.yy"
                                        {
	(yyval.node) = new Node(ptArgument);
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2577 "JavaGrammar.tab.cc"
    break;

  case 66:
#line 543 "JavaGrammar.yy"
        {
	(yyval.node) = new Node(ptDataType, 0, 0, "int");
}
#line 2585 "JavaGrammar.tab.cc"
    break;

  case 67:
#line 546 "JavaGrammar.yy"
             {
	(yyval.node) = new Node(ptDataType, 0, 0, "boolean");
}
#line 2593 "JavaGrammar.tab.cc"
    break;

  case 68:
#line 549 "JavaGrammar.yy"
           {
	(yyval.node) = new Node(ptDataType, 0, 0, "float");
}
#line 2601 "JavaGrammar.tab.cc"
    break;

  case 69:
#line 552 "JavaGrammar.yy"
                {
	(yyval.node) = new Node(ptDataType, 0, 0, (yyvsp[0].stVal));
}
#line 2609 "JavaGrammar.tab.cc"
    break;

  case 70:
#line 555 "JavaGrammar.yy"
            {
	(yyval.node) = new Node(ptDataType, 0, 0, "double");
}
#line 2617 "JavaGrammar.tab.cc"
    break;

  case 71:
#line 561 "JavaGrammar.yy"
       {
	(yyval.node) = new Node(ptEmpty);
}
#line 2625 "JavaGrammar.tab.cc"
    break;

  case 72:
#line 564 "JavaGrammar.yy"
                 {
	(yyval.node) = (yyvsp[-1].node);
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2634 "JavaGrammar.tab.cc"
    break;

  case 73:
#line 568 "JavaGrammar.yy"
                     {
	(yyval.node) = (yyvsp[-1].node);
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2643 "JavaGrammar.tab.cc"
    break;

  case 74:
#line 575 "JavaGrammar.yy"
                             {
	(yyval.node) = new Node(ptStatement);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 2652 "JavaGrammar.tab.cc"
    break;

  case 75:
#line 579 "JavaGrammar.yy"
                      {
	(yyval.node) = new Node(ptStatement);
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2661 "JavaGrammar.tab.cc"
    break;

  case 76:
#line 583 "JavaGrammar.yy"
                               {
	(yyval.node) = new Node(ptStatement);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 2670 "JavaGrammar.tab.cc"
    break;

  case 77:
#line 587 "JavaGrammar.yy"
                                  {
	(yyval.node) = new Node(ptStatement);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 2679 "JavaGrammar.tab.cc"
    break;

  case 78:
#line 591 "JavaGrammar.yy"
               {
	(yyval.node) = new Node(ptStatement);
	//$$->attach_child(*(new Node(ptEmpty, 0, 0, "placeholder trycatch")));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2689 "JavaGrammar.tab.cc"
    break;

  case 79:
#line 596 "JavaGrammar.yy"
                     {
	(yyval.node) = new Node(ptStatement);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 2698 "JavaGrammar.tab.cc"
    break;

  case 80:
#line 603 "JavaGrammar.yy"
                   {
	(yyval.node) = (yyvsp[0].node);
}
#line 2706 "JavaGrammar.tab.cc"
    break;

  case 81:
#line 606 "JavaGrammar.yy"
            {
	(yyval.node) = (yyvsp[0].node);
}
#line 2714 "JavaGrammar.tab.cc"
    break;

  case 82:
#line 609 "JavaGrammar.yy"
               {
	(yyval.node) = (yyvsp[0].node);
}
#line 2722 "JavaGrammar.tab.cc"
    break;

  case 83:
#line 612 "JavaGrammar.yy"
              {
	(yyval.node) = (yyvsp[0].node);
}
#line 2730 "JavaGrammar.tab.cc"
    break;

  case 84:
#line 615 "JavaGrammar.yy"
                     {
	(yyval.node) = (yyvsp[0].node);
}
#line 2738 "JavaGrammar.tab.cc"
    break;

  case 85:
#line 621 "JavaGrammar.yy"
                                 {
	(yyval.node) = new Node(ptEnclosedExpression);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 2747 "JavaGrammar.tab.cc"
    break;

  case 86:
#line 625 "JavaGrammar.yy"
            {
	(yyval.node) = new Node(TOK_INTVAL, (yyvsp[0].iVal), 0, "");
}
#line 2755 "JavaGrammar.tab.cc"
    break;

  case 87:
#line 628 "JavaGrammar.yy"
              {
	(yyval.node) = new Node(TOK_FLOATVAL, 0, (yyvsp[0].fVal), "");
}
#line 2763 "JavaGrammar.tab.cc"
    break;

  case 88:
#line 631 "JavaGrammar.yy"
             {
	(yyval.node) = new Node(TOK_BOOLVAL, (yyvsp[0].bVal), 0, "");
}
#line 2771 "JavaGrammar.tab.cc"
    break;

  case 89:
#line 634 "JavaGrammar.yy"
               {
	(yyval.node) = new Node(TOK_STRINGVAL, 0, 0, (yyvsp[0].stVal));
}
#line 2779 "JavaGrammar.tab.cc"
    break;

  case 90:
#line 637 "JavaGrammar.yy"
                {
	(yyval.node) = new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[0].stVal));
}
#line 2787 "JavaGrammar.tab.cc"
    break;

  case 91:
#line 640 "JavaGrammar.yy"
                {
	(yyval.node) = (yyvsp[0].node);
}
#line 2795 "JavaGrammar.tab.cc"
    break;

  case 92:
#line 643 "JavaGrammar.yy"
                                                   {
	(yyval.node) = new Node(ptArrayAccess, 0, 0, (yyvsp[-3].stVal));
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 2804 "JavaGrammar.tab.cc"
    break;

  case 93:
#line 647 "JavaGrammar.yy"
                    {
	(yyval.node) = new Node(ptNegation);
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2813 "JavaGrammar.tab.cc"
    break;

  case 94:
#line 651 "JavaGrammar.yy"
                       {
	(yyval.node) = new Node(ptBitNegation);
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2822 "JavaGrammar.tab.cc"
    break;

  case 95:
#line 655 "JavaGrammar.yy"
                               {
	(yyval.node) = new Node(ptOperation, 0, 0, "+");
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2832 "JavaGrammar.tab.cc"
    break;

  case 96:
#line 660 "JavaGrammar.yy"
                               {
	(yyval.node) = new Node(ptOperation, 0, 0, "-");
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2842 "JavaGrammar.tab.cc"
    break;

  case 97:
#line 665 "JavaGrammar.yy"
                               {
	(yyval.node) = new Node(ptOperation, 0, 0, "%");
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2852 "JavaGrammar.tab.cc"
    break;

  case 98:
#line 670 "JavaGrammar.yy"
                               {
	(yyval.node) = new Node(ptOperation, 0, 0, "/");
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2862 "JavaGrammar.tab.cc"
    break;

  case 99:
#line 675 "JavaGrammar.yy"
                               {
	(yyval.node) = new Node(ptOperation, 0, 0, "*");
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2872 "JavaGrammar.tab.cc"
    break;

  case 100:
#line 680 "JavaGrammar.yy"
                                 {
	(yyval.node) = new Node(ptOperation, 0, 0, "==");
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2882 "JavaGrammar.tab.cc"
    break;

  case 101:
#line 685 "JavaGrammar.yy"
                                  {
	(yyval.node) = new Node(ptOperation, 0, 0, "!=");
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2892 "JavaGrammar.tab.cc"
    break;

  case 102:
#line 690 "JavaGrammar.yy"
                                   {
	(yyval.node) = new Node(ptOperation, 0, 0, ">");
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2902 "JavaGrammar.tab.cc"
    break;

  case 103:
#line 695 "JavaGrammar.yy"
                                {
	(yyval.node) = new Node(ptOperation, 0, 0, "<");
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2912 "JavaGrammar.tab.cc"
    break;

  case 104:
#line 700 "JavaGrammar.yy"
                                  {
	(yyval.node) = new Node(ptOperation, 0, 0, ">=");
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2922 "JavaGrammar.tab.cc"
    break;

  case 105:
#line 705 "JavaGrammar.yy"
                                  {
	(yyval.node) = new Node(ptOperation, 0, 0, "<=");
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2932 "JavaGrammar.tab.cc"
    break;

  case 106:
#line 710 "JavaGrammar.yy"
                               {
	(yyval.node) = new Node(ptOperation, 0, 0, "&&");
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2942 "JavaGrammar.tab.cc"
    break;

  case 107:
#line 715 "JavaGrammar.yy"
                              {
	(yyval.node) = new Node(ptOperation, 0, 0, "||");
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2952 "JavaGrammar.tab.cc"
    break;

  case 108:
#line 720 "JavaGrammar.yy"
                                 {
	(yyval.node) = new Node(ptOperation, 0, 0, "|");
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2962 "JavaGrammar.tab.cc"
    break;

  case 109:
#line 725 "JavaGrammar.yy"
                                  {
	(yyval.node) = new Node(ptOperation, 0, 0, "&");
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2972 "JavaGrammar.tab.cc"
    break;

  case 110:
#line 730 "JavaGrammar.yy"
                                  {
	(yyval.node) = new Node(ptOperation, 0, 0, "^");
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2982 "JavaGrammar.tab.cc"
    break;

  case 111:
#line 735 "JavaGrammar.yy"
                                  {
	(yyval.node) = new Node(ptOperation, 0, 0, "<<");
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2992 "JavaGrammar.tab.cc"
    break;

  case 112:
#line 740 "JavaGrammar.yy"
                                  {
	(yyval.node) = new Node(ptOperation, 0, 0, ">>");
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 3002 "JavaGrammar.tab.cc"
    break;

  case 113:
#line 745 "JavaGrammar.yy"
                                   {
	(yyval.node) = new Node(ptOperation, 0, 0, ">>>");
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 3012 "JavaGrammar.tab.cc"
    break;

  case 114:
#line 753 "JavaGrammar.yy"
                                        {
	(yyval.node) = new Node(ptAssignment, 0, 0, "%=");
	(yyval.node)->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[-2].stVal))));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 3022 "JavaGrammar.tab.cc"
    break;

  case 115:
#line 758 "JavaGrammar.yy"
                                         {
	(yyval.node) = new Node(ptAssignment, 0, 0, "/=");
	(yyval.node)->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[-2].stVal))));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 3032 "JavaGrammar.tab.cc"
    break;

  case 116:
#line 763 "JavaGrammar.yy"
                                         {
	(yyval.node) = new Node(ptAssignment, 0, 0, "*=");
	(yyval.node)->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[-2].stVal))));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 3042 "JavaGrammar.tab.cc"
    break;

  case 117:
#line 768 "JavaGrammar.yy"
                                         {
	(yyval.node) = new Node(ptAssignment, 0, 0, "+=");
	(yyval.node)->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[-2].stVal))));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 3052 "JavaGrammar.tab.cc"
    break;

  case 118:
#line 773 "JavaGrammar.yy"
                                         {
	(yyval.node) = new Node(ptAssignment, 0, 0, "-=");
	(yyval.node)->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[-2].stVal))));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 3062 "JavaGrammar.tab.cc"
    break;

  case 119:
#line 778 "JavaGrammar.yy"
                                       {
	(yyval.node) = new Node(ptAssignment, 0, 0, "=");
	(yyval.node)->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[-2].stVal))));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 3072 "JavaGrammar.tab.cc"
    break;

  case 120:
#line 783 "JavaGrammar.yy"
                                               {
	(yyval.node) = new Node(ptAssignment, 0, 0, "=");
	(yyval.node)->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[-2].stVal))));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 3082 "JavaGrammar.tab.cc"
    break;

  case 121:
#line 791 "JavaGrammar.yy"
          {
	(yyval.node) = (yyvsp[0].node);
}
#line 3090 "JavaGrammar.tab.cc"
    break;

  case 122:
#line 794 "JavaGrammar.yy"
             {
	(yyval.node) = (yyvsp[0].node);
}
#line 3098 "JavaGrammar.tab.cc"
    break;

  case 123:
#line 797 "JavaGrammar.yy"
         {
	(yyval.node) = (yyvsp[0].node);
}
#line 3106 "JavaGrammar.tab.cc"
    break;

  case 124:
#line 800 "JavaGrammar.yy"
             {
	(yyval.node) = (yyvsp[0].node);
}
#line 3114 "JavaGrammar.tab.cc"
    break;

  case 125:
#line 803 "JavaGrammar.yy"
             {
	(yyval.node) = (yyvsp[0].node);
}
#line 3122 "JavaGrammar.tab.cc"
    break;

  case 126:
#line 806 "JavaGrammar.yy"
                 {
	(yyval.node) = (yyvsp[0].node);
}
#line 3130 "JavaGrammar.tab.cc"
    break;

  case 127:
#line 809 "JavaGrammar.yy"
                 {
	(yyval.node) = (yyvsp[0].node);
}
#line 3138 "JavaGrammar.tab.cc"
    break;

  case 128:
#line 812 "JavaGrammar.yy"
                    {
	(yyval.node) = new Node(TOK_BREAK);
}
#line 3146 "JavaGrammar.tab.cc"
    break;

  case 129:
#line 815 "JavaGrammar.yy"
                       {
	(yyval.node) = new Node(TOK_CONTINUE);
}
#line 3154 "JavaGrammar.tab.cc"
    break;

  case 130:
#line 818 "JavaGrammar.yy"
                                {
	(yyval.node) = new Node(ptReturn);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 3163 "JavaGrammar.tab.cc"
    break;

  case 131:
#line 822 "JavaGrammar.yy"
                               {
	(yyval.node) = new Node(ptYield);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 3172 "JavaGrammar.tab.cc"
    break;

  case 132:
#line 829 "JavaGrammar.yy"
               {
	(yyval.node) = new Node(ptIdentifierContainer);
	(yyval.node)->attach_child(*(new Node(ptIdentifier, 0, 0, (yyvsp[0].stVal))));
}
#line 3181 "JavaGrammar.tab.cc"
    break;

  case 133:
#line 833 "JavaGrammar.yy"
                                          {
	(yyval.node) = new Node(ptIdentifierContainer);
	(yyval.node)->attach_child(*(new Node(ptArrayIdentifier, 0, 0, (yyvsp[-2].stVal))));
}
#line 3190 "JavaGrammar.tab.cc"
    break;

  case 134:
#line 837 "JavaGrammar.yy"
                                          {
	(yyval.node) = new Node(ptIdentifierContainer);
	(yyval.node)->attach_child(*(new Node(ptArrayIdentifier, 0, 0, (yyvsp[0].stVal))));
}
#line 3199 "JavaGrammar.tab.cc"
    break;

  case 135:
#line 841 "JavaGrammar.yy"
                                                               {
	(yyval.node) = new Node(ptIdentifierContainer);
	(yyval.node)->attach_child(*(new Node(ptArrayIdentifier, 0, 0, (yyvsp[-4].stVal))));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 3209 "JavaGrammar.tab.cc"
    break;

  case 136:
#line 846 "JavaGrammar.yy"
                                                               {
	(yyval.node) = new Node(ptIdentifierContainer);
	(yyval.node)->attach_child(*(new Node(ptArrayIdentifier, 0, 0, (yyvsp[-2].stVal))));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 3219 "JavaGrammar.tab.cc"
    break;

  case 137:
#line 851 "JavaGrammar.yy"
                                     {
	(yyval.node) = new Node(ptIdentifierContainer);
	(yyval.node)->attach_child(*(new Node(ptIdentifier, 0, 0, (yyvsp[-2].stVal))));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 3229 "JavaGrammar.tab.cc"
    break;

  case 138:
#line 859 "JavaGrammar.yy"
                    {
	(yyval.node) = new Node(ptDeclarationStatement);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
	(yyvsp[-1].node)->attach_child(*(yyvsp[0].node));
}
#line 3239 "JavaGrammar.tab.cc"
    break;

  case 139:
#line 864 "JavaGrammar.yy"
                                                         {
	(yyval.node) = new Node(ptDeclarationStatement);
	Node* _it = new Node(ptInstanceGeneric, 0, 0, (yyvsp[-4].stVal));
	_it->attach_child(*(yyvsp[0].node));
	_it->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*_it);
}
#line 3251 "JavaGrammar.tab.cc"
    break;

  case 140:
#line 874 "JavaGrammar.yy"
                        {
	(yyval.node) = new Node(ptDeclaration, 0, 0, (yyvsp[0].stVal));
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 3260 "JavaGrammar.tab.cc"
    break;

  case 141:
#line 878 "JavaGrammar.yy"
                                                   {
	(yyval.node) = new Node(ptArrayDeclaration, 0, 0, (yyvsp[0].stVal));
	(yyval.node)->attach_child(*(yyvsp[-3].node));
}
#line 3269 "JavaGrammar.tab.cc"
    break;

  case 142:
#line 882 "JavaGrammar.yy"
                                                   {
	(yyval.node) = new Node(ptArrayDeclaration, 0, 0, (yyvsp[-2].stVal));
	(yyval.node)->attach_child(*(yyvsp[-3].node));
}
#line 3278 "JavaGrammar.tab.cc"
    break;

  case 143:
#line 886 "JavaGrammar.yy"
                                                             {
	(yyval.node) = new Node(ptDeclaration, 0, 0, (yyvsp[0].stVal));
	Node* _it = new Node(ptInstanceGeneric, 0, 0, (yyvsp[-4].stVal));
	_it->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*_it);
}
#line 3289 "JavaGrammar.tab.cc"
    break;

  case 144:
#line 892 "JavaGrammar.yy"
                {
	(yyval.node) = (yyvsp[0].node);
}
#line 3297 "JavaGrammar.tab.cc"
    break;

  case 145:
#line 898 "JavaGrammar.yy"
           {
	(yyval.node) = (yyvsp[0].node);
}
#line 3305 "JavaGrammar.tab.cc"
    break;

  case 146:
#line 901 "JavaGrammar.yy"
                                                       {
	(yyval.node) = new Node(ptArraySizeInitializer);
	(yyval.node)->attach_child(*(yyvsp[-3].node));
	(yyval.node)->attach_child(*(new Node(TOK_INTVAL, (yyvsp[-1].iVal), 0, "")));
}
#line 3315 "JavaGrammar.tab.cc"
    break;

  case 147:
#line 906 "JavaGrammar.yy"
                                {
	(yyval.node) = new Node(ptArrayExplicitInitializer);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 3324 "JavaGrammar.tab.cc"
    break;

  case 148:
#line 910 "JavaGrammar.yy"
                                                                           {
	(yyval.node) = new Node(ptArrayExplicitInitializer);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 3333 "JavaGrammar.tab.cc"
    break;

  case 149:
#line 914 "JavaGrammar.yy"
                                                       {
	(yyval.node) = new Node(ptInstanceInitializer);
	(yyval.node)->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[-3].stVal))));
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 3343 "JavaGrammar.tab.cc"
    break;

  case 150:
#line 919 "JavaGrammar.yy"
                                                                                       {
	(yyval.node) = new Node(ptAnonymousClass, 0, 0, (yyvsp[-6].stVal));
	(yyval.node)->attach_child(*(yyvsp[-4].node));
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 3353 "JavaGrammar.tab.cc"
    break;

  case 151:
#line 924 "JavaGrammar.yy"
            {
	(yyval.node) = (yyvsp[0].node);
}
#line 3361 "JavaGrammar.tab.cc"
    break;

  case 152:
#line 927 "JavaGrammar.yy"
                    {
	(yyval.node) = (yyvsp[0].node);
}
#line 3369 "JavaGrammar.tab.cc"
    break;

  case 153:
#line 930 "JavaGrammar.yy"
                                                      {
	(yyval.node) = new Node(ptDataStructureInitializer);
	(yyval.node)->attach_child(*(yyvsp[-3].node));
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 3379 "JavaGrammar.tab.cc"
    break;

  case 154:
#line 938 "JavaGrammar.yy"
                                  {
	(yyval.node) = new Node(ptInitializationContainer);
	Node* _is = new Node(ptInitializationStatement);
	_is->attach_child(*(yyvsp[-2].node));
	_is->attach_child(*(yyvsp[0].node));
	(yyval.node)->attach_child(*_is);
}
#line 3391 "JavaGrammar.tab.cc"
    break;

  case 155:
#line 948 "JavaGrammar.yy"
                                             {
	(yyval.node) = new Node(ptDataStructure);
	(yyval.node)->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[-3].stVal))));
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 3401 "JavaGrammar.tab.cc"
    break;

  case 156:
#line 953 "JavaGrammar.yy"
                                     {
	(yyval.node) = new Node(ptDataStructure);
	(yyval.node)->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[-2].stVal))));
}
#line 3410 "JavaGrammar.tab.cc"
    break;

  case 157:
#line 960 "JavaGrammar.yy"
                                                                       {
	(yyval.node) = new Node(ptWhile);
	(yyval.node)->attach_child(*(yyvsp[-4].node));
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 3420 "JavaGrammar.tab.cc"
    break;

  case 158:
#line 968 "JavaGrammar.yy"
                                                                                       {
	(yyval.node) = new Node(ptDoWhile);
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[-6].node));
}
#line 3430 "JavaGrammar.tab.cc"
    break;

  case 159:
#line 976 "JavaGrammar.yy"
                                                                                                         {
	(yyval.node) = new Node(ptFor);
	Node* _init = new Node(ptStatement);
	Node* _exp = new Node(ptStatement);
	_init->attach_child(*(yyvsp[-8].node));
	_init->attach_child(*_exp);
	_exp->attach_child(*(yyvsp[-6].node));
	_exp->attach_child(*(yyvsp[-4].node));
	(yyval.node)->attach_child(*_init);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 3446 "JavaGrammar.tab.cc"
    break;

  case 160:
#line 990 "JavaGrammar.yy"
                                                                                                           {
	(yyval.node) = new Node(ptForEach);
	Node* _dec = new Node(ptDeclaration, 0, 0, (yyvsp[-6].stVal));
	_dec->attach_child(*(yyvsp[-7].node));
	//Node* _id_con = new Node(ptIdentifierContainer);
	//_dec->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, $4)));
	//_dec->attach_child(*_id_con);
	Node* _f_inf = new Node(ptForEachDec);
	_f_inf->attach_child(*_dec);
	_f_inf->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[-4].stVal))));
	(yyval.node)->attach_child(*_f_inf);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 3464 "JavaGrammar.tab.cc"
    break;

  case 161:
#line 1006 "JavaGrammar.yy"
                     {
	(yyval.node) = (yyvsp[0].node);
}
#line 3472 "JavaGrammar.tab.cc"
    break;

  case 162:
#line 1009 "JavaGrammar.yy"
                     {
	(yyval.node) = (yyvsp[0].node);
}
#line 3480 "JavaGrammar.tab.cc"
    break;

  case 163:
#line 1012 "JavaGrammar.yy"
                         {
	(yyval.node) = (yyvsp[0].node);
}
#line 3488 "JavaGrammar.tab.cc"
    break;

  case 164:
#line 1018 "JavaGrammar.yy"
                    {
	(yyval.node) = (yyvsp[0].node);
}
#line 3496 "JavaGrammar.tab.cc"
    break;

  case 165:
#line 1021 "JavaGrammar.yy"
                                         {
	(yyval.node) = new Node(ptArgument);
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 3506 "JavaGrammar.tab.cc"
    break;

  case 166:
#line 1029 "JavaGrammar.yy"
                                                                    {
	(yyval.node) = new Node(ptIf);
	(yyval.node)->attach_child(*(yyvsp[-4].node));
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 3516 "JavaGrammar.tab.cc"
    break;

  case 167:
#line 1034 "JavaGrammar.yy"
                                                   {
	(yyval.node) = new Node(ptIf);
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 3526 "JavaGrammar.tab.cc"
    break;

  case 168:
#line 1042 "JavaGrammar.yy"
                                                 {
	(yyval.node) = new Node(ptIfElse);
	(yyval.node)->attach_child(*(yyvsp[-4].node));
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 3536 "JavaGrammar.tab.cc"
    break;

  case 169:
#line 1047 "JavaGrammar.yy"
                                {
	(yyval.node) = new Node(ptIfElse);
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 3546 "JavaGrammar.tab.cc"
    break;

  case 170:
#line 1056 "JavaGrammar.yy"
                                                                              {
	(yyval.node) = new Node(ptSwitch);
	(yyval.node)->attach_child(*(yyvsp[-4].node));
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 3556 "JavaGrammar.tab.cc"
    break;

  case 171:
#line 1064 "JavaGrammar.yy"
            {
	(yyval.node) = (yyvsp[0].node);
}
#line 3564 "JavaGrammar.tab.cc"
    break;

  case 172:
#line 1067 "JavaGrammar.yy"
                   {
	(yyval.node) = (yyvsp[0].node);
}
#line 3572 "JavaGrammar.tab.cc"
    break;

  case 173:
#line 1073 "JavaGrammar.yy"
           {
	(yyval.node) = new Node(ptSwitchBlock);
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 3581 "JavaGrammar.tab.cc"
    break;

  case 174:
#line 1077 "JavaGrammar.yy"
                        {
	(yyval.node) = new Node(ptSwitchBlock);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 3591 "JavaGrammar.tab.cc"
    break;

  case 175:
#line 1085 "JavaGrammar.yy"
                                                    {
	(yyval.node) = new Node(ptSwitchRule);
	(yyval.node)->attach_child(*(yyvsp[-3].node));
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 3601 "JavaGrammar.tab.cc"
    break;

  case 176:
#line 1090 "JavaGrammar.yy"
                                            {
	(yyval.node) = new Node(ptSwitchRule);
	(yyval.node)->attach_child(*(yyvsp[-3].node));
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 3611 "JavaGrammar.tab.cc"
    break;

  case 177:
#line 1095 "JavaGrammar.yy"
                                                    {
	(yyval.node) = new Node(ptSwitchRule);
	(yyval.node)->attach_child(*(yyvsp[-4].node));
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 3621 "JavaGrammar.tab.cc"
    break;

  case 178:
#line 1100 "JavaGrammar.yy"
                                            {
	(yyval.node) = new Node(ptSwitchRule);
	(yyval.node)->attach_child(*(yyvsp[-3].node));
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 3631 "JavaGrammar.tab.cc"
    break;

  case 179:
#line 1108 "JavaGrammar.yy"
                 {
	(yyval.node) = new Node(ptSwitchBlock);
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 3640 "JavaGrammar.tab.cc"
    break;

  case 180:
#line 1112 "JavaGrammar.yy"
                                    {
	(yyval.node) = new Node(ptSwitchBlock);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 3650 "JavaGrammar.tab.cc"
    break;

  case 181:
#line 1120 "JavaGrammar.yy"
                                                  {
	(yyval.node) = new Node(ptSwitchState);
	(yyval.node)->attach_child(*(yyvsp[-4].node));
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 3660 "JavaGrammar.tab.cc"
    break;

  case 182:
#line 1125 "JavaGrammar.yy"
                             {
	(yyval.node) = new Node(ptSwitchState);
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 3670 "JavaGrammar.tab.cc"
    break;

  case 183:
#line 1133 "JavaGrammar.yy"
              {
	(yyval.node) = new Node(ptSwitchLabel);
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 3679 "JavaGrammar.tab.cc"
    break;

  case 184:
#line 1137 "JavaGrammar.yy"
             {
	(yyval.node) = new Node(ptSwitchLabel);
	(yyval.node)->attach_child(*(new Node(TOK_DEFAULT)));
}
#line 3688 "JavaGrammar.tab.cc"
    break;

  case 185:
#line 1144 "JavaGrammar.yy"
           {
	(yyval.node) = new Node(ptCase);
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 3697 "JavaGrammar.tab.cc"
    break;

  case 186:
#line 1148 "JavaGrammar.yy"
                           {
	(yyval.node) = new Node(ptCase);
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 3707 "JavaGrammar.tab.cc"
    break;

  case 187:
#line 1157 "JavaGrammar.yy"
                                                                                                                             {
	(yyval.node) = new Node(ptTryCatch);
	Node* _try = new Node(ptTry);
	Node* _exc = new Node(ptExceptionContainer, 0, 0, (yyvsp[-4].stVal));
	Node* _cat = new Node(ptCatch);
	_try->attach_child(*(yyvsp[-9].node));
	_try->attach_child(*_exc);
	_exc->attach_child(*(yyvsp[-5].node));
	_exc->attach_child(*_cat);
	_cat->attach_child(*(yyvsp[-1].node));
	(yyval.node)->attach_child(*_try);
}
#line 3724 "JavaGrammar.tab.cc"
    break;

  case 188:
#line 1169 "JavaGrammar.yy"
                                                                                                                                                                       {
	(yyval.node) = new Node(ptTryCatch);
	Node* _try = new Node(ptTry);
	Node* _exc = new Node(ptExceptionContainer, 0, 0, (yyvsp[-8].stVal));
	Node* _cat = new Node(ptCatch);
	Node* _fin = new Node(ptFinally);
	_try->attach_child(*(yyvsp[-13].node));
	_try->attach_child(*_exc);
	_exc->attach_child(*(yyvsp[-9].node));
	_exc->attach_child(*_cat);
	_cat->attach_child(*(yyvsp[-5].node));
	_cat->attach_child(*_fin);
	_fin->attach_child(*(yyvsp[-1].node));
	(yyval.node)->attach_child(*_try);
}
#line 3744 "JavaGrammar.tab.cc"
    break;

  case 189:
#line 1187 "JavaGrammar.yy"
               {
	(yyval.node) = new Node(ptException);
	(yyval.node)->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[0].stVal))));
}
#line 3753 "JavaGrammar.tab.cc"
    break;

  case 190:
#line 1191 "JavaGrammar.yy"
                                        {
	(yyval.node) = new Node(ptException);
	(yyval.node)->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[-2].stVal))));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 3763 "JavaGrammar.tab.cc"
    break;

  case 191:
#line 1200 "JavaGrammar.yy"
                                                                {
	(yyval.node) = new Node(ptThrowState);
	(yyval.node)->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[-3].stVal))));
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 3773 "JavaGrammar.tab.cc"
    break;

  case 192:
#line 1208 "JavaGrammar.yy"
                          {
	(yyval.node) = new Node(ptPostDecrement);
	(yyval.node)->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[-1].stVal))));
	(yyval.node)->attach_child(*(new Node(TOK_ADDADD)));
}
#line 3783 "JavaGrammar.tab.cc"
    break;

  case 193:
#line 1213 "JavaGrammar.yy"
                           {
	(yyval.node) = new Node(ptPostDecrement);
	(yyval.node)->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[-1].stVal))));
	(yyval.node)->attach_child(*(new Node(TOK_SUBSUB)));
}
#line 3793 "JavaGrammar.tab.cc"
    break;

  case 194:
#line 1221 "JavaGrammar.yy"
                          {
	(yyval.node) = new Node(ptPreDecrement);
	(yyval.node)->attach_child(*(new Node(TOK_ADDADD)));
	(yyval.node)->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[0].stVal))));
}
#line 3803 "JavaGrammar.tab.cc"
    break;

  case 195:
#line 1226 "JavaGrammar.yy"
                           {
	(yyval.node) = new Node(ptPreDecrement);
	(yyval.node)->attach_child(*(new Node(TOK_SUBSUB)));
	(yyval.node)->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[0].stVal))));
}
#line 3813 "JavaGrammar.tab.cc"
    break;

  case 196:
#line 1234 "JavaGrammar.yy"
                                  {
	(yyval.node) = new Node(ptInstanceMethodCall);
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 3823 "JavaGrammar.tab.cc"
    break;

  case 197:
#line 1239 "JavaGrammar.yy"
                                   {
	(yyval.node) = new Node(ptInstanceMethodCall);
	(yyval.node)->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[-2].stVal))));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 3833 "JavaGrammar.tab.cc"
    break;

  case 198:
#line 1247 "JavaGrammar.yy"
                                              {
	(yyval.node) = new Node(ptMethodCall);
	Node* _method_name = new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[-3].stVal));
	(yyval.node)->attach_child(*_method_name);
	_method_name->attach_child(*(yyvsp[-1].node));
}
#line 3844 "JavaGrammar.tab.cc"
    break;

  case 199:
#line 1253 "JavaGrammar.yy"
                                                                  {
	(yyval.node) = (yyvsp[-5].node);
	Node* _method_call = new Node(ptMethodCall);
	Node* _method_name = new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[-3].stVal));
	_method_call->attach_child(*_method_name);
	_method_name->attach_child(*(yyvsp[-1].node));
	(yyval.node)->attach_child(*_method_call);
}
#line 3857 "JavaGrammar.tab.cc"
    break;

  case 200:
#line 1264 "JavaGrammar.yy"
                                      {
	(yyval.node) = new Node(ptFieldReference);
	(yyval.node)->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[-2].stVal))));
	(yyval.node)->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[0].stVal))));
}
#line 3867 "JavaGrammar.tab.cc"
    break;

  case 201:
#line 1269 "JavaGrammar.yy"
                                                                        {
	(yyval.node) = new Node(ptFieldReference);
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[0].stVal))));
}
#line 3877 "JavaGrammar.tab.cc"
    break;


#line 3881 "JavaGrammar.tab.cc"

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
#line 1276 "JavaGrammar.yy"


int main (int argc, char* argv[])
{	
	char* filename;
	if(argc == 2){
		filename = argv[1];
	}else{
		printf("Requires exactly one argument.\n");
		return 1;
	}
	stdin = fopen(filename, "r");
	yyparse();
	root->print();
	std::cin.get();
	expandParallel(root);
	root->print();
	std::string new_filename = filename;
	new_filename = (new_filename.substr(0, new_filename.rfind(".javap"))) + ".java";
	std::ofstream dump_file;
	dump_file.open(new_filename);
	dump_tree(*root, &dump_file, 0);
	dump_file.close();
	printf("New file created.\n");
	return 0;
}

#include <stdio.h>
void yyerror (char const *s)
{
	std::cout << s << std::endl;
}
