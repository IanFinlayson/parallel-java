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
		ptAbstractMethodLabel,
		ptMethodLabel,
		ptConstructorLabel,
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
		ptAssignment,
		ptInterface,
		ptExtends,
		ptImplements,
		ptBasicIdentifier,
		ptArrayAccess,
		ptWhile,
		ptDoWhile,
		ptFor,
		ptForEach,
		ptForEachDec,
		ptIf,
		ptIfElse,
		ptReturn,
		ptThrows,
		ptSwitch,
		ptSwitchBlock,
		ptSwitchRule,
		ptSwitchState,
		ptSwitchLabel,	
		ptCase,
		ptThrowState
	};

	extern int yylex();
	void yyerror(char const *error);

	Node* root;

#line 145 "JavaGrammar.tab.cc"

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
#line 76 "JavaGrammar.yy"

	#include <string>
	#include <iostream> 

#line 193 "JavaGrammar.tab.cc"

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
#line 81 "JavaGrammar.yy"

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


#line 322 "JavaGrammar.tab.cc"

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
#define YYLAST   1170

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  104
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  56
/* YYNRULES -- Number of rules.  */
#define YYNRULES  194
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  462

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
       0,   225,   225,   235,   239,   246,   249,   257,   261,   269,
     272,   279,   284,   288,   293,   301,   306,   315,   320,   329,
     332,   336,   345,   348,   356,   360,   364,   368,   372,   376,
     380,   384,   388,   392,   396,   400,   404,   411,   415,   421,
     427,   433,   438,   446,   449,   455,   460,   465,   473,   479,
     489,   504,   518,   529,   537,   540,   547,   550,   557,   560,
     566,   569,   573,   577,   582,   590,   593,   596,   599,   602,
     608,   611,   618,   622,   627,   631,   635,   639,   646,   649,
     652,   655,   658,   664,   668,   671,   674,   677,   680,   683,
     687,   692,   696,   700,   705,   710,   715,   720,   725,   730,
     735,   740,   745,   750,   755,   760,   765,   770,   775,   780,
     785,   790,   798,   803,   808,   813,   818,   823,   828,   836,
     839,   842,   845,   848,   851,   854,   857,   860,   863,   870,
     874,   878,   882,   887,   892,   899,   904,   914,   918,   922,
     926,   932,   938,   941,   946,   950,   954,   959,   962,   965,
     973,   984,   989,   996,  1004,  1012,  1026,  1042,  1045,  1048,
    1054,  1058,  1066,  1071,  1079,  1084,  1093,  1101,  1104,  1110,
    1113,  1121,  1126,  1131,  1139,  1143,  1150,  1155,  1163,  1167,
    1174,  1178,  1187,  1189,  1193,  1201,  1206,  1214,  1219,  1227,
    1232,  1240,  1246,  1257,  1262
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

#define YYPACT_NINF (-344)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-141)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

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
       0,    77,     0,     0,     0,   192,     0,   158,   157,   159,
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
static const yytype_int8 yyr2[] =
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
#line 225 "JavaGrammar.yy"
                                    {
	root = (yyvsp[-2].node);
	Node* _im = new Node(ptImports);
	_im->attach_child(*(yyvsp[-1].node));
	root->attach_child(*_im);
	_im->attach_child(*(yyvsp[0].node));
}
#line 1981 "JavaGrammar.tab.cc"
    break;

  case 3:
#line 235 "JavaGrammar.yy"
       {
	(yyval.node) = new Node(ptPackageContainer);
	(yyval.node)->attach_child(*(new Node(ptEmpty)));
}
#line 1990 "JavaGrammar.tab.cc"
    break;

  case 4:
#line 239 "JavaGrammar.yy"
                                  {
	(yyval.node) = new Node(ptPackageContainer);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 1999 "JavaGrammar.tab.cc"
    break;

  case 5:
#line 246 "JavaGrammar.yy"
       {
	(yyval.node) = new Node(ptEmpty);
}
#line 2007 "JavaGrammar.tab.cc"
    break;

  case 6:
#line 249 "JavaGrammar.yy"
                                  {
	(yyval.node) = new Node(ptImportContainer);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2017 "JavaGrammar.tab.cc"
    break;

  case 7:
#line 257 "JavaGrammar.yy"
                                {
	(yyval.node) = new Node(ptImport);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 2026 "JavaGrammar.tab.cc"
    break;

  case 8:
#line 261 "JavaGrammar.yy"
                                                 {
	(yyval.node) = new Node(ptImport);
	(yyval.node)->attach_child(*(yyvsp[-3].node));
	(yyval.node)->attach_child(*(new Node(TOK_MUL)));
}
#line 2036 "JavaGrammar.tab.cc"
    break;

  case 9:
#line 269 "JavaGrammar.yy"
               {
	(yyval.node) = new Node(ptPackage, 0, 0, (yyvsp[0].stVal));
}
#line 2044 "JavaGrammar.tab.cc"
    break;

  case 10:
#line 272 "JavaGrammar.yy"
                                    {
	(yyval.node) = new Node(ptPackage, 0, 0, (yyvsp[0].stVal));
	(yyval.node)->attach_child(*(yyvsp[-2].node));
}
#line 2053 "JavaGrammar.tab.cc"
    break;

  case 11:
#line 279 "JavaGrammar.yy"
             {
	(yyval.node) = new Node(ptTypeDec);
	//$$->attach_child(*(new Node(ptEmpty, 0, 0, "interface placeholder")));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2063 "JavaGrammar.tab.cc"
    break;

  case 12:
#line 284 "JavaGrammar.yy"
          {
	(yyval.node) = new Node(ptTypeDec);
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2072 "JavaGrammar.tab.cc"
    break;

  case 13:
#line 288 "JavaGrammar.yy"
                  {
	(yyval.node) = new Node(ptTypeDec);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2082 "JavaGrammar.tab.cc"
    break;

  case 14:
#line 293 "JavaGrammar.yy"
                      {
	(yyval.node) = new Node(ptTypeDec);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2092 "JavaGrammar.tab.cc"
    break;

  case 15:
#line 301 "JavaGrammar.yy"
                                                                     {
	(yyval.node) = new Node(ptInterface, 0, 0, (yyvsp[-3].stVal));
	(yyval.node)->attach_child(*(yyvsp[-5].node));
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 2102 "JavaGrammar.tab.cc"
    break;

  case 16:
#line 306 "JavaGrammar.yy"
                                                                                                 {
	(yyval.node) = new Node(ptInterface, 0, 0, (yyvsp[-5].stVal));
	(yyval.node)->attach_child(*(yyvsp[-7].node));
	(yyval.node)->attach_child(*(yyvsp[-1].node));
	(yyvsp[-7].node)->attach_child(*(new Node(ptExtends, 0, 0, (yyvsp[-3].stVal))));
}
#line 2113 "JavaGrammar.tab.cc"
    break;

  case 17:
#line 315 "JavaGrammar.yy"
                                                             {
	(yyval.node) = new Node(ptClass, 0, 0, (yyvsp[-3].stVal));
	(yyval.node)->attach_child(*(yyvsp[-5].node));
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 2123 "JavaGrammar.tab.cc"
    break;

  case 18:
#line 320 "JavaGrammar.yy"
                                                                                  {
	(yyval.node) = new Node(ptClass, 0, 0, (yyvsp[-4].stVal));
	(yyval.node)->attach_child(*(yyvsp[-6].node));
	(yyval.node)->attach_child(*(yyvsp[-1].node));
	(yyvsp[-6].node)->attach_child(*(yyvsp[-3].node));
}
#line 2134 "JavaGrammar.tab.cc"
    break;

  case 19:
#line 329 "JavaGrammar.yy"
                           {
	(yyval.node) = new Node(ptExtends, 0, 0, (yyvsp[0].stVal));
}
#line 2142 "JavaGrammar.tab.cc"
    break;

  case 20:
#line 332 "JavaGrammar.yy"
                                {
	(yyval.node) = new Node(ptImplements);
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2151 "JavaGrammar.tab.cc"
    break;

  case 21:
#line 336 "JavaGrammar.yy"
                                                           {
	(yyval.node) = new Node(ptExtends, 0, 0, (yyvsp[-2].stVal));
	Node* _imp = new Node(ptImplements);
	_imp->attach_child(*(yyvsp[0].node));
	(yyval.node)->attach_child(*_imp);
}
#line 2162 "JavaGrammar.tab.cc"
    break;

  case 22:
#line 345 "JavaGrammar.yy"
               {
	(yyval.node) = new Node(ptBasicIdentifier, 0, 0, (yyvsp[0].stVal));
}
#line 2170 "JavaGrammar.tab.cc"
    break;

  case 23:
#line 348 "JavaGrammar.yy"
                                          {
	(yyval.node) = new Node(ptBasicIdentifier, 0, 0, (yyvsp[-2].stVal));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2179 "JavaGrammar.tab.cc"
    break;

  case 24:
#line 356 "JavaGrammar.yy"
       {
	(yyval.node) = new Node(ptEmpty);
	(yyval.node)->attach_child(*(new Node(ptEmpty))); //ensure that whatever gets attached to $$ is a right node
}
#line 2188 "JavaGrammar.tab.cc"
    break;

  case 25:
#line 360 "JavaGrammar.yy"
               {
	(yyval.node) = new Node(ptMod, 0, 0, "final");
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2197 "JavaGrammar.tab.cc"
    break;

  case 26:
#line 364 "JavaGrammar.yy"
                  {
	(yyval.node) = new Node(ptMod, 0, 0, "abstract");
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2206 "JavaGrammar.tab.cc"
    break;

  case 27:
#line 368 "JavaGrammar.yy"
                  {
	(yyval.node) = new Node(ptMod, 0, 0, "strictfp");
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2215 "JavaGrammar.tab.cc"
    break;

  case 28:
#line 372 "JavaGrammar.yy"
                {
	(yyval.node) = new Node(ptMod, 0, 0, "static");
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2224 "JavaGrammar.tab.cc"
    break;

  case 29:
#line 376 "JavaGrammar.yy"
                {
	(yyval.node) = new Node(ptMod, 0, 0, "native");
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2233 "JavaGrammar.tab.cc"
    break;

  case 30:
#line 380 "JavaGrammar.yy"
                      {
	(yyval.node) = new Node(ptMod, 0, 0, "synchronized");
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2242 "JavaGrammar.tab.cc"
    break;

  case 31:
#line 384 "JavaGrammar.yy"
                   {
	(yyval.node) = new Node(ptMod, 0, 0, "transient");
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2251 "JavaGrammar.tab.cc"
    break;

  case 32:
#line 388 "JavaGrammar.yy"
                  {
	(yyval.node) = new Node(ptMod, 0, 0, "volatile");
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2260 "JavaGrammar.tab.cc"
    break;

  case 33:
#line 392 "JavaGrammar.yy"
                {
	(yyval.node) = new Node(ptMod, 0, 0, "public");
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2269 "JavaGrammar.tab.cc"
    break;

  case 34:
#line 396 "JavaGrammar.yy"
                 {
	(yyval.node) = new Node(ptMod, 0, 0, "private");
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2278 "JavaGrammar.tab.cc"
    break;

  case 35:
#line 400 "JavaGrammar.yy"
                   {
	(yyval.node) = new Node(ptMod, 0, 0, "protected");
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2287 "JavaGrammar.tab.cc"
    break;

  case 36:
#line 404 "JavaGrammar.yy"
                 {
	(yyval.node) = new Node(ptMod, 0, 0, "default");
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2296 "JavaGrammar.tab.cc"
    break;

  case 37:
#line 411 "JavaGrammar.yy"
       {
	(yyval.node) = new Node(ptClassBody);
	(yyval.node)->attach_child(*(new Node(ptEmpty)));
}
#line 2305 "JavaGrammar.tab.cc"
    break;

  case 38:
#line 415 "JavaGrammar.yy"
                                             {
	(yyval.node) = new Node(ptClassBody);
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyvsp[-2].node)->attach_child(*(yyvsp[-3].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2316 "JavaGrammar.tab.cc"
    break;

  case 39:
#line 421 "JavaGrammar.yy"
                                                {
	(yyval.node) = new Node(ptClassBody);
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyvsp[-2].node)->attach_child(*(yyvsp[-3].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2327 "JavaGrammar.tab.cc"
    break;

  case 40:
#line 427 "JavaGrammar.yy"
                  {
	(yyval.node) = new Node(ptClassBody);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
	//$$->attach_child(*(new Node(ptEmpty, 0, 0, "method placeholder")));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2338 "JavaGrammar.tab.cc"
    break;

  case 41:
#line 433 "JavaGrammar.yy"
                    {
	(yyval.node) = new Node(ptClassBody);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2348 "JavaGrammar.tab.cc"
    break;

  case 42:
#line 438 "JavaGrammar.yy"
                        {
	(yyval.node) = new Node(ptClassBody);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2358 "JavaGrammar.tab.cc"
    break;

  case 43:
#line 446 "JavaGrammar.yy"
       {
	(yyval.node) = new Node(ptEmpty);
}
#line 2366 "JavaGrammar.tab.cc"
    break;

  case 44:
#line 449 "JavaGrammar.yy"
                                                    {
	(yyval.node) = new Node(ptClassBody);
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[-3].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2377 "JavaGrammar.tab.cc"
    break;

  case 45:
#line 455 "JavaGrammar.yy"
                      {
	(yyval.node) = new Node(ptClassBody);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2387 "JavaGrammar.tab.cc"
    break;

  case 46:
#line 460 "JavaGrammar.yy"
                        {
	(yyval.node) = new Node(ptClassBody);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2397 "JavaGrammar.tab.cc"
    break;

  case 47:
#line 465 "JavaGrammar.yy"
                            {
	(yyval.node) = new Node(ptClassBody);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2407 "JavaGrammar.tab.cc"
    break;

  case 48:
#line 473 "JavaGrammar.yy"
                                                                                     {
	(yyval.node) = new Node(ptAbstractMethodLabel, 0, 0, (yyvsp[-5].stVal));
	(yyval.node)->attach_child(*(yyvsp[-6].node));
	(yyvsp[-6].node)->attach_child(*(yyvsp[-1].node));
	(yyval.node)->attach_child(*(yyvsp[-3].node));
}
#line 2418 "JavaGrammar.tab.cc"
    break;

  case 49:
#line 479 "JavaGrammar.yy"
                                                                                      {
	(yyval.node) = new Node(ptAbstractMethodLabel, 0, 0, (yyvsp[-5].stVal));
	Node* _ret = new Node(TOK_VOID);
	_ret->attach_child(*(yyvsp[-1].node));
	(yyval.node)->attach_child(*_ret);
	(yyval.node)->attach_child(*(yyvsp[-3].node));
}
#line 2430 "JavaGrammar.tab.cc"
    break;

  case 50:
#line 489 "JavaGrammar.yy"
                                                                                                            {
	//have to include the throwsclause later
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
#line 2450 "JavaGrammar.tab.cc"
    break;

  case 51:
#line 504 "JavaGrammar.yy"
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
#line 2469 "JavaGrammar.tab.cc"
    break;

  case 52:
#line 518 "JavaGrammar.yy"
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
#line 2485 "JavaGrammar.tab.cc"
    break;

  case 53:
#line 529 "JavaGrammar.yy"
                    {
	(yyval.node) = new Node(ptAbstractMethod);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2495 "JavaGrammar.tab.cc"
    break;

  case 54:
#line 537 "JavaGrammar.yy"
       {
	(yyval.node) = new Node(ptEmpty);
}
#line 2503 "JavaGrammar.tab.cc"
    break;

  case 55:
#line 540 "JavaGrammar.yy"
                            {
	(yyval.node) = new Node(ptThrows);
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2512 "JavaGrammar.tab.cc"
    break;

  case 56:
#line 547 "JavaGrammar.yy"
                {
	(yyval.node) = (yyvsp[0].node);
}
#line 2520 "JavaGrammar.tab.cc"
    break;

  case 57:
#line 550 "JavaGrammar.yy"
                                           {
	(yyval.node) = (yyvsp[-2].node);
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2529 "JavaGrammar.tab.cc"
    break;

  case 58:
#line 557 "JavaGrammar.yy"
       {
	(yyval.node) = new Node(ptEmpty);
}
#line 2537 "JavaGrammar.tab.cc"
    break;

  case 59:
#line 560 "JavaGrammar.yy"
            {
	(yyval.node) = (yyvsp[0].node);
}
#line 2545 "JavaGrammar.tab.cc"
    break;

  case 60:
#line 566 "JavaGrammar.yy"
       {
	(yyval.node) = new Node(ptEmpty);
}
#line 2553 "JavaGrammar.tab.cc"
    break;

  case 61:
#line 569 "JavaGrammar.yy"
            {
	(yyval.node) = new Node(ptArgument);
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2562 "JavaGrammar.tab.cc"
    break;

  case 62:
#line 573 "JavaGrammar.yy"
                     {
	(yyval.node) = new Node(ptArgument);
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2571 "JavaGrammar.tab.cc"
    break;

  case 63:
#line 577 "JavaGrammar.yy"
                               {
	(yyval.node) = new Node(ptArgument);
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2581 "JavaGrammar.tab.cc"
    break;

  case 64:
#line 582 "JavaGrammar.yy"
                                        {
	(yyval.node) = new Node(ptArgument);
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2591 "JavaGrammar.tab.cc"
    break;

  case 65:
#line 590 "JavaGrammar.yy"
        {
	(yyval.node) = new Node(ptDataType, 0, 0, "int");
}
#line 2599 "JavaGrammar.tab.cc"
    break;

  case 66:
#line 593 "JavaGrammar.yy"
             {
	(yyval.node) = new Node(ptDataType, 0, 0, "boolean");
}
#line 2607 "JavaGrammar.tab.cc"
    break;

  case 67:
#line 596 "JavaGrammar.yy"
           {
	(yyval.node) = new Node(ptDataType, 0, 0, "float");
}
#line 2615 "JavaGrammar.tab.cc"
    break;

  case 68:
#line 599 "JavaGrammar.yy"
                {
	(yyval.node) = new Node(ptDataType, 0, 0, (yyvsp[0].stVal));
}
#line 2623 "JavaGrammar.tab.cc"
    break;

  case 69:
#line 602 "JavaGrammar.yy"
            {
	(yyval.node) = new Node(ptDataType, 0, 0, "double");
}
#line 2631 "JavaGrammar.tab.cc"
    break;

  case 70:
#line 608 "JavaGrammar.yy"
       {
	(yyval.node) = new Node(ptEmpty);
}
#line 2639 "JavaGrammar.tab.cc"
    break;

  case 71:
#line 611 "JavaGrammar.yy"
                 {
	(yyval.node) = (yyvsp[-1].node);
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2648 "JavaGrammar.tab.cc"
    break;

  case 72:
#line 618 "JavaGrammar.yy"
                             {
	(yyval.node) = new Node(ptStatement);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 2657 "JavaGrammar.tab.cc"
    break;

  case 73:
#line 622 "JavaGrammar.yy"
                      {
	(yyval.node) = new Node(ptStatement);
	//$$->attach_child(*(new Node(ptEmpty, 0, 0, "placeholder controlflow")));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2667 "JavaGrammar.tab.cc"
    break;

  case 74:
#line 627 "JavaGrammar.yy"
                               {
	(yyval.node) = new Node(ptStatement);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 2676 "JavaGrammar.tab.cc"
    break;

  case 75:
#line 631 "JavaGrammar.yy"
                                  {
	(yyval.node) = new Node(ptStatement);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 2685 "JavaGrammar.tab.cc"
    break;

  case 76:
#line 635 "JavaGrammar.yy"
               {
	(yyval.node) = new Node(ptStatement);
	(yyval.node)->attach_child(*(new Node(ptEmpty, 0, 0, "placeholder trycatch")));
}
#line 2694 "JavaGrammar.tab.cc"
    break;

  case 77:
#line 639 "JavaGrammar.yy"
                     {
	(yyval.node) = new Node(ptStatement);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 2703 "JavaGrammar.tab.cc"
    break;

  case 78:
#line 646 "JavaGrammar.yy"
                   {
	(yyval.node) = (yyvsp[0].node);
}
#line 2711 "JavaGrammar.tab.cc"
    break;

  case 79:
#line 649 "JavaGrammar.yy"
            {
	(yyval.node) = (yyvsp[0].node);
}
#line 2719 "JavaGrammar.tab.cc"
    break;

  case 80:
#line 652 "JavaGrammar.yy"
               {
	(yyval.node) = (yyvsp[0].node);
}
#line 2727 "JavaGrammar.tab.cc"
    break;

  case 81:
#line 655 "JavaGrammar.yy"
              {
	(yyval.node) = (yyvsp[0].node);
}
#line 2735 "JavaGrammar.tab.cc"
    break;

  case 82:
#line 658 "JavaGrammar.yy"
                     {
	(yyval.node) = (yyvsp[0].node);
}
#line 2743 "JavaGrammar.tab.cc"
    break;

  case 83:
#line 664 "JavaGrammar.yy"
                                 {
	(yyval.node) = new Node(ptEnclosedExpression);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 2752 "JavaGrammar.tab.cc"
    break;

  case 84:
#line 668 "JavaGrammar.yy"
            {
	(yyval.node) = new Node(TOK_INTVAL, (yyvsp[0].iVal), 0, "");
}
#line 2760 "JavaGrammar.tab.cc"
    break;

  case 85:
#line 671 "JavaGrammar.yy"
              {
	(yyval.node) = new Node(TOK_FLOATVAL, 0, (yyvsp[0].fVal), "");
}
#line 2768 "JavaGrammar.tab.cc"
    break;

  case 86:
#line 674 "JavaGrammar.yy"
             {
	(yyval.node) = new Node(TOK_BOOLVAL, (yyvsp[0].bVal), 0, "");
}
#line 2776 "JavaGrammar.tab.cc"
    break;

  case 87:
#line 677 "JavaGrammar.yy"
               {
	(yyval.node) = new Node(TOK_STRINGVAL, 0, 0, (yyvsp[0].stVal));
}
#line 2784 "JavaGrammar.tab.cc"
    break;

  case 88:
#line 680 "JavaGrammar.yy"
                {
	(yyval.node) = new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[0].stVal));
}
#line 2792 "JavaGrammar.tab.cc"
    break;

  case 89:
#line 683 "JavaGrammar.yy"
                {
	//$$ = new Node(ptEmpty, 0, 0, "fieldreference placeholder");
	(yyval.node) = (yyvsp[0].node);
}
#line 2801 "JavaGrammar.tab.cc"
    break;

  case 90:
#line 687 "JavaGrammar.yy"
                                                   {
	//$$ = new Node(ptEmpty, 0, 0, "arrayaccess placeholder");
	(yyval.node) = new Node(ptArrayAccess, 0, 0, (yyvsp[-3].stVal));
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 2811 "JavaGrammar.tab.cc"
    break;

  case 91:
#line 692 "JavaGrammar.yy"
                    {
	(yyval.node) = new Node(ptNegation);
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2820 "JavaGrammar.tab.cc"
    break;

  case 92:
#line 696 "JavaGrammar.yy"
                       {
	(yyval.node) = new Node(ptBitNegation);
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2829 "JavaGrammar.tab.cc"
    break;

  case 93:
#line 700 "JavaGrammar.yy"
                               {
	(yyval.node) = new Node(ptOperation, 0, 0, "+");
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2839 "JavaGrammar.tab.cc"
    break;

  case 94:
#line 705 "JavaGrammar.yy"
                               {
	(yyval.node) = new Node(ptOperation, 0, 0, "-");
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2849 "JavaGrammar.tab.cc"
    break;

  case 95:
#line 710 "JavaGrammar.yy"
                               {
	(yyval.node) = new Node(ptOperation, 0, 0, "%");
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2859 "JavaGrammar.tab.cc"
    break;

  case 96:
#line 715 "JavaGrammar.yy"
                               {
	(yyval.node) = new Node(ptOperation, 0, 0, "/");
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2869 "JavaGrammar.tab.cc"
    break;

  case 97:
#line 720 "JavaGrammar.yy"
                               {
	(yyval.node) = new Node(ptOperation, 0, 0, "*");
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2879 "JavaGrammar.tab.cc"
    break;

  case 98:
#line 725 "JavaGrammar.yy"
                                 {
	(yyval.node) = new Node(ptOperation, 0, 0, "==");
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2889 "JavaGrammar.tab.cc"
    break;

  case 99:
#line 730 "JavaGrammar.yy"
                                  {
	(yyval.node) = new Node(ptOperation, 0, 0, "!=");
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2899 "JavaGrammar.tab.cc"
    break;

  case 100:
#line 735 "JavaGrammar.yy"
                                   {
	(yyval.node) = new Node(ptOperation, 0, 0, ">");
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2909 "JavaGrammar.tab.cc"
    break;

  case 101:
#line 740 "JavaGrammar.yy"
                                {
	(yyval.node) = new Node(ptOperation, 0, 0, "<");
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2919 "JavaGrammar.tab.cc"
    break;

  case 102:
#line 745 "JavaGrammar.yy"
                                  {
	(yyval.node) = new Node(ptOperation, 0, 0, ">=");
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2929 "JavaGrammar.tab.cc"
    break;

  case 103:
#line 750 "JavaGrammar.yy"
                                  {
	(yyval.node) = new Node(ptOperation, 0, 0, "<=");
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2939 "JavaGrammar.tab.cc"
    break;

  case 104:
#line 755 "JavaGrammar.yy"
                               {
	(yyval.node) = new Node(ptOperation, 0, 0, "&&");
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2949 "JavaGrammar.tab.cc"
    break;

  case 105:
#line 760 "JavaGrammar.yy"
                              {
	(yyval.node) = new Node(ptOperation, 0, 0, "||");
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2959 "JavaGrammar.tab.cc"
    break;

  case 106:
#line 765 "JavaGrammar.yy"
                                 {
	(yyval.node) = new Node(ptOperation, 0, 0, "|");
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2969 "JavaGrammar.tab.cc"
    break;

  case 107:
#line 770 "JavaGrammar.yy"
                                  {
	(yyval.node) = new Node(ptOperation, 0, 0, "&");
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2979 "JavaGrammar.tab.cc"
    break;

  case 108:
#line 775 "JavaGrammar.yy"
                                  {
	(yyval.node) = new Node(ptOperation, 0, 0, "^");
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2989 "JavaGrammar.tab.cc"
    break;

  case 109:
#line 780 "JavaGrammar.yy"
                                  {
	(yyval.node) = new Node(ptOperation, 0, 0, "<<");
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 2999 "JavaGrammar.tab.cc"
    break;

  case 110:
#line 785 "JavaGrammar.yy"
                                  {
	(yyval.node) = new Node(ptOperation, 0, 0, ">>");
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 3009 "JavaGrammar.tab.cc"
    break;

  case 111:
#line 790 "JavaGrammar.yy"
                                   {
	(yyval.node) = new Node(ptOperation, 0, 0, ">>>");
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 3019 "JavaGrammar.tab.cc"
    break;

  case 112:
#line 798 "JavaGrammar.yy"
                                        {
	(yyval.node) = new Node(ptAssignment, 0, 0, "%=");
	(yyval.node)->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[-2].stVal))));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 3029 "JavaGrammar.tab.cc"
    break;

  case 113:
#line 803 "JavaGrammar.yy"
                                         {
	(yyval.node) = new Node(ptAssignment, 0, 0, "/=");
	(yyval.node)->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[-2].stVal))));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 3039 "JavaGrammar.tab.cc"
    break;

  case 114:
#line 808 "JavaGrammar.yy"
                                         {
	(yyval.node) = new Node(ptAssignment, 0, 0, "*=");
	(yyval.node)->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[-2].stVal))));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 3049 "JavaGrammar.tab.cc"
    break;

  case 115:
#line 813 "JavaGrammar.yy"
                                         {
	(yyval.node) = new Node(ptAssignment, 0, 0, "+=");
	(yyval.node)->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[-2].stVal))));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 3059 "JavaGrammar.tab.cc"
    break;

  case 116:
#line 818 "JavaGrammar.yy"
                                         {
	(yyval.node) = new Node(ptAssignment, 0, 0, "-=");
	(yyval.node)->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[-2].stVal))));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 3069 "JavaGrammar.tab.cc"
    break;

  case 117:
#line 823 "JavaGrammar.yy"
                                       {
	(yyval.node) = new Node(ptAssignment, 0, 0, "=");
	(yyval.node)->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[-2].stVal))));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 3079 "JavaGrammar.tab.cc"
    break;

  case 118:
#line 828 "JavaGrammar.yy"
                                               {
	(yyval.node) = new Node(ptAssignment, 0, 0, "=");
	(yyval.node)->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[-2].stVal))));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 3089 "JavaGrammar.tab.cc"
    break;

  case 119:
#line 836 "JavaGrammar.yy"
          {
	(yyval.node) = (yyvsp[0].node);
}
#line 3097 "JavaGrammar.tab.cc"
    break;

  case 120:
#line 839 "JavaGrammar.yy"
             {
	(yyval.node) = (yyvsp[0].node);
}
#line 3105 "JavaGrammar.tab.cc"
    break;

  case 121:
#line 842 "JavaGrammar.yy"
         {
	(yyval.node) = (yyvsp[0].node);
}
#line 3113 "JavaGrammar.tab.cc"
    break;

  case 122:
#line 845 "JavaGrammar.yy"
             {
	(yyval.node) = (yyvsp[0].node);
}
#line 3121 "JavaGrammar.tab.cc"
    break;

  case 123:
#line 848 "JavaGrammar.yy"
             {
	(yyval.node) = (yyvsp[0].node);
}
#line 3129 "JavaGrammar.tab.cc"
    break;

  case 124:
#line 851 "JavaGrammar.yy"
                 {
	(yyval.node) = (yyvsp[0].node);
}
#line 3137 "JavaGrammar.tab.cc"
    break;

  case 125:
#line 854 "JavaGrammar.yy"
                 {
	(yyval.node) = (yyvsp[0].node);
}
#line 3145 "JavaGrammar.tab.cc"
    break;

  case 126:
#line 857 "JavaGrammar.yy"
                    {
	(yyval.node) = new Node(TOK_BREAK);
}
#line 3153 "JavaGrammar.tab.cc"
    break;

  case 127:
#line 860 "JavaGrammar.yy"
                       {
	(yyval.node) = new Node(TOK_CONTINUE);
}
#line 3161 "JavaGrammar.tab.cc"
    break;

  case 128:
#line 863 "JavaGrammar.yy"
                                    {
	(yyval.node) = new Node(ptReturn);
	(yyval.node)->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[-1].stVal))));
}
#line 3170 "JavaGrammar.tab.cc"
    break;

  case 129:
#line 870 "JavaGrammar.yy"
               {
	(yyval.node) = new Node(ptIdentifierContainer);
	(yyval.node)->attach_child(*(new Node(ptIdentifier, 0, 0, (yyvsp[0].stVal))));
}
#line 3179 "JavaGrammar.tab.cc"
    break;

  case 130:
#line 874 "JavaGrammar.yy"
                                          {
	(yyval.node) = new Node(ptIdentifierContainer);
	(yyval.node)->attach_child(*(new Node(ptArrayIdentifier, 0, 0, (yyvsp[-2].stVal))));
}
#line 3188 "JavaGrammar.tab.cc"
    break;

  case 131:
#line 878 "JavaGrammar.yy"
                                          {
	(yyval.node) = new Node(ptIdentifierContainer);
	(yyval.node)->attach_child(*(new Node(ptArrayIdentifier, 0, 0, (yyvsp[0].stVal))));
}
#line 3197 "JavaGrammar.tab.cc"
    break;

  case 132:
#line 882 "JavaGrammar.yy"
                                                               {
	(yyval.node) = new Node(ptIdentifierContainer);
	(yyval.node)->attach_child(*(new Node(ptArrayIdentifier, 0, 0, (yyvsp[-4].stVal))));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 3207 "JavaGrammar.tab.cc"
    break;

  case 133:
#line 887 "JavaGrammar.yy"
                                                               {
	(yyval.node) = new Node(ptIdentifierContainer);
	(yyval.node)->attach_child(*(new Node(ptArrayIdentifier, 0, 0, (yyvsp[-2].stVal))));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 3217 "JavaGrammar.tab.cc"
    break;

  case 134:
#line 892 "JavaGrammar.yy"
                                     {
	(yyval.node) = new Node(ptIdentifierContainer);
	(yyval.node)->attach_child(*(new Node(ptIdentifier, 0, 0, (yyvsp[-2].stVal))));
}
#line 3226 "JavaGrammar.tab.cc"
    break;

  case 135:
#line 899 "JavaGrammar.yy"
                    {
	(yyval.node) = new Node(ptDeclaration);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
	(yyvsp[-1].node)->attach_child(*(yyvsp[0].node));
}
#line 3236 "JavaGrammar.tab.cc"
    break;

  case 136:
#line 904 "JavaGrammar.yy"
                                                         {
	(yyval.node) = new Node(ptDeclaration);
	Node* _it = new Node(ptInstanceGeneric, 0, 0, (yyvsp[-4].stVal));
	_it->attach_child(*(yyvsp[0].node));
	_it->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*_it);
}
#line 3248 "JavaGrammar.tab.cc"
    break;

  case 137:
#line 914 "JavaGrammar.yy"
                        {
	(yyval.node) = new Node(ptDeclaration, 0, 0, (yyvsp[0].stVal));
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 3257 "JavaGrammar.tab.cc"
    break;

  case 138:
#line 918 "JavaGrammar.yy"
                                                   {
	(yyval.node) = new Node(ptArrayDeclaration, 0, 0, (yyvsp[0].stVal));
	(yyval.node)->attach_child(*(yyvsp[-3].node));
}
#line 3266 "JavaGrammar.tab.cc"
    break;

  case 139:
#line 922 "JavaGrammar.yy"
                                                   {
	(yyval.node) = new Node(ptArrayDeclaration, 0, 0, (yyvsp[-2].stVal));
	(yyval.node)->attach_child(*(yyvsp[-3].node));
}
#line 3275 "JavaGrammar.tab.cc"
    break;

  case 140:
#line 926 "JavaGrammar.yy"
                                                             {
	(yyval.node) = new Node(ptDeclaration, 0, 0, (yyvsp[0].stVal));
	Node* _it = new Node(ptInstanceGeneric, 0, 0, (yyvsp[-4].stVal));
	_it->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*_it);
}
#line 3286 "JavaGrammar.tab.cc"
    break;

  case 141:
#line 932 "JavaGrammar.yy"
                {
	(yyval.node) = (yyvsp[0].node);
}
#line 3294 "JavaGrammar.tab.cc"
    break;

  case 142:
#line 938 "JavaGrammar.yy"
           {
	(yyval.node) = (yyvsp[0].node);
}
#line 3302 "JavaGrammar.tab.cc"
    break;

  case 143:
#line 941 "JavaGrammar.yy"
                                                       {
	(yyval.node) = new Node(ptArraySizeInitializer);
	(yyval.node)->attach_child(*(yyvsp[-3].node));
	(yyval.node)->attach_child(*(new Node(TOK_INTVAL, (yyvsp[-1].iVal), 0, "")));
}
#line 3312 "JavaGrammar.tab.cc"
    break;

  case 144:
#line 946 "JavaGrammar.yy"
                                {
	(yyval.node) = new Node(ptArrayExplicitInitializer);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 3321 "JavaGrammar.tab.cc"
    break;

  case 145:
#line 950 "JavaGrammar.yy"
                                                                           {
	(yyval.node) = new Node(ptArrayExplicitInitializer);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 3330 "JavaGrammar.tab.cc"
    break;

  case 146:
#line 954 "JavaGrammar.yy"
                                                       {
	(yyval.node) = new Node(ptInstanceInitializer);
	(yyval.node)->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[-3].stVal))));
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 3340 "JavaGrammar.tab.cc"
    break;

  case 147:
#line 959 "JavaGrammar.yy"
            {
	(yyval.node) = (yyvsp[0].node);
}
#line 3348 "JavaGrammar.tab.cc"
    break;

  case 148:
#line 962 "JavaGrammar.yy"
                    {
	(yyval.node) = (yyvsp[0].node);
}
#line 3356 "JavaGrammar.tab.cc"
    break;

  case 149:
#line 965 "JavaGrammar.yy"
                                                      {
	(yyval.node) = new Node(ptDataStructureInitializer);
	(yyval.node)->attach_child(*(yyvsp[-3].node));
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 3366 "JavaGrammar.tab.cc"
    break;

  case 150:
#line 973 "JavaGrammar.yy"
                                  {
	(yyval.node) = new Node(ptInitializationContainer);
	Node* _is = new Node(ptInitializationStatement);
	_is->attach_child(*(yyvsp[-2].node));
	_is->attach_child(*(yyvsp[0].node));
	//_is->attach_child(*(new Node(ptEmpty, 0, 0, "initializer placeholder")));
	(yyval.node)->attach_child(*_is);
}
#line 3379 "JavaGrammar.tab.cc"
    break;

  case 151:
#line 984 "JavaGrammar.yy"
                                             {
	(yyval.node) = new Node(ptDataStructure);
	(yyval.node)->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[-3].stVal))));
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 3389 "JavaGrammar.tab.cc"
    break;

  case 152:
#line 989 "JavaGrammar.yy"
                                     {
	(yyval.node) = new Node(ptDataStructure);
	(yyval.node)->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[-2].stVal))));
}
#line 3398 "JavaGrammar.tab.cc"
    break;

  case 153:
#line 996 "JavaGrammar.yy"
                                                                       {
	(yyval.node) = new Node(ptWhile);
	(yyval.node)->attach_child(*(yyvsp[-4].node));
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 3408 "JavaGrammar.tab.cc"
    break;

  case 154:
#line 1004 "JavaGrammar.yy"
                                                                                       {
	(yyval.node) = new Node(ptDoWhile);
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[-6].node));
}
#line 3418 "JavaGrammar.tab.cc"
    break;

  case 155:
#line 1012 "JavaGrammar.yy"
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
#line 3434 "JavaGrammar.tab.cc"
    break;

  case 156:
#line 1026 "JavaGrammar.yy"
                                                                                                           {
	(yyval.node) = new Node(ptForEach);
	Node* _dec = new Node(ptDeclaration);
	_dec->attach_child(*(yyvsp[-7].node));
	Node* _id_con = new Node(ptIdentifierContainer);
	_id_con->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[-6].stVal))));
	_dec->attach_child(*_id_con);
	Node* _f_inf = new Node(ptForEachDec);
	_f_inf->attach_child(*_dec);
	_f_inf->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[-4].stVal))));
	(yyval.node)->attach_child(*_f_inf);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 3452 "JavaGrammar.tab.cc"
    break;

  case 157:
#line 1042 "JavaGrammar.yy"
                     {
	(yyval.node) = (yyvsp[0].node);
}
#line 3460 "JavaGrammar.tab.cc"
    break;

  case 158:
#line 1045 "JavaGrammar.yy"
                     {
	(yyval.node) = (yyvsp[0].node);
}
#line 3468 "JavaGrammar.tab.cc"
    break;

  case 159:
#line 1048 "JavaGrammar.yy"
                         {
	(yyval.node) = (yyvsp[0].node);
}
#line 3476 "JavaGrammar.tab.cc"
    break;

  case 160:
#line 1054 "JavaGrammar.yy"
                    {
	(yyval.node) = new Node(ptStatement);
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 3485 "JavaGrammar.tab.cc"
    break;

  case 161:
#line 1058 "JavaGrammar.yy"
                                         {
	(yyval.node) = new Node(ptStatement);
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 3495 "JavaGrammar.tab.cc"
    break;

  case 162:
#line 1066 "JavaGrammar.yy"
                                                                    {
	(yyval.node) = new Node(ptIf);
	(yyval.node)->attach_child(*(yyvsp[-4].node));
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 3505 "JavaGrammar.tab.cc"
    break;

  case 163:
#line 1071 "JavaGrammar.yy"
                                                   {
	(yyval.node) = new Node(ptIf);
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 3515 "JavaGrammar.tab.cc"
    break;

  case 164:
#line 1079 "JavaGrammar.yy"
                                                 {
	(yyval.node) = new Node(ptIfElse);
	(yyval.node)->attach_child(*(yyvsp[-4].node));
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 3525 "JavaGrammar.tab.cc"
    break;

  case 165:
#line 1084 "JavaGrammar.yy"
                                {
	(yyval.node) = new Node(ptIfElse);
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 3535 "JavaGrammar.tab.cc"
    break;

  case 166:
#line 1093 "JavaGrammar.yy"
                                                                              {
	(yyval.node) = new Node(ptSwitch);
	(yyval.node)->attach_child(*(yyvsp[-4].node));
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 3545 "JavaGrammar.tab.cc"
    break;

  case 167:
#line 1101 "JavaGrammar.yy"
            {
	(yyval.node) = (yyvsp[0].node);
}
#line 3553 "JavaGrammar.tab.cc"
    break;

  case 168:
#line 1104 "JavaGrammar.yy"
                   {
	(yyval.node) = (yyvsp[0].node);
}
#line 3561 "JavaGrammar.tab.cc"
    break;

  case 169:
#line 1110 "JavaGrammar.yy"
           {
	(yyval.node) = new Node(ptSwitchBlock);
}
#line 3569 "JavaGrammar.tab.cc"
    break;

  case 170:
#line 1113 "JavaGrammar.yy"
                        {
	(yyval.node) = new Node(ptSwitchBlock);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 3579 "JavaGrammar.tab.cc"
    break;

  case 171:
#line 1121 "JavaGrammar.yy"
                                                    {
	(yyval.node) = new Node(ptSwitchRule);
	(yyval.node)->attach_child(*(yyvsp[-3].node));
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 3589 "JavaGrammar.tab.cc"
    break;

  case 172:
#line 1126 "JavaGrammar.yy"
                                                    {
	(yyval.node) = new Node(ptSwitchRule);
	(yyval.node)->attach_child(*(yyvsp[-4].node));
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 3599 "JavaGrammar.tab.cc"
    break;

  case 173:
#line 1131 "JavaGrammar.yy"
                                            {
	(yyval.node) = new Node(ptSwitchRule);
	(yyval.node)->attach_child(*(yyvsp[-3].node));
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 3609 "JavaGrammar.tab.cc"
    break;

  case 174:
#line 1139 "JavaGrammar.yy"
                 {
	(yyval.node) = new Node(ptSwitchBlock);
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 3618 "JavaGrammar.tab.cc"
    break;

  case 175:
#line 1143 "JavaGrammar.yy"
                                    {
	(yyval.node) = new Node(ptSwitchBlock);
	(yyval.node)->attach_child(*(yyvsp[-1].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 3628 "JavaGrammar.tab.cc"
    break;

  case 176:
#line 1150 "JavaGrammar.yy"
                                                  {
	(yyval.node) = new Node(ptSwitchState);
	(yyval.node)->attach_child(*(yyvsp[-4].node));
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 3638 "JavaGrammar.tab.cc"
    break;

  case 177:
#line 1155 "JavaGrammar.yy"
                             {
	(yyval.node) = new Node(ptSwitchState);
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 3648 "JavaGrammar.tab.cc"
    break;

  case 178:
#line 1163 "JavaGrammar.yy"
              {
	(yyval.node) = new Node(ptSwitchLabel);
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 3657 "JavaGrammar.tab.cc"
    break;

  case 179:
#line 1167 "JavaGrammar.yy"
             {
	(yyval.node) = new Node(ptSwitchLabel);
	(yyval.node)->attach_child(*(new Node(TOK_DEFAULT)));
}
#line 3666 "JavaGrammar.tab.cc"
    break;

  case 180:
#line 1174 "JavaGrammar.yy"
           {
	(yyval.node) = new Node(ptCase);
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 3675 "JavaGrammar.tab.cc"
    break;

  case 181:
#line 1178 "JavaGrammar.yy"
                           {
	(yyval.node) = new Node(ptCase);
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 3685 "JavaGrammar.tab.cc"
    break;

  case 184:
#line 1193 "JavaGrammar.yy"
                                                                {
	(yyval.node) = new Node(ptThrowState);
	(yyval.node)->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[-3].stVal))));
	(yyval.node)->attach_child(*(yyvsp[-1].node));
}
#line 3695 "JavaGrammar.tab.cc"
    break;

  case 185:
#line 1201 "JavaGrammar.yy"
                          {
	(yyval.node) = new Node(ptPostDecrement);
	(yyval.node)->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[-1].stVal))));
	(yyval.node)->attach_child(*(new Node(TOK_ADDADD)));
}
#line 3705 "JavaGrammar.tab.cc"
    break;

  case 186:
#line 1206 "JavaGrammar.yy"
                           {
	(yyval.node) = new Node(ptPostDecrement);
	(yyval.node)->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[-1].stVal))));
	(yyval.node)->attach_child(*(new Node(TOK_SUBSUB)));
}
#line 3715 "JavaGrammar.tab.cc"
    break;

  case 187:
#line 1214 "JavaGrammar.yy"
                          {
	(yyval.node) = new Node(ptPreDecrement);
	(yyval.node)->attach_child(*(new Node(TOK_ADDADD)));
	(yyval.node)->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[0].stVal))));
}
#line 3725 "JavaGrammar.tab.cc"
    break;

  case 188:
#line 1219 "JavaGrammar.yy"
                           {
	(yyval.node) = new Node(ptPreDecrement);
	(yyval.node)->attach_child(*(new Node(TOK_SUBSUB)));
	(yyval.node)->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[0].stVal))));
}
#line 3735 "JavaGrammar.tab.cc"
    break;

  case 189:
#line 1227 "JavaGrammar.yy"
                                  {
	(yyval.node) = new Node(ptInstanceMethodCall);
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 3745 "JavaGrammar.tab.cc"
    break;

  case 190:
#line 1232 "JavaGrammar.yy"
                                   {
	(yyval.node) = new Node(ptInstanceMethodCall);
	(yyval.node)->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[-2].stVal))));
	(yyval.node)->attach_child(*(yyvsp[0].node));
}
#line 3755 "JavaGrammar.tab.cc"
    break;

  case 191:
#line 1240 "JavaGrammar.yy"
                                              {
	(yyval.node) = new Node(ptMethodCall);
	Node* _method_name = new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[-3].stVal));
	(yyval.node)->attach_child(*_method_name);
	_method_name->attach_child(*(yyvsp[-1].node));
}
#line 3766 "JavaGrammar.tab.cc"
    break;

  case 192:
#line 1246 "JavaGrammar.yy"
                                                                  {
	(yyval.node) = (yyvsp[-5].node);
	Node* _method_call = new Node(ptMethodCall);
	Node* _method_name = new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[-3].stVal));
	_method_call->attach_child(*_method_name);
	_method_name->attach_child(*(yyvsp[-1].node));
	(yyval.node)->attach_child(*_method_call);
}
#line 3779 "JavaGrammar.tab.cc"
    break;

  case 193:
#line 1257 "JavaGrammar.yy"
                                      {
	(yyval.node) = new Node(ptFieldReference);
	(yyval.node)->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[-2].stVal))));
	(yyval.node)->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[0].stVal))));
}
#line 3789 "JavaGrammar.tab.cc"
    break;

  case 194:
#line 1262 "JavaGrammar.yy"
                                                                        {
	(yyval.node) = new Node(ptFieldReference);
	(yyval.node)->attach_child(*(yyvsp[-2].node));
	(yyval.node)->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, (yyvsp[0].stVal))));
}
#line 3799 "JavaGrammar.tab.cc"
    break;


#line 3803 "JavaGrammar.tab.cc"

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
#line 1269 "JavaGrammar.yy"


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
