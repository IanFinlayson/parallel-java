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
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1214

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  105
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  57
/* YYNRULES -- Number of rules.  */
#define YYNRULES  186
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  402

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
       0,   162,   162,   167,   169,   174,   176,   188,   190,   195,
     197,   202,   204,   209,   211,   213,   215,   217,   219,   221,
     223,   225,   227,   229,   231,   236,   238,   240,   242,   247,
     252,   257,   259,   261,   263,   268,   270,   272,   283,   285,
     308,   310,   315,   317,   322,   324,   326,   332,   334,   336,
     339,   341,   344,   347,   349,   354,   356,   361,   364,   367,
     380,   382,   387,   389,   391,   393,   395,   397,   402,   404,
     409,   411,   413,   418,   420,   422,   424,   426,   431,   436,
     438,   440,   442,   444,   449,   451,   453,   455,   457,   459,
     461,   463,   465,   467,   469,   474,   479,   484,   489,   491,
     496,   498,   503,   508,   510,   515,   517,   522,   527,   529,
     534,   536,   541,   543,   545,   547,   552,   554,   559,   561,
     566,   568,   573,   575,   580,   582,   587,   589,   594,   599,
     601,   603,   605,   607,   609,   614,   616,   618,   620,   622,
     624,   626,   628,   630,   632,   634,   636,   638,   640,   642,
     644,   646,   648,   650,   652,   654,   656,   658,   660,   662,
     664,   666,   668,   670,   672,   677,   679,   681,   686,   688,
     693,   695,   700,   702,   707,   709,   714,   716,   721,   723,
     728,   730,   732,   734,   736,   738,   740
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
  "program", "package", "imports", "typedecs", "typedec", "mods", "mod",
  "inheritstyle", "extends", "implements", "classbody", "accessorchain",
  "basicidentifiers", "initializationstatement", "initializers",
  "initializer", "init", "datastructure", "method", "formalparameters",
  "formalparameter", "throwsclause", "block", "statement", "parallelblock",
  "expressionstatement", "controlflowstatement", "whileloop",
  "dowhileloop", "forloop", "forinit", "forupdate", "foreachloop",
  "ifstatement", "ifelsestatement", "switchstatement", "switchblock",
  "switchrules", "switchrule", "switchblockstates", "switchblockstate",
  "switchlabel", "case", "trycatchblock", "exceptionname", "throwstate",
  "datatype", "expression", "arguments", "argument", "instancemethodcall",
  "methodcall", "fieldreference", "postdecrement", "predecrement",
  "assignmentstatement", YY_NULLPTR
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

#define YYPACT_NINF (-289)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-32)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       3,    11,    28,    39,   -39,  -289,   -15,  -289,    11,   644,
      11,  -289,    -6,  -289,  -289,  -289,  -289,  -289,  -289,  -289,
    -289,  -289,  -289,  -289,  -289,  -289,   577,   -31,   644,  -289,
      39,  -289,    75,   112,  -289,  -289,    79,   -12,   121,    63,
     130,    67,   111,  -289,  -289,   605,    72,  -289,   605,  -289,
     605,   619,    76,   605,   130,    80,  -289,   -43,  -289,  -289,
    -289,  -289,  -289,    73,   375,   482,  -289,  -289,  -289,  -289,
      17,   535,   605,   690,  -289,  -289,  -289,  -289,    82,   510,
     510,   510,  -289,    81,   991,    84,  -289,  1093,  -289,   -21,
     145,    85,    83,     6,    84,  -289,  -289,    64,  -289,   165,
     155,   267,   510,   510,   510,   510,   510,   156,    13,   694,
     -10,  -289,   375,   510,   510,   510,   510,   510,   510,   510,
     510,   510,   510,   510,   510,   510,   510,   510,   510,   510,
     510,   510,   157,    17,  -289,   124,    17,    99,   101,  -289,
     495,   161,   164,  -289,   991,   119,   115,  -289,   126,   128,
    -289,  -289,  -289,  -289,  1108,   235,   165,  -289,  -289,  -289,
     126,   991,   991,   991,   991,   991,  -289,  -289,  -289,  1009,
    1026,  1042,  1057,  1101,  1115,   708,   740,   772,   804,   836,
     864,   593,    78,    30,   -10,   -38,    97,  -289,  -289,   138,
     130,   136,  -289,   144,   207,   165,   209,  -289,  -289,  -289,
    -289,  -289,   165,   210,   211,   -40,   151,   148,   124,  -289,
     150,  -289,  -289,   152,   158,   126,  -289,   159,   158,   126,
     165,   131,     8,  -289,    49,   449,  -289,   165,   160,   162,
     167,   166,   449,  -289,   637,   172,   169,   178,   177,   183,
     180,   214,   510,   185,   189,   510,   195,   200,   449,   449,
     206,  -289,  -289,  -289,  -289,  -289,   192,  -289,  -289,  -289,
     208,   375,   128,   215,   216,   218,  -289,   165,   217,   449,
    -289,   481,   510,   449,   510,  -289,   275,   885,   449,   510,
     914,  -289,  -289,  -289,  -289,  -289,   293,  -289,  -289,   605,
    -289,   223,  -289,   224,   654,  -289,  -289,   227,   515,   727,
     234,   760,   239,  -289,   237,   793,  -289,   449,  -289,   242,
    -289,  -289,   510,   116,   246,   253,   345,   165,   276,   255,
     257,  -289,   943,   325,    -2,   264,   449,  -289,   269,   273,
     449,  -289,    10,   274,  -289,   510,   278,  -289,    -2,  -289,
      -2,   -69,   510,   280,  -289,   339,   281,   671,   283,   277,
     286,  -289,   856,  -289,  -289,   247,  -289,   279,   397,   429,
     826,  -289,   260,   354,  -289,    10,   296,   449,   510,   449,
    -289,   449,   294,   295,   972,   300,   339,   305,  -289,   449,
     306,  -289,   307,   314,  -289,  -289,  -289,  -289,  -289,   316,
     318,  -289,  -289,  -289,   449,  -289,   319,   331,   321,   449,
     322,  -289
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     5,    35,    36,     0,     1,     0,    11,
       0,     4,     0,    14,    24,    18,    22,    23,    21,    19,
      13,    16,    15,    20,    17,     2,    11,     0,    11,    37,
       5,     8,     0,     0,    12,     6,     0,    25,     0,     0,
       0,     0,    26,    27,    29,    11,    38,    30,    11,    28,
      11,     0,     0,    11,     0,     0,    34,   132,   130,   133,
     129,   134,   131,     0,    44,    44,    10,    33,    39,     9,
      62,     0,    11,   140,   136,   137,   139,   138,     0,     0,
       0,     0,    41,    42,    45,   141,    46,   140,    40,   132,
       0,     0,    60,     0,    67,   132,    56,     0,    32,   165,
       0,    44,     0,     0,     0,     0,     0,     0,   140,     0,
     144,   145,    44,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    62,    66,    68,    62,    63,     0,    55,
     140,     0,     0,   169,   168,     0,   166,    79,    80,   141,
      81,    82,    83,   174,   140,     0,   165,   185,   186,    54,
      53,   180,   181,   182,   183,   184,   142,   135,    43,   158,
     157,   159,   160,   161,   151,   152,   154,   156,   153,   155,
     162,   163,   164,   146,   147,   148,   149,   150,   175,     0,
       0,     0,    61,     0,     0,   165,     0,   177,   176,   179,
     178,   143,   165,     0,     0,   132,     0,     0,    68,    69,
       0,    64,    65,     0,   174,   171,   167,     0,   175,   170,
     165,     0,     0,    48,     0,    70,   172,   165,     0,     0,
       0,     0,    70,    58,   132,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    70,    70,
       0,    76,    84,    85,    86,    87,    88,    89,    90,    77,
       0,    44,     0,     0,    50,     0,    47,   165,     0,    70,
      92,     0,     0,    70,     0,    91,     0,     0,    70,     0,
       0,    74,    59,    71,    72,    73,     0,    75,   173,    11,
      52,     0,    57,     0,   132,    98,    99,     0,    44,     0,
       0,     0,     0,    93,     0,     0,    94,    70,   106,     0,
      49,    78,     0,   140,     0,     0,     0,   165,     0,     0,
       0,    51,     0,     0,     0,     0,    70,   104,     0,     0,
      70,   105,     0,     0,   121,     0,     0,   108,   110,   109,
     116,     0,     0,     0,   128,     0,     0,     0,   100,     0,
       0,   120,   122,   107,   111,     0,   117,     0,    70,     0,
       0,   103,   126,     0,    95,     0,     0,    70,     0,    70,
     119,    70,     0,     0,     0,     0,     0,     0,   101,    70,
       0,   123,     0,     0,   112,   115,   113,    96,   127,     0,
       0,   102,   118,   114,    70,    97,     0,   124,     0,    70,
       0,   125
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -289,  -289,  -289,   363,   368,    12,    21,  -289,  -289,   361,
     357,   -47,    29,   -50,   -49,   -48,   301,  -289,   -65,  -289,
       1,  -289,   193,   -67,  -275,  -289,   -84,  -289,  -289,  -289,
    -289,  -289,    38,  -289,  -289,  -289,  -289,  -289,    68,  -289,
      65,  -289,  -288,    41,  -289,    34,    56,   -17,   -22,   -81,
    -289,   315,   -74,   -70,  -289,  -289,   -57
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     9,    25,    50,    51,    28,    41,    39,
      43,    52,     6,    47,   246,    88,    83,   158,    64,    53,
      91,    92,   191,   247,   248,   249,   250,   251,   252,   253,
     254,   297,   349,   255,   256,   257,   258,   336,   337,   338,
     339,   340,   341,   351,   259,   363,   260,   261,   144,   145,
     146,   147,   148,    85,   150,   151,   152
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      94,    55,    63,    56,    68,    90,    67,    86,    86,   137,
     358,   308,   230,   347,     4,   143,    82,   334,    40,    32,
      89,    26,    33,    70,     1,    98,   220,   160,     7,   149,
      27,   149,    38,    10,    65,   359,   335,    12,    26,    29,
      58,   327,    84,    84,    86,    71,    59,    27,   221,    34,
     355,   100,   357,    93,    97,    86,    11,   109,   110,   111,
     130,   131,    60,    94,   168,    30,    94,    71,    90,    61,
     138,    90,   143,   231,     8,   207,    62,    99,    36,    84,
     161,   162,   163,   164,   165,   100,   149,   129,   130,   131,
      84,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
       5,   143,   141,   142,   213,    37,    93,   232,   143,    93,
     233,   216,   215,    38,    44,   149,   128,   129,   130,   131,
     219,    45,   149,    46,   189,    48,   143,   192,   206,   228,
     209,    40,    54,   143,    72,    66,   263,   107,   134,    69,
     149,   112,   135,   136,   139,   262,   132,   149,   153,   166,
     188,   190,   262,   193,   199,   268,   194,   200,   140,    74,
      75,    76,    77,   127,   128,   129,   130,   131,   262,   262,
      99,   283,   284,   143,   201,   202,   291,   296,   100,   101,
     102,   103,   104,   105,   106,   323,   131,   149,   203,   262,
     204,   262,   293,   262,    86,   208,   300,   210,   262,   211,
     212,   304,   214,   217,   218,   222,   262,   223,   225,   226,
     277,   229,   295,   280,   195,   227,   286,   264,   265,    78,
     276,    79,   266,   143,   267,   271,   328,   262,   205,    84,
     320,    86,   309,   270,   272,   273,   262,   149,   348,   274,
     299,   275,   301,   278,   298,   279,   262,   305,    58,   343,
     262,    80,   262,   346,    59,    81,   281,   141,   142,   282,
     154,    74,    75,    76,    77,   372,    84,   285,   302,   287,
      60,   348,   288,   155,   289,   290,   292,    61,   262,   149,
     322,   370,   310,   311,    62,   262,   294,   262,   312,   262,
     380,   262,   382,   315,   383,   317,   318,   235,   236,   262,
     237,   321,   390,   352,   324,   325,    58,   238,   239,   329,
     360,   240,    59,   330,   262,   241,   331,   396,   333,   262,
     342,    78,   400,    79,   242,   156,   344,   374,    60,   345,
     243,   350,   362,   376,   366,    61,   352,   353,   294,   361,
     364,   359,    62,   365,   367,   244,   245,   377,   358,   235,
     236,   307,   237,    80,   379,   384,   385,    81,    58,   238,
     239,   387,   389,   240,    59,   391,   392,   241,    73,    74,
      75,    76,    77,   393,   394,   398,   242,   395,   397,   399,
      60,   401,   243,    35,    31,   141,   142,    61,    42,    49,
     234,   224,   157,   378,    62,   356,   354,   244,   245,   381,
     388,   235,   236,   326,   237,   373,   159,     0,     0,     0,
      58,   238,   239,     0,     0,   240,    59,     0,     0,   241,
       0,     0,   140,    74,    75,    76,    77,     0,   242,    78,
       0,    79,    60,     0,   243,     0,     0,   141,   142,    61,
       0,     0,   234,     0,     0,     0,    62,     0,     0,   244,
     245,   241,     0,   235,   236,   369,   237,     0,     0,     0,
       0,    80,    58,   238,   239,    81,     0,   240,    59,     0,
       0,   241,     0,     0,   294,    87,    74,    75,    76,    77,
     242,     0,     0,    78,    60,    79,   243,   371,     0,   141,
     142,    61,     0,     0,    58,     0,     0,     0,    62,     0,
      59,   244,   245,   108,    74,    75,    76,    77,   313,    74,
      75,    76,    77,     0,     0,    80,    60,     0,     0,    81,
       0,   141,   142,    61,     0,     0,     0,     0,    95,     0,
      62,     0,     0,     0,     0,     0,    78,     0,    79,     0,
       0,   141,   142,     0,     0,     0,     0,     0,    58,    99,
       0,   195,     0,     0,    59,     0,     0,   196,   101,   102,
     103,   104,   105,   106,    78,     0,    79,    -7,    80,    78,
      60,    79,    81,   141,   142,     0,     0,    61,     0,     0,
      13,     0,     0,     0,    62,     0,    14,   197,   198,    15,
       0,     0,     0,    16,     0,     0,    80,     0,    17,     0,
      81,    80,     0,    18,     0,    81,     0,     0,    13,    19,
       0,     0,    57,     0,    14,    96,    20,    15,    21,     0,
       0,    16,     0,    22,    23,     0,    17,    24,     0,     0,
       0,    18,    58,     0,     0,     0,     0,    19,    59,     0,
       0,     0,     0,     0,    20,     0,    21,    13,     0,     0,
       0,    22,    23,    14,    60,    24,    15,     0,     0,    32,
      16,    61,    33,     0,   -31,    17,     0,     0,    62,     0,
      18,     0,     0,     0,     0,     0,    19,   126,   127,   128,
     129,   130,   131,    20,     0,    21,     0,     0,     0,     0,
      22,    23,     0,   195,    24,   269,     0,     0,     0,   196,
     101,   102,   103,   104,   105,   106,     0,     0,     0,     0,
     195,     0,     0,     0,     0,    71,   196,   101,   102,   103,
     104,   105,   106,     0,     0,     0,     0,   195,     0,   197,
     198,     0,    71,   196,   101,   102,   103,   104,   105,   106,
       0,     0,     0,     0,    99,     0,   197,   198,     0,     0,
       0,   167,   100,   101,   102,   103,   104,   105,   106,     0,
       0,     0,     0,   197,   198,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   314,   -32,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   316,   -32,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
       0,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     319,   -32,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,     0,     0,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   375,   -32,   123,   124,   125,   126,   127,
     128,   129,   130,   131,     0,     0,     0,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   368,   -32,   124,   125,
     126,   127,   128,   129,   130,   131,     0,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   303,   125,   126,   127,
     128,   129,   130,   131,     0,     0,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   306,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   332,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   386,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,    99,     0,   133,
       0,     0,     0,     0,     0,   100,   101,   102,   103,   104,
     105,   106,    99,     0,   195,     0,     0,     0,     0,     0,
     196,   101,   102,   103,   104,   105,   106,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   -32,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131
};

static const yytype_int16 yycheck[] =
{
      70,    48,    51,    50,    54,    70,    53,    64,    65,     3,
      79,   286,     4,     3,     3,    99,    64,    19,    30,    50,
       3,     9,    53,    66,    21,    72,    66,   101,     0,    99,
       9,   101,    44,    72,    51,   104,    38,     8,    26,    10,
      23,   316,    64,    65,   101,    88,    29,    26,    88,    28,
     338,    72,   340,    70,    71,   112,    71,    79,    80,    81,
      98,    99,    45,   133,   112,    71,   136,    88,   133,    52,
      64,   136,   156,    65,    35,   156,    59,    64,     3,   101,
     102,   103,   104,   105,   106,    72,   156,    97,    98,    99,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
      99,   195,   102,   103,   195,     3,   133,    68,   202,   136,
      71,   202,   196,    44,     3,   195,    96,    97,    98,    99,
     204,    68,   202,     3,   133,    68,   220,   136,   155,   220,
     190,    30,    70,   227,    71,    69,   227,    65,     3,    69,
     220,    70,    67,    70,    90,   225,    72,   227,     3,     3,
       3,    37,   232,    64,     3,   232,    65,     3,     3,     4,
       5,     6,     7,    95,    96,    97,    98,    99,   248,   249,
      64,   248,   249,   267,    65,    70,   267,   271,    72,    73,
      74,    75,    76,    77,    78,    79,    99,   267,    72,   269,
      72,   271,   269,   273,   261,    67,   273,    71,   278,    65,
       3,   278,     3,     3,     3,    64,   286,    69,    68,    67,
     242,    90,   271,   245,    66,    66,    34,    67,    66,    64,
      16,    66,    65,   317,    68,    66,   317,   307,     3,   261,
     307,   298,   289,    71,    66,    68,   316,   317,   332,    66,
     272,    71,   274,    68,   271,    66,   326,   279,    23,   326,
     330,    96,   332,   330,    29,   100,    71,   102,   103,    69,
       3,     4,     5,     6,     7,   359,   298,    71,     3,    71,
      45,   365,    67,    16,    68,    67,    69,    52,   358,   359,
     312,   358,    69,    69,    59,   365,     3,   367,    71,   369,
     367,   371,   369,    69,   371,    66,    69,    14,    15,   379,
      17,    69,   379,   335,    68,    62,    23,    24,    25,    43,
     342,    28,    29,    68,   394,    32,    69,   394,     3,   399,
      66,    64,   399,    66,    41,    68,    67,   359,    45,    66,
      47,    67,     3,    83,    67,    52,   368,    69,     3,    69,
      69,   104,    59,    70,    68,    62,    63,     3,    79,    14,
      15,    68,    17,    96,    68,    71,    71,   100,    23,    24,
      25,    71,    67,    28,    29,    69,    69,    32,     3,     4,
       5,     6,     7,    69,    68,    54,    41,    69,    69,    68,
      45,    69,    47,    30,    26,   102,   103,    52,    37,    42,
       3,   208,   101,   365,    59,   340,   338,    62,    63,   368,
     376,    14,    15,    68,    17,   359,   101,    -1,    -1,    -1,
      23,    24,    25,    -1,    -1,    28,    29,    -1,    -1,    32,
      -1,    -1,     3,     4,     5,     6,     7,    -1,    41,    64,
      -1,    66,    45,    -1,    47,    -1,    -1,   102,   103,    52,
      -1,    -1,     3,    -1,    -1,    -1,    59,    -1,    -1,    62,
      63,    32,    -1,    14,    15,    68,    17,    -1,    -1,    -1,
      -1,    96,    23,    24,    25,   100,    -1,    28,    29,    -1,
      -1,    32,    -1,    -1,     3,     3,     4,     5,     6,     7,
      41,    -1,    -1,    64,    45,    66,    47,    68,    -1,   102,
     103,    52,    -1,    -1,    23,    -1,    -1,    -1,    59,    -1,
      29,    62,    63,     3,     4,     5,     6,     7,     3,     4,
       5,     6,     7,    -1,    -1,    96,    45,    -1,    -1,   100,
      -1,   102,   103,    52,    -1,    -1,    -1,    -1,     3,    -1,
      59,    -1,    -1,    -1,    -1,    -1,    64,    -1,    66,    -1,
      -1,   102,   103,    -1,    -1,    -1,    -1,    -1,    23,    64,
      -1,    66,    -1,    -1,    29,    -1,    -1,    72,    73,    74,
      75,    76,    77,    78,    64,    -1,    66,     0,    96,    64,
      45,    66,   100,   102,   103,    -1,    -1,    52,    -1,    -1,
      13,    -1,    -1,    -1,    59,    -1,    19,   102,   103,    22,
      -1,    -1,    -1,    26,    -1,    -1,    96,    -1,    31,    -1,
     100,    96,    -1,    36,    -1,   100,    -1,    -1,    13,    42,
      -1,    -1,     3,    -1,    19,    90,    49,    22,    51,    -1,
      -1,    26,    -1,    56,    57,    -1,    31,    60,    -1,    -1,
      -1,    36,    23,    -1,    -1,    -1,    -1,    42,    29,    -1,
      -1,    -1,    -1,    -1,    49,    -1,    51,    13,    -1,    -1,
      -1,    56,    57,    19,    45,    60,    22,    -1,    -1,    50,
      26,    52,    53,    -1,    69,    31,    -1,    -1,    59,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    42,    94,    95,    96,
      97,    98,    99,    49,    -1,    51,    -1,    -1,    -1,    -1,
      56,    57,    -1,    66,    60,    68,    -1,    -1,    -1,    72,
      73,    74,    75,    76,    77,    78,    -1,    -1,    -1,    -1,
      66,    -1,    -1,    -1,    -1,    88,    72,    73,    74,    75,
      76,    77,    78,    -1,    -1,    -1,    -1,    66,    -1,   102,
     103,    -1,    88,    72,    73,    74,    75,    76,    77,    78,
      -1,    -1,    -1,    -1,    64,    -1,   102,   103,    -1,    -1,
      -1,    67,    72,    73,    74,    75,    76,    77,    78,    -1,
      -1,    -1,    -1,   102,   103,    81,    82,    83,    84,    85,
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
      94,    95,    96,    97,    98,    99,    71,    93,    94,    95,
      96,    97,    98,    99,    -1,    -1,    81,    82,    83,    84,
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
      93,    94,    95,    96,    97,    98,    99,    64,    -1,    66,
      -1,    -1,    -1,    -1,    -1,    72,    73,    74,    75,    76,
      77,    78,    64,    -1,    66,    -1,    -1,    -1,    -1,    -1,
      72,    73,    74,    75,    76,    77,    78,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    21,   106,   107,     3,    99,   117,     0,    35,   108,
      72,    71,   117,    13,    19,    22,    26,    31,    36,    42,
      49,    51,    56,    57,    60,   109,   110,   111,   112,   117,
      71,   109,    50,    53,   111,   108,     3,     3,    44,   114,
      30,   113,   114,   115,     3,    68,     3,   118,    68,   115,
     110,   111,   116,   124,    70,   116,   116,     3,    23,    29,
      45,    52,    59,   119,   123,   152,    69,   116,   118,    69,
      66,    88,    71,     3,     4,     5,     6,     7,    64,    66,
      96,   100,   120,   121,   153,   158,   161,     3,   120,     3,
     123,   125,   126,   152,   158,     3,    90,   152,   116,    64,
      72,    73,    74,    75,    76,    77,    78,    65,     3,   153,
     153,   153,    70,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,    72,    66,     3,    67,    70,     3,    64,    90,
       3,   102,   103,   131,   153,   154,   155,   156,   157,   158,
     159,   160,   161,     3,     3,    16,    68,   121,   122,   156,
     157,   153,   153,   153,   153,   153,     3,    67,   120,   153,
     153,   153,   153,   153,   153,   153,   153,   153,   153,   153,
     153,   153,   153,   153,   153,   153,   153,   153,     3,   125,
      37,   127,   125,    64,    65,    66,    72,   102,   103,     3,
       3,    65,    70,    72,    72,     3,   152,   154,    67,   118,
      71,    65,     3,   154,     3,   157,   154,     3,     3,   157,
      66,    88,    64,    69,   127,    68,    67,    66,   154,    90,
       4,    65,    68,    71,     3,    14,    15,    17,    24,    25,
      28,    32,    41,    47,    62,    63,   119,   128,   129,   130,
     131,   132,   133,   134,   135,   138,   139,   140,   141,   149,
     151,   152,   158,   154,    67,    66,    65,    68,   128,    68,
      71,    66,    66,    68,    66,    71,    16,   153,    68,    66,
     153,    71,    69,   128,   128,    71,    34,    71,    67,    68,
      67,   154,    69,   128,     3,   119,   131,   136,   152,   153,
     128,   153,     3,    71,   128,   153,    71,    68,   129,   116,
      69,    69,    71,     3,    67,    69,    67,    66,    69,    67,
     128,    69,   153,    79,    68,    62,    68,   129,   154,    43,
      68,    69,    71,     3,    19,    38,   142,   143,   144,   145,
     146,   147,    66,   128,    67,    66,   128,     3,   131,   137,
      67,   148,   153,    69,   143,   147,   145,   147,    79,   104,
     153,    69,     3,   150,    69,    70,    67,    68,    70,    68,
     128,    68,   131,   151,   153,    67,    83,     3,   137,    68,
     128,   148,   128,   128,    71,    71,    71,    71,   150,    67,
     128,    69,    69,    69,    68,    69,   128,    69,    54,    68,
     128,    69
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   105,   106,   107,   107,   108,   108,   109,   109,   110,
     110,   111,   111,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   113,   113,   113,   113,   114,
     115,   116,   116,   116,   116,   117,   117,   117,   118,   118,
     119,   119,   120,   120,   121,   121,   121,   122,   122,   122,
     122,   122,   122,   122,   122,   123,   123,   124,   124,   124,
     125,   125,   126,   126,   126,   126,   126,   126,   127,   127,
     128,   128,   128,   129,   129,   129,   129,   129,   130,   131,
     131,   131,   131,   131,   132,   132,   132,   132,   132,   132,
     132,   132,   132,   132,   132,   133,   134,   135,   136,   136,
     137,   137,   138,   139,   139,   140,   140,   141,   142,   142,
     143,   143,   144,   144,   144,   144,   145,   145,   146,   146,
     147,   147,   148,   148,   149,   149,   150,   150,   151,   152,
     152,   152,   152,   152,   152,   153,   153,   153,   153,   153,
     153,   153,   153,   153,   153,   153,   153,   153,   153,   153,
     153,   153,   153,   153,   153,   153,   153,   153,   153,   153,
     153,   153,   153,   153,   153,   154,   154,   154,   155,   155,
     156,   156,   157,   157,   158,   158,   159,   159,   160,   160,
     161,   161,   161,   161,   161,   161,   161
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     0,     3,     0,     4,     1,     2,     7,
       7,     0,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     1,     2,     2,
       2,     0,     4,     2,     2,     1,     1,     3,     1,     3,
       2,     2,     1,     3,     0,     1,     1,     5,     3,     7,
       5,     8,     6,     1,     1,     4,     3,    10,     8,    10,
       1,     3,     0,     2,     4,     4,     2,     1,     0,     2,
       0,     2,     2,     2,     2,     2,     1,     1,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     3,     3,     7,     9,    11,     1,     1,
       1,     3,    10,     7,     5,     5,     3,     7,     1,     1,
       1,     2,     4,     4,     5,     4,     1,     2,     5,     3,
       2,     1,     1,     3,    12,    16,     1,     3,     6,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     3,     4,     2,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     0,     1,     3,     1,     1,
       3,     3,     4,     6,     3,     3,     2,     2,     2,     2,
       3,     3,     3,     3,     3,     3,     3
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
#line 162 "JavaGrammar.yy"
                                 {
	}
#line 1903 "JavaGrammar.tab.cc"
    break;

  case 3:
#line 167 "JavaGrammar.yy"
               {
	}
#line 1910 "JavaGrammar.tab.cc"
    break;

  case 4:
#line 169 "JavaGrammar.yy"
                                            {
	}
#line 1917 "JavaGrammar.tab.cc"
    break;

  case 5:
#line 174 "JavaGrammar.yy"
              {
	}
#line 1924 "JavaGrammar.tab.cc"
    break;

  case 6:
#line 176 "JavaGrammar.yy"
                                                   {
	}
#line 1931 "JavaGrammar.tab.cc"
    break;

  case 7:
#line 188 "JavaGrammar.yy"
               {
	}
#line 1938 "JavaGrammar.tab.cc"
    break;

  case 8:
#line 190 "JavaGrammar.yy"
                         {
	}
#line 1945 "JavaGrammar.tab.cc"
    break;

  case 9:
#line 195 "JavaGrammar.yy"
                                                                                   {
	}
#line 1952 "JavaGrammar.tab.cc"
    break;

  case 10:
#line 197 "JavaGrammar.yy"
                                                                                   {
	}
#line 1959 "JavaGrammar.tab.cc"
    break;

  case 11:
#line 202 "JavaGrammar.yy"
               {
	}
#line 1966 "JavaGrammar.tab.cc"
    break;

  case 12:
#line 204 "JavaGrammar.yy"
                  {
	}
#line 1973 "JavaGrammar.tab.cc"
    break;

  case 13:
#line 209 "JavaGrammar.yy"
                  {
	}
#line 1980 "JavaGrammar.tab.cc"
    break;

  case 14:
#line 211 "JavaGrammar.yy"
                      {
	}
#line 1987 "JavaGrammar.tab.cc"
    break;

  case 15:
#line 213 "JavaGrammar.yy"
                      {
	}
#line 1994 "JavaGrammar.tab.cc"
    break;

  case 16:
#line 215 "JavaGrammar.yy"
                    {
	}
#line 2001 "JavaGrammar.tab.cc"
    break;

  case 17:
#line 217 "JavaGrammar.yy"
                    {
	}
#line 2008 "JavaGrammar.tab.cc"
    break;

  case 18:
#line 219 "JavaGrammar.yy"
                          {
	}
#line 2015 "JavaGrammar.tab.cc"
    break;

  case 19:
#line 221 "JavaGrammar.yy"
                       {
	}
#line 2022 "JavaGrammar.tab.cc"
    break;

  case 20:
#line 223 "JavaGrammar.yy"
                      {
	}
#line 2029 "JavaGrammar.tab.cc"
    break;

  case 21:
#line 225 "JavaGrammar.yy"
                    {
	}
#line 2036 "JavaGrammar.tab.cc"
    break;

  case 22:
#line 227 "JavaGrammar.yy"
                     {
	}
#line 2043 "JavaGrammar.tab.cc"
    break;

  case 23:
#line 229 "JavaGrammar.yy"
                       {
	}
#line 2050 "JavaGrammar.tab.cc"
    break;

  case 24:
#line 231 "JavaGrammar.yy"
                     {
	}
#line 2057 "JavaGrammar.tab.cc"
    break;

  case 25:
#line 236 "JavaGrammar.yy"
               {
	}
#line 2064 "JavaGrammar.tab.cc"
    break;

  case 26:
#line 238 "JavaGrammar.yy"
                 {
	}
#line 2071 "JavaGrammar.tab.cc"
    break;

  case 27:
#line 240 "JavaGrammar.yy"
                    {
	}
#line 2078 "JavaGrammar.tab.cc"
    break;

  case 28:
#line 242 "JavaGrammar.yy"
                            {
	}
#line 2085 "JavaGrammar.tab.cc"
    break;

  case 29:
#line 247 "JavaGrammar.yy"
                                   {
	}
#line 2092 "JavaGrammar.tab.cc"
    break;

  case 30:
#line 252 "JavaGrammar.yy"
                                        {
	}
#line 2099 "JavaGrammar.tab.cc"
    break;

  case 31:
#line 257 "JavaGrammar.yy"
               {
	}
#line 2106 "JavaGrammar.tab.cc"
    break;

  case 32:
#line 259 "JavaGrammar.yy"
                                                         {
	}
#line 2113 "JavaGrammar.tab.cc"
    break;

  case 33:
#line 261 "JavaGrammar.yy"
                          {
	}
#line 2120 "JavaGrammar.tab.cc"
    break;

  case 34:
#line 263 "JavaGrammar.yy"
                           {
	}
#line 2127 "JavaGrammar.tab.cc"
    break;

  case 35:
#line 268 "JavaGrammar.yy"
                       {
	}
#line 2134 "JavaGrammar.tab.cc"
    break;

  case 36:
#line 270 "JavaGrammar.yy"
                {
	}
#line 2141 "JavaGrammar.tab.cc"
    break;

  case 37:
#line 272 "JavaGrammar.yy"
                                              {
	}
#line 2148 "JavaGrammar.tab.cc"
    break;

  case 38:
#line 283 "JavaGrammar.yy"
                       {
	}
#line 2155 "JavaGrammar.tab.cc"
    break;

  case 39:
#line 285 "JavaGrammar.yy"
                                                   {
	}
#line 2162 "JavaGrammar.tab.cc"
    break;

  case 40:
#line 308 "JavaGrammar.yy"
                              {
	}
#line 2169 "JavaGrammar.tab.cc"
    break;

  case 41:
#line 310 "JavaGrammar.yy"
                                    {
	}
#line 2176 "JavaGrammar.tab.cc"
    break;

  case 42:
#line 315 "JavaGrammar.yy"
                    {
	}
#line 2183 "JavaGrammar.tab.cc"
    break;

  case 43:
#line 317 "JavaGrammar.yy"
                                            {
	}
#line 2190 "JavaGrammar.tab.cc"
    break;

  case 44:
#line 322 "JavaGrammar.yy"
              {
	}
#line 2197 "JavaGrammar.tab.cc"
    break;

  case 45:
#line 324 "JavaGrammar.yy"
                   {
	}
#line 2204 "JavaGrammar.tab.cc"
    break;

  case 46:
#line 326 "JavaGrammar.yy"
                             {
	}
#line 2211 "JavaGrammar.tab.cc"
    break;

  case 47:
#line 332 "JavaGrammar.yy"
                                                              {
	}
#line 2218 "JavaGrammar.tab.cc"
    break;

  case 48:
#line 334 "JavaGrammar.yy"
                                         {
	}
#line 2225 "JavaGrammar.tab.cc"
    break;

  case 49:
#line 336 "JavaGrammar.yy"
                                                                                    {
	}
#line 2232 "JavaGrammar.tab.cc"
    break;

  case 50:
#line 339 "JavaGrammar.yy"
                                                                {
	}
#line 2239 "JavaGrammar.tab.cc"
    break;

  case 51:
#line 341 "JavaGrammar.yy"
                                                                                                {
	}
#line 2246 "JavaGrammar.tab.cc"
    break;

  case 52:
#line 344 "JavaGrammar.yy"
                                                                          {
	}
#line 2253 "JavaGrammar.tab.cc"
    break;

  case 53:
#line 347 "JavaGrammar.yy"
                    {
	}
#line 2260 "JavaGrammar.tab.cc"
    break;

  case 54:
#line 349 "JavaGrammar.yy"
                            {
	}
#line 2267 "JavaGrammar.tab.cc"
    break;

  case 55:
#line 354 "JavaGrammar.yy"
                                                     {
	}
#line 2274 "JavaGrammar.tab.cc"
    break;

  case 56:
#line 356 "JavaGrammar.yy"
                                             {
	}
#line 2281 "JavaGrammar.tab.cc"
    break;

  case 57:
#line 361 "JavaGrammar.yy"
                                                                                                                     {
		//normal
	}
#line 2289 "JavaGrammar.tab.cc"
    break;

  case 58:
#line 364 "JavaGrammar.yy"
                                                                                                   {
		//abstract
	}
#line 2297 "JavaGrammar.tab.cc"
    break;

  case 59:
#line 367 "JavaGrammar.yy"
                                                                                                                     {
		//constructor
	}
#line 2305 "JavaGrammar.tab.cc"
    break;

  case 60:
#line 380 "JavaGrammar.yy"
                        {
	}
#line 2312 "JavaGrammar.tab.cc"
    break;

  case 61:
#line 382 "JavaGrammar.yy"
                                                    {
	}
#line 2319 "JavaGrammar.tab.cc"
    break;

  case 62:
#line 387 "JavaGrammar.yy"
               {
	}
#line 2326 "JavaGrammar.tab.cc"
    break;

  case 63:
#line 389 "JavaGrammar.yy"
                                 {
	}
#line 2333 "JavaGrammar.tab.cc"
    break;

  case 64:
#line 391 "JavaGrammar.yy"
                                                           {
	}
#line 2340 "JavaGrammar.tab.cc"
    break;

  case 65:
#line 393 "JavaGrammar.yy"
                                                           {
	}
#line 2347 "JavaGrammar.tab.cc"
    break;

  case 66:
#line 395 "JavaGrammar.yy"
                                      {
	}
#line 2354 "JavaGrammar.tab.cc"
    break;

  case 67:
#line 397 "JavaGrammar.yy"
                        {
	}
#line 2361 "JavaGrammar.tab.cc"
    break;

  case 68:
#line 402 "JavaGrammar.yy"
               {
	}
#line 2368 "JavaGrammar.tab.cc"
    break;

  case 69:
#line 404 "JavaGrammar.yy"
                                     {
	}
#line 2375 "JavaGrammar.tab.cc"
    break;

  case 70:
#line 409 "JavaGrammar.yy"
               {
	}
#line 2382 "JavaGrammar.tab.cc"
    break;

  case 71:
#line 411 "JavaGrammar.yy"
                         {
	}
#line 2389 "JavaGrammar.tab.cc"
    break;

  case 72:
#line 413 "JavaGrammar.yy"
                             {
	}
#line 2396 "JavaGrammar.tab.cc"
    break;

  case 73:
#line 418 "JavaGrammar.yy"
                                     {
	}
#line 2403 "JavaGrammar.tab.cc"
    break;

  case 74:
#line 420 "JavaGrammar.yy"
                                          {
	}
#line 2410 "JavaGrammar.tab.cc"
    break;

  case 75:
#line 422 "JavaGrammar.yy"
                             {
	}
#line 2417 "JavaGrammar.tab.cc"
    break;

  case 76:
#line 424 "JavaGrammar.yy"
                              {
	}
#line 2424 "JavaGrammar.tab.cc"
    break;

  case 77:
#line 426 "JavaGrammar.yy"
                       {
	}
#line 2431 "JavaGrammar.tab.cc"
    break;

  case 78:
#line 431 "JavaGrammar.yy"
                                                   {
	}
#line 2438 "JavaGrammar.tab.cc"
    break;

  case 79:
#line 436 "JavaGrammar.yy"
                           {
	}
#line 2445 "JavaGrammar.tab.cc"
    break;

  case 80:
#line 438 "JavaGrammar.yy"
                    {
	}
#line 2452 "JavaGrammar.tab.cc"
    break;

  case 81:
#line 440 "JavaGrammar.yy"
                       {
	}
#line 2459 "JavaGrammar.tab.cc"
    break;

  case 82:
#line 442 "JavaGrammar.yy"
                      {
	}
#line 2466 "JavaGrammar.tab.cc"
    break;

  case 83:
#line 444 "JavaGrammar.yy"
                             {
	}
#line 2473 "JavaGrammar.tab.cc"
    break;

  case 84:
#line 449 "JavaGrammar.yy"
                  {
	}
#line 2480 "JavaGrammar.tab.cc"
    break;

  case 85:
#line 451 "JavaGrammar.yy"
                     {
	}
#line 2487 "JavaGrammar.tab.cc"
    break;

  case 86:
#line 453 "JavaGrammar.yy"
                 {
	}
#line 2494 "JavaGrammar.tab.cc"
    break;

  case 87:
#line 455 "JavaGrammar.yy"
                     {
	}
#line 2501 "JavaGrammar.tab.cc"
    break;

  case 88:
#line 457 "JavaGrammar.yy"
                     {
	}
#line 2508 "JavaGrammar.tab.cc"
    break;

  case 89:
#line 459 "JavaGrammar.yy"
                         {
	}
#line 2515 "JavaGrammar.tab.cc"
    break;

  case 90:
#line 461 "JavaGrammar.yy"
                         {
	}
#line 2522 "JavaGrammar.tab.cc"
    break;

  case 91:
#line 463 "JavaGrammar.yy"
                            {
	}
#line 2529 "JavaGrammar.tab.cc"
    break;

  case 92:
#line 465 "JavaGrammar.yy"
                               {
	}
#line 2536 "JavaGrammar.tab.cc"
    break;

  case 93:
#line 467 "JavaGrammar.yy"
                                        {
	}
#line 2543 "JavaGrammar.tab.cc"
    break;

  case 94:
#line 469 "JavaGrammar.yy"
                                       {
	}
#line 2550 "JavaGrammar.tab.cc"
    break;

  case 95:
#line 474 "JavaGrammar.yy"
                                                                               {
	}
#line 2557 "JavaGrammar.tab.cc"
    break;

  case 96:
#line 479 "JavaGrammar.yy"
                                                                                               {
	}
#line 2564 "JavaGrammar.tab.cc"
    break;

  case 97:
#line 484 "JavaGrammar.yy"
                                                                                                                 {
	}
#line 2571 "JavaGrammar.tab.cc"
    break;

  case 98:
#line 489 "JavaGrammar.yy"
                                {
	}
#line 2578 "JavaGrammar.tab.cc"
    break;

  case 99:
#line 491 "JavaGrammar.yy"
                             {
	}
#line 2585 "JavaGrammar.tab.cc"
    break;

  case 100:
#line 496 "JavaGrammar.yy"
                            {
	}
#line 2592 "JavaGrammar.tab.cc"
    break;

  case 101:
#line 498 "JavaGrammar.yy"
                                                 {
	}
#line 2599 "JavaGrammar.tab.cc"
    break;

  case 102:
#line 503 "JavaGrammar.yy"
                                                                                                                   {
	}
#line 2606 "JavaGrammar.tab.cc"
    break;

  case 103:
#line 508 "JavaGrammar.yy"
                                                                            {
	}
#line 2613 "JavaGrammar.tab.cc"
    break;

  case 104:
#line 510 "JavaGrammar.yy"
                                                           {
	}
#line 2620 "JavaGrammar.tab.cc"
    break;

  case 105:
#line 515 "JavaGrammar.yy"
                                                         {
	}
#line 2627 "JavaGrammar.tab.cc"
    break;

  case 106:
#line 517 "JavaGrammar.yy"
                                        {
	}
#line 2634 "JavaGrammar.tab.cc"
    break;

  case 107:
#line 522 "JavaGrammar.yy"
                                                                                      {
	}
#line 2641 "JavaGrammar.tab.cc"
    break;

  case 108:
#line 527 "JavaGrammar.yy"
                    {
	}
#line 2648 "JavaGrammar.tab.cc"
    break;

  case 109:
#line 529 "JavaGrammar.yy"
                           {
	}
#line 2655 "JavaGrammar.tab.cc"
    break;

  case 110:
#line 534 "JavaGrammar.yy"
                   {
	}
#line 2662 "JavaGrammar.tab.cc"
    break;

  case 111:
#line 536 "JavaGrammar.yy"
                                {
	}
#line 2669 "JavaGrammar.tab.cc"
    break;

  case 112:
#line 541 "JavaGrammar.yy"
                                                            {
	}
#line 2676 "JavaGrammar.tab.cc"
    break;

  case 113:
#line 543 "JavaGrammar.yy"
                                                    {
	}
#line 2683 "JavaGrammar.tab.cc"
    break;

  case 114:
#line 545 "JavaGrammar.yy"
                                                            {
	}
#line 2690 "JavaGrammar.tab.cc"
    break;

  case 115:
#line 547 "JavaGrammar.yy"
                                                    {
	}
#line 2697 "JavaGrammar.tab.cc"
    break;

  case 116:
#line 552 "JavaGrammar.yy"
                         {
	}
#line 2704 "JavaGrammar.tab.cc"
    break;

  case 117:
#line 554 "JavaGrammar.yy"
                                            {
	}
#line 2711 "JavaGrammar.tab.cc"
    break;

  case 118:
#line 559 "JavaGrammar.yy"
                                                          {
	}
#line 2718 "JavaGrammar.tab.cc"
    break;

  case 119:
#line 561 "JavaGrammar.yy"
                                     {
	}
#line 2725 "JavaGrammar.tab.cc"
    break;

  case 120:
#line 566 "JavaGrammar.yy"
                      {
	}
#line 2732 "JavaGrammar.tab.cc"
    break;

  case 121:
#line 568 "JavaGrammar.yy"
                     {
	}
#line 2739 "JavaGrammar.tab.cc"
    break;

  case 122:
#line 573 "JavaGrammar.yy"
                   {
	}
#line 2746 "JavaGrammar.tab.cc"
    break;

  case 123:
#line 575 "JavaGrammar.yy"
                                   {
	}
#line 2753 "JavaGrammar.tab.cc"
    break;

  case 124:
#line 580 "JavaGrammar.yy"
                                                                                                                                     {
	}
#line 2760 "JavaGrammar.tab.cc"
    break;

  case 125:
#line 582 "JavaGrammar.yy"
                                                                                                                                                                               {
	}
#line 2767 "JavaGrammar.tab.cc"
    break;

  case 126:
#line 587 "JavaGrammar.yy"
                       {
	}
#line 2774 "JavaGrammar.tab.cc"
    break;

  case 127:
#line 589 "JavaGrammar.yy"
                                                {
	}
#line 2781 "JavaGrammar.tab.cc"
    break;

  case 128:
#line 594 "JavaGrammar.yy"
                                                                         {
	}
#line 2788 "JavaGrammar.tab.cc"
    break;

  case 129:
#line 599 "JavaGrammar.yy"
                {
	}
#line 2795 "JavaGrammar.tab.cc"
    break;

  case 130:
#line 601 "JavaGrammar.yy"
                     {
	}
#line 2802 "JavaGrammar.tab.cc"
    break;

  case 131:
#line 603 "JavaGrammar.yy"
                   {
	}
#line 2809 "JavaGrammar.tab.cc"
    break;

  case 132:
#line 605 "JavaGrammar.yy"
                        {
	}
#line 2816 "JavaGrammar.tab.cc"
    break;

  case 133:
#line 607 "JavaGrammar.yy"
                    {
	}
#line 2823 "JavaGrammar.tab.cc"
    break;

  case 134:
#line 609 "JavaGrammar.yy"
                  {
	}
#line 2830 "JavaGrammar.tab.cc"
    break;

  case 135:
#line 614 "JavaGrammar.yy"
                                         {
	}
#line 2837 "JavaGrammar.tab.cc"
    break;

  case 136:
#line 616 "JavaGrammar.yy"
                    {
	}
#line 2844 "JavaGrammar.tab.cc"
    break;

  case 137:
#line 618 "JavaGrammar.yy"
                      {
	}
#line 2851 "JavaGrammar.tab.cc"
    break;

  case 138:
#line 620 "JavaGrammar.yy"
                     {
	}
#line 2858 "JavaGrammar.tab.cc"
    break;

  case 139:
#line 622 "JavaGrammar.yy"
                       {
	}
#line 2865 "JavaGrammar.tab.cc"
    break;

  case 140:
#line 624 "JavaGrammar.yy"
                        {
	}
#line 2872 "JavaGrammar.tab.cc"
    break;

  case 141:
#line 626 "JavaGrammar.yy"
                        {
	}
#line 2879 "JavaGrammar.tab.cc"
    break;

  case 142:
#line 628 "JavaGrammar.yy"
                                                  {
	}
#line 2886 "JavaGrammar.tab.cc"
    break;

  case 143:
#line 630 "JavaGrammar.yy"
                                                            {
	}
#line 2893 "JavaGrammar.tab.cc"
    break;

  case 144:
#line 632 "JavaGrammar.yy"
                            {
	}
#line 2900 "JavaGrammar.tab.cc"
    break;

  case 145:
#line 634 "JavaGrammar.yy"
                               {
	}
#line 2907 "JavaGrammar.tab.cc"
    break;

  case 146:
#line 636 "JavaGrammar.yy"
                                       {
	}
#line 2914 "JavaGrammar.tab.cc"
    break;

  case 147:
#line 638 "JavaGrammar.yy"
                                       {
	}
#line 2921 "JavaGrammar.tab.cc"
    break;

  case 148:
#line 640 "JavaGrammar.yy"
                                       {
	}
#line 2928 "JavaGrammar.tab.cc"
    break;

  case 149:
#line 642 "JavaGrammar.yy"
                                       {
	}
#line 2935 "JavaGrammar.tab.cc"
    break;

  case 150:
#line 644 "JavaGrammar.yy"
                                       {
	}
#line 2942 "JavaGrammar.tab.cc"
    break;

  case 151:
#line 646 "JavaGrammar.yy"
                                         {
	}
#line 2949 "JavaGrammar.tab.cc"
    break;

  case 152:
#line 648 "JavaGrammar.yy"
                                          {
	}
#line 2956 "JavaGrammar.tab.cc"
    break;

  case 153:
#line 650 "JavaGrammar.yy"
                                           {
	}
#line 2963 "JavaGrammar.tab.cc"
    break;

  case 154:
#line 652 "JavaGrammar.yy"
                                        {
	}
#line 2970 "JavaGrammar.tab.cc"
    break;

  case 155:
#line 654 "JavaGrammar.yy"
                                          {
	}
#line 2977 "JavaGrammar.tab.cc"
    break;

  case 156:
#line 656 "JavaGrammar.yy"
                                          {
	}
#line 2984 "JavaGrammar.tab.cc"
    break;

  case 157:
#line 658 "JavaGrammar.yy"
                                       {
	}
#line 2991 "JavaGrammar.tab.cc"
    break;

  case 158:
#line 660 "JavaGrammar.yy"
                                      {
	}
#line 2998 "JavaGrammar.tab.cc"
    break;

  case 159:
#line 662 "JavaGrammar.yy"
                                         {
	}
#line 3005 "JavaGrammar.tab.cc"
    break;

  case 160:
#line 664 "JavaGrammar.yy"
                                          {
	}
#line 3012 "JavaGrammar.tab.cc"
    break;

  case 161:
#line 666 "JavaGrammar.yy"
                                          {
	}
#line 3019 "JavaGrammar.tab.cc"
    break;

  case 162:
#line 668 "JavaGrammar.yy"
                                          {
	}
#line 3026 "JavaGrammar.tab.cc"
    break;

  case 163:
#line 670 "JavaGrammar.yy"
                                          {
	}
#line 3033 "JavaGrammar.tab.cc"
    break;

  case 164:
#line 672 "JavaGrammar.yy"
                                           {
	}
#line 3040 "JavaGrammar.tab.cc"
    break;

  case 165:
#line 677 "JavaGrammar.yy"
               {
	}
#line 3047 "JavaGrammar.tab.cc"
    break;

  case 166:
#line 679 "JavaGrammar.yy"
                  {
	}
#line 3054 "JavaGrammar.tab.cc"
    break;

  case 167:
#line 681 "JavaGrammar.yy"
                                      {
	}
#line 3061 "JavaGrammar.tab.cc"
    break;

  case 168:
#line 686 "JavaGrammar.yy"
                   {
	}
#line 3068 "JavaGrammar.tab.cc"
    break;

  case 169:
#line 688 "JavaGrammar.yy"
                             {
	}
#line 3075 "JavaGrammar.tab.cc"
    break;

  case 170:
#line 693 "JavaGrammar.yy"
                                          {
	}
#line 3082 "JavaGrammar.tab.cc"
    break;

  case 171:
#line 695 "JavaGrammar.yy"
                                           {
	}
#line 3089 "JavaGrammar.tab.cc"
    break;

  case 172:
#line 700 "JavaGrammar.yy"
                                                       {
	}
#line 3096 "JavaGrammar.tab.cc"
    break;

  case 173:
#line 702 "JavaGrammar.yy"
                                                                           {
	}
#line 3103 "JavaGrammar.tab.cc"
    break;

  case 174:
#line 707 "JavaGrammar.yy"
                                              {
	}
#line 3110 "JavaGrammar.tab.cc"
    break;

  case 175:
#line 709 "JavaGrammar.yy"
                                                                                {
	}
#line 3117 "JavaGrammar.tab.cc"
    break;

  case 176:
#line 714 "JavaGrammar.yy"
                                  {
	}
#line 3124 "JavaGrammar.tab.cc"
    break;

  case 177:
#line 716 "JavaGrammar.yy"
                                   {
	}
#line 3131 "JavaGrammar.tab.cc"
    break;

  case 178:
#line 721 "JavaGrammar.yy"
                                  {
	}
#line 3138 "JavaGrammar.tab.cc"
    break;

  case 179:
#line 723 "JavaGrammar.yy"
                                   {
	}
#line 3145 "JavaGrammar.tab.cc"
    break;

  case 180:
#line 728 "JavaGrammar.yy"
                                                {
	}
#line 3152 "JavaGrammar.tab.cc"
    break;

  case 181:
#line 730 "JavaGrammar.yy"
                                                 {
	}
#line 3159 "JavaGrammar.tab.cc"
    break;

  case 182:
#line 732 "JavaGrammar.yy"
                                                 {
	}
#line 3166 "JavaGrammar.tab.cc"
    break;

  case 183:
#line 734 "JavaGrammar.yy"
                                                 {
	}
#line 3173 "JavaGrammar.tab.cc"
    break;

  case 184:
#line 736 "JavaGrammar.yy"
                                                 {
	}
#line 3180 "JavaGrammar.tab.cc"
    break;

  case 185:
#line 738 "JavaGrammar.yy"
                                               {
	}
#line 3187 "JavaGrammar.tab.cc"
    break;

  case 186:
#line 740 "JavaGrammar.yy"
                                       {
	}
#line 3194 "JavaGrammar.tab.cc"
    break;


#line 3198 "JavaGrammar.tab.cc"

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
#line 744 "JavaGrammar.yy"


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
	//root->print();
	/*std::cin.get();
	expandParallel(root);
	root->print();
	std::string new_filename = filename;
	new_filename = (new_filename.substr(0, new_filename.rfind(".javap"))) + ".java";
	std::ofstream dump_file;
	dump_file.open(new_filename);
	dump_tree(*root, &dump_file, 0);
	dump_file.close();
	printf("New file created.\n");*/
	return 0;
}

#include <stdio.h>
void yyerror (char const *s)
{
	std::cout << s << std::endl;
}
