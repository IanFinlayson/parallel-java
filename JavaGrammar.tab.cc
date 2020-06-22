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
	ptPackageContainer,
	ptPackage,
	ptImports,
	ptImportContainer,
	ptImport,
	ptInterfaceContainer,
	ptInterface,
	ptClassContainer,
	ptClass,
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
	ptDoWhile,
};



extern int yylex();
void yyerror (char const *error);

Node* root;

#line 117 "JavaGrammar.tab.cc"

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
#line 48 "JavaGrammar.yy"

	#include <string>
	#include <iostream> 

#line 165 "JavaGrammar.tab.cc"

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
#line 53 "JavaGrammar.yy"

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


#line 293 "JavaGrammar.tab.cc"

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
#define YYLAST   863

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  103
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  160
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  427

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
       0,   182,   182,   201,   204,   211,   214,   224,   227,   234,
     237,   244,   248,   252,   257,   266,   274,   283,   286,   292,
     298,   304,   310,   316,   322,   328,   334,   340,   346,   356,
     357,   358,   359,   360,   361,   362,   363,   367,   370,   373,
     374,   375,   376,   380,   381,   382,   383,   384,   388,   389,
     390,   394,   395,   399,   400,   401,   402,   407,   408,   409,
     413,   414,   415,   416,   417,   421,   422,   423,   424,   428,
     429,   433,   434,   435,   436,   437,   441,   442,   443,   444,
     445,   449,   450,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   470,
     471,   472,   473,   474,   475,   476,   477,   478,   479,   480,
     481,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     497,   498,   499,   500,   504,   505,   506,   507,   508,   509,
     510,   511,   512,   513,   514,   515,   520,   521,   526,   530,
     534,   538,   539,   543,   544,   548,   549,   553,   554,   558,
     560,   564,   565,   569,   570,   574,   575,   579,   580,   584,
     585
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
  "classmod", "interfacemod", "classbody", "interfacebody",
  "interfacemethod", "abstractmethod", "classmethod", "formalparameters",
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

#define YYPACT_NINF (-300)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-44)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -17,     8,    18,   -10,   -42,    45,  -300,     8,   527,   -10,
       8,  -300,   167,   527,   527,   527,   527,   527,   527,   527,
     527,   527,   527,   527,  -300,   179,   426,   107,  -300,  -300,
    -300,    27,  -300,  -300,  -300,  -300,  -300,  -300,  -300,  -300,
    -300,  -300,  -300,  -300,  -300,   130,   132,    51,    72,    80,
    -300,   454,   487,   515,   339,   515,   515,   515,   515,   515,
     454,   454,   148,    86,   454,   487,   487,   249,    90,   487,
    -300,   339,   339,   339,   339,   339,   339,  -300,  -300,  -300,
    -300,  -300,  -300,  -300,  -300,    97,  -300,  -300,   188,  -300,
    -300,    23,   125,  -300,  -300,  -300,  -300,   -53,   200,  -300,
      28,   138,   144,  -300,  -300,   104,   186,   134,   163,   454,
     121,   104,   190,   161,   165,   487,   487,  -300,   199,   121,
     211,   121,    16,   295,  -300,   213,   241,    33,   240,   228,
     121,   262,   121,   330,  -300,  -300,   331,   269,   266,   278,
     203,  -300,  -300,  -300,   348,   706,  -300,   293,   297,   294,
     104,   303,   310,   308,   121,   371,   311,   266,   314,   294,
     304,    17,    -7,   118,   382,    11,   384,   -35,   329,   337,
     337,   337,   337,   337,   337,   337,   337,   337,   337,   337,
     337,   337,   398,   399,    26,   319,   397,   346,   413,  -300,
     304,   152,   180,   401,   397,  -300,   104,    11,   397,  -300,
     354,   517,   416,   425,   363,   362,   645,  -300,  -300,  -300,
    -300,   293,   367,   293,    11,    10,   370,   374,   724,   738,
     752,   765,   216,   309,   259,   526,   264,   173,   193,   335,
    -300,   369,   367,   293,   104,    11,   437,   530,   373,   376,
     380,   379,   385,   377,   446,   386,   389,    34,   383,   397,
     388,  -300,   390,   391,  -300,  -300,  -300,   421,  -300,  -300,
    -300,  -300,  -300,   397,   397,   460,   396,   402,   403,   404,
    -300,   126,   337,   337,   337,   337,   337,  -300,  -300,  -300,
    -300,  -300,    11,    11,   400,  -300,   392,  -300,    11,   411,
     410,  -300,  -300,   159,   337,   397,   337,  -300,   409,   397,
     337,    83,  -300,  -300,  -300,  -300,  -300,   322,   419,   420,
     405,   424,  -300,    37,  -300,  -300,   164,   706,  -300,   293,
     706,   706,   706,   706,   706,  -300,  -300,  -300,  -300,   418,
      42,  -300,    35,   423,   548,   427,   573,  -300,   429,   598,
     397,  -300,  -300,  -300,    11,   430,   434,    58,   428,   441,
    -300,   438,   445,   162,   337,   448,   455,   368,   465,   449,
     451,   458,  -300,    11,    11,    46,   459,  -300,    11,   666,
     482,   456,   397,  -300,   461,   397,  -300,  -300,   462,   466,
     463,   464,  -300,   467,   536,   337,    32,   337,   474,   121,
     477,  -300,  -300,  -300,    11,  -300,   194,   484,   687,   470,
    -300,   623,  -300,   486,  -300,   488,   492,   397,   397,   490,
     494,  -300,   397,   482,   499,  -300,   397,   502,  -300,  -300,
     505,  -300,   479,   495,   397,   506,  -300
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     5,     9,     0,     1,     0,    17,     5,
       0,     4,     0,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,     2,    17,    17,     0,     6,    10,
       7,     0,    19,    23,    27,    28,    26,    24,    18,    21,
      20,    25,    22,    14,    13,     0,     0,     0,     0,     0,
       8,    29,    17,    29,    29,    29,    29,    29,    29,    29,
      29,    29,     0,     0,    29,    17,    17,     0,     0,    17,
      36,    29,    29,    29,    29,    29,    29,    32,    30,    31,
      35,    33,    34,    47,    46,    68,    66,    65,     0,    67,
      48,     0,     0,    15,    45,    42,    41,    68,     0,    56,
       0,     0,     0,    16,    40,     0,     0,     0,     0,    29,
      57,     0,     0,   120,     0,    17,    17,    68,     0,    57,
       0,    57,     0,     0,    44,    68,     0,     0,    58,     0,
      57,     0,    57,     0,    38,    39,     0,     0,     0,     0,
      84,    81,    82,    83,     0,   124,   134,   133,     0,     0,
       0,     0,   120,     0,    57,     0,     0,   123,     0,   122,
       0,     0,     0,     0,     0,    60,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    69,     0,     0,    59,
     121,     0,     0,     0,    69,    52,     0,    60,    69,    51,
       0,    84,     0,     0,     0,    62,    61,    80,    78,    79,
      76,    77,   159,   156,    60,     0,     0,    84,    98,    97,
      91,    92,    94,    96,    93,    95,    86,    87,    88,    89,
      90,     0,   160,   155,     0,    60,     0,    68,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    69,
       0,    72,     0,     0,   111,   112,   113,   114,   115,   116,
      75,   123,   122,    69,    69,     0,     0,     0,     0,     0,
      85,     0,     0,     0,     0,     0,     0,   152,   151,   154,
     153,   157,    60,    60,     0,   137,     0,   132,    60,     0,
       0,   121,   118,     0,     0,    69,     0,   117,     0,    69,
       0,   120,    55,    70,    71,    73,    74,     0,     0,     0,
       0,     0,    50,     0,   128,    49,     0,    99,   110,   109,
     100,   101,   102,   103,   104,    64,    63,   131,   136,     0,
       0,   127,     0,     0,     0,     0,     0,   119,     0,     0,
      69,   144,    54,    53,    60,     0,     0,    68,     0,     0,
     158,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   126,    60,    60,     0,     0,   125,    60,     0,
       0,     0,    69,   142,     0,    69,   143,   135,     0,     0,
       0,     0,   105,     0,     0,     0,     0,     0,     0,     0,
       0,   130,   106,   108,    60,   129,     0,     0,     0,     0,
     145,     0,   141,     0,   138,     0,     0,    69,    69,     0,
       0,   107,    69,   147,     0,   139,    69,     0,   148,   146,
       0,   140,   149,     0,    69,     0,   150
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -300,  -300,  -300,   545,  -300,   257,   305,     2,    77,   263,
     187,    53,    56,  -300,   510,  -300,    29,  -174,   -62,  -159,
    -299,   -71,   -98,  -300,  -300,   -65,   -61,  -221,  -300,  -300,
    -300,  -300,  -300,  -300,   166,  -300,   197,  -300,  -115,  -119,
    -300
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     8,     9,     5,    24,    65,    66,    27,
      62,    68,    63,    64,    90,    69,   126,   204,   247,   248,
     249,   250,   206,   207,   251,   252,   253,   168,   254,   255,
     256,   257,   258,   259,   386,   260,   208,   209,   210,   211,
     148
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      91,    92,   101,   147,     1,   100,   102,   146,   341,   196,
      25,     4,   110,   117,   201,   141,   142,   143,     6,   140,
     141,   142,   143,   268,   145,     7,   107,    25,    25,    10,
     214,   113,   144,    86,   111,   266,   152,   301,   353,   269,
     284,   345,   234,   118,   311,   128,   351,   213,   127,   129,
     380,   399,   215,    60,   128,    87,   128,   127,   373,   127,
     197,   290,    60,    60,   233,   128,    60,   128,   127,    89,
     127,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   194,    26,   108,   195,   185,   128,
     303,   114,   127,   235,   205,   349,   153,   114,   108,   285,
     400,   346,    26,    26,   308,   309,   352,   117,   325,   326,
     381,    60,   202,   203,   329,    11,    83,    84,    95,    96,
      94,    50,   104,   364,   125,    47,   205,    86,    61,   140,
     141,   142,   143,    48,   267,    49,   335,    61,    61,    51,
     338,    61,   316,   205,    86,   215,   131,    52,   137,    87,
     139,    85,   319,   286,    93,   122,   318,    45,   103,   156,
      46,   158,    85,    89,   205,   124,    87,   347,   134,   135,
     361,    86,   289,   317,   320,   321,   322,   323,   324,   -11,
      89,   360,    86,   189,   105,   198,    61,    86,   199,   378,
     379,   106,    13,    87,   383,   109,   334,   120,   336,   121,
      88,    14,   339,   112,    87,    15,   122,    89,   115,    87,
      16,   205,   205,   388,   116,    17,   390,   205,    89,   263,
     405,    18,   195,    89,   131,   120,   132,   123,    19,   133,
      20,   332,   333,   122,   122,    21,    22,    30,    31,    23,
      70,    77,    78,    79,    80,    81,    82,   264,   413,   414,
     199,   119,    97,   417,   348,   130,   369,   420,    70,    78,
      79,    80,    81,    82,    12,   425,   164,    29,   165,   179,
     180,   181,    86,   205,   166,   138,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,   398,   136,   401,
     180,   181,   205,   205,    87,   277,   278,   205,   149,    45,
     150,    98,    46,   -44,   174,   175,   176,   151,    89,   154,
     177,   178,   179,   180,   181,    67,    32,   155,    34,    36,
      38,    39,    40,   205,   403,   237,   157,   127,    67,    67,
      43,    44,    67,   159,   160,   161,   238,   239,   162,   240,
     217,   141,   142,   143,   163,    86,   241,   242,   -44,   176,
     243,   167,    71,   177,   178,   179,   180,   181,    54,   178,
     179,   180,   181,   244,   182,    72,   184,    87,   183,   245,
     186,   237,   188,   187,   190,    73,   193,   191,    67,    67,
     192,    89,   238,   239,   246,   240,   200,   212,    74,   340,
      75,    86,   241,   242,   216,    76,   243,   -44,   175,   176,
     237,   231,   232,   177,   178,   179,   180,   181,   236,   244,
     261,   238,   239,    87,   240,   245,   262,   265,   270,   279,
      86,   241,   242,   202,   203,   243,   -12,    89,   280,   281,
     246,   282,   165,   181,   288,   372,   287,   164,   244,    13,
     291,   293,    87,   292,   245,   294,   295,   297,    14,   298,
     296,   302,    15,   299,   300,   307,    89,    16,   304,   246,
     305,   306,    17,   310,   312,   313,   327,    53,    18,   202,
     203,   314,   315,    54,   330,    19,    14,    20,   331,   337,
      55,   328,    21,    22,   350,    16,    23,   342,   343,   344,
      56,   365,   215,   354,   362,   356,    18,   358,   202,   203,
      13,   363,   367,    57,   -17,    58,   366,   -17,   374,    14,
      59,    22,   368,    15,    23,   370,   375,   371,    16,   376,
     385,   387,   -43,    17,   377,   382,   389,   393,    53,    18,
     391,   394,   392,   423,    54,   395,    19,    14,    20,   396,
      13,    55,   402,    21,    22,   404,    16,    23,   408,    14,
     406,    56,   410,    15,    28,   -37,   411,    18,    16,   412,
     415,   416,   424,    17,    57,   -17,    58,   419,   -17,    18,
     421,    59,    22,   422,   426,    23,    19,    99,    20,   418,
     164,   397,   165,    21,    22,     0,     0,    23,   166,   271,
     272,   273,   274,   275,   276,   165,     0,     0,     0,     0,
       0,   166,   271,   272,   273,   274,   275,   276,     0,     0,
       0,     0,     0,     0,   355,     0,   -44,   111,   277,   278,
     177,   178,   179,   180,   181,     0,     0,     0,   169,   170,
       0,   277,   278,   171,   172,   173,   174,   175,   176,   357,
       0,     0,   177,   178,   179,   180,   181,     0,     0,     0,
       0,     0,     0,   169,   170,     0,     0,     0,   171,   172,
     173,   174,   175,   176,   359,     0,     0,   177,   178,   179,
     180,   181,     0,     0,     0,     0,     0,     0,   169,   170,
       0,     0,     0,   171,   172,   173,   174,   175,   176,   409,
       0,     0,   177,   178,   179,   180,   181,     0,     0,     0,
       0,     0,     0,   169,   170,     0,     0,     0,   171,   172,
     173,   174,   175,   176,   283,     0,     0,   177,   178,   179,
     180,   181,     0,     0,     0,   169,   170,     0,     0,     0,
     171,   172,   173,   174,   175,   176,   384,     0,     0,   177,
     178,   179,   180,   181,     0,     0,   169,   170,     0,     0,
       0,   171,   172,   173,   174,   175,   176,     0,     0,     0,
     177,   178,   179,   180,   181,   407,     0,   169,   170,     0,
       0,     0,   171,   172,   173,   174,   175,   176,     0,     0,
       0,   177,   178,   179,   180,   181,   169,   170,     0,     0,
       0,   171,   172,   173,   174,   175,   176,     0,     0,     0,
     177,   178,   179,   180,   181,   170,     0,     0,     0,   171,
     172,   173,   174,   175,   176,     0,     0,     0,   177,   178,
     179,   180,   181,   171,   172,   173,   174,   175,   176,     0,
       0,     0,   177,   178,   179,   180,   181,   -44,   172,   173,
     174,   175,   176,     0,     0,     0,   177,   178,   179,   180,
     181,   -44,   173,   174,   175,   176,     0,     0,     0,   177,
     178,   179,   180,   181
};

static const yytype_int16 yycheck[] =
{
      62,    62,    67,   122,    21,    67,    67,   122,   307,    16,
       8,     3,    65,     3,     3,     4,     5,     6,     0,     3,
       4,     5,     6,   197,   122,    35,     3,    25,    26,    71,
      65,     3,    16,    23,    87,   194,     3,     3,     3,   198,
     214,     4,    16,   105,   265,   110,     4,   166,   110,   111,
       4,    19,    87,    51,   119,    45,   121,   119,   357,   121,
      67,   235,    60,    61,   183,   130,    64,   132,   130,    59,
     132,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,    67,     8,    63,    70,   150,   154,
     249,    63,   154,    67,   165,   316,    63,    63,    63,    89,
      68,    64,    25,    26,   263,   264,    64,     3,   282,   283,
      64,   109,   101,   102,   288,    70,    60,    61,    65,    66,
      64,    70,    69,    65,     3,    98,   197,    23,    51,     3,
       4,     5,     6,     3,   196,     3,   295,    60,    61,    67,
     299,    64,    16,   214,    23,    87,    63,    67,   119,    45,
     121,     3,   271,   215,    68,    72,   271,    50,    68,   130,
      53,   132,     3,    59,   235,   109,    45,     3,   115,   116,
     344,    23,   234,   271,   272,   273,   274,   275,   276,     0,
      59,   340,    23,   154,    87,    67,   109,    23,    70,   363,
     364,     3,    13,    45,   368,    70,   294,    63,   296,    65,
      52,    22,   300,     3,    45,    26,    72,    59,    70,    45,
      31,   282,   283,   372,    70,    36,   375,   288,    59,    67,
     394,    42,    70,    59,    63,    63,    65,    64,    49,    64,
      51,   293,   293,    72,    72,    56,    57,    70,    71,    60,
      53,    54,    55,    56,    57,    58,    59,    67,   407,   408,
      70,    65,     3,   412,   316,    65,   354,   416,    71,    72,
      73,    74,    75,    76,     7,   424,    63,    10,    65,    96,
      97,    98,    23,   344,    71,    64,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,   385,    89,   387,
      97,    98,   363,   364,    45,   101,   102,   368,     3,    50,
      87,    52,    53,    87,    88,    89,    90,    66,    59,    69,
      94,    95,    96,    97,    98,    52,    53,    89,    55,    56,
      57,    58,    59,   394,   389,     3,    64,   389,    65,    66,
      25,    26,    69,     3,     3,    66,    14,    15,    72,    17,
       3,     4,     5,     6,    66,    23,    24,    25,    89,    90,
      28,     3,    13,    94,    95,    96,    97,    98,    19,    95,
      96,    97,    98,    41,    71,    26,    72,    45,    71,    47,
      67,     3,    64,    63,     3,    36,    72,    66,   115,   116,
      66,    59,    14,    15,    62,    17,     4,     3,    49,    67,
      51,    23,    24,    25,    65,    56,    28,    88,    89,    90,
       3,     3,     3,    94,    95,    96,    97,    98,    89,    41,
      64,    14,    15,    45,    17,    47,     3,    16,    64,     3,
      23,    24,    25,   101,   102,    28,     0,    59,     3,    66,
      62,    69,    65,    98,    65,    67,    66,    63,    41,    13,
       3,    65,    45,    70,    47,    65,    67,    70,    22,     3,
      65,    68,    26,    67,    65,    34,    59,    31,    70,    62,
      70,    70,    36,     3,    68,    63,    66,    13,    42,   101,
     102,    68,    68,    19,    63,    49,    22,    51,    68,    70,
      26,    89,    56,    57,    66,    31,    60,    68,    68,    65,
      36,    63,    87,    70,    64,    68,    42,    68,   101,   102,
      13,    67,    64,    49,    50,    51,    65,    53,    43,    22,
      56,    57,    67,    26,    60,    67,    67,    62,    31,    68,
      38,    65,    68,    36,    66,    66,    65,    64,    13,    42,
      68,    67,    66,    54,    19,    68,    49,    22,    51,     3,
      13,    26,    68,    56,    57,    68,    31,    60,    78,    22,
      66,    36,    66,    26,     9,    68,    68,    42,    31,    67,
      70,    67,    67,    36,    49,    50,    51,    68,    53,    42,
      68,    56,    57,    68,    68,    60,    49,    67,    51,   413,
      63,   384,    65,    56,    57,    -1,    -1,    60,    71,    72,
      73,    74,    75,    76,    77,    65,    -1,    -1,    -1,    -1,
      -1,    71,    72,    73,    74,    75,    76,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    -1,    90,    87,   101,   102,
      94,    95,    96,    97,    98,    -1,    -1,    -1,    80,    81,
      -1,   101,   102,    85,    86,    87,    88,    89,    90,    66,
      -1,    -1,    94,    95,    96,    97,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    81,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,    66,    -1,    -1,    94,    95,    96,
      97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,
      -1,    -1,    -1,    85,    86,    87,    88,    89,    90,    66,
      -1,    -1,    94,    95,    96,    97,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    81,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,    69,    -1,    -1,    94,    95,    96,
      97,    98,    -1,    -1,    -1,    80,    81,    -1,    -1,    -1,
      85,    86,    87,    88,    89,    90,    70,    -1,    -1,    94,
      95,    96,    97,    98,    -1,    -1,    80,    81,    -1,    -1,
      -1,    85,    86,    87,    88,    89,    90,    -1,    -1,    -1,
      94,    95,    96,    97,    98,    78,    -1,    80,    81,    -1,
      -1,    -1,    85,    86,    87,    88,    89,    90,    -1,    -1,
      -1,    94,    95,    96,    97,    98,    80,    81,    -1,    -1,
      -1,    85,    86,    87,    88,    89,    90,    -1,    -1,    -1,
      94,    95,    96,    97,    98,    81,    -1,    -1,    -1,    85,
      86,    87,    88,    89,    90,    -1,    -1,    -1,    94,    95,
      96,    97,    98,    85,    86,    87,    88,    89,    90,    -1,
      -1,    -1,    94,    95,    96,    97,    98,    85,    86,    87,
      88,    89,    90,    -1,    -1,    -1,    94,    95,    96,    97,
      98,    86,    87,    88,    89,    90,    -1,    -1,    -1,    94,
      95,    96,    97,    98
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    21,   104,   105,     3,   108,     0,    35,   106,   107,
      71,    70,   108,    13,    22,    26,    31,    36,    42,    49,
      51,    56,    57,    60,   109,   110,   111,   112,   106,   108,
      70,    71,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   109,   109,    50,    53,    98,     3,     3,
      70,    67,    67,    13,    19,    26,    36,    49,    51,    56,
     110,   111,   113,   115,   116,   110,   111,   112,   114,   118,
     113,    13,    26,    36,    49,    51,    56,   113,   113,   113,
     113,   113,   113,   115,   115,     3,    23,    45,    52,    59,
     117,   121,   129,    68,   115,   114,   114,     3,    52,   117,
     121,   128,   129,    68,   114,    87,     3,     3,    63,    70,
      65,    87,     3,     3,    63,    70,    70,     3,   121,    65,
      63,    65,    72,    64,   115,     3,   119,   121,   128,   121,
      65,    63,    65,    64,   114,   114,    89,   119,    64,   119,
       3,     4,     5,     6,    16,   125,   141,   142,   143,     3,
      87,    66,     3,    63,    69,    89,   119,    64,   119,     3,
       3,    66,    72,    66,    63,    65,    71,     3,   130,    80,
      81,    85,    86,    87,    88,    89,    90,    94,    95,    96,
      97,    98,    71,    71,    72,   121,    67,    63,    64,   119,
       3,    66,    66,    72,    67,    70,    16,    67,    67,    70,
       4,     3,   101,   102,   120,   124,   125,   126,   139,   140,
     141,   142,     3,   142,    65,    87,    65,     3,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,     3,     3,   142,    16,    67,    89,     3,    14,    15,
      17,    24,    25,    28,    41,    47,    62,   121,   122,   123,
     124,   127,   128,   129,   131,   132,   133,   134,   135,   136,
     138,    64,     3,    67,    67,    16,   122,   121,   120,   122,
      64,    72,    73,    74,    75,    76,    77,   101,   102,     3,
       3,    66,    69,    69,   120,    89,   121,    66,    65,   121,
     120,     3,    70,    65,    65,    67,    65,    70,     3,    67,
      65,     3,    68,   122,    70,    70,    70,    34,   122,   122,
       3,   130,    68,    63,    68,    68,    16,   125,   141,   142,
     125,   125,   125,   125,   125,   120,   120,    66,    89,   120,
      63,    68,   121,   129,   125,   122,   125,    70,   122,   125,
      67,   123,    68,    68,    65,     4,    64,     3,   121,   130,
      66,     4,    64,     3,    70,    66,    68,    66,    68,    66,
     122,   120,    64,    67,    65,    63,    65,    64,    67,   125,
      67,    62,    67,   123,    43,    67,    68,    66,   120,   120,
       4,    64,    66,   120,    70,    38,   137,    65,   122,    65,
     122,    68,    66,    64,    67,    68,     3,   139,   125,    19,
      68,   125,    68,   128,    68,   120,    66,    78,    78,    66,
      66,    68,    67,   122,   122,    70,    67,   122,   137,    68,
     122,    68,    68,    54,    67,   122,    68
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   103,   104,   105,   105,   106,   106,   107,   107,   108,
     108,   109,   109,   109,   109,   110,   111,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   113,
     113,   113,   113,   113,   113,   113,   113,   114,   114,   114,
     114,   114,   114,   115,   115,   115,   115,   115,   116,   116,
     116,   117,   117,   118,   118,   118,   118,   119,   119,   119,
     120,   120,   120,   120,   120,   121,   121,   121,   121,   122,
     122,   123,   123,   123,   123,   123,   124,   124,   124,   124,
     124,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     128,   128,   128,   128,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   130,   130,   131,   132,
     133,   134,   134,   135,   135,   136,   136,   137,   137,   138,
     138,   139,   139,   140,   140,   141,   141,   142,   142,   143,
     143
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     0,     3,     0,     2,     3,     5,     1,
       3,     1,     1,     2,     2,     6,     6,     0,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     0,
       2,     2,     2,     2,     2,     2,     2,     0,     4,     4,
       2,     2,     2,     0,     4,     2,     2,     2,     2,     9,
       9,     6,     6,     9,     9,     8,     2,     0,     1,     3,
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
       3
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
#line 182 "JavaGrammar.yy"
                                    {
	if((yyvsp[-2].node)->get_type() != ptEmpty){
		root = (yyvsp[-2].node);
		if((yyvsp[-1].node)->get_type() != ptEmpty){
			root->attach_child(*(yyvsp[-1].node));
			(yyvsp[-1].node)->attach_child(*(yyvsp[0].node));
		}else{
			root->attach_child(*(yyvsp[0].node));
		}
	}else if((yyvsp[-1].node)->get_type() != ptEmpty){
		root = (yyvsp[-1].node);
		root->attach_child(*(yyvsp[0].node));
	}else{
		root = (yyvsp[0].node);
	}
}
#line 1872 "JavaGrammar.tab.cc"
    break;

  case 3:
#line 201 "JavaGrammar.yy"
       {
	(yyval.node) = new Node(ptEmpty, 0, 0, "");
}
#line 1880 "JavaGrammar.tab.cc"
    break;

  case 4:
#line 204 "JavaGrammar.yy"
                                  {
	(yyval.node) = new Node(ptPackageContainer, 0, 0, "");
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 1889 "JavaGrammar.tab.cc"
    break;

  case 5:
#line 211 "JavaGrammar.yy"
       {
	(yyval.node) = new Node(ptEmpty, 0, 0, "");
}
#line 1897 "JavaGrammar.tab.cc"
    break;

  case 6:
#line 214 "JavaGrammar.yy"
                                  {
	(yyval.node) = new Node(ptImportContainer, 0, 0, "");
	(yyval.node)->attach_child(*(yyvsp[-1].node));
	if((yyvsp[0].node)->get_type() != ptEmpty){
		(yyval.node)->attach_child(*(yyvsp[0].node));
	}
}
#line 1909 "JavaGrammar.tab.cc"
    break;

  case 7:
#line 224 "JavaGrammar.yy"
                                {
	(yyval.node) = (yyvsp[-1].node);
}
#line 1917 "JavaGrammar.tab.cc"
    break;

  case 8:
#line 227 "JavaGrammar.yy"
                                                 {
	(yyval.node) = (yyvsp[-3].node);
	(yyval.node)->attach_child(*(new Node(TOK_MUL, 0, 0, "")));
}
#line 1926 "JavaGrammar.tab.cc"
    break;

  case 9:
#line 234 "JavaGrammar.yy"
               {
	(yyval.node) = new Node(ptPackage, 0, 0, (yyvsp[0].stVal));
}
#line 1934 "JavaGrammar.tab.cc"
    break;

  case 10:
#line 237 "JavaGrammar.yy"
                                    {
	(yyval.node) = new Node(ptPackage, 0, 0, (yyvsp[-2].stVal));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 1943 "JavaGrammar.tab.cc"
    break;

  case 11:
#line 244 "JavaGrammar.yy"
             {
	(yyval.node) = new Node(ptInterfaceContainer, 0, 0, "");
	(yyval.node)->attach_child(*(new Node(ptEmpty, 0, 0, "temp node")));
}
#line 1952 "JavaGrammar.tab.cc"
    break;

  case 12:
#line 248 "JavaGrammar.yy"
          {
	(yyval.node) = new Node(ptClassContainer, 0, 0, "");
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 1961 "JavaGrammar.tab.cc"
    break;

  case 13:
#line 252 "JavaGrammar.yy"
                  {
	(yyval.node) = new Node(ptClassContainer, 0, 0, "");
	(yyval.node)->attach_child(*(yyvsp[-1].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 1971 "JavaGrammar.tab.cc"
    break;

  case 14:
#line 257 "JavaGrammar.yy"
                      {
	(yyval.node) = new Node(ptInterfaceContainer, 0, 0, "");
	(yyval.node)->attach_child(*(new Node(ptEmpty, 0, 0, "temp node")));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 1981 "JavaGrammar.tab.cc"
    break;

  case 15:
#line 266 "JavaGrammar.yy"
                                                                          {
	(yyval.node) = new Node(ptInterface, 0, 0, (yyvsp[-3].stVal));
	(yyval.node)->attach_child(*(yyvsp[-5].node));
	//$$->attach_child(*$5);
}
#line 1991 "JavaGrammar.tab.cc"
    break;

  case 16:
#line 274 "JavaGrammar.yy"
                                                                  {
	(yyval.node) = new Node(ptClass, 0, 0, (yyvsp[-3].stVal));
	(yyval.node)->attach_child(*(yyvsp[-5].node));
	//$$->attach_child(*$5);
}
#line 2001 "JavaGrammar.tab.cc"
    break;

  case 17:
#line 283 "JavaGrammar.yy"
       {
	(yyval.node) = new Node(ptClassMod, 0, 0, "default");
}
#line 2009 "JavaGrammar.tab.cc"
    break;

  case 18:
#line 286 "JavaGrammar.yy"
                    {
	(yyval.node) = new Node(ptClassMod, 0, 0, "final");
	if((yyvsp[0].node)->get_id().compare("default") != 0){
		(yyval.node)->attach_child(*(yyvsp[0].node));
	}
}
#line 2020 "JavaGrammar.tab.cc"
    break;

  case 19:
#line 292 "JavaGrammar.yy"
                       {
	(yyval.node) = new Node(ptClassMod, 0, 0, "abstract");
	if((yyvsp[0].node)->get_id().compare("default") != 0){
		(yyval.node)->attach_child(*(yyvsp[0].node));
	}
}
#line 2031 "JavaGrammar.tab.cc"
    break;

  case 20:
#line 298 "JavaGrammar.yy"
                       {
	(yyval.node) = new Node(ptClassMod, 0, 0, "strictfp");
	if((yyvsp[0].node)->get_id().compare("default") != 0){
		(yyval.node)->attach_child(*(yyvsp[0].node));
	}
}
#line 2042 "JavaGrammar.tab.cc"
    break;

  case 21:
#line 304 "JavaGrammar.yy"
                     {
	(yyval.node) = new Node(ptClassMod, 0, 0, "static");
	if((yyvsp[0].node)->get_id().compare("default") != 0){
		(yyval.node)->attach_child(*(yyvsp[0].node));
	}
}
#line 2053 "JavaGrammar.tab.cc"
    break;

  case 22:
#line 310 "JavaGrammar.yy"
                     {
	(yyval.node) = new Node(ptClassMod, 0, 0, "native");
	if((yyvsp[0].node)->get_id().compare("default") != 0){
		(yyval.node)->attach_child(*(yyvsp[0].node));
	}
}
#line 2064 "JavaGrammar.tab.cc"
    break;

  case 23:
#line 316 "JavaGrammar.yy"
                           {
	(yyval.node) = new Node(ptClassMod, 0, 0, "synchronized");
	if((yyvsp[0].node)->get_id().compare("default") != 0){
		(yyval.node)->attach_child(*(yyvsp[0].node));
	}
}
#line 2075 "JavaGrammar.tab.cc"
    break;

  case 24:
#line 322 "JavaGrammar.yy"
                        {
	(yyval.node) = new Node(ptClassMod, 0, 0, "transient");
	if((yyvsp[0].node)->get_id().compare("default") != 0){
		(yyval.node)->attach_child(*(yyvsp[0].node));
	}
}
#line 2086 "JavaGrammar.tab.cc"
    break;

  case 25:
#line 328 "JavaGrammar.yy"
                       {
	(yyval.node) = new Node(ptClassMod, 0, 0, "volatile");
	if((yyvsp[0].node)->get_id().compare("default") != 0){
		(yyval.node)->attach_child(*(yyvsp[0].node));
	}
}
#line 2097 "JavaGrammar.tab.cc"
    break;

  case 26:
#line 334 "JavaGrammar.yy"
                     {
	(yyval.node) = new Node(ptClassMod, 0, 0, "public");
	if((yyvsp[0].node)->get_id().compare("default") != 0){
		(yyval.node)->attach_child(*(yyvsp[0].node));
	}
}
#line 2108 "JavaGrammar.tab.cc"
    break;

  case 27:
#line 340 "JavaGrammar.yy"
                      {
	(yyval.node) = new Node(ptClassMod, 0, 0, "private");
	if((yyvsp[0].node)->get_id().compare("default") != 0){
		(yyval.node)->attach_child(*(yyvsp[0].node));
	}
}
#line 2119 "JavaGrammar.tab.cc"
    break;

  case 28:
#line 346 "JavaGrammar.yy"
                        {
	(yyval.node) = new Node(ptClassMod, 0, 0, "protected");
	if((yyvsp[0].node)->get_id().compare("default") != 0){
		(yyval.node)->attach_child(*(yyvsp[0].node));
	}
}
#line 2130 "JavaGrammar.tab.cc"
    break;

  case 37:
#line 367 "JavaGrammar.yy"
       {
	//$$ = new Node(ptEmpty, 0, 0, "");
}
#line 2138 "JavaGrammar.tab.cc"
    break;

  case 38:
#line 370 "JavaGrammar.yy"
                                                  {
	
}
#line 2146 "JavaGrammar.tab.cc"
    break;


#line 2150 "JavaGrammar.tab.cc"

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
#line 588 "JavaGrammar.yy"


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
