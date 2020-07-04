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

	enum ParseTreeNode {
		ptEmpty,
		ptPackageContainer,
		ptPackage,
		ptImports,
		ptImportContainer,
		ptImport,
		ptTypeDec,
		ptClass,
		ptMod,
		ptClassBody,
		ptDeclaration,
		ptDataType,
		ptInstanceGeneric,
		ptIdentifierContainer,
		ptIdentifier,
		ptArrayIdentifier,
		ptEnclosedExpression,
		ptNegation,	
		ptBitNegation,
		ptOperation,
		ptArrayDeclaration,
		ptInitializationContainer,
		ptInitializationStatement,
		ptMethod,
		ptAbstractMethod,
		ptConstructorInfo,
		ptStatement,
		ptArgument,
		ptInstanceMethodCall,
		ptMethodCall,
		ptFieldReference,
		ptPreDecrement,
		ptPostDecrement,
		ptArraySizeInitializer,
		ptArrayExplicitInitializer,
		ptInstanceInitializer,
		ptDataStructureInitializer,
		ptDataStructure,
		ptAssignment
	};

	extern int yylex();
	void yyerror(char const *error);

	Node* root;

#line 122 "JavaGrammar.tab.cc"

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
#line 53 "JavaGrammar.yy"

	#include <string>
	#include <iostream> 

#line 170 "JavaGrammar.tab.cc"

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
#line 58 "JavaGrammar.yy"

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


#line 299 "JavaGrammar.tab.cc"

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
#define YYLAST   1122

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  104
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  55
/* YYNRULES -- Number of rules.  */
#define YYNRULES  191
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  455

#define YYUNDEFTOK  2
#define YYMAXUTOK   341


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
     103,     2
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   198,   198,   208,   212,   219,   222,   230,   234,   242,
     245,   252,   256,   260,   265,   273,   274,   278,   283,   292,
     293,   294,   298,   299,   304,   308,   312,   316,   320,   324,
     328,   332,   336,   340,   344,   348,   352,   359,   363,   369,
     375,   381,   386,   394,   395,   396,   397,   398,   402,   407,
     415,   422,   430,   438,   446,   449,   456,   459,   465,   468,
     472,   476,   481,   489,   492,   495,   498,   501,   507,   510,
     517,   521,   525,   529,   533,   537,   544,   547,   550,   553,
     556,   562,   566,   569,   572,   575,   578,   581,   584,   587,
     591,   595,   600,   605,   610,   615,   620,   625,   630,   635,
     640,   645,   650,   655,   660,   665,   670,   675,   680,   685,
     693,   698,   703,   708,   713,   718,   723,   731,   732,   733,
     734,   735,   736,   737,   738,   739,   740,   744,   748,   752,
     756,   761,   766,   773,   778,   788,   792,   796,   800,   809,
     812,   817,   821,   825,   830,   833,   836,   844,   855,   860,
     867,   871,   875,   879,   883,   884,   885,   889,   890,   894,
     895,   899,   900,   905,   909,   910,   914,   915,   919,   920,
     921,   925,   926,   929,   930,   934,   935,   939,   940,   945,
     947,   951,   955,   960,   968,   973,   981,   986,   994,  1000,
    1011,  1016
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
  "interfacedec", "classdec", "extendsorimplements", "interfaceidentifier",
  "mod", "classbody", "interfacebody", "abstractmethod", "method",
  "formalparameters", "formalparameter", "argument", "datatype", "block",
  "statement", "expressionstatement", "expression", "assignmentstatement",
  "controlflowstatement", "identifier", "declarationstatement",
  "declarator", "initializer", "initializationstatement", "datastructure",
  "whileloop", "dowhileloop", "forloop", "enhancedfor", "forinit",
  "forupdate", "ifstatement", "ifelsestatement", "switchstatement",
  "switchblock", "switchrules", "switchrule", "switchblockstates",
  "switchblockstate", "switchlabel", "case", "trycatchblock", "throwstate",
  "postdecrement", "predecrement", "instancemethodcall", "methodcall",
  "fieldreference", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
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

#define YYPACT_NINF (-325)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-139)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      17,    56,    84,    40,  -325,     9,  -325,    56,   663,    40,
    -325,    95,   248,   663,   663,   663,   663,   663,   663,   663,
     663,   663,   663,   663,   663,  -325,   550,   583,   164,  -325,
    -325,  -325,    12,  -325,  -325,  -325,  -325,  -325,  -325,  -325,
    -325,  -325,  -325,  -325,  -325,  -325,  -325,   100,   116,    66,
      -9,    -7,  -325,   146,   602,   151,   165,   635,    92,   105,
     602,   602,   142,   122,   602,   127,  -325,   182,   635,   635,
     170,   132,   635,   635,   602,  -325,  -325,   -20,  -325,  -325,
    -325,   215,  -325,  -325,     3,   155,   161,  -325,  -325,   151,
     151,  -325,  -325,    70,    13,   214,   221,  -325,  -325,   172,
     236,    99,   152,   256,    52,   171,   471,   602,  -325,  -325,
     152,   174,   275,  -325,   635,   635,  -325,  -325,   260,   320,
     304,    15,  -325,  -325,   300,    99,   326,    99,   396,   167,
    -325,  -325,  -325,  -325,   157,   307,   200,   307,   307,   930,
    -325,  -325,   329,   330,  -325,   314,   340,    18,   402,  -325,
    -325,   341,    99,   344,   410,   348,  -325,   350,  -325,   200,
     200,   423,    77,   371,   372,    75,   690,   367,   653,   436,
     438,   375,   376,   852,  -325,  -325,  -325,  -325,   329,    87,
    -325,   307,   307,   307,   307,   307,   307,   307,   307,   307,
     307,   307,   307,   307,   307,   307,   307,   307,   307,   307,
     443,   457,    23,   156,    36,   399,  -325,   191,   487,  -325,
    -325,   203,   226,   403,   393,   406,   329,   200,    89,    27,
     200,   469,  -325,   478,   517,   307,   307,   307,   307,   307,
    -325,  -325,  -325,  -325,  -325,   200,   200,   948,   965,   981,
     996,  1010,  1024,   704,   736,   768,   800,   832,   231,   355,
     334,   456,    87,   -69,   385,  -325,   419,   406,   329,   179,
    -325,    18,   421,   486,    18,   666,   425,   426,   428,   431,
     440,   439,   490,   515,   458,   461,    30,   462,   487,   459,
    -325,   467,   470,  -325,  -325,  -325,  -325,   497,  -325,  -325,
    -325,   474,   330,   487,  -325,   487,  -325,  -325,  -325,   473,
    -325,   452,   481,   480,   482,  -325,  -325,   686,  -325,  -325,
     930,   930,   930,   930,   930,  -325,  -325,   200,  -325,   489,
     492,  -325,  -325,    24,   307,   487,   307,  -325,   552,   495,
     487,   307,   218,  -325,  -325,  -325,  -325,  -325,   230,  -325,
     488,   491,  -325,  -325,  -325,   200,  -325,   496,    31,  -325,
    -325,  -325,   498,   723,   499,   756,   506,  -325,   505,   789,
     487,  -325,  -325,  -325,   507,  -325,   216,   307,   510,   512,
     395,   200,   535,   513,   511,  -325,   582,   911,    11,   522,
     487,  -325,   524,   528,   487,  -325,   529,     7,  -325,   307,
     526,  -325,    11,  -325,    11,   -42,   307,   530,  -325,   388,
     532,   536,   269,   539,   531,   882,  -325,  -325,  -325,   501,
    -325,   533,   441,    39,   822,  -325,   540,    18,   547,  -325,
     487,     7,   551,   307,   487,  -325,   487,   553,   556,   559,
     152,   555,   549,  -325,   487,  -325,   562,   563,  -325,  -325,
    -325,   546,   487,  -325,   568,  -325,  -325,    18,   569,  -325,
     566,   574,   487,   577,  -325
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
       0,     0,    24,    24,    24,    47,    46,    66,    64,    67,
      63,     0,    65,    53,     0,     0,     0,    15,    45,     0,
       0,    42,    41,    66,     0,     0,     0,    17,    40,     0,
       0,    56,     0,     0,   135,     0,     0,    24,    23,    21,
       0,   127,     0,   133,    24,    24,    18,    16,    66,     0,
      54,     0,    57,    66,     0,    56,     0,    56,     0,    86,
      82,    83,    85,    84,     0,     0,    58,     0,     0,   139,
     147,   145,   144,    87,    44,     0,     0,     0,     0,    38,
      39,     0,    56,   135,     0,     0,   137,     0,   136,    58,
      58,     0,    66,     0,     0,    86,     0,    87,    86,     0,
       0,     0,    60,    59,    80,    78,    79,    76,    77,    89,
      90,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   128,   127,     0,   132,   129,    68,    55,
     138,     0,     0,     0,     0,   190,   187,    58,     0,     0,
      58,     0,    81,     0,     0,     0,     0,     0,     0,     0,
     183,   182,   185,   184,   141,    58,    58,   103,   102,   104,
     105,   106,    96,    97,    99,   101,    98,   100,   107,   108,
     109,    91,    92,    93,    94,    95,     0,   191,   186,   127,
     134,     0,     0,     0,     0,    66,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    68,     0,
      71,     0,     0,   117,   118,   119,   120,   121,   122,   123,
      74,     0,     0,    68,    49,    68,    48,    88,   188,     0,
     149,     0,     0,     0,     0,   190,   191,    86,   116,   115,
     110,   111,   112,   113,   114,    62,    61,    58,   130,   128,
     129,   131,   125,     0,     0,    68,     0,   124,     0,     0,
      68,     0,   127,    52,    69,    70,    72,    73,     0,    75,
       0,     0,   143,   148,   140,    58,   146,     0,     0,   155,
     154,   156,     0,     0,     0,     0,     0,   126,     0,     0,
      68,   162,    51,    50,     0,   189,   127,     0,     0,     0,
       0,    58,     0,     0,     0,   142,     0,     0,     0,     0,
      68,   160,     0,     0,    68,   161,     0,     0,   176,     0,
       0,   164,   166,   165,   171,     0,     0,     0,   181,     0,
       0,     0,     0,   157,     0,   177,   175,   163,   167,     0,
     172,     0,    68,     0,     0,   159,    66,     0,     0,   150,
      68,     0,     0,     0,    68,   174,    68,     0,     0,     0,
       0,     0,     0,   158,    68,   178,     0,     0,   168,   170,
     151,     0,    68,   153,     0,   173,   169,     0,     0,   152,
     179,     0,    68,     0,   180
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -325,  -325,  -325,   633,  -325,   639,   223,    69,   453,  -325,
     246,   361,    94,   208,  -325,   -10,    25,  -325,  -147,   -62,
    -273,  -324,  -135,   168,   432,  -325,  -140,   -66,   -84,   444,
     -59,  -325,  -325,  -325,  -325,  -325,  -325,   228,  -325,  -325,
    -325,  -325,   255,  -325,   258,  -325,   -94,   227,  -325,   242,
    -325,  -325,   -97,   -87,  -104
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     8,     9,     5,    25,    68,    69,    58,
      66,    70,    71,    63,    83,    72,   119,   120,   171,   276,
     277,   278,   279,   173,   174,   280,   113,   281,    85,   140,
     282,   164,   283,   284,   285,   286,   352,   404,   287,   288,
     289,   390,   391,   392,   393,   394,   395,   406,   290,   291,
     175,   176,   177,   178,   167
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      84,   172,   143,    86,    95,   334,   104,   206,    94,   141,
     402,    96,   213,   214,   361,    30,   111,   122,   153,   142,
     340,   204,   341,    55,   172,   172,   259,   265,   198,   199,
     388,   302,   143,   332,   366,    53,   412,    56,     1,   121,
     124,   122,   402,   122,    64,   101,   381,    78,   145,   389,
      64,    64,   354,    79,    64,   143,   143,   358,    54,     4,
      57,   413,   260,   121,    64,   121,   105,   102,   122,    80,
     299,   272,   163,   304,   216,     7,   112,    26,   105,    10,
      11,   205,   172,    82,     6,   172,   205,   374,   315,   316,
     121,   303,   123,   112,   112,    26,    26,    64,    30,   262,
     172,   172,   118,    50,   292,   147,   426,   397,   169,   170,
      49,   400,    78,   143,   258,   126,   143,   127,    79,    51,
     143,   318,    78,    60,   321,   169,   170,   141,    79,    60,
      60,   143,   143,    60,    80,   101,    52,   142,   159,   425,
     169,   170,   217,    60,    80,    77,   221,   432,    82,    59,
     155,   436,   157,   437,    65,   123,   301,   110,    82,    73,
     162,   444,    91,    92,   218,    78,    98,    99,    67,   448,
     347,    79,    74,    93,   292,    78,    60,   209,   300,   453,
      78,    79,   172,   197,   198,   199,    79,    80,   349,   292,
      87,   292,    47,    78,    81,    48,    89,    80,   364,    79,
      97,    82,    80,   168,   130,   131,   132,   133,   149,   150,
     172,    82,    90,   143,    47,    80,    82,    48,   103,   292,
      47,   292,    81,    48,   382,   261,   292,   106,  -137,    82,
     159,   107,   160,   265,   292,   128,   172,   146,   161,   127,
     116,   143,   262,   147,   266,   267,  -135,   268,   147,    45,
      46,  -138,   403,    78,   269,   270,   292,   350,   271,    79,
     264,   348,   272,  -136,   351,   135,   292,   143,    75,    76,
     293,   273,    88,   294,   139,    80,   292,   274,   427,   146,
     292,   146,   100,   292,   114,   147,   403,   147,  -135,    82,
    -135,   115,   275,   295,   376,   137,   296,   360,   409,   138,
     411,   169,   170,   166,   117,   179,   180,   260,   292,   292,
     165,   130,   131,   132,   133,   144,   292,   292,    31,    32,
     292,   125,   292,   193,   194,   195,   196,   197,   198,   199,
     292,   169,   170,   418,   160,   108,   109,   417,   292,   148,
     161,   224,   225,   226,   227,   228,   229,   102,   292,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   441,    28,
     230,   231,   135,   152,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,   151,    28,    28,   154,
     156,   416,   139,   310,   311,   312,   313,   314,   265,   158,
     200,   201,   137,   202,   203,   207,   138,   126,   208,   266,
     267,    78,   268,   210,   211,    62,   212,    79,    78,   269,
     270,    62,    62,   271,    79,    62,   215,   272,   195,   196,
     197,   198,   199,    80,   219,    62,   273,   220,   223,   232,
      80,   233,   274,   234,   265,   235,   256,    82,   194,   195,
     196,   197,   198,   199,    82,   266,   267,   275,   268,   298,
     257,    27,   380,   263,    78,   269,   270,   297,    62,   271,
      79,   160,   305,   272,   129,   130,   131,   132,   133,    27,
      27,   306,   273,   199,   317,   319,    80,   134,   274,   320,
     265,   323,   353,   324,   355,   322,   169,   170,   325,   359,
      82,   266,   267,   275,   268,   326,   328,    61,   424,   327,
      78,   269,   270,    61,    61,   271,    79,    61,   329,   272,
     307,   130,   131,   132,   133,   330,   331,    61,   273,   335,
     333,   338,    80,   134,   274,   377,   135,   336,   136,   342,
     337,   343,   169,   170,   339,   344,    82,   345,   346,   275,
     -11,   196,   197,   198,   199,   356,   362,   405,   261,   363,
      61,   264,   365,    13,   414,   357,   137,   369,   367,    14,
     138,   371,    15,   372,   379,   375,    16,   378,   383,   385,
     384,    17,   135,   -12,   136,   386,    18,   396,   169,   170,
     398,   405,    19,   399,   407,   401,    13,   422,   415,    20,
     419,    21,    14,   420,   413,    15,    22,    23,   421,    16,
      24,   412,   137,   431,    17,    13,   138,   443,   434,    18,
     451,    14,   442,   438,    15,    19,   439,   430,    16,   440,
     445,   446,    20,    17,    21,   447,   449,   450,    18,    22,
      23,   452,    29,    24,    19,   454,    12,   408,    13,   433,
     435,    20,   410,    21,    14,   428,   308,    15,    22,    23,
       0,    16,    24,     0,     0,     0,    17,     0,   309,     0,
     -43,    18,     0,     0,     0,     0,    13,    19,     0,     0,
       0,     0,    14,     0,    20,    15,    21,     0,     0,    16,
       0,    22,    23,     0,    17,    24,     0,     0,     0,    18,
       0,     0,     0,   -37,     0,    19,     0,     0,     0,     0,
       0,     0,    20,     0,    21,     0,   159,     0,   160,    22,
      23,     0,     0,    24,   161,   224,   225,   226,   227,   228,
     229,   160,     0,     0,     0,     0,     0,   161,   224,   225,
     226,   227,   228,   229,     0,     0,     0,     0,     0,   159,
       0,   160,     0,   110,   230,   231,   222,   161,   224,   225,
     226,   227,   228,   229,     0,     0,     0,   230,   231,     0,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   368,
    -139,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   370,  -139,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,     0,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   373,  -139,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,     0,     0,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   429,  -139,
     191,   192,   193,   194,   195,   196,   197,   198,   199,     0,
       0,     0,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   236,  -139,   192,   193,   194,   195,   196,   197,   198,
     199,     0,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   423,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   387,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,  -139,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199
};

static const yytype_int16 yycheck[] =
{
      62,   136,   106,    62,    70,   278,     3,   147,    70,   106,
       3,    70,   159,   160,   338,     3,     3,   101,     3,   106,
     293,     3,   295,    30,   159,   160,     3,     3,    97,    98,
      19,     4,   136,     3,     3,    44,    78,    44,    21,   101,
     102,   125,     3,   127,    54,    65,   370,    23,   110,    38,
      60,    61,   325,    29,    64,   159,   160,   330,    67,     3,
      67,   103,   202,   125,    74,   127,    63,    87,   152,    45,
     217,    32,   134,   220,   161,    35,    63,     8,    63,    70,
      71,    63,   217,    59,     0,   220,    63,   360,   235,   236,
     152,    64,     3,    63,    63,    26,    27,   107,     3,    63,
     235,   236,     3,     3,   208,    69,    67,   380,   101,   102,
      98,   384,    23,   217,   201,    63,   220,    65,    29,     3,
     224,   261,    23,    54,   264,   101,   102,   224,    29,    60,
      61,   235,   236,    64,    45,    65,    70,   224,    63,   412,
     101,   102,    65,    74,    45,     3,    71,   420,    59,     3,
     125,   424,   127,   426,     3,     3,   218,    87,    59,    67,
       3,   434,    68,    69,    87,    23,    72,    73,     3,   442,
     317,    29,    67,     3,   278,    23,   107,   152,    89,   452,
      23,    29,   317,    96,    97,    98,    29,    45,   323,   293,
      68,   295,    50,    23,    52,    53,    69,    45,   345,    29,
      68,    59,    45,     3,     4,     5,     6,     7,   114,   115,
     345,    59,    30,   317,    50,    45,    59,    53,     3,   323,
      50,   325,    52,    53,   371,    69,   330,    72,    72,    59,
      63,    70,    65,     3,   338,    64,   371,    63,    71,    65,
      68,   345,    63,    69,    14,    15,    72,    17,    69,    26,
      27,    72,   387,    23,    24,    25,   360,   323,    28,    29,
      69,   323,    32,    72,   323,    65,   370,   371,    60,    61,
      67,    41,    64,    70,   106,    45,   380,    47,   413,    63,
     384,    63,    74,   387,    70,    69,   421,    69,    72,    59,
      72,    70,    62,    67,    78,    95,    70,    67,   392,    99,
     394,   101,   102,   135,    68,   137,   138,   447,   412,   413,
       3,     4,     5,     6,     7,   107,   420,   421,    70,    71,
     424,    65,   426,    92,    93,    94,    95,    96,    97,    98,
     434,   101,   102,   399,    65,    89,    90,   399,   442,    64,
      71,    72,    73,    74,    75,    76,    77,    87,   452,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   430,     8,
     101,   102,    65,    69,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    66,    26,    27,    89,
      64,     3,   224,   225,   226,   227,   228,   229,     3,     3,
      71,    71,    95,    89,    64,     3,    99,    63,    67,    14,
      15,    23,    17,     3,    66,    54,    66,    29,    23,    24,
      25,    60,    61,    28,    29,    64,     3,    32,    94,    95,
      96,    97,    98,    45,    63,    74,    41,    65,    71,     3,
      45,     3,    47,    68,     3,    69,     3,    59,    93,    94,
      95,    96,    97,    98,    59,    14,    15,    62,    17,    66,
       3,     8,    67,    64,    23,    24,    25,    64,   107,    28,
      29,    65,     3,    32,     3,     4,     5,     6,     7,    26,
      27,     3,    41,    98,    65,    64,    45,    16,    47,     3,
       3,    65,   324,    65,   326,    70,   101,   102,    67,   331,
      59,    14,    15,    62,    17,    65,    16,    54,    67,    70,
      23,    24,    25,    60,    61,    28,    29,    64,     3,    32,
       3,     4,     5,     6,     7,    67,    65,    74,    41,    70,
      68,    34,    45,    16,    47,   367,    65,    70,    67,    66,
      70,    89,   101,   102,    70,    64,    59,    67,    66,    62,
       0,    95,    96,    97,    98,     3,    68,   389,    69,    68,
     107,    69,    66,    13,   396,    70,    95,    68,    70,    19,
      99,    65,    22,    68,    62,    68,    26,    67,    43,    68,
      67,    31,    65,     0,    67,     3,    36,    65,   101,   102,
      66,   423,    42,    65,    68,    66,    13,    66,    68,    49,
      68,    51,    19,    67,   103,    22,    56,    57,    69,    26,
      60,    78,    95,    66,    31,    13,    99,    68,    67,    36,
      54,    19,    67,    70,    22,    42,    70,    87,    26,    70,
      68,    68,    49,    31,    51,    89,    68,    68,    36,    56,
      57,    67,     9,    60,    42,    68,     7,   392,    13,   421,
     423,    49,   394,    51,    19,   413,   224,    22,    56,    57,
      -1,    26,    60,    -1,    -1,    -1,    31,    -1,   224,    -1,
      68,    36,    -1,    -1,    -1,    -1,    13,    42,    -1,    -1,
      -1,    -1,    19,    -1,    49,    22,    51,    -1,    -1,    26,
      -1,    56,    57,    -1,    31,    60,    -1,    -1,    -1,    36,
      -1,    -1,    -1,    68,    -1,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    -1,    51,    -1,    63,    -1,    65,    56,
      57,    -1,    -1,    60,    71,    72,    73,    74,    75,    76,
      77,    65,    -1,    -1,    -1,    -1,    -1,    71,    72,    73,
      74,    75,    76,    77,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    65,    -1,    87,   101,   102,    66,    71,    72,    73,
      74,    75,    76,    77,    -1,    -1,    -1,   101,   102,    -1,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    66,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    66,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    -1,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    66,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    -1,    -1,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    66,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    -1,
      -1,    -1,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    69,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    -1,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98
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
      45,    52,    59,   118,   123,   132,   134,    68,   117,    69,
      30,   116,   116,     3,   123,   131,   134,    68,   116,   116,
     117,    65,    87,     3,     3,    63,    72,    70,   114,   114,
      87,     3,    63,   130,    70,    70,    68,    68,     3,   120,
     121,   123,   132,     3,   123,    65,    63,    65,    64,     3,
       4,     5,     6,     7,    16,    65,    67,    95,    99,   127,
     133,   156,   157,   158,   117,   123,    63,    69,    64,   116,
     116,    66,    69,     3,    89,   120,    64,   120,     3,    63,
      65,    71,     3,   123,   135,     3,   127,   158,     3,   101,
     102,   122,   126,   127,   128,   154,   155,   156,   157,   127,
     127,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      71,    71,    89,    64,     3,    63,   130,     3,    67,   120,
       3,    66,    66,   122,   122,     3,   157,    65,    87,    63,
      65,    71,    66,    71,    72,    73,    74,    75,    76,    77,
     101,   102,     3,     3,    68,    69,    69,   127,   127,   127,
     127,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   127,     3,     3,   157,     3,
     130,    69,    63,    64,    69,     3,    14,    15,    17,    24,
      25,    28,    32,    41,    47,    62,   123,   124,   125,   126,
     129,   131,   134,   136,   137,   138,   139,   142,   143,   144,
     152,   153,   158,    67,    70,    67,    70,    64,    66,   122,
      89,   123,     4,    64,   122,     3,     3,     3,   128,   133,
     127,   127,   127,   127,   127,   122,   122,    65,   130,    64,
       3,   130,    70,    65,    65,    67,    65,    70,    16,     3,
      67,    65,     3,    68,   124,    70,    70,    70,    34,    70,
     124,   124,    66,    89,    64,    67,    66,   122,   123,   126,
     131,   134,   140,   127,   124,   127,     3,    70,   124,   127,
      67,   125,    68,    68,   122,    66,     3,    70,    66,    68,
      66,    65,    68,    66,   124,    68,    78,   127,    67,    62,
      67,   125,   122,    43,    67,    68,     3,    70,    19,    38,
     145,   146,   147,   148,   149,   150,    65,   124,    66,    65,
     124,    66,     3,   126,   141,   127,   151,    68,   146,   150,
     148,   150,    78,   103,   127,    68,     3,   123,   131,    68,
      67,    69,    66,    69,    67,   124,    67,   126,   153,    66,
      87,    66,   124,   141,    67,   151,   124,   124,    70,    70,
      70,   123,    67,    68,   124,    68,    68,    89,   124,    68,
      68,    54,    67,   124,    68
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
     122,   122,   122,   123,   123,   123,   123,   123,   124,   124,
     125,   125,   125,   125,   125,   125,   126,   126,   126,   126,
     126,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     128,   128,   128,   128,   128,   128,   128,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   130,   130,   130,
     130,   130,   130,   131,   131,   132,   132,   132,   132,   133,
     133,   133,   133,   133,   133,   133,   133,   134,   135,   135,
     136,   137,   138,   139,   140,   140,   140,   141,   141,   142,
     142,   143,   143,   144,   145,   145,   146,   146,   147,   147,
     147,   148,   148,   149,   149,   150,   150,   151,   151,   152,
     152,   153,   154,   154,   155,   155,   156,   156,   157,   157,
     158,   158
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     0,     3,     0,     2,     3,     5,     1,
       3,     1,     1,     2,     2,     6,     8,     6,     7,     2,
       2,     4,     1,     3,     0,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     0,     4,     4,
       2,     2,     2,     0,     4,     2,     2,     2,     6,     6,
       9,     9,     8,     2,     1,     3,     0,     1,     0,     1,
       1,     3,     3,     1,     1,     1,     1,     1,     0,     2,
       2,     1,     2,     2,     1,     2,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     4,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     3,     1,     3,     3,
       5,     5,     3,     2,     5,     2,     4,     4,     5,     1,
       5,     3,     7,     5,     1,     1,     5,     3,     4,     3,
       7,     9,    11,    10,     1,     1,     1,     1,     3,     7,
       5,     5,     3,     7,     1,     1,     1,     2,     4,     5,
       4,     1,     2,     5,     3,     2,     1,     1,     3,    11,
      15,     6,     2,     2,     2,     2,     3,     3,     4,     6,
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
#line 198 "JavaGrammar.yy"
                                    {
	root = (yyvsp[-2].node);
	Node* _im = new Node(ptImports);
	_im->attach_child(*(yyvsp[-1].node));
	root->attach_child(*_im);
	_im->attach_child(*(yyvsp[0].node));
}
#line 1945 "JavaGrammar.tab.cc"
    break;

  case 3:
#line 208 "JavaGrammar.yy"
       {
	(yyval.node) = new Node(ptPackageContainer);
	(yyval.node)->attach_child(*(new Node(ptEmpty)));
}
#line 1954 "JavaGrammar.tab.cc"
    break;

  case 4:
#line 212 "JavaGrammar.yy"
                                  {
	(yyval.node) = new Node(ptPackageContainer);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 1963 "JavaGrammar.tab.cc"
    break;

  case 5:
#line 219 "JavaGrammar.yy"
       {
	(yyval.node) = new Node(ptEmpty);
}
#line 1971 "JavaGrammar.tab.cc"
    break;

  case 6:
#line 222 "JavaGrammar.yy"
                                  {
	(yyval.node) = new Node(ptImportContainer);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 1981 "JavaGrammar.tab.cc"
    break;

  case 7:
#line 230 "JavaGrammar.yy"
                                {
	(yyval.node) = new Node(ptImport);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 1990 "JavaGrammar.tab.cc"
    break;

  case 8:
#line 234 "JavaGrammar.yy"
                                                 {
	(yyval.node) = new Node(ptImport);
	(yyval.node)->attach_child(*(yyvsp[-3].node));
	(yyval.node)->attach_child(*(new Node(TOK_MUL)));
}
#line 2000 "JavaGrammar.tab.cc"
    break;

  case 9:
#line 242 "JavaGrammar.yy"
               {
	(yyval.node) = new Node(ptPackage, 0, 0, (yyvsp[0].stVal));
}
#line 2008 "JavaGrammar.tab.cc"
    break;

  case 10:
#line 245 "JavaGrammar.yy"
                                    {
	(yyval.node) = new Node(ptPackage, 0, 0, (yyvsp[0].stVal));
	(yyval.node)->attach_child(*(yyvsp[-2].node));
}
#line 2017 "JavaGrammar.tab.cc"
    break;

  case 11:
#line 252 "JavaGrammar.yy"
             {
	(yyval.node) = new Node(ptTypeDec);
	(yyval.node)->attach_child(*(new Node(ptEmpty, 0, 0, "interface placeholder")));
}
#line 2026 "JavaGrammar.tab.cc"
    break;

  case 12:
#line 256 "JavaGrammar.yy"
          {
	(yyval.node) = new Node(ptTypeDec);
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2035 "JavaGrammar.tab.cc"
    break;

  case 13:
#line 260 "JavaGrammar.yy"
                  {
	(yyval.node) = new Node(ptTypeDec);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2045 "JavaGrammar.tab.cc"
    break;

  case 14:
#line 265 "JavaGrammar.yy"
                      {
	(yyval.node) = new Node(ptTypeDec);
	(yyval.node)->attach_child(*(new Node(ptEmpty, 0, 0, "interface placeholder")));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2055 "JavaGrammar.tab.cc"
    break;

  case 17:
#line 278 "JavaGrammar.yy"
                                                             {
	(yyval.node) = new Node(ptClass, 0, 0, (yyvsp[-3].stVal));
	(yyval.node)->attach_child(*(yyvsp[-5].node));
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 2065 "JavaGrammar.tab.cc"
    break;

  case 18:
#line 283 "JavaGrammar.yy"
                                                                                  {
	(yyval.node) = new Node(ptClass, 0, 0, (yyvsp[-4].stVal));
	(yyval.node)->attach_child(*(yyvsp[-6].node));
	(yyval.node)->attach_child(*(yyvsp[-1].node));
	//$1->attach_child(*$4);
}
#line 2076 "JavaGrammar.tab.cc"
    break;

  case 24:
#line 304 "JavaGrammar.yy"
       {
	(yyval.node) = new Node(ptEmpty);
	(yyval.node)->attach_child(*(new Node(ptEmpty))); //ensure that whatever gets attached to $$ is a right node
}
#line 2085 "JavaGrammar.tab.cc"
    break;

  case 25:
#line 308 "JavaGrammar.yy"
               {
	(yyval.node) = new Node(ptMod, 0, 0, "final");
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2094 "JavaGrammar.tab.cc"
    break;

  case 26:
#line 312 "JavaGrammar.yy"
                  {
	(yyval.node) = new Node(ptMod, 0, 0, "abstract");
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2103 "JavaGrammar.tab.cc"
    break;

  case 27:
#line 316 "JavaGrammar.yy"
                  {
	(yyval.node) = new Node(ptMod, 0, 0, "strictfp");
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2112 "JavaGrammar.tab.cc"
    break;

  case 28:
#line 320 "JavaGrammar.yy"
                {
	(yyval.node) = new Node(ptMod, 0, 0, "static");
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2121 "JavaGrammar.tab.cc"
    break;

  case 29:
#line 324 "JavaGrammar.yy"
                {
	(yyval.node) = new Node(ptMod, 0, 0, "native");
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2130 "JavaGrammar.tab.cc"
    break;

  case 30:
#line 328 "JavaGrammar.yy"
                      {
	(yyval.node) = new Node(ptMod, 0, 0, "synchronized");
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2139 "JavaGrammar.tab.cc"
    break;

  case 31:
#line 332 "JavaGrammar.yy"
                   {
	(yyval.node) = new Node(ptMod, 0, 0, "transient");
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2148 "JavaGrammar.tab.cc"
    break;

  case 32:
#line 336 "JavaGrammar.yy"
                  {
	(yyval.node) = new Node(ptMod, 0, 0, "volatile");
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2157 "JavaGrammar.tab.cc"
    break;

  case 33:
#line 340 "JavaGrammar.yy"
                {
	(yyval.node) = new Node(ptMod, 0, 0, "public");
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2166 "JavaGrammar.tab.cc"
    break;

  case 34:
#line 344 "JavaGrammar.yy"
                 {
	(yyval.node) = new Node(ptMod, 0, 0, "private");
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2175 "JavaGrammar.tab.cc"
    break;

  case 35:
#line 348 "JavaGrammar.yy"
                   {
	(yyval.node) = new Node(ptMod, 0, 0, "protected");
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2184 "JavaGrammar.tab.cc"
    break;

  case 36:
#line 352 "JavaGrammar.yy"
                 {
	(yyval.node) = new Node(ptMod, 0, 0, "default");
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2193 "JavaGrammar.tab.cc"
    break;

  case 37:
#line 359 "JavaGrammar.yy"
       {
	(yyval.node) = new Node(ptClassBody);
	(yyval.node)->attach_child(*(new Node(ptEmpty)));
}
#line 2202 "JavaGrammar.tab.cc"
    break;

  case 38:
#line 363 "JavaGrammar.yy"
                                             {
	(yyval.node) = new Node(ptClassBody);
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyvsp[-2].node)->attach_child(*(yyvsp[-3].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2213 "JavaGrammar.tab.cc"
    break;

  case 39:
#line 369 "JavaGrammar.yy"
                                                {
	(yyval.node) = new Node(ptClassBody);
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyvsp[-2].node)->attach_child(*(yyvsp[-3].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2224 "JavaGrammar.tab.cc"
    break;

  case 40:
#line 375 "JavaGrammar.yy"
                  {
	(yyval.node) = new Node(ptClassBody);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
	//$$->attach_child(*(new Node(ptEmpty, 0, 0, "method placeholder")));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2235 "JavaGrammar.tab.cc"
    break;

  case 41:
#line 381 "JavaGrammar.yy"
                    {
	(yyval.node) = new Node(ptClassBody);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2245 "JavaGrammar.tab.cc"
    break;

  case 42:
#line 386 "JavaGrammar.yy"
                        {
	(yyval.node) = new Node(ptClassBody);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2255 "JavaGrammar.tab.cc"
    break;

  case 48:
#line 402 "JavaGrammar.yy"
                                                                        {
	(yyval.node) = new Node(ptAbstractMethod, 0, 0, (yyvsp[-4].stVal));
	(yyval.node)->attach_child(*(yyvsp[-5].node));
	(yyval.node)->attach_child(*(yyvsp[-2].node));
}
#line 2265 "JavaGrammar.tab.cc"
    break;

  case 49:
#line 407 "JavaGrammar.yy"
                                                                         {
	(yyval.node) = new Node(ptAbstractMethod, 0, 0, (yyvsp[-4].stVal));
	(yyval.node)->attach_child(*(new Node(TOK_VOID)));
	(yyval.node)->attach_child(*(yyvsp[-2].node));
}
#line 2275 "JavaGrammar.tab.cc"
    break;

  case 50:
#line 415 "JavaGrammar.yy"
                                                                                               {
	(yyval.node) = new Node(ptMethod, 0, 0, (yyvsp[-6].stVal));
	(yyval.node)->attach_child(*(yyvsp[-7].node));
	(yyvsp[-7].node)->attach_child(*(yyvsp[-4].node));
	(yyvsp[-7].node)->attach_child(*(yyvsp[-8].node));
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 2287 "JavaGrammar.tab.cc"
    break;

  case 51:
#line 422 "JavaGrammar.yy"
                                                                                                {
	(yyval.node) = new Node(ptMethod, 0, 0, (yyvsp[-6].stVal));
	Node* _rt = new Node(TOK_VOID);
	_rt->attach_child(*(yyvsp[-4].node));
	_rt->attach_child(*(yyvsp[-8].node));
	(yyval.node)->attach_child(*_rt);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 2300 "JavaGrammar.tab.cc"
    break;

  case 52:
#line 430 "JavaGrammar.yy"
                                                                                       {
	(yyval.node) = new Node(ptMethod, 0, 0, (yyvsp[-6].stVal));
	Node* _const = new Node(ptConstructorInfo);
	_const->attach_child(*(yyvsp[-4].node));
	_const->attach_child(*(yyvsp[-7].node));
	(yyval.node)->attach_child(*_const);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 2313 "JavaGrammar.tab.cc"
    break;

  case 53:
#line 438 "JavaGrammar.yy"
                    {
	(yyval.node) = new Node(ptMethod);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2323 "JavaGrammar.tab.cc"
    break;

  case 54:
#line 446 "JavaGrammar.yy"
                {
	(yyval.node) = (yyvsp[0].node);
}
#line 2331 "JavaGrammar.tab.cc"
    break;

  case 55:
#line 449 "JavaGrammar.yy"
                                           {
	(yyval.node) = (yyvsp[-2].node);
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2340 "JavaGrammar.tab.cc"
    break;

  case 56:
#line 456 "JavaGrammar.yy"
       {
	(yyval.node) = new Node(ptEmpty);
}
#line 2348 "JavaGrammar.tab.cc"
    break;

  case 57:
#line 459 "JavaGrammar.yy"
            {
	(yyval.node) = (yyvsp[0].node);
}
#line 2356 "JavaGrammar.tab.cc"
    break;

  case 58:
#line 465 "JavaGrammar.yy"
       {
	(yyval.node) = new Node(ptEmpty);
}
#line 2364 "JavaGrammar.tab.cc"
    break;

  case 59:
#line 468 "JavaGrammar.yy"
            {
	(yyval.node) = new Node(ptArgument);
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2373 "JavaGrammar.tab.cc"
    break;

  case 60:
#line 472 "JavaGrammar.yy"
                     {
	(yyval.node) = new Node(ptArgument);
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2382 "JavaGrammar.tab.cc"
    break;

  case 61:
#line 476 "JavaGrammar.yy"
                               {
	(yyval.node) = new Node(ptArgument);
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2392 "JavaGrammar.tab.cc"
    break;

  case 62:
#line 481 "JavaGrammar.yy"
                                        {
	(yyval.node) = new Node(ptArgument);
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2402 "JavaGrammar.tab.cc"
    break;

  case 63:
#line 489 "JavaGrammar.yy"
        {
	(yyval.node) = new Node(ptDataType, 0, 0, "int");
}
#line 2410 "JavaGrammar.tab.cc"
    break;

  case 64:
#line 492 "JavaGrammar.yy"
             {
	(yyval.node) = new Node(ptDataType, 0, 0, "boolean");
}
#line 2418 "JavaGrammar.tab.cc"
    break;

  case 65:
#line 495 "JavaGrammar.yy"
           {
	(yyval.node) = new Node(ptDataType, 0, 0, "float");
}
#line 2426 "JavaGrammar.tab.cc"
    break;

  case 66:
#line 498 "JavaGrammar.yy"
                {
	(yyval.node) = new Node(ptDataType, 0, 0, (yyvsp[0].stVal));
}
#line 2434 "JavaGrammar.tab.cc"
    break;

  case 67:
#line 501 "JavaGrammar.yy"
            {
	(yyval.node) = new Node(ptDataType, 0, 0, "double");
}
#line 2442 "JavaGrammar.tab.cc"
    break;

  case 68:
#line 507 "JavaGrammar.yy"
       {
	(yyval.node) = new Node(ptEmpty);
}
#line 2450 "JavaGrammar.tab.cc"
    break;

  case 69:
#line 510 "JavaGrammar.yy"
                 {
	(yyval.node) = (yyvsp[-1].node);
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2459 "JavaGrammar.tab.cc"
    break;

  case 70:
#line 517 "JavaGrammar.yy"
                             {
	(yyval.node) = new Node(ptStatement);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 2468 "JavaGrammar.tab.cc"
    break;

  case 71:
#line 521 "JavaGrammar.yy"
                      {
	(yyval.node) = new Node(ptStatement);
	(yyval.node)->attach_child(*(new Node(ptEmpty, 0, 0, "placeholder controlflow")));
}
#line 2477 "JavaGrammar.tab.cc"
    break;

  case 72:
#line 525 "JavaGrammar.yy"
                               {
	(yyval.node) = new Node(ptStatement);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 2486 "JavaGrammar.tab.cc"
    break;

  case 73:
#line 529 "JavaGrammar.yy"
                                  {
	(yyval.node) = new Node(ptStatement);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 2495 "JavaGrammar.tab.cc"
    break;

  case 74:
#line 533 "JavaGrammar.yy"
               {
	(yyval.node) = new Node(ptStatement);
	(yyval.node)->attach_child(*(new Node(ptEmpty, 0, 0, "placeholder trycatch")));
}
#line 2504 "JavaGrammar.tab.cc"
    break;

  case 75:
#line 537 "JavaGrammar.yy"
                     {
	(yyval.node) = new Node(ptStatement);
	(yyval.node)->attach_child(*(new Node(ptEmpty, 0, 0, "placeholder throwstate")));
}
#line 2513 "JavaGrammar.tab.cc"
    break;

  case 76:
#line 544 "JavaGrammar.yy"
                   {
	(yyval.node) = (yyvsp[0].node);
}
#line 2521 "JavaGrammar.tab.cc"
    break;

  case 77:
#line 547 "JavaGrammar.yy"
            {
	(yyval.node) = (yyvsp[0].node);
}
#line 2529 "JavaGrammar.tab.cc"
    break;

  case 78:
#line 550 "JavaGrammar.yy"
               {
	(yyval.node) = (yyvsp[0].node);
}
#line 2537 "JavaGrammar.tab.cc"
    break;

  case 79:
#line 553 "JavaGrammar.yy"
              {
	(yyval.node) = (yyvsp[0].node);
}
#line 2545 "JavaGrammar.tab.cc"
    break;

  case 80:
#line 556 "JavaGrammar.yy"
                     {
	(yyval.node) = (yyvsp[0].node);
}
#line 2553 "JavaGrammar.tab.cc"
    break;

  case 81:
#line 562 "JavaGrammar.yy"
                                 {
	(yyval.node) = new Node(ptEnclosedExpression);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 2562 "JavaGrammar.tab.cc"
    break;

  case 82:
#line 566 "JavaGrammar.yy"
            {
	(yyval.node) = new Node(TOK_INTVAL, (yyvsp[0].iVal), 0, "");
}
#line 2570 "JavaGrammar.tab.cc"
    break;

  case 83:
#line 569 "JavaGrammar.yy"
              {
	(yyval.node) = new Node(TOK_FLOATVAL, 0, (yyvsp[0].fVal), "");
}
#line 2578 "JavaGrammar.tab.cc"
    break;

  case 84:
#line 572 "JavaGrammar.yy"
             {
	(yyval.node) = new Node(TOK_BOOLVAL, (yyvsp[0].bVal), 0, "");
}
#line 2586 "JavaGrammar.tab.cc"
    break;

  case 85:
#line 575 "JavaGrammar.yy"
               {
	(yyval.node) = new Node(TOK_STRINGVAL, 0, 0, (yyvsp[0].stVal));
}
#line 2594 "JavaGrammar.tab.cc"
    break;

  case 86:
#line 578 "JavaGrammar.yy"
                {
	(yyval.node) = new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[0].stVal));
}
#line 2602 "JavaGrammar.tab.cc"
    break;

  case 87:
#line 581 "JavaGrammar.yy"
                {
	(yyval.node) = new Node(ptEmpty, 0, 0, "fieldreference placeholder");
}
#line 2610 "JavaGrammar.tab.cc"
    break;

  case 88:
#line 584 "JavaGrammar.yy"
                                                   {
	(yyval.node) = new Node(ptEmpty, 0, 0, "arrayaccess placeholder");
}
#line 2618 "JavaGrammar.tab.cc"
    break;

  case 89:
#line 587 "JavaGrammar.yy"
                    {
	(yyval.node) = new Node(ptNegation);
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2627 "JavaGrammar.tab.cc"
    break;

  case 90:
#line 591 "JavaGrammar.yy"
                       {
	(yyval.node) = new Node(ptBitNegation);
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2636 "JavaGrammar.tab.cc"
    break;

  case 91:
#line 595 "JavaGrammar.yy"
                               {
	(yyval.node) = new Node(ptOperation, 0, 0, "+");
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2646 "JavaGrammar.tab.cc"
    break;

  case 92:
#line 600 "JavaGrammar.yy"
                               {
	(yyval.node) = new Node(ptOperation, 0, 0, "-");
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2656 "JavaGrammar.tab.cc"
    break;

  case 93:
#line 605 "JavaGrammar.yy"
                               {
	(yyval.node) = new Node(ptOperation, 0, 0, "%");
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2666 "JavaGrammar.tab.cc"
    break;

  case 94:
#line 610 "JavaGrammar.yy"
                               {
	(yyval.node) = new Node(ptOperation, 0, 0, "/");
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2676 "JavaGrammar.tab.cc"
    break;

  case 95:
#line 615 "JavaGrammar.yy"
                               {
	(yyval.node) = new Node(ptOperation, 0, 0, "*");
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2686 "JavaGrammar.tab.cc"
    break;

  case 96:
#line 620 "JavaGrammar.yy"
                                 {
	(yyval.node) = new Node(ptOperation, 0, 0, "==");
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2696 "JavaGrammar.tab.cc"
    break;

  case 97:
#line 625 "JavaGrammar.yy"
                                  {
	(yyval.node) = new Node(ptOperation, 0, 0, "!=");
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2706 "JavaGrammar.tab.cc"
    break;

  case 98:
#line 630 "JavaGrammar.yy"
                                   {
	(yyval.node) = new Node(ptOperation, 0, 0, ">");
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2716 "JavaGrammar.tab.cc"
    break;

  case 99:
#line 635 "JavaGrammar.yy"
                                {
	(yyval.node) = new Node(ptOperation, 0, 0, "<");
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2726 "JavaGrammar.tab.cc"
    break;

  case 100:
#line 640 "JavaGrammar.yy"
                                  {
	(yyval.node) = new Node(ptOperation, 0, 0, ">=");
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2736 "JavaGrammar.tab.cc"
    break;

  case 101:
#line 645 "JavaGrammar.yy"
                                  {
	(yyval.node) = new Node(ptOperation, 0, 0, "<=");
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2746 "JavaGrammar.tab.cc"
    break;

  case 102:
#line 650 "JavaGrammar.yy"
                               {
	(yyval.node) = new Node(ptOperation, 0, 0, "&&");
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2756 "JavaGrammar.tab.cc"
    break;

  case 103:
#line 655 "JavaGrammar.yy"
                              {
	(yyval.node) = new Node(ptOperation, 0, 0, "||");
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2766 "JavaGrammar.tab.cc"
    break;

  case 104:
#line 660 "JavaGrammar.yy"
                                 {
	(yyval.node) = new Node(ptOperation, 0, 0, "|");
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2776 "JavaGrammar.tab.cc"
    break;

  case 105:
#line 665 "JavaGrammar.yy"
                                  {
	(yyval.node) = new Node(ptOperation, 0, 0, "&");
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2786 "JavaGrammar.tab.cc"
    break;

  case 106:
#line 670 "JavaGrammar.yy"
                                  {
	(yyval.node) = new Node(ptOperation, 0, 0, "^");
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2796 "JavaGrammar.tab.cc"
    break;

  case 107:
#line 675 "JavaGrammar.yy"
                                  {
	(yyval.node) = new Node(ptOperation, 0, 0, "<<");
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2806 "JavaGrammar.tab.cc"
    break;

  case 108:
#line 680 "JavaGrammar.yy"
                                  {
	(yyval.node) = new Node(ptOperation, 0, 0, ">>");
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2816 "JavaGrammar.tab.cc"
    break;

  case 109:
#line 685 "JavaGrammar.yy"
                                   {
	(yyval.node) = new Node(ptOperation, 0, 0, ">>>");
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2826 "JavaGrammar.tab.cc"
    break;

  case 110:
#line 693 "JavaGrammar.yy"
                                        {
	(yyval.node) = new Node(ptAssignment, 0, 0, "%=");
	(yyval.node)->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[-2].stVal))));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2836 "JavaGrammar.tab.cc"
    break;

  case 111:
#line 698 "JavaGrammar.yy"
                                         {
	(yyval.node) = new Node(ptAssignment, 0, 0, "/=");
	(yyval.node)->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[-2].stVal))));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2846 "JavaGrammar.tab.cc"
    break;

  case 112:
#line 703 "JavaGrammar.yy"
                                         {
	(yyval.node) = new Node(ptAssignment, 0, 0, "*=");
	(yyval.node)->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[-2].stVal))));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2856 "JavaGrammar.tab.cc"
    break;

  case 113:
#line 708 "JavaGrammar.yy"
                                         {
	(yyval.node) = new Node(ptAssignment, 0, 0, "+=");
	(yyval.node)->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[-2].stVal))));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2866 "JavaGrammar.tab.cc"
    break;

  case 114:
#line 713 "JavaGrammar.yy"
                                         {
	(yyval.node) = new Node(ptAssignment, 0, 0, "-=");
	(yyval.node)->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[-2].stVal))));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2876 "JavaGrammar.tab.cc"
    break;

  case 115:
#line 718 "JavaGrammar.yy"
                                       {
	(yyval.node) = new Node(ptAssignment, 0, 0, "=");
	(yyval.node)->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[-2].stVal))));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2886 "JavaGrammar.tab.cc"
    break;

  case 116:
#line 723 "JavaGrammar.yy"
                                               {
	(yyval.node) = new Node(ptAssignment, 0, 0, "=");
	(yyval.node)->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[-2].stVal))));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2896 "JavaGrammar.tab.cc"
    break;

  case 127:
#line 744 "JavaGrammar.yy"
               {
	(yyval.node) = new Node(ptIdentifierContainer);
	(yyval.node)->attach_child(*(new Node(ptIdentifier, 0, 0, (yyvsp[0].stVal))));
}
#line 2905 "JavaGrammar.tab.cc"
    break;

  case 128:
#line 748 "JavaGrammar.yy"
                                          {
	(yyval.node) = new Node(ptIdentifierContainer);
	(yyval.node)->attach_child(*(new Node(ptArrayIdentifier, 0, 0, (yyvsp[-2].stVal))));
}
#line 2914 "JavaGrammar.tab.cc"
    break;

  case 129:
#line 752 "JavaGrammar.yy"
                                          {
	(yyval.node) = new Node(ptIdentifierContainer);
	(yyval.node)->attach_child(*(new Node(ptArrayIdentifier, 0, 0, (yyvsp[0].stVal))));
}
#line 2923 "JavaGrammar.tab.cc"
    break;

  case 130:
#line 756 "JavaGrammar.yy"
                                                               {
	(yyval.node) = new Node(ptIdentifierContainer);
	(yyval.node)->attach_child(*(new Node(ptArrayIdentifier, 0, 0, (yyvsp[-4].stVal))));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2933 "JavaGrammar.tab.cc"
    break;

  case 131:
#line 761 "JavaGrammar.yy"
                                                               {
	(yyval.node) = new Node(ptIdentifierContainer);
	(yyval.node)->attach_child(*(new Node(ptArrayIdentifier, 0, 0, (yyvsp[-2].stVal))));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2943 "JavaGrammar.tab.cc"
    break;

  case 132:
#line 766 "JavaGrammar.yy"
                                     {
	(yyval.node) = new Node(ptIdentifierContainer);
	(yyval.node)->attach_child(*(new Node(ptIdentifier, 0, 0, (yyvsp[-2].stVal))));
}
#line 2952 "JavaGrammar.tab.cc"
    break;

  case 133:
#line 773 "JavaGrammar.yy"
                    {
	(yyval.node) = new Node(ptDeclaration);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
	(yyvsp[-1].node)->attach_child(*(yyvsp[0].node));
}
#line 2962 "JavaGrammar.tab.cc"
    break;

  case 134:
#line 778 "JavaGrammar.yy"
                                                         {
	(yyval.node) = new Node(ptDeclaration);
	Node* _it = new Node(ptInstanceGeneric, 0, 0, (yyvsp[-4].stVal));
	_it->attach_child(*(yyvsp[0].node));
	_it->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*_it);
}
#line 2974 "JavaGrammar.tab.cc"
    break;

  case 135:
#line 788 "JavaGrammar.yy"
                        {
	(yyval.node) = new Node(ptDeclaration, 0, 0, (yyvsp[0].stVal));
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 2983 "JavaGrammar.tab.cc"
    break;

  case 136:
#line 792 "JavaGrammar.yy"
                                                   {
	(yyval.node) = new Node(ptArrayDeclaration, 0, 0, (yyvsp[0].stVal));
	(yyval.node)->attach_child(*(yyvsp[-3].node));
}
#line 2992 "JavaGrammar.tab.cc"
    break;

  case 137:
#line 796 "JavaGrammar.yy"
                                                   {
	(yyval.node) = new Node(ptArrayDeclaration, 0, 0, (yyvsp[-2].stVal));
	(yyval.node)->attach_child(*(yyvsp[-3].node));
}
#line 3001 "JavaGrammar.tab.cc"
    break;

  case 138:
#line 800 "JavaGrammar.yy"
                                                             {
	(yyval.node) = new Node(ptDeclaration, 0, 0, (yyvsp[0].stVal));
	Node* _it = new Node(ptInstanceGeneric, 0, 0, (yyvsp[-4].stVal));
	_it->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*_it);
}
#line 3012 "JavaGrammar.tab.cc"
    break;

  case 139:
#line 809 "JavaGrammar.yy"
           {
	(yyval.node) = (yyvsp[0].node);
}
#line 3020 "JavaGrammar.tab.cc"
    break;

  case 140:
#line 812 "JavaGrammar.yy"
                                                       {
	(yyval.node) = new Node(ptArraySizeInitializer);
	(yyval.node)->attach_child(*(yyvsp[-3].node));
	(yyval.node)->attach_child(*(new Node(TOK_INTVAL, (yyvsp[-1].iVal), 0, "")));
}
#line 3030 "JavaGrammar.tab.cc"
    break;

  case 141:
#line 817 "JavaGrammar.yy"
                                {
	(yyval.node) = new Node(ptArrayExplicitInitializer);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 3039 "JavaGrammar.tab.cc"
    break;

  case 142:
#line 821 "JavaGrammar.yy"
                                                                           {
	(yyval.node) = new Node(ptArrayExplicitInitializer);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 3048 "JavaGrammar.tab.cc"
    break;

  case 143:
#line 825 "JavaGrammar.yy"
                                                       {
	(yyval.node) = new Node(ptInstanceInitializer);
	(yyval.node)->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[-3].stVal))));
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 3058 "JavaGrammar.tab.cc"
    break;

  case 144:
#line 830 "JavaGrammar.yy"
            {
	(yyval.node) = (yyvsp[0].node);
}
#line 3066 "JavaGrammar.tab.cc"
    break;

  case 145:
#line 833 "JavaGrammar.yy"
                    {
	(yyval.node) = (yyvsp[0].node);
}
#line 3074 "JavaGrammar.tab.cc"
    break;

  case 146:
#line 836 "JavaGrammar.yy"
                                                      {
	(yyval.node) = new Node(ptDataStructureInitializer);
	(yyval.node)->attach_child(*(yyvsp[-3].node));
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 3084 "JavaGrammar.tab.cc"
    break;

  case 147:
#line 844 "JavaGrammar.yy"
                                  {
	(yyval.node) = new Node(ptInitializationContainer);
	Node* _is = new Node(ptInitializationStatement);
	_is->attach_child(*(yyvsp[-2].node));
	_is->attach_child(*(yyvsp[0].node));
	//_is->attach_child(*(new Node(ptEmpty, 0, 0, "initializer placeholder")));
	(yyval.node)->attach_child(*_is);
}
#line 3097 "JavaGrammar.tab.cc"
    break;

  case 148:
#line 855 "JavaGrammar.yy"
                                             {
	(yyval.node) = new Node(ptDataStructure);
	(yyval.node)->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[-3].stVal))));
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 3107 "JavaGrammar.tab.cc"
    break;

  case 149:
#line 860 "JavaGrammar.yy"
                                     {
	(yyval.node) = new Node(ptDataStructure);
	(yyval.node)->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[-2].stVal))));
}
#line 3116 "JavaGrammar.tab.cc"
    break;

  case 182:
#line 955 "JavaGrammar.yy"
                          {
	(yyval.node) = new Node(ptPostDecrement);
	(yyval.node)->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[-1].stVal))));
	(yyval.node)->attach_child(*(new Node(TOK_ADDADD)));
}
#line 3126 "JavaGrammar.tab.cc"
    break;

  case 183:
#line 960 "JavaGrammar.yy"
                           {
	(yyval.node) = new Node(ptPostDecrement);
	(yyval.node)->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[-1].stVal))));
	(yyval.node)->attach_child(*(new Node(TOK_SUBSUB)));
}
#line 3136 "JavaGrammar.tab.cc"
    break;

  case 184:
#line 968 "JavaGrammar.yy"
                          {
	(yyval.node) = new Node(ptPreDecrement);
	(yyval.node)->attach_child(*(new Node(TOK_ADDADD)));
	(yyval.node)->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[0].stVal))));
}
#line 3146 "JavaGrammar.tab.cc"
    break;

  case 185:
#line 973 "JavaGrammar.yy"
                           {
	(yyval.node) = new Node(ptPreDecrement);
	(yyval.node)->attach_child(*(new Node(TOK_SUBSUB)));
	(yyval.node)->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[0].stVal))));
}
#line 3156 "JavaGrammar.tab.cc"
    break;

  case 186:
#line 981 "JavaGrammar.yy"
                                  {
	(yyval.node) = new Node(ptInstanceMethodCall);
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 3166 "JavaGrammar.tab.cc"
    break;

  case 187:
#line 986 "JavaGrammar.yy"
                                   {
	(yyval.node) = new Node(ptInstanceMethodCall);
	(yyval.node)->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[-2].stVal))));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 3176 "JavaGrammar.tab.cc"
    break;

  case 188:
#line 994 "JavaGrammar.yy"
                                              {
	(yyval.node) = new Node(ptMethodCall);
	Node* _method_name = new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[-3].stVal));
	(yyval.node)->attach_child(*_method_name);
	_method_name->attach_child(*(yyvsp[-1].node));
}
#line 3187 "JavaGrammar.tab.cc"
    break;

  case 189:
#line 1000 "JavaGrammar.yy"
                                                                  {
	(yyval.node) = (yyvsp[-5].node);
	Node* _method_call = new Node(ptMethodCall);
	Node* _method_name = new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[-3].stVal));
	_method_call->attach_child(*_method_name);
	_method_name->attach_child(*(yyvsp[-1].node));
	(yyval.node)->attach_child(*_method_call);
}
#line 3200 "JavaGrammar.tab.cc"
    break;

  case 190:
#line 1011 "JavaGrammar.yy"
                                      {
	(yyval.node) = new Node(ptFieldReference);
	(yyval.node)->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[-2].stVal))));
	(yyval.node)->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[0].stVal))));
}
#line 3210 "JavaGrammar.tab.cc"
    break;

  case 191:
#line 1016 "JavaGrammar.yy"
                                                                        {
	(yyval.node) = new Node(ptFieldReference);
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[0].stVal))));
}
#line 3220 "JavaGrammar.tab.cc"
    break;


#line 3224 "JavaGrammar.tab.cc"

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
#line 1023 "JavaGrammar.yy"


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
