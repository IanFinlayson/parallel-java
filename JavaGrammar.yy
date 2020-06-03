%{
	#include <cstdlib>
	extern int yylex();
	void yyerror (char const *error);
%}

%code requires{
	#include <string>
	#include <iostream> 
}

%union {
//wasn't sure what to call these
	int iVal;
	double dVal;
	std::string* stVal;
	bool bVal;
	float fVal;
	long lVal;
	short shVal;
	char cVal;

}

/* reorganize */
%error-verbose 
%token <stVal> TOK_IDENTIFIER 100
%token <iVal> TOK_INTVAL 101
%token <fVal> TOK_FLOATVAL 102
%token <stVal> TOK_STRINGVAL 103
%token <booVal> TOK_BOOLVAL 104
%token <cVal> TOK_CHARVAL 105
%token <dVal> TOK_DOUBLEVAL 106
%token <lVal> TOK_LONGVAL 107
%token <shVal> TOK_SHORTVAL 108
%token TOK_NULLVAL 109

// keywords
%token TOK_ABSTRACT 200
%token TOK_CONTINUE 201
%token TOK_FOR 202
%token TOK_NEW 203
%token TOK_SWITCH 204
%token TOK_ASSERT 205
%token TOK_DEFAULT 206
%token TOK_GOTO 207
%token TOK_PACKAGE 208
%token TOK_SYNCHRONIZED 209
%token TOK_BOOLEAN 210
%token TOK_DO 211
%token TOK_IF 212
%token TOK_PRIVATE 213
%token TOK_THIS 214
%token TOK_BREAK 215
%token TOK_DOUBLE 216
%token TOK_IMPLEMENTS 217
%token TOK_PROTECTED 218
%token TOK_THROW 219
%token TOK_BYTE 220
%token TOK_ELSE 221
%token TOK_IMPORT 222
%token TOK_PUBLIC 223
%token TOK_THROWS 224
%token TOK_CASE 225
%token TOK_ENUM 226
%token TOK_INSTANCEOF 227
%token TOK_RETURN 228
%token TOK_TRANSIENT 229
%token TOK_CATCH 230
%token TOK_EXTENDS 231
%token TOK_INT 232
%token TOK_SHORT 233
%token TOK_TRY 234
%token TOK_CHAR 235
%token TOK_FINAL 236
%token TOK_INTERFACE 237
%token TOK_STATIC 238
%token TOK_VOID 239
%token TOK_CLASS 240
%token TOK_FINALLY 241
%token TOK_LONG 242
%token TOK_STRICTFP 243
%token TOK_VOLATILE 244
%token TOK_CONST 245
%token TOK_FLOAT 246
%token TOK_NATIVE 247
%token TOK_SUPER 248
%token TOK_WHILE 249

//punctuation
%token TOK_LBRACKET 300
%token TOK_RBRACKET 301
%token TOK_LPAREN 302
%token TOK_RPAREN 303
%token TOK_LBRACE 304
%token TOK_RBRACE 305
%token TOK_COMMA 306
%token TOK_SEMI 307
%token TOK_DOT 308
%right TOK_ASSIGN 309
%right TOK_MODASSIGN 310
%right TOK_DIVASSIGN 311
%right TOK_MULASSIGN 312
%right TOK_ADDASSIGN 313
%right TOK_SUBASSIGN 314
%token TOK_COLON 315
%token TOK_QUESTION 316
%left TOK_OR 317
%left TOK_AND 318
%left TOK_BITOR 319
%left TOK_BITAND 320
%left TOK_BITXOR 321
%nonassoc TOK_EQUAL 322
%nonassoc TOK_NEQUAL 323
%nonassoc TOK_LESS 324
%nonassoc TOK_LEQUAL 325
%nonassoc TOK_GREATER 326
%nonassoc TOK_GEQUAL 327
%left TOK_LSHIFT 328
%left TOK_RSHIFT 329
%left TOK_RSHIFTZ 330
%left TOK_ADD 331
%left TOK_SUB 332
%left TOK_MOD 333
%left TOK_DIV 334
%left TOK_MUL 335
%token TOK_BITNEG 336
%right TOK_NEG 337
%token TOK_SUBSUB 338
%token TOK_ADDADD 339
%%

program:
classdec
|program classdec
;

classdec:
accessmod TOK_CLASS TOK_IDENTIFIER TOK_LBRACE classbody TOK_RBRACE
;

accessmod:
TOK_PUBLIC

classbody:
method
|classbody method
;

method:
staticmethod
|main
|instancemethod
;

main:
accessmod TOK_STATIC returntype TOK_IDENTIFIER TOK_LPAREN TOK_IDENTIFIER TOK_IDENTIFIER TOK_LBRACKET TOK_RBRACKET TOK_RPAREN TOK_LBRACE block TOK_RBRACE
;

staticmethod:
accessmod TOK_STATIC returntype TOK_IDENTIFIER TOK_LPAREN formalparameters TOK_RPAREN TOK_LBRACE block TOK_RBRACE
;

instancemethod:
accessmod returntype TOK_IDENTIFIER TOK_LPAREN formalparameters TOK_RPAREN TOK_LBRACE block TOK_RBRACE
;

returntype:
TOK_VOID
|datatype
|TOK_IDENTIFIER
;

formalparameters:
datatype TOK_IDENTIFIER
TOK_IDENTIFIER TOK_IDENTIFIER
| formalparameters TOK_COMMA datatype TOK_IDENTIFIER
|formalparameters TOK_COMMA TOK_IDENTIFIER TOK_IDENTIFIER
;

/*seperate into string and num argument */
argument:
%empty
|arithmeticopexpression
|TOK_STRINGVAL
|argument TOK_COMMA arithmeticopexpression
|argument TOK_COMMA TOK_STRINGVAL
;

datatype:
TOK_INT
|TOK_BOOLEAN
|TOK_FLOAT
;

block:
statement
|block statement 
;

statement:
expressionstatement
|controlflowstatement
|declarationstatement
|assignmentstatement
|initializationstatement
;

expressionstatement:
methodinvocation TOK_SEMI
|postdecrement TOK_SEMI
|predecrement TOK_SEMI

controlflowstatement:
whileloop
|forloop
|ifstatement
|ifelsestatement
;

declarationstatement:
datatype TOK_IDENTIFIER TOK_SEMI
|TOK_IDENTIFIER TOK_IDENTIFIER TOK_SEMI
|TOK_IDENTIFIER TOK_LESS datatype TOK_GREATER TOK_IDENTIFIER TOK_SEMI
|TOK_IDENTIFIER TOK_LESS TOK_IDENTIFIER TOK_GREATER TOK_IDENTIFIER TOK_SEMI
|TOK_IDENTIFIER TOK_LBRACE TOK_RBRACE TOK_IDENTIFIER TOK_SEMI
/*seperate into array declaration > String/object array declaration*/
|datatype TOK_LBRACE TOK_RBRACE TOK_IDENTIFIER TOK_SEMI
|TOK_IDENTIFIER TOK_IDENTIFIER TOK_LBRACE TOK_RBRACE TOK_SEMI
|datatype TOK_IDENTIFIER TOK_LBRACE TOK_RBRACE TOK_SEMI
;

assignmentstatement:
numassignment
/*
|booleanassignment
*/
|objectassignment
|datastructassignment
|methodassignment
/*
|arrayassignment
*/
;

numassignment:
assignmentopexpression TOK_SEMI
;

methodassignment:
TOK_IDENTIFIER TOK_ASSIGN methodinvocation TOK_SEMI
;

/*
booleanassignment:
TOK_IDENTIFIER TOK_ASSIGN 
*/
objectassignment:
TOK_IDENTIFIER TOK_ASSIGN TOK_STRINGVAL TOK_SEMI
|TOK_IDENTIFIER TOK_ASSIGN TOK_NEW TOK_IDENTIFIER TOK_LPAREN argument TOK_RPAREN TOK_SEMI
;

datastructassignment:
TOK_IDENTIFIER TOK_ASSIGN TOK_NEW datastructure TOK_LPAREN argument TOK_RPAREN TOK_SEMI
;

/*have to seperate into num and string/object arrays*/
/*
arrayassignment:
TOK_IDENTIFIER TOK_ASSIGN TOK_NEW TOK_IDENTIFIER TOK_LBRACE TOK_INTVAL TOK_RBRACE TOK_SEMI
|TOK_IDENTIFIER TOK_ASSIGN TOK_NEW datatype TOK_LBRACE TOK_INTVAL TOK_RBACE TOK_SEMI
|TOK_IDENTIFIER TOK_ASSIGN TOK_NEW datatype TOK_LBRACE TOK_RBRACE TOK_LBRACKET argument TOK_RBRACKET TOK_SEMI
|TOK_IDENTIFIER TOK_ASSIGN TOK_NEW TOK_IDENTIFIER TOK_LBRACE TOK_RBRACE TOK_LBRACKET argument TOK_RBRACKET TOK_SEMI
*/
;

datastructure:
TOK_IDENTIFIER TOK_LESS datatype TOK_GREATER
|TOK_IDENTIFIER TOK_LESS TOK_IDENTIFIER TOK_GREATER
|TOK_IDENTIFIER TOK_LESS TOK_GREATER 
;

initializationstatement:
numinitialization
|objectinitialization
|datastructinitialization
|methodinitialization
/*
|arrayinitialization
*/
;

numinitialization:
datatype numassignment 
;

objectinitialization:
TOK_IDENTIFIER objectassignment
;

/*type can also be another data structure?*/ 
datastructinitialization:
TOK_IDENTIFIER TOK_LESS datatype TOK_GREATER datastructassignment
|TOK_IDENTIFIER TOK_LESS TOK_IDENTIFIER TOK_GREATER datastructassignment
;

methodinitialization:
datatype methodassignment
|TOK_IDENTIFIER methodassignment
;

whileloop:
TOK_WHILE TOK_LPAREN relationalopexpression TOK_RPAREN TOK_LBRACE block TOK_RBRACE
|TOK_WHILE TOK_LPAREN logicalopexpression TOK_RPAREN TOK_LBRACE block TOK_RBRACE
;

forloop:
TOK_FOR TOK_LPAREN initializationstatement relationalopexpression TOK_SEMI postdecrement TOK_RPAREN TOK_LBRACE block TOK_RBRACE
;

ifstatement:
TOK_IF TOK_LPAREN relationalopexpression TOK_RPAREN TOK_LBRACE block TOK_RBRACE
|TOK_IF TOK_LPAREN logicalopexpression TOK_RPAREN TOK_LBRACE block TOK_RBRACE
|TOK_IF TOK_LPAREN relationalopexpression TOK_RPAREN statement 
|TOK_IF TOK_LPAREN logicalopexpression TOK_RPAREN statement

ifelsestatement:
ifstatement TOK_ELSE TOK_LBRACE block TOK_RBRACE
|ifstatement TOK_ELSE statement 

/*
expression:
methodinvocation
|arithmeticopexpression
|relationalopexpression
|logicalopexpression
|assignmentopexpression
|postdecrement
|predecrement
;
*/
arithmeticoperator:
TOK_ADD
|TOK_SUB
|TOK_MOD
|TOK_DIV
|TOK_MUL
;

relationaloperator:
TOK_EQUAL
|TOK_NEQUAL
|TOK_GREATER
|TOK_LESS
|TOK_GEQUAL
|TOK_LEQUAL
;

logicaloperator:
TOK_AND
|TOK_OR
/*TOK_NOT*/
;
assignmentoperator:
TOK_ASSIGN
|TOK_MODASSIGN
|TOK_DIVASSIGN
|TOK_MULASSIGN
|TOK_ADDASSIGN
|TOK_SUBASSIGN
;

arithmeticopexpression:
TOK_INTVAL
|TOK_DOUBLEVAL
|TOK_FLOATVAL
|TOK_IDENTIFIER
|arithmeticopexpression arithmeticoperator TOK_INTVAL
|arithmeticopexpression arithmeticoperator TOK_DOUBLEVAL
|arithmeticopexpression arithmeticoperator TOK_FLOATVAL
|arithmeticopexpression arithmeticoperator TOK_IDENTIFIER
;

relationalopexpression:
TOK_IDENTIFIER relationaloperator arithmeticopexpression
|TOK_LPAREN TOK_IDENTIFIER relationaloperator arithmeticopexpression TOK_RPAREN
;

logicalopexpression:
relationalopexpression logicaloperator relationalopexpression
|logicalopexpression logicaloperator relationalopexpression
|TOK_LPAREN logicalopexpression TOK_RPAREN logicaloperator relationalopexpression
/*finish handling parenthesis*/

;

assignmentopexpression:
TOK_IDENTIFIER assignmentoperator arithmeticopexpression
;

postdecrement:
TOK_IDENTIFIER TOK_ADDADD
|TOK_IDENTIFIER TOK_SUBSUB
;

predecrement:
TOK_ADDADD TOK_IDENTIFIER
|TOK_SUBSUB TOK_IDENTIFIER 
;

methodinvocation:
methodcall
|instancemethodcall
;

instancemethodcall:
fieldreference TOK_DOT methodcall
|TOK_IDENTIFIER TOK_DOT methodcall
;

methodcall:
TOK_IDENTIFIER TOK_LPAREN argument TOK_RPAREN
|methodcall TOK_DOT TOK_IDENTIFIER TOK_LPAREN argument TOK_RPAREN
;

fieldreference:
TOK_IDENTIFIER TOK_DOT TOK_IDENTIFIER /*supposed to be field access??*/
|fieldreference TOK_DOT TOK_IDENTIFIER
;

%%
int main ()
{
	return yyparse();
}

#include <stdio.h>
void yyerror (char const *s)
{
	std::cout << s << std::endl;
}
