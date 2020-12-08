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
#define YYLAST   1227

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  105
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  59
/* YYNRULES -- Number of rules.  */
#define YYNRULES  188
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  403

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
     297,   299,   301,   303,   308,   310,   315,   317,   322,   324,
     326,   332,   334,   336,   339,   341,   344,   347,   349,   354,
     356,   361,   364,   367,   373,   375,   380,   382,   387,   389,
     391,   393,   398,   400,   405,   407,   409,   414,   416,   418,
     420,   422,   427,   432,   434,   436,   438,   440,   445,   447,
     449,   451,   453,   455,   457,   459,   461,   463,   465,   470,
     475,   480,   485,   487,   492,   494,   499,   504,   506,   511,
     513,   518,   523,   525,   530,   532,   537,   539,   541,   543,
     548,   550,   555,   557,   562,   564,   569,   571,   576,   578,
     583,   585,   590,   595,   597,   599,   601,   603,   608,   610,
     612,   614,   616,   618,   620,   622,   624,   626,   628,   630,
     632,   634,   636,   638,   640,   642,   644,   646,   648,   650,
     652,   654,   656,   658,   660,   662,   664,   669,   671,   673,
     678,   680,   685,   687,   692,   694,   699,   701,   706,   708,
     713,   715,   720,   722,   724,   726,   728,   730,   732
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
  "basicidentifiers", "identifier", "initializationstatement",
  "initializers", "initializer", "init", "datastructure", "method",
  "returntype", "formalparameters", "formalparameter", "throwsclause",
  "block", "statement", "parallelblock", "expressionstatement",
  "controlflowstatement", "whileloop", "dowhileloop", "forloop", "forinit",
  "forupdate", "foreachloop", "ifstatement", "ifelsestatement",
  "switchstatement", "switchblock", "switchrules", "switchrule",
  "switchblockstates", "switchblockstate", "switchlabel", "case",
  "trycatchblock", "exceptionname", "throwstate", "datatype", "expression",
  "arguments", "argument", "instancemethodcall", "methodcall",
  "fieldreference", "postdecrement", "predecrement", "assignmentstatement", YY_NULLPTR
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

#define YYPACT_NINF (-271)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-42)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       0,     7,    34,    23,   -21,  -271,    -3,  -271,     7,   641,
       7,  -271,     1,  -271,  -271,  -271,  -271,  -271,  -271,  -271,
    -271,  -271,  -271,  -271,  -271,  -271,   585,    40,   641,  -271,
      23,  -271,    84,    88,  -271,  -271,    53,    -6,   104,    43,
     113,    58,   100,  -271,  -271,   613,    62,  -271,   613,  -271,
     613,   115,    66,   613,   113,    67,  -271,   -35,  -271,  -271,
    -271,  -271,  -271,    81,   313,   150,   313,  -271,  -271,  -271,
    -271,   195,    51,   613,  1121,  -271,  -271,  -271,  -271,    94,
     365,   365,   365,  -271,  -271,    91,   988,    92,  -271,   103,
    -271,   -27,   160,   106,   107,    13,    92,  -271,  -271,    80,
    -271,   184,   173,   206,   365,   365,   365,   365,   365,   177,
      20,   691,    22,  -271,   313,   365,   365,   365,   365,   365,
     365,   365,   365,   365,   365,   365,   365,   365,   365,   365,
     365,   365,   365,   365,   179,   195,  -271,   146,   195,   120,
    -271,  -271,   472,  -271,   182,   197,  -271,   988,   137,   134,
    -271,   135,   142,  -271,  -271,  -271,  -271,  1106,   212,   225,
    -271,  -271,  -271,   135,   988,   988,   988,   988,   988,  -271,
     225,  -271,  -271,  1006,  1023,  1039,  1070,  1114,  1128,   705,
     737,   670,   768,   800,   339,   320,    97,    50,    22,    44,
     118,  -271,  -271,   139,   113,   148,  -271,   155,   225,   222,
    -271,  -271,  -271,  -271,  -271,   225,   224,   231,   -18,   169,
     170,   146,  -271,   176,   171,   185,   135,  -271,   186,   185,
     135,   225,   158,    16,  -271,    -5,   555,  -271,   225,   178,
     187,   190,   191,   555,  -271,   634,   193,   192,   199,   198,
     201,   202,   245,   365,   200,   209,   365,   205,   208,   555,
     555,   207,  -271,  -271,  -271,  -271,  -271,   247,  -271,  -271,
    -271,   211,   313,   142,   216,   217,   223,  -271,   225,   210,
     555,  -271,    26,   365,   555,   365,  -271,   289,   882,   555,
     365,   911,  -271,  -271,  -271,  -271,  -271,   361,  -271,  -271,
     613,  -271,   229,  -271,   234,   651,  -271,  -271,   233,   394,
     724,   236,   757,   227,  -271,   238,   790,  -271,   555,  -271,
     239,  -271,  -271,   365,  1075,   232,   251,   425,   225,   271,
     254,   246,  -271,   940,   323,    -1,   257,   555,  -271,   263,
     265,   555,  -271,    12,   272,  -271,   365,   273,  -271,    -1,
    -271,    -1,   -65,   365,   274,  -271,   329,   296,   668,   270,
     299,   305,  -271,   853,  -271,  -271,   237,  -271,   288,   492,
      37,   823,  -271,   291,   377,  -271,    12,   314,   555,   365,
     555,  -271,   555,   310,   312,   969,   316,   329,   321,  -271,
     555,   322,  -271,   325,   326,  -271,  -271,  -271,  -271,  -271,
     324,   327,  -271,  -271,  -271,   555,  -271,   334,   350,   337,
     555,   338,  -271
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     0,    35,    36,     0,     1,     0,    11,
       0,     4,     0,    14,    24,    18,    22,    23,    21,    19,
      13,    16,    15,    20,    17,     2,    11,     0,    11,    37,
       5,     8,     0,     0,    12,     6,     0,    25,     0,     0,
       0,     0,    26,    27,    29,    11,    38,    30,    11,    28,
      11,     0,     0,    11,     0,     0,    34,   136,   134,   137,
     133,    65,   135,     0,    40,     0,    40,    10,    33,    39,
       9,    68,     0,    11,   143,   139,   140,   142,   141,     0,
       0,     0,     0,    49,    45,    46,    48,   144,    50,     0,
      44,   136,     0,     0,    66,    40,    71,   136,    60,     0,
      32,     0,     0,    40,     0,     0,     0,     0,     0,     0,
     143,     0,   146,   147,    40,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    68,    70,    72,    68,    41,
      69,    59,   143,    42,     0,     0,   171,   170,     0,   168,
      83,    84,   144,    85,    86,    87,   176,   143,     0,   167,
     187,   188,    58,    57,   182,   183,   184,   185,   186,    43,
     167,   138,    47,   160,   159,   161,   162,   163,   153,   154,
     156,   158,   155,   157,   164,   165,   166,   148,   149,   150,
     151,   152,   177,     0,     0,     0,    67,     0,   167,     0,
     179,   178,   181,   180,   145,   167,     0,     0,   136,     0,
       0,    72,    73,     0,     0,   176,   173,   169,     0,   177,
     172,   167,     0,     0,    52,     0,    74,   174,   167,     0,
       0,     0,     0,    74,    62,   136,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    74,
      74,     0,    80,    88,    89,    90,    91,    92,    93,    94,
      81,     0,    40,     0,     0,    54,     0,    51,   167,     0,
      74,    96,     0,     0,    74,     0,    95,     0,     0,    74,
       0,     0,    78,    63,    75,    76,    77,     0,    79,   175,
      11,    56,     0,    61,     0,   136,   102,   103,     0,    40,
       0,     0,     0,     0,    97,     0,     0,    98,    74,   110,
       0,    53,    82,     0,   143,     0,     0,     0,   167,     0,
       0,     0,    55,     0,     0,     0,     0,    74,   108,     0,
       0,    74,   109,     0,     0,   125,     0,     0,   112,   114,
     113,   120,     0,     0,     0,   132,     0,     0,     0,   104,
       0,     0,   124,   126,   111,   115,     0,   121,     0,    74,
       0,     0,   107,   130,     0,    99,     0,     0,    74,     0,
      74,   123,    74,     0,     0,     0,     0,     0,     0,   105,
      74,     0,   127,     0,     0,   116,   119,   117,   100,   131,
       0,     0,   106,   122,   118,    74,   101,     0,   128,     0,
      74,     0,   129
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -271,  -271,  -271,   380,   385,    24,    74,  -271,  -271,   375,
     379,   -47,    17,   -43,   330,   -46,   -36,   319,  -271,   -59,
    -271,  -271,   -40,  -271,   215,  -214,  -270,  -271,   -97,  -271,
    -271,  -271,  -271,  -271,    61,  -271,  -271,  -271,  -271,  -271,
     102,  -271,    89,  -271,  -216,    75,  -271,    68,    83,   -49,
     230,  -146,  -271,   343,   -95,   -71,  -271,  -271,   -57
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     9,    25,    50,    51,    28,    41,    39,
      43,    52,     6,    47,    83,   247,    90,    85,   161,    64,
      53,    65,    93,    94,   195,   248,   249,   250,   251,   252,
     253,   254,   255,   298,   350,   256,   257,   258,   259,   337,
     338,   339,   340,   341,   342,   352,   260,   364,   261,   262,
     147,   148,   149,   150,   151,    87,   153,   154,   155
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      96,    55,    66,    56,   146,    63,    68,    88,   163,    88,
       4,    69,    92,   210,   359,   348,   139,   309,   335,   269,
     231,     1,    95,    99,    40,    12,   100,    29,    84,   295,
     152,    71,   152,    26,     7,   284,   285,   336,    38,   360,
     142,    75,    76,    77,    78,   102,    88,   328,   221,    58,
      26,    10,   214,    72,    97,    59,   294,    88,     8,   217,
     301,    72,   146,   233,    96,   305,   234,    96,    11,   242,
     222,    60,    30,   146,    58,   229,    92,    79,   172,    92,
      59,   232,   264,    27,   170,    62,    95,    36,   152,    95,
      32,    37,   102,    33,   321,   193,    60,    38,   196,   152,
      27,   146,    34,    80,   216,   372,     5,    44,   146,   209,
      62,    45,   220,   344,   144,   145,    46,   347,    57,   131,
     132,   133,   292,   356,   146,   358,    48,   152,   144,   145,
      40,   146,    54,    81,   152,    67,    70,    82,    58,   144,
     145,    98,   132,   133,    59,   371,   130,   131,   132,   133,
     152,   212,    73,    89,   381,   263,   383,   152,   384,   109,
      60,   114,   263,   136,   134,    32,   391,    61,    33,   135,
     141,   146,   329,   137,    62,   297,   156,   138,   263,   263,
     169,   397,   192,   194,   197,   202,   401,   142,    75,    76,
      77,    78,   129,   130,   131,   132,   133,   152,    91,   263,
     203,   263,   204,   263,   205,    88,   211,   206,   263,   157,
      75,    76,    77,    78,   207,   208,   263,   133,    58,   213,
     143,   146,   158,   299,    59,   215,   296,   218,   142,    75,
      76,    77,    78,   223,   219,    58,   349,   263,   227,   224,
      60,    59,    88,   310,   226,   265,   263,   152,   230,   143,
      80,   198,   228,   266,    62,   267,   263,    60,   272,   268,
     263,   277,   263,   373,   271,   273,   274,   275,   279,   349,
      79,    62,    80,   276,   159,   280,   282,   283,   286,   293,
      81,   287,   288,   289,    82,   290,   144,   145,   263,   152,
     291,    80,   303,   318,    86,   263,    86,   263,   311,   263,
     325,   263,    81,   312,   313,   316,    82,   319,   322,   263,
     111,   112,   113,   326,   330,   332,    74,    75,    76,    77,
      78,    81,   331,   343,   263,    82,   334,   144,   145,   263,
     345,   346,   363,    86,   164,   165,   166,   167,   168,   351,
     366,   360,   354,   362,    86,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   295,   365,   367,   359,   110,    75,
      76,    77,    78,   368,   377,   236,   237,    79,   238,    80,
     378,   385,   380,   386,    58,   239,   240,   388,   390,   241,
      59,   392,   395,   242,   393,   394,   396,   314,    75,    76,
      77,    78,   243,   398,   399,   400,    60,   402,   244,    81,
      35,    31,    42,    82,   128,   129,   130,   131,   132,   133,
      62,    49,   160,   245,   246,   140,   225,   379,   295,   308,
     357,    80,   127,   128,   129,   130,   131,   132,   133,   236,
     237,   355,   238,   374,   382,   389,   162,     0,    58,   239,
     240,     0,     0,   241,    59,     0,     0,   242,    79,     0,
      80,    81,     0,   144,   145,    82,   243,     0,     0,     0,
      60,     0,   244,   278,     0,     0,   281,     0,     0,     0,
       0,     0,     0,     0,    62,     0,     0,   245,   246,     0,
      81,     0,    86,   327,    82,   235,     0,     0,     0,     0,
       0,     0,     0,   300,     0,   302,   236,   237,     0,   238,
     306,     0,     0,     0,     0,    58,   239,   240,     0,     0,
     241,    59,     0,     0,   242,     0,     0,   144,   145,    86,
       0,     0,     0,   243,     0,     0,   170,    60,   198,   244,
       0,     0,     0,   323,   199,   103,   104,   105,   106,   107,
     108,    62,     0,     0,   245,   246,     0,     0,   235,     0,
     370,     0,     0,     0,     0,     0,   353,     0,     0,   236,
     237,     0,   238,   361,   200,   201,     0,     0,    58,   239,
     240,     0,     0,   241,    59,    -7,     0,   242,     0,     0,
     375,     0,     0,     0,   144,   145,   243,     0,    13,   353,
      60,     0,   244,     0,    14,     0,     0,    15,     0,     0,
       0,    16,     0,     0,    62,     0,    17,   245,   246,     0,
       0,    18,     0,     0,     0,     0,    13,    19,     0,     0,
       0,     0,    14,     0,    20,    15,    21,     0,     0,    16,
       0,    22,    23,     0,    17,    24,     0,     0,     0,    18,
       0,     0,     0,     0,    13,    19,     0,   144,   145,     0,
      14,     0,    20,    15,    21,     0,     0,    16,     0,    22,
      23,     0,    17,    24,     0,     0,     0,    18,     0,     0,
       0,     0,   -31,    19,     0,     0,     0,     0,     0,     0,
      20,     0,    21,     0,     0,     0,     0,    22,    23,     0,
     198,    24,   270,     0,     0,     0,   199,   103,   104,   105,
     106,   107,   108,     0,     0,     0,     0,   198,     0,     0,
       0,     0,    72,   199,   103,   104,   105,   106,   107,   108,
       0,     0,     0,     0,   198,     0,   200,   201,     0,    72,
     199,   103,   104,   105,   106,   107,   108,     0,     0,     0,
       0,     0,     0,   200,   201,     0,     0,     0,   171,   -42,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     200,   201,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   315,   -42,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   317,   -42,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,     0,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   320,   -42,   125,
     126,   127,   128,   129,   130,   131,   132,   133,     0,     0,
       0,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     376,   -42,   126,   127,   128,   129,   130,   131,   132,   133,
       0,     0,     0,     0,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   369,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   304,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   307,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   333,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     387,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   101,
       0,     0,     0,     0,     0,   -41,   -41,   102,   103,   104,
     105,   106,   107,   108,   324,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     101,   -41,   198,   -41,     0,   -41,   -41,   -41,   199,   103,
     104,   105,   106,   107,   108,   101,     0,     0,     0,     0,
       0,   -41,   -41,   102,   103,   104,   105,   106,   107,   108,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   -42,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133
};

static const yytype_int16 yycheck[] =
{
      71,    48,    51,    50,   101,    51,    53,    64,   103,    66,
       3,    54,    71,   159,    79,     3,     3,   287,    19,   233,
       4,    21,    71,    72,    30,     8,    73,    10,    64,     3,
     101,    66,   103,     9,     0,   249,   250,    38,    44,   104,
       3,     4,     5,     6,     7,    72,   103,   317,    66,    23,
      26,    72,   198,    88,     3,    29,   270,   114,    35,   205,
     274,    88,   159,    68,   135,   279,    71,   138,    71,    32,
      88,    45,    71,   170,    23,   221,   135,    64,   114,   138,
      29,    65,   228,     9,    64,    59,   135,     3,   159,   138,
      50,     3,    72,    53,   308,   135,    45,    44,   138,   170,
      26,   198,    28,    66,   199,    68,    99,     3,   205,   158,
      59,    68,   207,   327,   102,   103,     3,   331,     3,    97,
      98,    99,   268,   339,   221,   341,    68,   198,   102,   103,
      30,   228,    70,    96,   205,    69,    69,   100,    23,   102,
     103,    90,    98,    99,    29,   359,    96,    97,    98,    99,
     221,   194,    71,     3,   368,   226,   370,   228,   372,    65,
      45,    70,   233,     3,    72,    50,   380,    52,    53,    66,
      90,   268,   318,    67,    59,   272,     3,    70,   249,   250,
       3,   395,     3,    37,    64,     3,   400,     3,     4,     5,
       6,     7,    95,    96,    97,    98,    99,   268,     3,   270,
       3,   272,    65,   274,    70,   262,    67,    72,   279,     3,
       4,     5,     6,     7,    72,     3,   287,    99,    23,    71,
      65,   318,    16,   272,    29,     3,   272,     3,     3,     4,
       5,     6,     7,    64,     3,    23,   333,   308,    67,    69,
      45,    29,   299,   290,    68,    67,   317,   318,    90,    65,
      66,    66,    66,    66,    59,    65,   327,    45,    66,    68,
     331,    16,   333,   360,    71,    66,    68,    66,    68,   366,
      64,    59,    66,    71,    68,    66,    71,    69,    71,    69,
      96,    34,    71,    67,   100,    68,   102,   103,   359,   360,
      67,    66,     3,    66,    64,   366,    66,   368,    69,   370,
      68,   372,    96,    69,    71,    69,   100,    69,    69,   380,
      80,    81,    82,    62,    43,    69,     3,     4,     5,     6,
       7,    96,    68,    66,   395,   100,     3,   102,   103,   400,
      67,    66,     3,   103,   104,   105,   106,   107,   108,    67,
      70,   104,    69,    69,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,     3,    69,    67,    79,     3,     4,
       5,     6,     7,    68,    83,    14,    15,    64,    17,    66,
       3,    71,    68,    71,    23,    24,    25,    71,    67,    28,
      29,    69,    68,    32,    69,    69,    69,     3,     4,     5,
       6,     7,    41,    69,    54,    68,    45,    69,    47,    96,
      30,    26,    37,   100,    94,    95,    96,    97,    98,    99,
      59,    42,   103,    62,    63,    95,   211,   366,     3,    68,
     341,    66,    93,    94,    95,    96,    97,    98,    99,    14,
      15,   339,    17,   360,   369,   377,   103,    -1,    23,    24,
      25,    -1,    -1,    28,    29,    -1,    -1,    32,    64,    -1,
      66,    96,    -1,   102,   103,   100,    41,    -1,    -1,    -1,
      45,    -1,    47,   243,    -1,    -1,   246,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    59,    -1,    -1,    62,    63,    -1,
      96,    -1,   262,    68,   100,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   273,    -1,   275,    14,    15,    -1,    17,
     280,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,
      28,    29,    -1,    -1,    32,    -1,    -1,   102,   103,   299,
      -1,    -1,    -1,    41,    -1,    -1,    64,    45,    66,    47,
      -1,    -1,    -1,   313,    72,    73,    74,    75,    76,    77,
      78,    59,    -1,    -1,    62,    63,    -1,    -1,     3,    -1,
      68,    -1,    -1,    -1,    -1,    -1,   336,    -1,    -1,    14,
      15,    -1,    17,   343,   102,   103,    -1,    -1,    23,    24,
      25,    -1,    -1,    28,    29,     0,    -1,    32,    -1,    -1,
     360,    -1,    -1,    -1,   102,   103,    41,    -1,    13,   369,
      45,    -1,    47,    -1,    19,    -1,    -1,    22,    -1,    -1,
      -1,    26,    -1,    -1,    59,    -1,    31,    62,    63,    -1,
      -1,    36,    -1,    -1,    -1,    -1,    13,    42,    -1,    -1,
      -1,    -1,    19,    -1,    49,    22,    51,    -1,    -1,    26,
      -1,    56,    57,    -1,    31,    60,    -1,    -1,    -1,    36,
      -1,    -1,    -1,    -1,    13,    42,    -1,   102,   103,    -1,
      19,    -1,    49,    22,    51,    -1,    -1,    26,    -1,    56,
      57,    -1,    31,    60,    -1,    -1,    -1,    36,    -1,    -1,
      -1,    -1,    69,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    -1,    51,    -1,    -1,    -1,    -1,    56,    57,    -1,
      66,    60,    68,    -1,    -1,    -1,    72,    73,    74,    75,
      76,    77,    78,    -1,    -1,    -1,    -1,    66,    -1,    -1,
      -1,    -1,    88,    72,    73,    74,    75,    76,    77,    78,
      -1,    -1,    -1,    -1,    66,    -1,   102,   103,    -1,    88,
      72,    73,    74,    75,    76,    77,    78,    -1,    -1,    -1,
      -1,    -1,    -1,   102,   103,    -1,    -1,    -1,    67,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     102,   103,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,    67,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,    67,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,    67,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,    -1,    -1,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
      67,    91,    92,    93,    94,    95,    96,    97,    98,    99,
      -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,    71,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,    64,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
      64,    65,    66,    67,    -1,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    64,    -1,    -1,    -1,    -1,
      -1,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99
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
     110,   111,   116,   125,    70,   116,   116,     3,    23,    29,
      45,    52,    59,   120,   124,   126,   154,    69,   116,   118,
      69,    66,    88,    71,     3,     4,     5,     6,     7,    64,
      66,    96,   100,   119,   121,   122,   155,   160,   163,     3,
     121,     3,   124,   127,   128,   154,   160,     3,    90,   154,
     116,    64,    72,    73,    74,    75,    76,    77,    78,    65,
       3,   155,   155,   155,    70,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,    72,    66,     3,    67,    70,     3,
     119,    90,     3,    65,   102,   103,   133,   155,   156,   157,
     158,   159,   160,   161,   162,   163,     3,     3,    16,    68,
     122,   123,   158,   159,   155,   155,   155,   155,   155,     3,
      64,    67,   121,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,     3,   127,    37,   129,   127,    64,    66,    72,
     102,   103,     3,     3,    65,    70,    72,    72,     3,   154,
     156,    67,   118,    71,   156,     3,   159,   156,     3,     3,
     159,    66,    88,    64,    69,   129,    68,    67,    66,   156,
      90,     4,    65,    68,    71,     3,    14,    15,    17,    24,
      25,    28,    32,    41,    47,    62,    63,   120,   130,   131,
     132,   133,   134,   135,   136,   137,   140,   141,   142,   143,
     151,   153,   154,   160,   156,    67,    66,    65,    68,   130,
      68,    71,    66,    66,    68,    66,    71,    16,   155,    68,
      66,   155,    71,    69,   130,   130,    71,    34,    71,    67,
      68,    67,   156,    69,   130,     3,   120,   133,   138,   154,
     155,   130,   155,     3,    71,   130,   155,    71,    68,   131,
     116,    69,    69,    71,     3,    67,    69,    67,    66,    69,
      67,   130,    69,   155,    79,    68,    62,    68,   131,   156,
      43,    68,    69,    71,     3,    19,    38,   144,   145,   146,
     147,   148,   149,    66,   130,    67,    66,   130,     3,   133,
     139,    67,   150,   155,    69,   145,   149,   147,   149,    79,
     104,   155,    69,     3,   152,    69,    70,    67,    68,    70,
      68,   130,    68,   133,   153,   155,    67,    83,     3,   139,
      68,   130,   150,   130,   130,    71,    71,    71,    71,   152,
      67,   130,    69,    69,    69,    68,    69,   130,    69,    54,
      68,   130,    69
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   105,   106,   107,   107,   108,   108,   109,   109,   110,
     110,   111,   111,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   113,   113,   113,   113,   114,
     115,   116,   116,   116,   116,   117,   117,   117,   118,   118,
     119,   119,   119,   119,   120,   120,   121,   121,   122,   122,
     122,   123,   123,   123,   123,   123,   123,   123,   123,   124,
     124,   125,   125,   125,   126,   126,   127,   127,   128,   128,
     128,   128,   129,   129,   130,   130,   130,   131,   131,   131,
     131,   131,   132,   133,   133,   133,   133,   133,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   135,
     136,   137,   138,   138,   139,   139,   140,   141,   141,   142,
     142,   143,   144,   144,   145,   145,   146,   146,   146,   146,
     147,   147,   148,   148,   149,   149,   150,   150,   151,   151,
     152,   152,   153,   154,   154,   154,   154,   154,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   156,   156,   156,
     157,   157,   158,   158,   159,   159,   160,   160,   161,   161,
     162,   162,   163,   163,   163,   163,   163,   163,   163
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     0,     3,     3,     4,     1,     2,     7,
       7,     0,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     1,     2,     2,
       2,     0,     4,     2,     2,     1,     1,     3,     1,     3,
       0,     1,     3,     3,     2,     2,     1,     3,     1,     1,
       1,     5,     3,     7,     5,     8,     6,     1,     1,     4,
       3,    10,     8,    10,     1,     1,     1,     3,     0,     2,
       2,     1,     0,     2,     0,     2,     2,     2,     2,     2,
       1,     1,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     3,     3,     7,
       9,    11,     1,     1,     1,     3,    10,     7,     5,     5,
       3,     7,     1,     1,     1,     2,     4,     4,     5,     4,
       1,     2,     5,     3,     2,     1,     1,     3,    12,    16,
       1,     3,     6,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     4,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     0,     1,     3,
       1,     1,     3,     3,     4,     6,     3,     3,     2,     2,
       2,     2,     3,     3,     3,     3,     3,     3,     3
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
#line 1905 "JavaGrammar.tab.cc"
    break;

  case 3:
#line 167 "JavaGrammar.yy"
               {
	}
#line 1912 "JavaGrammar.tab.cc"
    break;

  case 4:
#line 169 "JavaGrammar.yy"
                                            {
	}
#line 1919 "JavaGrammar.tab.cc"
    break;

  case 5:
#line 174 "JavaGrammar.yy"
                                          {
	}
#line 1926 "JavaGrammar.tab.cc"
    break;

  case 6:
#line 176 "JavaGrammar.yy"
                                                   {
	}
#line 1933 "JavaGrammar.tab.cc"
    break;

  case 7:
#line 188 "JavaGrammar.yy"
               {
	}
#line 1940 "JavaGrammar.tab.cc"
    break;

  case 8:
#line 190 "JavaGrammar.yy"
                         {
	}
#line 1947 "JavaGrammar.tab.cc"
    break;

  case 9:
#line 195 "JavaGrammar.yy"
                                                                                   {
	}
#line 1954 "JavaGrammar.tab.cc"
    break;

  case 10:
#line 197 "JavaGrammar.yy"
                                                                                   {
	}
#line 1961 "JavaGrammar.tab.cc"
    break;

  case 11:
#line 202 "JavaGrammar.yy"
               {
	}
#line 1968 "JavaGrammar.tab.cc"
    break;

  case 12:
#line 204 "JavaGrammar.yy"
                  {
	}
#line 1975 "JavaGrammar.tab.cc"
    break;

  case 13:
#line 209 "JavaGrammar.yy"
                  {
	}
#line 1982 "JavaGrammar.tab.cc"
    break;

  case 14:
#line 211 "JavaGrammar.yy"
                      {
	}
#line 1989 "JavaGrammar.tab.cc"
    break;

  case 15:
#line 213 "JavaGrammar.yy"
                      {
	}
#line 1996 "JavaGrammar.tab.cc"
    break;

  case 16:
#line 215 "JavaGrammar.yy"
                    {
	}
#line 2003 "JavaGrammar.tab.cc"
    break;

  case 17:
#line 217 "JavaGrammar.yy"
                    {
	}
#line 2010 "JavaGrammar.tab.cc"
    break;

  case 18:
#line 219 "JavaGrammar.yy"
                          {
	}
#line 2017 "JavaGrammar.tab.cc"
    break;

  case 19:
#line 221 "JavaGrammar.yy"
                       {
	}
#line 2024 "JavaGrammar.tab.cc"
    break;

  case 20:
#line 223 "JavaGrammar.yy"
                      {
	}
#line 2031 "JavaGrammar.tab.cc"
    break;

  case 21:
#line 225 "JavaGrammar.yy"
                    {
	}
#line 2038 "JavaGrammar.tab.cc"
    break;

  case 22:
#line 227 "JavaGrammar.yy"
                     {
	}
#line 2045 "JavaGrammar.tab.cc"
    break;

  case 23:
#line 229 "JavaGrammar.yy"
                       {
	}
#line 2052 "JavaGrammar.tab.cc"
    break;

  case 24:
#line 231 "JavaGrammar.yy"
                     {
	}
#line 2059 "JavaGrammar.tab.cc"
    break;

  case 25:
#line 236 "JavaGrammar.yy"
               {
	}
#line 2066 "JavaGrammar.tab.cc"
    break;

  case 26:
#line 238 "JavaGrammar.yy"
                 {
	}
#line 2073 "JavaGrammar.tab.cc"
    break;

  case 27:
#line 240 "JavaGrammar.yy"
                    {
	}
#line 2080 "JavaGrammar.tab.cc"
    break;

  case 28:
#line 242 "JavaGrammar.yy"
                            {
	}
#line 2087 "JavaGrammar.tab.cc"
    break;

  case 29:
#line 247 "JavaGrammar.yy"
                                   {
	}
#line 2094 "JavaGrammar.tab.cc"
    break;

  case 30:
#line 252 "JavaGrammar.yy"
                                        {
	}
#line 2101 "JavaGrammar.tab.cc"
    break;

  case 31:
#line 257 "JavaGrammar.yy"
               {
	}
#line 2108 "JavaGrammar.tab.cc"
    break;

  case 32:
#line 259 "JavaGrammar.yy"
                                                         {
	}
#line 2115 "JavaGrammar.tab.cc"
    break;

  case 33:
#line 261 "JavaGrammar.yy"
                          {
	}
#line 2122 "JavaGrammar.tab.cc"
    break;

  case 34:
#line 263 "JavaGrammar.yy"
                           {
	}
#line 2129 "JavaGrammar.tab.cc"
    break;

  case 35:
#line 268 "JavaGrammar.yy"
                       {
	}
#line 2136 "JavaGrammar.tab.cc"
    break;

  case 36:
#line 270 "JavaGrammar.yy"
                {
	}
#line 2143 "JavaGrammar.tab.cc"
    break;

  case 37:
#line 272 "JavaGrammar.yy"
                                              {
	}
#line 2150 "JavaGrammar.tab.cc"
    break;

  case 38:
#line 283 "JavaGrammar.yy"
                       {
	}
#line 2157 "JavaGrammar.tab.cc"
    break;

  case 39:
#line 285 "JavaGrammar.yy"
                                                   {
	}
#line 2164 "JavaGrammar.tab.cc"
    break;

  case 40:
#line 297 "JavaGrammar.yy"
              {
	}
#line 2171 "JavaGrammar.tab.cc"
    break;

  case 41:
#line 299 "JavaGrammar.yy"
                        {
	}
#line 2178 "JavaGrammar.tab.cc"
    break;

  case 42:
#line 301 "JavaGrammar.yy"
                                                  {
	}
#line 2185 "JavaGrammar.tab.cc"
    break;

  case 43:
#line 303 "JavaGrammar.yy"
                                                  {
	}
#line 2192 "JavaGrammar.tab.cc"
    break;

  case 44:
#line 308 "JavaGrammar.yy"
                              {
	}
#line 2199 "JavaGrammar.tab.cc"
    break;

  case 45:
#line 310 "JavaGrammar.yy"
                                    {
	}
#line 2206 "JavaGrammar.tab.cc"
    break;

  case 46:
#line 315 "JavaGrammar.yy"
                    {
	}
#line 2213 "JavaGrammar.tab.cc"
    break;

  case 47:
#line 317 "JavaGrammar.yy"
                                            {
	}
#line 2220 "JavaGrammar.tab.cc"
    break;

  case 48:
#line 322 "JavaGrammar.yy"
                  {
	}
#line 2227 "JavaGrammar.tab.cc"
    break;

  case 49:
#line 324 "JavaGrammar.yy"
                    {
	}
#line 2234 "JavaGrammar.tab.cc"
    break;

  case 50:
#line 326 "JavaGrammar.yy"
                             {
	}
#line 2241 "JavaGrammar.tab.cc"
    break;

  case 51:
#line 332 "JavaGrammar.yy"
                                                              {
	}
#line 2248 "JavaGrammar.tab.cc"
    break;

  case 52:
#line 334 "JavaGrammar.yy"
                                         {
	}
#line 2255 "JavaGrammar.tab.cc"
    break;

  case 53:
#line 336 "JavaGrammar.yy"
                                                                                    {
	}
#line 2262 "JavaGrammar.tab.cc"
    break;

  case 54:
#line 339 "JavaGrammar.yy"
                                                                {
	}
#line 2269 "JavaGrammar.tab.cc"
    break;

  case 55:
#line 341 "JavaGrammar.yy"
                                                                                                {
	}
#line 2276 "JavaGrammar.tab.cc"
    break;

  case 56:
#line 344 "JavaGrammar.yy"
                                                                          {
	}
#line 2283 "JavaGrammar.tab.cc"
    break;

  case 57:
#line 347 "JavaGrammar.yy"
                    {
	}
#line 2290 "JavaGrammar.tab.cc"
    break;

  case 58:
#line 349 "JavaGrammar.yy"
                            {
	}
#line 2297 "JavaGrammar.tab.cc"
    break;

  case 59:
#line 354 "JavaGrammar.yy"
                                                     {
	}
#line 2304 "JavaGrammar.tab.cc"
    break;

  case 60:
#line 356 "JavaGrammar.yy"
                                             {
	}
#line 2311 "JavaGrammar.tab.cc"
    break;

  case 61:
#line 361 "JavaGrammar.yy"
                                                                                                                       {
		//normal
	}
#line 2319 "JavaGrammar.tab.cc"
    break;

  case 62:
#line 364 "JavaGrammar.yy"
                                                                                                     {
		//abstract
	}
#line 2327 "JavaGrammar.tab.cc"
    break;

  case 63:
#line 367 "JavaGrammar.yy"
                                                                                                                     {
		//constructor
	}
#line 2335 "JavaGrammar.tab.cc"
    break;

  case 64:
#line 373 "JavaGrammar.yy"
                 {
	}
#line 2342 "JavaGrammar.tab.cc"
    break;

  case 65:
#line 375 "JavaGrammar.yy"
                  {
	}
#line 2349 "JavaGrammar.tab.cc"
    break;

  case 66:
#line 380 "JavaGrammar.yy"
                        {
	}
#line 2356 "JavaGrammar.tab.cc"
    break;

  case 67:
#line 382 "JavaGrammar.yy"
                                                    {
	}
#line 2363 "JavaGrammar.tab.cc"
    break;

  case 68:
#line 387 "JavaGrammar.yy"
               {
	}
#line 2370 "JavaGrammar.tab.cc"
    break;

  case 69:
#line 389 "JavaGrammar.yy"
                             {
	}
#line 2377 "JavaGrammar.tab.cc"
    break;

  case 70:
#line 391 "JavaGrammar.yy"
                                      {
	}
#line 2384 "JavaGrammar.tab.cc"
    break;

  case 71:
#line 393 "JavaGrammar.yy"
                        {
	}
#line 2391 "JavaGrammar.tab.cc"
    break;

  case 72:
#line 398 "JavaGrammar.yy"
               {
	}
#line 2398 "JavaGrammar.tab.cc"
    break;

  case 73:
#line 400 "JavaGrammar.yy"
                                     {
	}
#line 2405 "JavaGrammar.tab.cc"
    break;

  case 74:
#line 405 "JavaGrammar.yy"
               {
	}
#line 2412 "JavaGrammar.tab.cc"
    break;

  case 75:
#line 407 "JavaGrammar.yy"
                         {
	}
#line 2419 "JavaGrammar.tab.cc"
    break;

  case 76:
#line 409 "JavaGrammar.yy"
                             {
	}
#line 2426 "JavaGrammar.tab.cc"
    break;

  case 77:
#line 414 "JavaGrammar.yy"
                                     {
	}
#line 2433 "JavaGrammar.tab.cc"
    break;

  case 78:
#line 416 "JavaGrammar.yy"
                                          {
	}
#line 2440 "JavaGrammar.tab.cc"
    break;

  case 79:
#line 418 "JavaGrammar.yy"
                             {
	}
#line 2447 "JavaGrammar.tab.cc"
    break;

  case 80:
#line 420 "JavaGrammar.yy"
                              {
	}
#line 2454 "JavaGrammar.tab.cc"
    break;

  case 81:
#line 422 "JavaGrammar.yy"
                       {
	}
#line 2461 "JavaGrammar.tab.cc"
    break;

  case 82:
#line 427 "JavaGrammar.yy"
                                                   {
	}
#line 2468 "JavaGrammar.tab.cc"
    break;

  case 83:
#line 432 "JavaGrammar.yy"
                           {
	}
#line 2475 "JavaGrammar.tab.cc"
    break;

  case 84:
#line 434 "JavaGrammar.yy"
                    {
	}
#line 2482 "JavaGrammar.tab.cc"
    break;

  case 85:
#line 436 "JavaGrammar.yy"
                       {
	}
#line 2489 "JavaGrammar.tab.cc"
    break;

  case 86:
#line 438 "JavaGrammar.yy"
                      {
	}
#line 2496 "JavaGrammar.tab.cc"
    break;

  case 87:
#line 440 "JavaGrammar.yy"
                             {
	}
#line 2503 "JavaGrammar.tab.cc"
    break;

  case 88:
#line 445 "JavaGrammar.yy"
                  {
	}
#line 2510 "JavaGrammar.tab.cc"
    break;

  case 89:
#line 447 "JavaGrammar.yy"
                     {
	}
#line 2517 "JavaGrammar.tab.cc"
    break;

  case 90:
#line 449 "JavaGrammar.yy"
                 {
	}
#line 2524 "JavaGrammar.tab.cc"
    break;

  case 91:
#line 451 "JavaGrammar.yy"
                     {
	}
#line 2531 "JavaGrammar.tab.cc"
    break;

  case 92:
#line 453 "JavaGrammar.yy"
                     {
	}
#line 2538 "JavaGrammar.tab.cc"
    break;

  case 93:
#line 455 "JavaGrammar.yy"
                         {
	}
#line 2545 "JavaGrammar.tab.cc"
    break;

  case 94:
#line 457 "JavaGrammar.yy"
                         {
	}
#line 2552 "JavaGrammar.tab.cc"
    break;

  case 95:
#line 459 "JavaGrammar.yy"
                            {
	}
#line 2559 "JavaGrammar.tab.cc"
    break;

  case 96:
#line 461 "JavaGrammar.yy"
                               {
	}
#line 2566 "JavaGrammar.tab.cc"
    break;

  case 97:
#line 463 "JavaGrammar.yy"
                                        {
	}
#line 2573 "JavaGrammar.tab.cc"
    break;

  case 98:
#line 465 "JavaGrammar.yy"
                                       {
	}
#line 2580 "JavaGrammar.tab.cc"
    break;

  case 99:
#line 470 "JavaGrammar.yy"
                                                                               {
	}
#line 2587 "JavaGrammar.tab.cc"
    break;

  case 100:
#line 475 "JavaGrammar.yy"
                                                                                               {
	}
#line 2594 "JavaGrammar.tab.cc"
    break;

  case 101:
#line 480 "JavaGrammar.yy"
                                                                                                                 {
	}
#line 2601 "JavaGrammar.tab.cc"
    break;

  case 102:
#line 485 "JavaGrammar.yy"
                                {
	}
#line 2608 "JavaGrammar.tab.cc"
    break;

  case 103:
#line 487 "JavaGrammar.yy"
                             {
	}
#line 2615 "JavaGrammar.tab.cc"
    break;

  case 104:
#line 492 "JavaGrammar.yy"
                            {
	}
#line 2622 "JavaGrammar.tab.cc"
    break;

  case 105:
#line 494 "JavaGrammar.yy"
                                                 {
	}
#line 2629 "JavaGrammar.tab.cc"
    break;

  case 106:
#line 499 "JavaGrammar.yy"
                                                                                                                   {
	}
#line 2636 "JavaGrammar.tab.cc"
    break;

  case 107:
#line 504 "JavaGrammar.yy"
                                                                            {
	}
#line 2643 "JavaGrammar.tab.cc"
    break;

  case 108:
#line 506 "JavaGrammar.yy"
                                                           {
	}
#line 2650 "JavaGrammar.tab.cc"
    break;

  case 109:
#line 511 "JavaGrammar.yy"
                                                         {
	}
#line 2657 "JavaGrammar.tab.cc"
    break;

  case 110:
#line 513 "JavaGrammar.yy"
                                        {
	}
#line 2664 "JavaGrammar.tab.cc"
    break;

  case 111:
#line 518 "JavaGrammar.yy"
                                                                                      {
	}
#line 2671 "JavaGrammar.tab.cc"
    break;

  case 112:
#line 523 "JavaGrammar.yy"
                    {
	}
#line 2678 "JavaGrammar.tab.cc"
    break;

  case 113:
#line 525 "JavaGrammar.yy"
                           {
	}
#line 2685 "JavaGrammar.tab.cc"
    break;

  case 114:
#line 530 "JavaGrammar.yy"
                   {
	}
#line 2692 "JavaGrammar.tab.cc"
    break;

  case 115:
#line 532 "JavaGrammar.yy"
                                {
	}
#line 2699 "JavaGrammar.tab.cc"
    break;

  case 116:
#line 537 "JavaGrammar.yy"
                                                            {
	}
#line 2706 "JavaGrammar.tab.cc"
    break;

  case 117:
#line 539 "JavaGrammar.yy"
                                                    {
	}
#line 2713 "JavaGrammar.tab.cc"
    break;

  case 118:
#line 541 "JavaGrammar.yy"
                                                            {
	}
#line 2720 "JavaGrammar.tab.cc"
    break;

  case 119:
#line 543 "JavaGrammar.yy"
                                                    {
	}
#line 2727 "JavaGrammar.tab.cc"
    break;

  case 120:
#line 548 "JavaGrammar.yy"
                         {
	}
#line 2734 "JavaGrammar.tab.cc"
    break;

  case 121:
#line 550 "JavaGrammar.yy"
                                            {
	}
#line 2741 "JavaGrammar.tab.cc"
    break;

  case 122:
#line 555 "JavaGrammar.yy"
                                                          {
	}
#line 2748 "JavaGrammar.tab.cc"
    break;

  case 123:
#line 557 "JavaGrammar.yy"
                                     {
	}
#line 2755 "JavaGrammar.tab.cc"
    break;

  case 124:
#line 562 "JavaGrammar.yy"
                      {
	}
#line 2762 "JavaGrammar.tab.cc"
    break;

  case 125:
#line 564 "JavaGrammar.yy"
                     {
	}
#line 2769 "JavaGrammar.tab.cc"
    break;

  case 126:
#line 569 "JavaGrammar.yy"
                   {
	}
#line 2776 "JavaGrammar.tab.cc"
    break;

  case 127:
#line 571 "JavaGrammar.yy"
                                   {
	}
#line 2783 "JavaGrammar.tab.cc"
    break;

  case 128:
#line 576 "JavaGrammar.yy"
                                                                                                                                     {
	}
#line 2790 "JavaGrammar.tab.cc"
    break;

  case 129:
#line 578 "JavaGrammar.yy"
                                                                                                                                                                               {
	}
#line 2797 "JavaGrammar.tab.cc"
    break;

  case 130:
#line 583 "JavaGrammar.yy"
                       {
	}
#line 2804 "JavaGrammar.tab.cc"
    break;

  case 131:
#line 585 "JavaGrammar.yy"
                                                {
	}
#line 2811 "JavaGrammar.tab.cc"
    break;

  case 132:
#line 590 "JavaGrammar.yy"
                                                                         {
	}
#line 2818 "JavaGrammar.tab.cc"
    break;

  case 133:
#line 595 "JavaGrammar.yy"
                {
	}
#line 2825 "JavaGrammar.tab.cc"
    break;

  case 134:
#line 597 "JavaGrammar.yy"
                     {
	}
#line 2832 "JavaGrammar.tab.cc"
    break;

  case 135:
#line 599 "JavaGrammar.yy"
                   {
	}
#line 2839 "JavaGrammar.tab.cc"
    break;

  case 136:
#line 601 "JavaGrammar.yy"
                        {
	}
#line 2846 "JavaGrammar.tab.cc"
    break;

  case 137:
#line 603 "JavaGrammar.yy"
                    {
	}
#line 2853 "JavaGrammar.tab.cc"
    break;

  case 138:
#line 608 "JavaGrammar.yy"
                                         {
	}
#line 2860 "JavaGrammar.tab.cc"
    break;

  case 139:
#line 610 "JavaGrammar.yy"
                    {
	}
#line 2867 "JavaGrammar.tab.cc"
    break;

  case 140:
#line 612 "JavaGrammar.yy"
                      {
	}
#line 2874 "JavaGrammar.tab.cc"
    break;

  case 141:
#line 614 "JavaGrammar.yy"
                     {
	}
#line 2881 "JavaGrammar.tab.cc"
    break;

  case 142:
#line 616 "JavaGrammar.yy"
                       {
	}
#line 2888 "JavaGrammar.tab.cc"
    break;

  case 143:
#line 618 "JavaGrammar.yy"
                        {
	}
#line 2895 "JavaGrammar.tab.cc"
    break;

  case 144:
#line 620 "JavaGrammar.yy"
                        {
	}
#line 2902 "JavaGrammar.tab.cc"
    break;

  case 145:
#line 622 "JavaGrammar.yy"
                                                            {
	}
#line 2909 "JavaGrammar.tab.cc"
    break;

  case 146:
#line 624 "JavaGrammar.yy"
                            {
	}
#line 2916 "JavaGrammar.tab.cc"
    break;

  case 147:
#line 626 "JavaGrammar.yy"
                               {
	}
#line 2923 "JavaGrammar.tab.cc"
    break;

  case 148:
#line 628 "JavaGrammar.yy"
                                       {
	}
#line 2930 "JavaGrammar.tab.cc"
    break;

  case 149:
#line 630 "JavaGrammar.yy"
                                       {
	}
#line 2937 "JavaGrammar.tab.cc"
    break;

  case 150:
#line 632 "JavaGrammar.yy"
                                       {
	}
#line 2944 "JavaGrammar.tab.cc"
    break;

  case 151:
#line 634 "JavaGrammar.yy"
                                       {
	}
#line 2951 "JavaGrammar.tab.cc"
    break;

  case 152:
#line 636 "JavaGrammar.yy"
                                       {
	}
#line 2958 "JavaGrammar.tab.cc"
    break;

  case 153:
#line 638 "JavaGrammar.yy"
                                         {
	}
#line 2965 "JavaGrammar.tab.cc"
    break;

  case 154:
#line 640 "JavaGrammar.yy"
                                          {
	}
#line 2972 "JavaGrammar.tab.cc"
    break;

  case 155:
#line 642 "JavaGrammar.yy"
                                           {
	}
#line 2979 "JavaGrammar.tab.cc"
    break;

  case 156:
#line 644 "JavaGrammar.yy"
                                        {
	}
#line 2986 "JavaGrammar.tab.cc"
    break;

  case 157:
#line 646 "JavaGrammar.yy"
                                          {
	}
#line 2993 "JavaGrammar.tab.cc"
    break;

  case 158:
#line 648 "JavaGrammar.yy"
                                          {
	}
#line 3000 "JavaGrammar.tab.cc"
    break;

  case 159:
#line 650 "JavaGrammar.yy"
                                       {
	}
#line 3007 "JavaGrammar.tab.cc"
    break;

  case 160:
#line 652 "JavaGrammar.yy"
                                      {
	}
#line 3014 "JavaGrammar.tab.cc"
    break;

  case 161:
#line 654 "JavaGrammar.yy"
                                         {
	}
#line 3021 "JavaGrammar.tab.cc"
    break;

  case 162:
#line 656 "JavaGrammar.yy"
                                          {
	}
#line 3028 "JavaGrammar.tab.cc"
    break;

  case 163:
#line 658 "JavaGrammar.yy"
                                          {
	}
#line 3035 "JavaGrammar.tab.cc"
    break;

  case 164:
#line 660 "JavaGrammar.yy"
                                          {
	}
#line 3042 "JavaGrammar.tab.cc"
    break;

  case 165:
#line 662 "JavaGrammar.yy"
                                          {
	}
#line 3049 "JavaGrammar.tab.cc"
    break;

  case 166:
#line 664 "JavaGrammar.yy"
                                           {
	}
#line 3056 "JavaGrammar.tab.cc"
    break;

  case 167:
#line 669 "JavaGrammar.yy"
               {
	}
#line 3063 "JavaGrammar.tab.cc"
    break;

  case 168:
#line 671 "JavaGrammar.yy"
                  {
	}
#line 3070 "JavaGrammar.tab.cc"
    break;

  case 169:
#line 673 "JavaGrammar.yy"
                                      {
	}
#line 3077 "JavaGrammar.tab.cc"
    break;

  case 170:
#line 678 "JavaGrammar.yy"
                   {
	}
#line 3084 "JavaGrammar.tab.cc"
    break;

  case 171:
#line 680 "JavaGrammar.yy"
                             {
	}
#line 3091 "JavaGrammar.tab.cc"
    break;

  case 172:
#line 685 "JavaGrammar.yy"
                                          {
	}
#line 3098 "JavaGrammar.tab.cc"
    break;

  case 173:
#line 687 "JavaGrammar.yy"
                                           {
	}
#line 3105 "JavaGrammar.tab.cc"
    break;

  case 174:
#line 692 "JavaGrammar.yy"
                                                       {
	}
#line 3112 "JavaGrammar.tab.cc"
    break;

  case 175:
#line 694 "JavaGrammar.yy"
                                                                           {
	}
#line 3119 "JavaGrammar.tab.cc"
    break;

  case 176:
#line 699 "JavaGrammar.yy"
                                              {
	}
#line 3126 "JavaGrammar.tab.cc"
    break;

  case 177:
#line 701 "JavaGrammar.yy"
                                                                                {
	}
#line 3133 "JavaGrammar.tab.cc"
    break;

  case 178:
#line 706 "JavaGrammar.yy"
                                  {
	}
#line 3140 "JavaGrammar.tab.cc"
    break;

  case 179:
#line 708 "JavaGrammar.yy"
                                   {
	}
#line 3147 "JavaGrammar.tab.cc"
    break;

  case 180:
#line 713 "JavaGrammar.yy"
                                  {
	}
#line 3154 "JavaGrammar.tab.cc"
    break;

  case 181:
#line 715 "JavaGrammar.yy"
                                   {
	}
#line 3161 "JavaGrammar.tab.cc"
    break;

  case 182:
#line 720 "JavaGrammar.yy"
                                                {
	}
#line 3168 "JavaGrammar.tab.cc"
    break;

  case 183:
#line 722 "JavaGrammar.yy"
                                                 {
	}
#line 3175 "JavaGrammar.tab.cc"
    break;

  case 184:
#line 724 "JavaGrammar.yy"
                                                 {
	}
#line 3182 "JavaGrammar.tab.cc"
    break;

  case 185:
#line 726 "JavaGrammar.yy"
                                                 {
	}
#line 3189 "JavaGrammar.tab.cc"
    break;

  case 186:
#line 728 "JavaGrammar.yy"
                                                 {
	}
#line 3196 "JavaGrammar.tab.cc"
    break;

  case 187:
#line 730 "JavaGrammar.yy"
                                               {
	}
#line 3203 "JavaGrammar.tab.cc"
    break;

  case 188:
#line 732 "JavaGrammar.yy"
                                       {
	}
#line 3210 "JavaGrammar.tab.cc"
    break;


#line 3214 "JavaGrammar.tab.cc"

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
#line 736 "JavaGrammar.yy"


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
