%{
	#include <cstdlib>
	int yylex();
	void yyerror (char const *error);
	using namespace std;
%}

%code requires{
	#include <string>
	#include <iostream> 
}
%union {
//wasn't sure what to call these
	int iVal;
	double dVal;
	string* stVal;
	bool bVal;
	float fVal;
	long lVal;
	short shVal;
	char cVal;
}
// identifiers and literals
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
%token TOK_STRING 250

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
%token TOK_ASSIGN 309
%token TOK_MODASSIGN 310
%token TOK_DIVASSIGN 311
%token TOK_MULASSIGN 312
%token TOK_ADDASSIGN 313
%token TOK_SUBASSIGN 314
%token TOK_COLON 315
%token TOK_QUESTION 316
%token TOK_OR 317
%token TOK_AND 318
%token TOK_BITOR 319
%token TOK_BITAND 320
%token TOK_BITXOR 321
%token TOK_EQUAL 322
%token TOK_NEQUAL 323
%token TOK_LESS 324
%token TOK_LEQUAL 325
%token TOK_GREATER 326
%token TOK_GEQUAL 327
%token TOK_LSHIFT 328
%token TOK_RSHIFT 329
%token TOK_RSHIFTZ 330
%token TOK_ADD 331
%token TOK_SUB 332
%token TOK_MOD 333
%token TOK_DIV 334
%token TOK_MUL 335
%token TOK_BITNEG 336
%token TOK_NEG 337
%token TOK_SUBSUB 338
%token TOK_ADDADD 339

%%

program:
classdec
| program classdec
;

classdec:
/*define by different types of classes?*/
accessmod TOK_CLASS TOK_IDENTIFIER TOK_LBRACE classbody TOK_RBRACE
;

accessmod:
TOK_PUBLIC
;

classbody:
method
|classbody method
;

method:
instancemethod
| staticmethod
;

instancemethod:
accessmod returntype TOK_IDENTIFIER TOK_LPAREN formalparameters TOK_RPAREN TOK_LBRACE 
methodbody TOK_RBRACE
;

staticmethod:
accessmod TOK_STATIC returntype TOK_IDENTIFIER TOK_LPAREN formalparameters TOK_RPAREN
TOK_LBRACE methodbody TOK_RBRACE

methodbody:
statement
|expression
|methodbody statement
|methodbody expression
;

returntype:
TOK_VOID
|datatype
;

datatype:
TOK_LONG
|TOK_FLOAT
|TOK_BOOLEAN
|TOK_INT
|TOK_STRING
|TOK_DOUBLE
;

formalparameters:
datatype TOK_IDENTIFIER
|formalparameters TOK_COMMA datatype TOK_IDENTIFIER
;

argument:
expression
|TOK_IDENTIFIER
;

statement:
controlflowstate
|declarationstate
|initializationstate
|assignmentstate
;

declarationstate:
datatype TOK_IDENTIFIER TOK_SEMI
;

assignmentstate:
TOK_IDENTIFIER TOK_EQUAL expression
;

initializationstate:
datatype assignmentstate
;

controlflowstate:
switchstatement
|whileloop
/*|dowhileloop
|forloop
|TOK_BREAK
|returnstatement
|TOK_CONTINUE
|ifstatement
|ifelsestatement
*/
;

switchstatement:
TOK_SWITCH TOK_LPAREN expression TOK_RPAREN TOK_LBRACE switchbody TOK_RBRACE
;

switchbody:
TOK_CASE expression TOK_COLON casebody
|switchbody TOK_CASE expression TOK_COLON casebody
;

casebody:
statement TOK_BREAK
|expression TOK_BREAK
|casebody statement TOK_BREAK
|casebody expression TOK_BREAK
;

whileloop:
TOK_WHILE TOK_LPAREN expression TOK_LBRACE loopbody TOK_RBRACE
;

loopbody:
statement
|expression
|loopbody statement
|loopbody expression
;

expression:
methodcall
|TOK_INTVAL
|TOK_STRINGVAL
|TOK_INTVAL TOK_ADD TOK_INTVAL
;

methodcall:
staticmethodcall
|instancemethodcall
;

staticmethodcall:
TOK_IDENTIFIER TOK_LPAREN argument TOK_RPAREN TOK_SEMI
;

instancemethodcall:
/*??*/
TOK_IDENTIFIER methodcallname TOK_LPAREN argument TOK_RPAREN TOK_SEMI
;

/*rename*/ 
methodcallname:
/*??*/
TOK_DOT TOK_IDENTIFIER
|methodcall TOK_DOT TOK_IDENTIFIER
;
%%

int main ()
{
  return yyparse();
}

#include <stdio.h>
void yyerror (char const *s)
{
  cout << *s << endl;
}

