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
#define YYLAST   1139

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  105
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  59
/* YYNRULES -- Number of rules.  */
#define YYNRULES  189
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  398

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
     300,   302,   304,   306,   311,   313,   318,   320,   325,   327,
     329,   334,   337,   339,   341,   344,   346,   349,   352,   354,
     359,   361,   366,   368,   370,   375,   377,   382,   384,   389,
     391,   393,   395,   400,   402,   407,   409,   411,   416,   418,
     420,   422,   424,   429,   434,   436,   438,   440,   442,   447,
     449,   451,   453,   455,   457,   459,   461,   463,   465,   467,
     472,   477,   482,   487,   489,   494,   496,   501,   506,   508,
     513,   515,   520,   525,   527,   532,   534,   539,   541,   543,
     545,   550,   552,   557,   559,   564,   566,   571,   573,   578,
     580,   585,   587,   592,   597,   599,   601,   603,   605,   610,
     612,   614,   616,   618,   620,   622,   624,   626,   628,   630,
     632,   634,   636,   638,   640,   642,   644,   646,   648,   650,
     652,   654,   656,   658,   660,   662,   664,   666,   671,   673,
     675,   680,   682,   687,   689,   694,   696,   701,   703,   708,
     710,   715,   717,   722,   724,   726,   728,   730,   732,   734
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

#define YYPACT_NINF (-269)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-42)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -8,     1,    33,    59,     6,  -269,    34,  -269,     1,   584,
       1,  -269,    49,  -269,  -269,  -269,  -269,  -269,  -269,  -269,
    -269,  -269,  -269,  -269,  -269,  -269,   525,   -33,   584,  -269,
      59,  -269,    95,   121,  -269,  -269,    86,    27,   142,    71,
     143,    81,   124,  -269,  -269,   565,    85,  -269,   565,  -269,
     565,   510,    88,   565,   143,    92,  -269,    77,  -269,  -269,
    -269,  -269,  -269,    99,   354,   170,   354,  -269,  -269,  -269,
    -269,    74,   565,    80,  -269,  -269,  -269,  -269,   109,   475,
     475,   475,   110,  -269,   106,   931,   123,   127,  -269,  -269,
    -269,   111,  -269,   103,   193,   201,    53,   634,    91,  -269,
     326,   354,   475,   475,   475,   475,   475,   475,   475,   475,
     475,   475,   475,   475,   475,   475,   475,   475,   475,   475,
     475,   215,   168,  -269,   272,  -269,   216,   223,  -269,   931,
     165,   161,  -269,   160,   162,  -269,  -269,  -269,  -269,  -269,
      82,  -269,    57,   169,    82,  -269,   931,  -269,   160,  -269,
     949,   966,   982,   997,  1026,  1040,   648,   680,   613,   711,
     743,   228,   257,   112,   -37,    91,    43,   158,  -269,  -269,
     -19,   255,   192,   190,    12,   123,    82,   260,   359,   475,
     475,   475,   475,   475,  -269,  -269,  -269,  -269,  -269,    82,
     261,   268,   -39,   209,   211,  -269,   244,   168,   219,  -269,
     220,   222,   160,  1033,  -269,  -269,   931,   931,   931,   931,
     931,  -269,   224,   222,   160,    82,   196,    19,  -269,   143,
      67,  -269,   226,  -269,    82,   225,   227,   230,   231,  -269,
     487,  -269,   229,   232,   234,  -269,    82,   577,   233,   237,
     239,   240,   241,   238,   282,   475,   242,   245,   475,   263,
     259,   487,   487,   264,  -269,  -269,  -269,  -269,  -269,   279,
    -269,  -269,  -269,   269,   354,   162,  -269,   565,  -269,   270,
     487,  -269,     9,   475,   487,   475,  -269,   340,   825,   487,
     475,   854,  -269,  -269,  -269,  -269,  -269,    11,  -269,   298,
    -269,   299,   594,  -269,  -269,   300,   457,   667,   301,   700,
     306,  -269,   304,   733,  -269,   487,  -269,  -269,  -269,   475,
     205,   308,   317,   374,    82,   342,   315,   318,   883,   383,
      -1,   327,   487,  -269,   328,   330,   487,  -269,    13,   334,
    -269,   475,   335,  -269,    -1,  -269,    -1,   -29,   475,   338,
    -269,   405,   343,   611,   344,   346,   349,  -269,   796,  -269,
    -269,   320,  -269,   350,   424,    60,   766,  -269,   345,   427,
    -269,    13,   363,   487,   475,   487,  -269,   487,   364,   369,
     912,   372,   405,   367,  -269,   487,   375,  -269,   377,   382,
    -269,  -269,  -269,  -269,  -269,   389,   397,  -269,  -269,  -269,
     487,  -269,   399,   404,   402,   487,   403,  -269
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
      11,     0,     0,    11,     0,     0,    34,   137,   135,   138,
     134,    66,   136,     0,    40,     0,    40,    10,    33,    39,
       9,     0,    11,   144,   140,   141,   143,   142,     0,     0,
       0,     0,    49,    45,    46,    48,   145,     0,    44,   137,
      61,     0,    32,     0,     0,     0,   144,     0,   147,   148,
       0,    40,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    69,    60,   144,    42,     0,     0,   172,   171,
       0,   169,    84,    85,   145,    86,    87,    88,   177,    43,
     168,   139,   144,     0,   168,    50,    51,    59,    58,    47,
     161,   160,   162,   163,   164,   154,   155,   157,   159,   156,
     158,   165,   166,   167,   149,   150,   151,   152,   153,   178,
     137,     0,     0,    67,    40,    72,   168,     0,    40,     0,
       0,     0,     0,     0,   180,   179,   182,   181,   146,   168,
       0,     0,   137,     0,     0,    71,    73,    69,    41,    70,
       0,   177,   174,   144,   188,   189,   183,   184,   185,   186,
     187,   170,     0,   178,   173,   168,     0,     0,    53,     0,
       0,    68,     0,   175,   168,     0,     0,     0,     0,    74,
      75,    63,     0,    55,     0,    52,   168,   137,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    75,    75,     0,    81,    89,    90,    91,    92,    93,
      94,    95,    82,     0,    40,     0,   176,    11,    57,     0,
      75,    97,     0,     0,    75,     0,    96,     0,     0,    75,
       0,     0,    79,    62,    76,    77,    78,     0,    80,     0,
      54,     0,   137,   103,   104,     0,    40,     0,     0,     0,
       0,    98,     0,     0,    99,    75,   111,    56,    83,     0,
     144,     0,     0,     0,   168,     0,     0,     0,     0,     0,
       0,     0,    75,   109,     0,     0,    75,   110,     0,     0,
     126,     0,     0,   113,   115,   114,   121,     0,     0,     0,
     133,     0,     0,     0,   105,     0,     0,   125,   127,   112,
     116,     0,   122,     0,    75,     0,     0,   108,   131,     0,
     100,     0,     0,    75,     0,    75,   124,    75,     0,     0,
       0,     0,     0,     0,   106,    75,     0,   128,     0,     0,
     117,   120,   118,   101,   132,     0,     0,   107,   123,   119,
      75,   102,     0,   129,     0,    75,     0,   130
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -269,  -269,  -269,   443,   449,    22,    73,  -269,  -269,   447,
     446,   -42,    14,   -52,   311,   -48,   -55,   316,  -269,  -117,
    -269,  -269,   292,  -269,  -269,    15,  -268,  -269,   -49,  -269,
    -269,  -269,  -269,  -269,   132,  -269,  -269,  -269,  -269,  -269,
     163,  -269,   159,  -269,  -200,   134,  -269,   131,   141,   -50,
     136,  -134,  -269,   406,   -59,   -93,  -269,  -269,   321
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     9,    25,    50,    51,    28,    41,    39,
      43,    52,     6,    47,    82,   249,    88,    84,   145,    64,
      53,    65,   172,   173,   220,   250,   251,   252,   253,   254,
     255,   256,   257,   295,   345,   258,   259,   260,   261,   332,
     333,   334,   335,   336,   337,   347,   262,   359,   263,   264,
     129,   130,   131,   132,   133,    86,   135,   136,   137
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     134,    66,    69,    63,     4,   171,    55,   134,    56,    83,
     194,    68,   292,     1,   292,   198,   343,    32,   330,   306,
      33,    91,    12,   227,    29,   238,   239,   215,   240,   175,
      92,    26,    58,     7,    58,   241,   242,   331,    59,   243,
      59,   148,   200,   244,   128,   323,   149,   134,    26,   216,
     354,   134,   245,    94,    60,   211,    60,    40,   246,   117,
     118,   119,   120,   124,    74,    75,    76,    77,    62,    71,
      62,    38,   174,   247,   248,   355,    78,    89,    10,   305,
     171,   225,    27,   134,   228,   124,    74,    75,    76,    77,
     232,   128,   244,   193,     8,   128,   134,    58,    36,    27,
       5,    34,   269,    59,   175,    11,   124,    74,    75,    76,
      77,   126,   127,   126,   127,   126,   127,   140,   202,    60,
      30,   140,   134,   176,    37,    94,    79,   128,   367,   177,
      38,   134,   214,    62,   351,   230,   353,   265,   231,    45,
     128,   119,   120,   134,    93,    44,    46,   174,    79,    48,
     -41,   -41,    94,   -41,    40,    54,    80,    67,   265,   265,
      81,    70,   126,   127,    90,    71,   128,   229,   125,    79,
      72,   170,   192,    87,    95,   128,   101,   265,    80,   265,
     324,   265,    81,   100,   126,   127,   265,   128,   118,   119,
     120,    58,    58,   122,   265,   121,   138,    59,    59,    80,
      85,   123,    85,    81,   139,   126,   127,   116,   117,   118,
     119,   120,   265,    60,    60,    97,    98,    99,   169,   186,
     265,   134,   296,   294,   293,   289,   187,    62,    62,   265,
     188,   189,   190,   265,   191,   265,   146,    85,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   120,   195,   196,
     197,   265,   134,   201,   212,   128,   284,   285,   265,    93,
     265,   213,   265,   217,   265,   -41,   -41,    94,   -41,   344,
     218,   219,   265,   222,   319,   291,   226,   223,   176,   298,
     224,   125,   233,   234,   302,   235,   266,   265,   277,   236,
     267,   268,   265,   272,   271,   273,   368,   275,   274,   276,
     279,   280,   344,   287,    85,   206,   207,   208,   209,   210,
     317,   114,   115,   116,   117,   118,   119,   120,   283,   142,
      74,    75,    76,    77,   282,   286,   140,   339,   176,   290,
     288,   342,   143,   300,   177,   178,   179,   180,   181,   182,
     183,   115,   116,   117,   118,   119,   120,    73,    74,    75,
      76,    77,   203,    74,    75,    76,    77,   307,   308,   366,
     312,   309,   314,   315,   184,   185,   320,   292,   376,   321,
     378,   278,   379,   326,   281,   325,   329,   327,   238,   239,
     386,   240,    79,   338,   144,   340,   341,    58,   241,   242,
      85,   346,   243,    59,   349,   392,   244,   357,   358,   297,
     396,   299,   360,   362,   361,   245,   303,   363,    78,    60,
      79,   246,    80,    78,   355,    79,    81,   237,   372,   354,
     373,   375,    85,    62,   385,   380,   247,   248,   238,   239,
     381,   240,   322,   383,   387,   318,   388,    58,   241,   242,
      80,   389,   243,    59,    81,    80,   244,   390,   394,    81,
     310,    74,    75,    76,    77,   245,   391,   348,   393,    60,
     395,   246,   397,    35,   356,    31,   126,   127,    96,    74,
      75,    76,    77,    62,    42,   199,   247,   248,    49,   221,
     237,   370,   365,   374,   204,   352,   369,   350,   377,   205,
     348,   238,   239,   384,   240,     0,   147,     0,     0,     0,
      58,   241,   242,    57,     0,   243,    59,     0,     0,   244,
       0,    78,     0,    79,     0,    -7,   126,   127,   245,     0,
       0,     0,    60,    58,   246,     0,     0,     0,    13,    59,
       0,    79,     0,     0,    14,     0,    62,    15,     0,   247,
     248,    16,     0,    80,     0,    60,    17,    81,     0,     0,
      32,    18,    61,    33,     0,     0,     0,    19,     0,    62,
       0,    80,     0,     0,    20,    81,    21,     0,    13,     0,
       0,    22,    23,     0,    14,    24,     0,    15,     0,   126,
     127,    16,     0,     0,     0,     0,    17,    13,     0,     0,
       0,    18,     0,    14,     0,     0,    15,    19,     0,     0,
      16,     0,     0,     0,    20,    17,    21,     0,     0,     0,
      18,    22,    23,     0,     0,    24,    19,     0,     0,     0,
       0,     0,     0,    20,   -31,    21,     0,     0,     0,     0,
      22,    23,     0,   176,    24,   270,     0,     0,     0,   177,
     178,   179,   180,   181,   182,   183,     0,     0,     0,     0,
     176,     0,     0,     0,     0,    71,   177,   178,   179,   180,
     181,   182,   183,     0,     0,     0,     0,   176,     0,   184,
     185,     0,    71,   177,   178,   179,   180,   181,   182,   183,
       0,     0,     0,     0,     0,     0,   184,   185,     0,     0,
       0,   141,   -42,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   184,   185,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   311,   -42,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   313,   -42,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
       0,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     316,   -42,   112,   113,   114,   115,   116,   117,   118,   119,
     120,     0,     0,     0,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   371,   -42,   113,   114,   115,   116,   117,
     118,   119,   120,     0,     0,     0,     0,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   364,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   301,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   304,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   328,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   382,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,    93,   -41,     0,
     -41,     0,   -41,   -41,   -41,    94,   178,   179,   180,   181,
     182,   183,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   -42,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120
};

static const yytype_int16 yycheck[] =
{
      93,    51,    54,    51,     3,   122,    48,   100,    50,    64,
     144,    53,     3,    21,     3,     3,     3,    50,    19,   287,
      53,    71,     8,     4,    10,    14,    15,    66,    17,   122,
      72,     9,    23,     0,    23,    24,    25,    38,    29,    28,
      29,   100,   176,    32,    93,   313,   101,   140,    26,    88,
      79,   144,    41,    72,    45,   189,    45,    30,    47,    96,
      97,    98,    99,     3,     4,     5,     6,     7,    59,    88,
      59,    44,   122,    62,    63,   104,    64,     3,    72,    68,
     197,   215,     9,   176,    65,     3,     4,     5,     6,     7,
     224,   140,    32,   143,    35,   144,   189,    23,     3,    26,
      99,    28,   236,    29,   197,    71,     3,     4,     5,     6,
       7,   102,   103,   102,   103,   102,   103,    64,   177,    45,
      71,    64,   215,    66,     3,    72,    66,   176,    68,    72,
      44,   224,   191,    59,   334,    68,   336,   230,    71,    68,
     189,    98,    99,   236,    64,     3,     3,   197,    66,    68,
      70,    71,    72,    73,    30,    70,    96,    69,   251,   252,
     100,    69,   102,   103,    90,    88,   215,   219,    65,    66,
      71,     3,     3,     3,    65,   224,    70,   270,    96,   272,
     314,   274,   100,    73,   102,   103,   279,   236,    97,    98,
      99,    23,    23,    66,   287,    72,     3,    29,    29,    96,
      64,    90,    66,   100,     3,   102,   103,    95,    96,    97,
      98,    99,   305,    45,    45,    79,    80,    81,     3,     3,
     313,   314,   272,   272,   272,   267,     3,    59,    59,   322,
      65,    70,    72,   326,    72,   328,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,    99,     3,    67,
      70,   354,   355,     3,     3,   314,   251,   252,   361,    64,
     363,     3,   365,    64,   367,    70,    71,    72,    73,   328,
      69,    37,   375,    64,    79,   270,    90,    67,    66,   274,
      66,    65,    67,    66,   279,    65,    67,   390,    16,    68,
      68,    67,   395,    66,    71,    66,   355,    66,    68,    71,
      68,    66,   361,    34,   178,   179,   180,   181,   182,   183,
     305,    93,    94,    95,    96,    97,    98,    99,    69,     3,
       4,     5,     6,     7,    71,    71,    64,   322,    66,    69,
      71,   326,    16,     3,    72,    73,    74,    75,    76,    77,
      78,    94,    95,    96,    97,    98,    99,     3,     4,     5,
       6,     7,     3,     4,     5,     6,     7,    69,    69,   354,
      69,    71,    66,    69,   102,   103,    68,     3,   363,    62,
     365,   245,   367,    68,   248,    43,     3,    69,    14,    15,
     375,    17,    66,    66,    68,    67,    66,    23,    24,    25,
     264,    67,    28,    29,    69,   390,    32,    69,     3,   273,
     395,   275,    69,    67,    70,    41,   280,    68,    64,    45,
      66,    47,    96,    64,   104,    66,   100,     3,    83,    79,
       3,    68,   296,    59,    67,    71,    62,    63,    14,    15,
      71,    17,    68,    71,    69,   309,    69,    23,    24,    25,
      96,    69,    28,    29,   100,    96,    32,    68,    54,   100,
       3,     4,     5,     6,     7,    41,    69,   331,    69,    45,
      68,    47,    69,    30,   338,    26,   102,   103,     3,     4,
       5,     6,     7,    59,    37,   174,    62,    63,    42,   197,
       3,   355,    68,   361,   178,   336,   355,   334,   364,   178,
     364,    14,    15,   372,    17,    -1,   100,    -1,    -1,    -1,
      23,    24,    25,     3,    -1,    28,    29,    -1,    -1,    32,
      -1,    64,    -1,    66,    -1,     0,   102,   103,    41,    -1,
      -1,    -1,    45,    23,    47,    -1,    -1,    -1,    13,    29,
      -1,    66,    -1,    -1,    19,    -1,    59,    22,    -1,    62,
      63,    26,    -1,    96,    -1,    45,    31,   100,    -1,    -1,
      50,    36,    52,    53,    -1,    -1,    -1,    42,    -1,    59,
      -1,    96,    -1,    -1,    49,   100,    51,    -1,    13,    -1,
      -1,    56,    57,    -1,    19,    60,    -1,    22,    -1,   102,
     103,    26,    -1,    -1,    -1,    -1,    31,    13,    -1,    -1,
      -1,    36,    -1,    19,    -1,    -1,    22,    42,    -1,    -1,
      26,    -1,    -1,    -1,    49,    31,    51,    -1,    -1,    -1,
      36,    56,    57,    -1,    -1,    60,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    69,    51,    -1,    -1,    -1,    -1,
      56,    57,    -1,    66,    60,    68,    -1,    -1,    -1,    72,
      73,    74,    75,    76,    77,    78,    -1,    -1,    -1,    -1,
      66,    -1,    -1,    -1,    -1,    88,    72,    73,    74,    75,
      76,    77,    78,    -1,    -1,    -1,    -1,    66,    -1,   102,
     103,    -1,    88,    72,    73,    74,    75,    76,    77,    78,
      -1,    -1,    -1,    -1,    -1,    -1,   102,   103,    -1,    -1,
      -1,    67,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   102,   103,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,    67,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,    67,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
      67,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,    -1,    -1,    -1,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,    67,    91,    92,    93,    94,    95,    96,
      97,    98,    99,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
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
      93,    94,    95,    96,    97,    98,    99,    64,    65,    -1,
      67,    -1,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99
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
      69,    88,    71,     3,     4,     5,     6,     7,    64,    66,
      96,   100,   119,   121,   122,   155,   160,     3,   121,     3,
      90,   154,   116,    64,    72,    65,     3,   155,   155,   155,
      73,    70,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,    72,    66,    90,     3,    65,   102,   103,   133,   155,
     156,   157,   158,   159,   160,   161,   162,   163,     3,     3,
      64,    67,     3,    16,    68,   123,   155,   158,   159,   121,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,     3,
       3,   124,   127,   128,   154,   160,    66,    72,    73,    74,
      75,    76,    77,    78,   102,   103,     3,     3,    65,    70,
      72,    72,     3,   154,   156,     3,    67,    70,     3,   119,
     156,     3,   159,     3,   122,   163,   155,   155,   155,   155,
     155,   156,     3,     3,   159,    66,    88,    64,    69,    37,
     129,   127,    64,    67,    66,   156,    90,     4,    65,   118,
      68,    71,   156,    67,    66,    65,    68,     3,    14,    15,
      17,    24,    25,    28,    32,    41,    47,    62,    63,   120,
     130,   131,   132,   133,   134,   135,   136,   137,   140,   141,
     142,   143,   151,   153,   154,   160,    67,    68,    67,   156,
      68,    71,    66,    66,    68,    66,    71,    16,   155,    68,
      66,   155,    71,    69,   130,   130,    71,    34,    71,   116,
      69,   130,     3,   120,   133,   138,   154,   155,   130,   155,
       3,    71,   130,   155,    71,    68,   131,    69,    69,    71,
       3,    67,    69,    67,    66,    69,    67,   130,   155,    79,
      68,    62,    68,   131,   156,    43,    68,    69,    71,     3,
      19,    38,   144,   145,   146,   147,   148,   149,    66,   130,
      67,    66,   130,     3,   133,   139,    67,   150,   155,    69,
     145,   149,   147,   149,    79,   104,   155,    69,     3,   152,
      69,    70,    67,    68,    70,    68,   130,    68,   133,   153,
     155,    67,    83,     3,   139,    68,   130,   150,   130,   130,
      71,    71,    71,    71,   152,    67,   130,    69,    69,    69,
      68,    69,   130,    69,    54,    68,   130,    69
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   105,   106,   107,   107,   108,   108,   109,   109,   110,
     110,   111,   111,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   113,   113,   113,   113,   114,
     115,   116,   116,   116,   116,   117,   117,   117,   118,   118,
     119,   119,   119,   119,   120,   120,   121,   121,   122,   122,
     122,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     124,   124,   125,   125,   125,   126,   126,   127,   127,   128,
     128,   128,   128,   129,   129,   130,   130,   130,   131,   131,
     131,   131,   131,   132,   133,   133,   133,   133,   133,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     135,   136,   137,   138,   138,   139,   139,   140,   141,   141,
     142,   142,   143,   144,   144,   145,   145,   146,   146,   146,
     146,   147,   147,   148,   148,   149,   149,   150,   150,   151,
     151,   152,   152,   153,   154,   154,   154,   154,   154,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   156,   156,
     156,   157,   157,   158,   158,   159,   159,   160,   160,   161,
     161,   162,   162,   163,   163,   163,   163,   163,   163,   163
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     0,     3,     3,     4,     1,     2,     7,
       7,     0,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     1,     2,     2,
       2,     0,     4,     2,     2,     1,     1,     3,     1,     3,
       0,     1,     3,     3,     2,     2,     1,     3,     1,     1,
       3,     1,     5,     3,     7,     5,     8,     6,     1,     1,
       4,     3,    10,     8,     8,     1,     1,     1,     3,     0,
       2,     2,     1,     0,     2,     0,     2,     2,     2,     2,
       2,     1,     1,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     3,     3,
       7,     9,    11,     1,     1,     1,     3,    10,     7,     5,
       5,     3,     7,     1,     1,     1,     2,     4,     4,     5,
       4,     1,     2,     5,     3,     2,     1,     1,     3,    12,
      16,     1,     3,     6,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     4,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     0,     1,
       3,     1,     1,     3,     3,     4,     6,     3,     3,     2,
       2,     2,     2,     3,     3,     3,     3,     3,     3,     3
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
#line 1884 "JavaGrammar.tab.cc"
    break;

  case 3:
#line 167 "JavaGrammar.yy"
               {
	}
#line 1891 "JavaGrammar.tab.cc"
    break;

  case 4:
#line 169 "JavaGrammar.yy"
                                            {
	}
#line 1898 "JavaGrammar.tab.cc"
    break;

  case 5:
#line 174 "JavaGrammar.yy"
                                          {
	}
#line 1905 "JavaGrammar.tab.cc"
    break;

  case 6:
#line 176 "JavaGrammar.yy"
                                                   {
	}
#line 1912 "JavaGrammar.tab.cc"
    break;

  case 7:
#line 188 "JavaGrammar.yy"
                {
	}
#line 1919 "JavaGrammar.tab.cc"
    break;

  case 8:
#line 190 "JavaGrammar.yy"
                          {
	}
#line 1926 "JavaGrammar.tab.cc"
    break;

  case 9:
#line 195 "JavaGrammar.yy"
                                                                                   {
	}
#line 1933 "JavaGrammar.tab.cc"
    break;

  case 10:
#line 197 "JavaGrammar.yy"
                                                                                   {
	}
#line 1940 "JavaGrammar.tab.cc"
    break;

  case 11:
#line 202 "JavaGrammar.yy"
               {
	}
#line 1947 "JavaGrammar.tab.cc"
    break;

  case 12:
#line 204 "JavaGrammar.yy"
                  {
	}
#line 1954 "JavaGrammar.tab.cc"
    break;

  case 13:
#line 209 "JavaGrammar.yy"
                  {
	}
#line 1961 "JavaGrammar.tab.cc"
    break;

  case 14:
#line 211 "JavaGrammar.yy"
                      {
	}
#line 1968 "JavaGrammar.tab.cc"
    break;

  case 15:
#line 213 "JavaGrammar.yy"
                      {
	}
#line 1975 "JavaGrammar.tab.cc"
    break;

  case 16:
#line 215 "JavaGrammar.yy"
                    {
	}
#line 1982 "JavaGrammar.tab.cc"
    break;

  case 17:
#line 217 "JavaGrammar.yy"
                    {
	}
#line 1989 "JavaGrammar.tab.cc"
    break;

  case 18:
#line 219 "JavaGrammar.yy"
                          {
	}
#line 1996 "JavaGrammar.tab.cc"
    break;

  case 19:
#line 221 "JavaGrammar.yy"
                       {
	}
#line 2003 "JavaGrammar.tab.cc"
    break;

  case 20:
#line 223 "JavaGrammar.yy"
                      {
	}
#line 2010 "JavaGrammar.tab.cc"
    break;

  case 21:
#line 225 "JavaGrammar.yy"
                    {
	}
#line 2017 "JavaGrammar.tab.cc"
    break;

  case 22:
#line 227 "JavaGrammar.yy"
                     {
	}
#line 2024 "JavaGrammar.tab.cc"
    break;

  case 23:
#line 229 "JavaGrammar.yy"
                       {
	}
#line 2031 "JavaGrammar.tab.cc"
    break;

  case 24:
#line 231 "JavaGrammar.yy"
                     {
	}
#line 2038 "JavaGrammar.tab.cc"
    break;

  case 25:
#line 236 "JavaGrammar.yy"
               {
	}
#line 2045 "JavaGrammar.tab.cc"
    break;

  case 26:
#line 238 "JavaGrammar.yy"
                 {
	}
#line 2052 "JavaGrammar.tab.cc"
    break;

  case 27:
#line 240 "JavaGrammar.yy"
                    {
	}
#line 2059 "JavaGrammar.tab.cc"
    break;

  case 28:
#line 242 "JavaGrammar.yy"
                            {
	}
#line 2066 "JavaGrammar.tab.cc"
    break;

  case 29:
#line 247 "JavaGrammar.yy"
                                   {
	}
#line 2073 "JavaGrammar.tab.cc"
    break;

  case 30:
#line 252 "JavaGrammar.yy"
                                        {
	}
#line 2080 "JavaGrammar.tab.cc"
    break;

  case 31:
#line 257 "JavaGrammar.yy"
               {
	}
#line 2087 "JavaGrammar.tab.cc"
    break;

  case 32:
#line 259 "JavaGrammar.yy"
                                                         {
	}
#line 2094 "JavaGrammar.tab.cc"
    break;

  case 33:
#line 261 "JavaGrammar.yy"
                          {
	}
#line 2101 "JavaGrammar.tab.cc"
    break;

  case 34:
#line 263 "JavaGrammar.yy"
                           {
	}
#line 2108 "JavaGrammar.tab.cc"
    break;

  case 35:
#line 268 "JavaGrammar.yy"
                       {
	}
#line 2115 "JavaGrammar.tab.cc"
    break;

  case 36:
#line 270 "JavaGrammar.yy"
                {
	}
#line 2122 "JavaGrammar.tab.cc"
    break;

  case 37:
#line 272 "JavaGrammar.yy"
                                              {
	}
#line 2129 "JavaGrammar.tab.cc"
    break;

  case 38:
#line 283 "JavaGrammar.yy"
                       {
	}
#line 2136 "JavaGrammar.tab.cc"
    break;

  case 39:
#line 285 "JavaGrammar.yy"
                                                   {
	}
#line 2143 "JavaGrammar.tab.cc"
    break;

  case 40:
#line 300 "JavaGrammar.yy"
              {
	}
#line 2150 "JavaGrammar.tab.cc"
    break;

  case 41:
#line 302 "JavaGrammar.yy"
                        {
	}
#line 2157 "JavaGrammar.tab.cc"
    break;

  case 42:
#line 304 "JavaGrammar.yy"
                                                  {
	}
#line 2164 "JavaGrammar.tab.cc"
    break;

  case 43:
#line 306 "JavaGrammar.yy"
                                                  {
	}
#line 2171 "JavaGrammar.tab.cc"
    break;

  case 44:
#line 311 "JavaGrammar.yy"
                              {
	}
#line 2178 "JavaGrammar.tab.cc"
    break;

  case 45:
#line 313 "JavaGrammar.yy"
                                    {
	}
#line 2185 "JavaGrammar.tab.cc"
    break;

  case 46:
#line 318 "JavaGrammar.yy"
                    {
	}
#line 2192 "JavaGrammar.tab.cc"
    break;

  case 47:
#line 320 "JavaGrammar.yy"
                                            {
	}
#line 2199 "JavaGrammar.tab.cc"
    break;

  case 48:
#line 325 "JavaGrammar.yy"
                  {
	}
#line 2206 "JavaGrammar.tab.cc"
    break;

  case 49:
#line 327 "JavaGrammar.yy"
                    {
	}
#line 2213 "JavaGrammar.tab.cc"
    break;

  case 50:
#line 329 "JavaGrammar.yy"
                                    {
	}
#line 2220 "JavaGrammar.tab.cc"
    break;

  case 51:
#line 334 "JavaGrammar.yy"
                   {
	}
#line 2227 "JavaGrammar.tab.cc"
    break;

  case 52:
#line 337 "JavaGrammar.yy"
                                                               {
	}
#line 2234 "JavaGrammar.tab.cc"
    break;

  case 53:
#line 339 "JavaGrammar.yy"
                                         {
	}
#line 2241 "JavaGrammar.tab.cc"
    break;

  case 54:
#line 341 "JavaGrammar.yy"
                                                                                    {
	}
#line 2248 "JavaGrammar.tab.cc"
    break;

  case 55:
#line 344 "JavaGrammar.yy"
                                                                {
	}
#line 2255 "JavaGrammar.tab.cc"
    break;

  case 56:
#line 346 "JavaGrammar.yy"
                                                                                                {
	}
#line 2262 "JavaGrammar.tab.cc"
    break;

  case 57:
#line 349 "JavaGrammar.yy"
                                                                          {
	}
#line 2269 "JavaGrammar.tab.cc"
    break;

  case 58:
#line 352 "JavaGrammar.yy"
                    {
	}
#line 2276 "JavaGrammar.tab.cc"
    break;

  case 59:
#line 354 "JavaGrammar.yy"
                            {
	}
#line 2283 "JavaGrammar.tab.cc"
    break;

  case 60:
#line 359 "JavaGrammar.yy"
                                                     {
	}
#line 2290 "JavaGrammar.tab.cc"
    break;

  case 61:
#line 361 "JavaGrammar.yy"
                                             {
	}
#line 2297 "JavaGrammar.tab.cc"
    break;

  case 62:
#line 366 "JavaGrammar.yy"
                                                                                                                       {
	}
#line 2304 "JavaGrammar.tab.cc"
    break;

  case 63:
#line 368 "JavaGrammar.yy"
                                                                                                     {
	}
#line 2311 "JavaGrammar.tab.cc"
    break;

  case 64:
#line 370 "JavaGrammar.yy"
                                                                                                     {
	}
#line 2318 "JavaGrammar.tab.cc"
    break;

  case 65:
#line 375 "JavaGrammar.yy"
                 {
	}
#line 2325 "JavaGrammar.tab.cc"
    break;

  case 66:
#line 377 "JavaGrammar.yy"
                  {
	}
#line 2332 "JavaGrammar.tab.cc"
    break;

  case 67:
#line 382 "JavaGrammar.yy"
                        {
	}
#line 2339 "JavaGrammar.tab.cc"
    break;

  case 68:
#line 384 "JavaGrammar.yy"
                                                    {
	}
#line 2346 "JavaGrammar.tab.cc"
    break;

  case 69:
#line 389 "JavaGrammar.yy"
               {
	}
#line 2353 "JavaGrammar.tab.cc"
    break;

  case 70:
#line 391 "JavaGrammar.yy"
                             {
	}
#line 2360 "JavaGrammar.tab.cc"
    break;

  case 71:
#line 393 "JavaGrammar.yy"
                                      {
	}
#line 2367 "JavaGrammar.tab.cc"
    break;

  case 72:
#line 395 "JavaGrammar.yy"
                        {
	}
#line 2374 "JavaGrammar.tab.cc"
    break;

  case 73:
#line 400 "JavaGrammar.yy"
               {
	}
#line 2381 "JavaGrammar.tab.cc"
    break;

  case 74:
#line 402 "JavaGrammar.yy"
                                     {
	}
#line 2388 "JavaGrammar.tab.cc"
    break;

  case 75:
#line 407 "JavaGrammar.yy"
               {
	}
#line 2395 "JavaGrammar.tab.cc"
    break;

  case 76:
#line 409 "JavaGrammar.yy"
                         {
	}
#line 2402 "JavaGrammar.tab.cc"
    break;

  case 77:
#line 411 "JavaGrammar.yy"
                             {
	}
#line 2409 "JavaGrammar.tab.cc"
    break;

  case 78:
#line 416 "JavaGrammar.yy"
                                     {
	}
#line 2416 "JavaGrammar.tab.cc"
    break;

  case 79:
#line 418 "JavaGrammar.yy"
                                          {
	}
#line 2423 "JavaGrammar.tab.cc"
    break;

  case 80:
#line 420 "JavaGrammar.yy"
                             {
	}
#line 2430 "JavaGrammar.tab.cc"
    break;

  case 81:
#line 422 "JavaGrammar.yy"
                              {
	}
#line 2437 "JavaGrammar.tab.cc"
    break;

  case 82:
#line 424 "JavaGrammar.yy"
                       {
	}
#line 2444 "JavaGrammar.tab.cc"
    break;

  case 83:
#line 429 "JavaGrammar.yy"
                                                   {
	}
#line 2451 "JavaGrammar.tab.cc"
    break;

  case 84:
#line 434 "JavaGrammar.yy"
                           {
	}
#line 2458 "JavaGrammar.tab.cc"
    break;

  case 85:
#line 436 "JavaGrammar.yy"
                    {
	}
#line 2465 "JavaGrammar.tab.cc"
    break;

  case 86:
#line 438 "JavaGrammar.yy"
                       {
	}
#line 2472 "JavaGrammar.tab.cc"
    break;

  case 87:
#line 440 "JavaGrammar.yy"
                      {
	}
#line 2479 "JavaGrammar.tab.cc"
    break;

  case 88:
#line 442 "JavaGrammar.yy"
                             {
	}
#line 2486 "JavaGrammar.tab.cc"
    break;

  case 89:
#line 447 "JavaGrammar.yy"
                  {
	}
#line 2493 "JavaGrammar.tab.cc"
    break;

  case 90:
#line 449 "JavaGrammar.yy"
                     {
	}
#line 2500 "JavaGrammar.tab.cc"
    break;

  case 91:
#line 451 "JavaGrammar.yy"
                 {
	}
#line 2507 "JavaGrammar.tab.cc"
    break;

  case 92:
#line 453 "JavaGrammar.yy"
                     {
	}
#line 2514 "JavaGrammar.tab.cc"
    break;

  case 93:
#line 455 "JavaGrammar.yy"
                     {
	}
#line 2521 "JavaGrammar.tab.cc"
    break;

  case 94:
#line 457 "JavaGrammar.yy"
                         {
	}
#line 2528 "JavaGrammar.tab.cc"
    break;

  case 95:
#line 459 "JavaGrammar.yy"
                         {
	}
#line 2535 "JavaGrammar.tab.cc"
    break;

  case 96:
#line 461 "JavaGrammar.yy"
                            {
	}
#line 2542 "JavaGrammar.tab.cc"
    break;

  case 97:
#line 463 "JavaGrammar.yy"
                               {
	}
#line 2549 "JavaGrammar.tab.cc"
    break;

  case 98:
#line 465 "JavaGrammar.yy"
                                        {
	}
#line 2556 "JavaGrammar.tab.cc"
    break;

  case 99:
#line 467 "JavaGrammar.yy"
                                       {
	}
#line 2563 "JavaGrammar.tab.cc"
    break;

  case 100:
#line 472 "JavaGrammar.yy"
                                                                               {
	}
#line 2570 "JavaGrammar.tab.cc"
    break;

  case 101:
#line 477 "JavaGrammar.yy"
                                                                                               {
	}
#line 2577 "JavaGrammar.tab.cc"
    break;

  case 102:
#line 482 "JavaGrammar.yy"
                                                                                                                 {
	}
#line 2584 "JavaGrammar.tab.cc"
    break;

  case 103:
#line 487 "JavaGrammar.yy"
                                {
	}
#line 2591 "JavaGrammar.tab.cc"
    break;

  case 104:
#line 489 "JavaGrammar.yy"
                             {
	}
#line 2598 "JavaGrammar.tab.cc"
    break;

  case 105:
#line 494 "JavaGrammar.yy"
                            {
	}
#line 2605 "JavaGrammar.tab.cc"
    break;

  case 106:
#line 496 "JavaGrammar.yy"
                                                 {
	}
#line 2612 "JavaGrammar.tab.cc"
    break;

  case 107:
#line 501 "JavaGrammar.yy"
                                                                                                                   {
	}
#line 2619 "JavaGrammar.tab.cc"
    break;

  case 108:
#line 506 "JavaGrammar.yy"
                                                                            {
	}
#line 2626 "JavaGrammar.tab.cc"
    break;

  case 109:
#line 508 "JavaGrammar.yy"
                                                           {
	}
#line 2633 "JavaGrammar.tab.cc"
    break;

  case 110:
#line 513 "JavaGrammar.yy"
                                                         {
	}
#line 2640 "JavaGrammar.tab.cc"
    break;

  case 111:
#line 515 "JavaGrammar.yy"
                                        {
	}
#line 2647 "JavaGrammar.tab.cc"
    break;

  case 112:
#line 520 "JavaGrammar.yy"
                                                                                      {
	}
#line 2654 "JavaGrammar.tab.cc"
    break;

  case 113:
#line 525 "JavaGrammar.yy"
                    {
	}
#line 2661 "JavaGrammar.tab.cc"
    break;

  case 114:
#line 527 "JavaGrammar.yy"
                           {
	}
#line 2668 "JavaGrammar.tab.cc"
    break;

  case 115:
#line 532 "JavaGrammar.yy"
                   {
	}
#line 2675 "JavaGrammar.tab.cc"
    break;

  case 116:
#line 534 "JavaGrammar.yy"
                                {
	}
#line 2682 "JavaGrammar.tab.cc"
    break;

  case 117:
#line 539 "JavaGrammar.yy"
                                                            {
	}
#line 2689 "JavaGrammar.tab.cc"
    break;

  case 118:
#line 541 "JavaGrammar.yy"
                                                    {
	}
#line 2696 "JavaGrammar.tab.cc"
    break;

  case 119:
#line 543 "JavaGrammar.yy"
                                                            {
	}
#line 2703 "JavaGrammar.tab.cc"
    break;

  case 120:
#line 545 "JavaGrammar.yy"
                                                    {
	}
#line 2710 "JavaGrammar.tab.cc"
    break;

  case 121:
#line 550 "JavaGrammar.yy"
                         {
	}
#line 2717 "JavaGrammar.tab.cc"
    break;

  case 122:
#line 552 "JavaGrammar.yy"
                                            {
	}
#line 2724 "JavaGrammar.tab.cc"
    break;

  case 123:
#line 557 "JavaGrammar.yy"
                                                          {
	}
#line 2731 "JavaGrammar.tab.cc"
    break;

  case 124:
#line 559 "JavaGrammar.yy"
                                     {
	}
#line 2738 "JavaGrammar.tab.cc"
    break;

  case 125:
#line 564 "JavaGrammar.yy"
                      {
	}
#line 2745 "JavaGrammar.tab.cc"
    break;

  case 126:
#line 566 "JavaGrammar.yy"
                     {
	}
#line 2752 "JavaGrammar.tab.cc"
    break;

  case 127:
#line 571 "JavaGrammar.yy"
                   {
	}
#line 2759 "JavaGrammar.tab.cc"
    break;

  case 128:
#line 573 "JavaGrammar.yy"
                                   {
	}
#line 2766 "JavaGrammar.tab.cc"
    break;

  case 129:
#line 578 "JavaGrammar.yy"
                                                                                                                                     {
	}
#line 2773 "JavaGrammar.tab.cc"
    break;

  case 130:
#line 580 "JavaGrammar.yy"
                                                                                                                                                                               {
	}
#line 2780 "JavaGrammar.tab.cc"
    break;

  case 131:
#line 585 "JavaGrammar.yy"
                       {
	}
#line 2787 "JavaGrammar.tab.cc"
    break;

  case 132:
#line 587 "JavaGrammar.yy"
                                                {
	}
#line 2794 "JavaGrammar.tab.cc"
    break;

  case 133:
#line 592 "JavaGrammar.yy"
                                                                         {
	}
#line 2801 "JavaGrammar.tab.cc"
    break;

  case 134:
#line 597 "JavaGrammar.yy"
                {
	}
#line 2808 "JavaGrammar.tab.cc"
    break;

  case 135:
#line 599 "JavaGrammar.yy"
                     {
	}
#line 2815 "JavaGrammar.tab.cc"
    break;

  case 136:
#line 601 "JavaGrammar.yy"
                   {
	}
#line 2822 "JavaGrammar.tab.cc"
    break;

  case 137:
#line 603 "JavaGrammar.yy"
                        {
	}
#line 2829 "JavaGrammar.tab.cc"
    break;

  case 138:
#line 605 "JavaGrammar.yy"
                    {
	}
#line 2836 "JavaGrammar.tab.cc"
    break;

  case 139:
#line 610 "JavaGrammar.yy"
                                         {
	}
#line 2843 "JavaGrammar.tab.cc"
    break;

  case 140:
#line 612 "JavaGrammar.yy"
                    {
	}
#line 2850 "JavaGrammar.tab.cc"
    break;

  case 141:
#line 614 "JavaGrammar.yy"
                      {
	}
#line 2857 "JavaGrammar.tab.cc"
    break;

  case 142:
#line 616 "JavaGrammar.yy"
                     {
	}
#line 2864 "JavaGrammar.tab.cc"
    break;

  case 143:
#line 618 "JavaGrammar.yy"
                       {
	}
#line 2871 "JavaGrammar.tab.cc"
    break;

  case 144:
#line 620 "JavaGrammar.yy"
                        {
	}
#line 2878 "JavaGrammar.tab.cc"
    break;

  case 145:
#line 622 "JavaGrammar.yy"
                        {
	}
#line 2885 "JavaGrammar.tab.cc"
    break;

  case 146:
#line 624 "JavaGrammar.yy"
                                                            {
	}
#line 2892 "JavaGrammar.tab.cc"
    break;

  case 147:
#line 626 "JavaGrammar.yy"
                            {
	}
#line 2899 "JavaGrammar.tab.cc"
    break;

  case 148:
#line 628 "JavaGrammar.yy"
                               {
	}
#line 2906 "JavaGrammar.tab.cc"
    break;

  case 149:
#line 630 "JavaGrammar.yy"
                                       {
	}
#line 2913 "JavaGrammar.tab.cc"
    break;

  case 150:
#line 632 "JavaGrammar.yy"
                                       {
	}
#line 2920 "JavaGrammar.tab.cc"
    break;

  case 151:
#line 634 "JavaGrammar.yy"
                                       {
	}
#line 2927 "JavaGrammar.tab.cc"
    break;

  case 152:
#line 636 "JavaGrammar.yy"
                                       {
	}
#line 2934 "JavaGrammar.tab.cc"
    break;

  case 153:
#line 638 "JavaGrammar.yy"
                                       {
	}
#line 2941 "JavaGrammar.tab.cc"
    break;

  case 154:
#line 640 "JavaGrammar.yy"
                                         {
	}
#line 2948 "JavaGrammar.tab.cc"
    break;

  case 155:
#line 642 "JavaGrammar.yy"
                                          {
	}
#line 2955 "JavaGrammar.tab.cc"
    break;

  case 156:
#line 644 "JavaGrammar.yy"
                                           {
	}
#line 2962 "JavaGrammar.tab.cc"
    break;

  case 157:
#line 646 "JavaGrammar.yy"
                                        {
	}
#line 2969 "JavaGrammar.tab.cc"
    break;

  case 158:
#line 648 "JavaGrammar.yy"
                                          {
	}
#line 2976 "JavaGrammar.tab.cc"
    break;

  case 159:
#line 650 "JavaGrammar.yy"
                                          {
	}
#line 2983 "JavaGrammar.tab.cc"
    break;

  case 160:
#line 652 "JavaGrammar.yy"
                                       {
	}
#line 2990 "JavaGrammar.tab.cc"
    break;

  case 161:
#line 654 "JavaGrammar.yy"
                                      {
	}
#line 2997 "JavaGrammar.tab.cc"
    break;

  case 162:
#line 656 "JavaGrammar.yy"
                                         {
	}
#line 3004 "JavaGrammar.tab.cc"
    break;

  case 163:
#line 658 "JavaGrammar.yy"
                                          {
	}
#line 3011 "JavaGrammar.tab.cc"
    break;

  case 164:
#line 660 "JavaGrammar.yy"
                                          {
	}
#line 3018 "JavaGrammar.tab.cc"
    break;

  case 165:
#line 662 "JavaGrammar.yy"
                                          {
	}
#line 3025 "JavaGrammar.tab.cc"
    break;

  case 166:
#line 664 "JavaGrammar.yy"
                                          {
	}
#line 3032 "JavaGrammar.tab.cc"
    break;

  case 167:
#line 666 "JavaGrammar.yy"
                                           {
	}
#line 3039 "JavaGrammar.tab.cc"
    break;

  case 168:
#line 671 "JavaGrammar.yy"
               {
	}
#line 3046 "JavaGrammar.tab.cc"
    break;

  case 169:
#line 673 "JavaGrammar.yy"
                  {
	}
#line 3053 "JavaGrammar.tab.cc"
    break;

  case 170:
#line 675 "JavaGrammar.yy"
                                      {
	}
#line 3060 "JavaGrammar.tab.cc"
    break;

  case 171:
#line 680 "JavaGrammar.yy"
                   {
	}
#line 3067 "JavaGrammar.tab.cc"
    break;

  case 172:
#line 682 "JavaGrammar.yy"
                             {
	}
#line 3074 "JavaGrammar.tab.cc"
    break;

  case 173:
#line 687 "JavaGrammar.yy"
                                          {
	}
#line 3081 "JavaGrammar.tab.cc"
    break;

  case 174:
#line 689 "JavaGrammar.yy"
                                           {
	}
#line 3088 "JavaGrammar.tab.cc"
    break;

  case 175:
#line 694 "JavaGrammar.yy"
                                                       {
	}
#line 3095 "JavaGrammar.tab.cc"
    break;

  case 176:
#line 696 "JavaGrammar.yy"
                                                                           {
	}
#line 3102 "JavaGrammar.tab.cc"
    break;

  case 177:
#line 701 "JavaGrammar.yy"
                                              {
	}
#line 3109 "JavaGrammar.tab.cc"
    break;

  case 178:
#line 703 "JavaGrammar.yy"
                                                                                {
	}
#line 3116 "JavaGrammar.tab.cc"
    break;

  case 179:
#line 708 "JavaGrammar.yy"
                                  {
	}
#line 3123 "JavaGrammar.tab.cc"
    break;

  case 180:
#line 710 "JavaGrammar.yy"
                                   {
	}
#line 3130 "JavaGrammar.tab.cc"
    break;

  case 181:
#line 715 "JavaGrammar.yy"
                                  {
	}
#line 3137 "JavaGrammar.tab.cc"
    break;

  case 182:
#line 717 "JavaGrammar.yy"
                                   {
	}
#line 3144 "JavaGrammar.tab.cc"
    break;

  case 183:
#line 722 "JavaGrammar.yy"
                                                {
	}
#line 3151 "JavaGrammar.tab.cc"
    break;

  case 184:
#line 724 "JavaGrammar.yy"
                                                 {
	}
#line 3158 "JavaGrammar.tab.cc"
    break;

  case 185:
#line 726 "JavaGrammar.yy"
                                                 {
	}
#line 3165 "JavaGrammar.tab.cc"
    break;

  case 186:
#line 728 "JavaGrammar.yy"
                                                 {
	}
#line 3172 "JavaGrammar.tab.cc"
    break;

  case 187:
#line 730 "JavaGrammar.yy"
                                                 {
	}
#line 3179 "JavaGrammar.tab.cc"
    break;

  case 188:
#line 732 "JavaGrammar.yy"
                                               {
	}
#line 3186 "JavaGrammar.tab.cc"
    break;

  case 189:
#line 734 "JavaGrammar.yy"
                                                       {
	}
#line 3193 "JavaGrammar.tab.cc"
    break;


#line 3197 "JavaGrammar.tab.cc"

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
#line 738 "JavaGrammar.yy"


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
