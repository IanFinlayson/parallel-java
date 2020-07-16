%{
	#include <cstdlib>
	#include <fstream>
	#include "Node/Node.hpp"
	#include "nodeTypes.h"
	#include "Dump/JavaDumper.cpp"

	extern int yylex();
	void yyerror(char const *error);

	Node* root;
%}

%code requires{
	#include <string>
	#include <iostream> 
}

%union {
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

}

%error-verbose 
%token <stVal> TOK_IDENTIFIER 100
%token <iVal> TOK_INTVAL 101
%token <fVal> TOK_FLOATVAL 102
%token <stVal> TOK_STRINGVAL 103
%token <bVal> TOK_BOOLVAL 104
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
%token TOK_YIELD 341

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
%right TOK_BITNEG 336
%right TOK_NEG 337
%token TOK_SUBSUB 338
%token TOK_ADDADD 339
%token TOK_LAMBDA 340


%type <node> packagedec importstatements typedec packagename importstatement
%type <node> classdec interfacedec
%type <node> mod extendsorimplements classbody basicidentifier interfacebody
%type <node> declarationstatement initializationstatement method
%type <node> declarator initializer
%type <node> datatype identifier
%type <node> expression
%type <node> abstractmethod formalparameter formalparameters block
%type <node> statement
%type <node> argument expressionstatement instancemethodcall methodcall fieldreference
%type <node> predecrement postdecrement
%type <node> datastructure assignmentstatement 
%type <node> controlflowstatement
%type <node> whileloop dowhileloop forloop enhancedfor forinit forupdate ifstatement ifelsestatement
%type <node> throwsclause switchstatement switchblock switchrules switchrule switchblockstates switchblockstate 
%type <node> switchlabel case throwstate
%type <node> parallelblock
%type <node> trycatchblock exceptionname

%%


program:
packagedec importstatements typedec {
	// root is always a package (but the package can be no package)
	root = $1;
	Node* _im = new Node(ptImports); //import section node
	_im->attach_child(*$2);
	//right child of root is the import section
	root->attach_child(*_im);
	//right child of import section is the rest of the program starting with a class definition
	_im->attach_child(*$3);
}
;

packagedec:
%empty {
	//empty package section
	$$ = new Node(ptPackageContainer);
	$$->attach_child(*(new Node(ptEmpty)));
}
|TOK_PACKAGE packagename TOK_SEMI {
	$$ = new Node(ptPackageContainer);
	$$->attach_child(*$2);
}
;

importstatements:
%empty {
	$$ = new Node(ptEmpty);
}
|importstatement importstatements {
	$$ = new Node(ptImportContainer);
	$$->attach_child(*$1);
	$$->attach_child(*$2);
}
;

importstatement:
TOK_IMPORT packagename TOK_SEMI {
	$$ = new Node(ptImport);
	$$->attach_child(*$2);
}
|TOK_IMPORT packagename TOK_DOT TOK_MUL TOK_SEMI {
	$$ = new Node(ptImport);
	$$->attach_child(*$2);
	$$->attach_child(*(new Node(TOK_MUL)));
}
;

packagename:
TOK_IDENTIFIER {
	$$ = new Node(ptPackage, 0, 0, $1);
}
|packagename TOK_DOT TOK_IDENTIFIER {
	//$$ = new Node(ptPackage, 0, 0, $3);
	//$$->attach_child(*$1);
	$$ = $1;
	$$->attach_child(*(new Node(ptPackage, 0, 0, $3)));
}
;

typedec:
interfacedec {
	$$ = new Node(ptTypeDec);
	$$->attach_child(*$1);
}
|classdec {
	$$ = new Node(ptTypeDec);
	$$->attach_child(*$1);
}
|classdec typedec {
	$$ = new Node(ptTypeDec);
	$$->attach_child(*$1);
	$$->attach_child(*$2);
}
|interfacedec typedec {
	$$ = new Node(ptTypeDec);
	$$->attach_child(*$1);
	$$->attach_child(*$2);
}
;

interfacedec:
mod TOK_INTERFACE TOK_IDENTIFIER TOK_LBRACE interfacebody TOK_RBRACE {
	$$ = new Node(ptInterface, 0, 0, $3);
	$$->attach_child(*$1);
	$$->attach_child(*$5);
}
|mod TOK_INTERFACE TOK_IDENTIFIER TOK_EXTENDS TOK_IDENTIFIER TOK_LBRACE interfacebody TOK_RBRACE {
	$$ = new Node(ptInterface, 0, 0, $3);
	$$->attach_child(*$1);
	$$->attach_child(*$7);
	$1->attach_child(*(new Node(ptExtends, 0, 0, $5)));
}
;

classdec:
mod TOK_CLASS TOK_IDENTIFIER TOK_LBRACE classbody TOK_RBRACE {
	$$ = new Node(ptClass, 0, 0, $3);
	$$->attach_child(*$1);
	$$->attach_child(*$5);
}
|mod TOK_CLASS TOK_IDENTIFIER extendsorimplements TOK_LBRACE classbody TOK_RBRACE {
	$$ = new Node(ptClass, 0, 0, $3);
	$$->attach_child(*$1);
	$$->attach_child(*$6);
	$1->attach_child(*$4);
}
;

extendsorimplements:
TOK_EXTENDS TOK_IDENTIFIER {
	$$ = new Node(ptExtends, 0, 0, $2);
}
|TOK_IMPLEMENTS basicidentifier {
	$$ = new Node(ptImplements);
	$$->attach_child(*$2);
}
|TOK_EXTENDS TOK_IDENTIFIER TOK_IMPLEMENTS basicidentifier {
	$$ = new Node(ptExtends, 0, 0, $2);
	Node* _imp = new Node(ptImplements);
	_imp->attach_child(*$4);
	$$->attach_child(*_imp);
}
;

basicidentifier:
TOK_IDENTIFIER {
	$$ = new Node(ptBasicIdentifier, 0, 0, $1);
}
|TOK_IDENTIFIER TOK_COMMA basicidentifier {
	$$ = new Node(ptBasicIdentifier, 0, 0, $1);
	$$->attach_child(*$3);
}
;


mod:
%empty {
	$$ = new Node(ptEmpty);
	$$->attach_child(*(new Node(ptEmpty))); //ensure that whatever gets attached to $$ is a right node
}
|TOK_FINAL mod {
	$$ = new Node(ptMod, 0, 0, "final");
	$$->attach_child(*$2);
}
|TOK_ABSTRACT mod {
	$$ = new Node(ptMod, 0, 0, "abstract");
	$$->attach_child(*$2);
}
|TOK_STRICTFP mod {
	$$ = new Node(ptMod, 0, 0, "strictfp");
	$$->attach_child(*$2);
}
|TOK_STATIC mod {
	$$ = new Node(ptMod, 0, 0, "static");
	$$->attach_child(*$2);
}
|TOK_NATIVE mod {
	$$ = new Node(ptMod, 0, 0, "native");
	$$->attach_child(*$2);
}
|TOK_SYNCHRONIZED mod {
	$$ = new Node(ptMod, 0, 0, "synchronized");
	$$->attach_child(*$2);
}
|TOK_TRANSIENT mod {
	$$ = new Node(ptMod, 0, 0, "transient");
	$$->attach_child(*$2);
}
|TOK_VOLATILE mod {
	$$ = new Node(ptMod, 0, 0, "volatile");
	$$->attach_child(*$2);
}
|TOK_PUBLIC mod {
	$$ = new Node(ptMod, 0, 0, "public");
	$$->attach_child(*$2);
}
|TOK_PRIVATE mod {
	$$ = new Node(ptMod, 0, 0, "private");
	$$->attach_child(*$2);
}
|TOK_PROTECTED mod {
	$$ = new Node(ptMod, 0, 0, "protected");
	$$->attach_child(*$2);
}
|TOK_DEFAULT mod {
	$$ = new Node(ptMod, 0, 0, "default");
	$$->attach_child(*$2);
}
;

classbody:
%empty {
	$$ = new Node(ptClassBody);
	$$->attach_child(*(new Node(ptEmpty)));
}
|mod declarationstatement TOK_SEMI classbody {
	$$ = new Node(ptClassBody);
	$$->attach_child(*$2);
	$2->attach_child(*$1);
	$$->attach_child(*$4);
}
|mod initializationstatement TOK_SEMI classbody {
	$$ = new Node(ptClassBody);
	$$->attach_child(*$2);
	$2->attach_child(*$1);
	$$->attach_child(*$4);
}
|method classbody {
	$$ = new Node(ptClassBody);
	$$->attach_child(*$1);
	$$->attach_child(*$2);
}
|classdec classbody {
	$$ = new Node(ptClassBody);
	$$->attach_child(*$1);
	$$->attach_child(*$2);
}
|interfacedec classbody {
	$$ = new Node(ptClassBody);
	$$->attach_child(*$1);
	$$->attach_child(*$2);
}
;

interfacebody:
%empty {
	$$ = new Node(ptClassBody);
	$$->attach_child(*(new Node(ptEmpty)));
}
|mod initializationstatement TOK_SEMI interfacebody {
	$$ = new Node(ptClassBody);
	$$->attach_child(*$2);
	$2->attach_child(*$1);
	$$->attach_child(*$4);
}
|method interfacebody {
	$$ = new Node(ptClassBody);
	$$->attach_child(*$1);
	$$->attach_child(*$2);
}
|classdec interfacebody {
	$$ = new Node(ptClassBody);
	$$->attach_child(*$1);
	$$->attach_child(*$2);
}
|interfacedec interfacebody {
	$$ = new Node(ptClassBody);
	$$->attach_child(*$1);
	$$->attach_child(*$2);
}
;

abstractmethod:
datatype TOK_IDENTIFIER TOK_LPAREN formalparameters TOK_RPAREN throwsclause TOK_SEMI {
	$$ = new Node(ptAbstractMethodLabel, 0, 0, $2);
	$$->attach_child(*$1);
	$1->attach_child(*$6);
	$$->attach_child(*$4);
}
|TOK_VOID TOK_IDENTIFIER TOK_LPAREN formalparameters TOK_RPAREN throwsclause TOK_SEMI {
	$$ = new Node(ptAbstractMethodLabel, 0, 0, $2);
	Node* _ret = new Node(TOK_VOID);
	_ret->attach_child(*$6);
	$$->attach_child(*_ret);
	$$->attach_child(*$4);
}
;

method:
mod datatype TOK_IDENTIFIER TOK_LPAREN formalparameters TOK_RPAREN throwsclause TOK_LBRACE block TOK_RBRACE {
	$$ = new Node(ptMethod, 0, 0, $3);
	Node* _m1 = new Node(ptMethodLabel);
	_m1->attach_child(*$1);
	_m1->attach_child(*$2);
	Node* _m2 = new Node(ptMethodLabel);
	_m2->attach_child(*_m1);
	_m2->attach_child(*$5);
	Node* _m3 = new Node(ptMethodLabel);
	_m3->attach_child(*_m2);
	_m3->attach_child(*$7);
	$$->attach_child(*_m3);
	$$->attach_child(*$9);
}
|mod TOK_VOID TOK_IDENTIFIER TOK_LPAREN formalparameters TOK_RPAREN throwsclause TOK_LBRACE block TOK_RBRACE {
	$$ = new Node(ptMethod, 0, 0, $3);
	Node* _m1 = new Node(ptMethodLabel);
	_m1->attach_child(*$1);
	_m1->attach_child(*(new Node(TOK_VOID)));
	Node* _m2 = new Node(ptMethodLabel);
	_m2->attach_child(*_m1);
	_m2->attach_child(*$5);
	Node* _m3 = new Node(ptMethodLabel);
	_m3->attach_child(*_m2);
	_m3->attach_child(*$7);
	$$->attach_child(*_m3);
	$$->attach_child(*$9);
}
|mod TOK_IDENTIFIER TOK_LPAREN formalparameters TOK_RPAREN throwsclause TOK_LBRACE block TOK_RBRACE {
	$$ = new Node(ptMethod, 0, 0, $2);
	Node* _c1 = new Node(ptConstructorLabel);
	_c1->attach_child(*$1);
	_c1->attach_child(*$4);
	Node* _c2 = new Node(ptConstructorLabel);
	_c2->attach_child(*_c1);
	_c2->attach_child(*$6);
	$$->attach_child(*_c2);
	$$->attach_child(*$8);
}
|mod abstractmethod {
	$$ = new Node(ptAbstractMethod);
	$$->attach_child(*$1);
	$$->attach_child(*$2);
}
;

parallelblock:
TOK_IDENTIFIER TOK_LBRACE block TOK_RBRACE {
	$$ = new Node(ptParallelBlock);
	$$->attach_child(*$3);
}
;

throwsclause:
%empty {
	$$ = new Node(ptEmpty);
}
|TOK_THROWS basicidentifier {
	$$ = new Node(ptThrows);
	$$->attach_child(*$2);
}
;

formalparameters:
formalparameter {
	$$ = $1;
}
|formalparameter TOK_COMMA formalparameters{
	$$ = $1;
	$$->attach_child(*$3);
}
;

formalparameter:
%empty {
	$$ = new Node(ptEmpty);
}
|declarator {
	$$ = $1;
}
;

argument:
%empty {
	$$ = new Node(ptEmpty);
}
|expression {
	$$ = new Node(ptArgument);
	$$->attach_child(*$1);
}
|expressionstatement {
	$$ = new Node(ptArgument);
	$$->attach_child(*$1);
}
|expression TOK_COMMA argument {
	$$ = new Node(ptArgument);
	$$->attach_child(*$1);
	$$->attach_child(*$3);
}
|expressionstatement TOK_COMMA argument {
	$$ = new Node(ptArgument);
	$$->attach_child(*$1);
	$$->attach_child(*$3);
}
;

datatype:
TOK_INT {
	$$ = new Node(ptDataType, 0, 0, "int");
}
|TOK_BOOLEAN {
	$$ = new Node(ptDataType, 0, 0, "boolean");
}
|TOK_FLOAT {
	$$ = new Node(ptDataType, 0, 0, "float");
}
|TOK_IDENTIFIER {
	$$ = new Node(ptDataType, 0, 0, $1);
}
|TOK_DOUBLE {
	$$ = new Node(ptDataType, 0, 0, "double");
}
;

block:
%empty {
	$$ = new Node(ptEmpty);
}
|statement block {
	$$ = $1;
	$$->attach_child(*$2);
}
|parallelblock block {
	$$ = $1;
	$$->attach_child(*$2);
}
;

statement:
expressionstatement TOK_SEMI {
	$$ = new Node(ptStatement);
	$$->attach_child(*$1);
}
|controlflowstatement {
	$$ = new Node(ptStatement);
	$$->attach_child(*$1);
}
|declarationstatement TOK_SEMI {
	$$ = new Node(ptStatement);
	$$->attach_child(*$1);
}
|initializationstatement TOK_SEMI {
	$$ = new Node(ptStatement);
	$$->attach_child(*$1);
}
|trycatchblock {
	$$ = new Node(ptStatement);
	//$$->attach_child(*(new Node(ptEmpty, 0, 0, "placeholder trycatch")));
	$$->attach_child(*$1);
}
|throwstate TOK_SEMI {
	$$ = new Node(ptStatement);
	$$->attach_child(*$1);
}
;

expressionstatement:
instancemethodcall {
	$$ = $1;
}
|methodcall {
	$$ = $1;
}
|postdecrement {
	$$ = $1;
}
|predecrement {
	$$ = $1;
}
|assignmentstatement {
	$$ = $1;
}
;

expression:
TOK_LPAREN expression TOK_RPAREN {
	$$ = new Node(ptEnclosedExpression);
	$$->attach_child(*$2);
}
|TOK_INTVAL {
	$$ = new Node(TOK_INTVAL, $1, 0, "");
}
|TOK_FLOATVAL {
	$$ = new Node(TOK_FLOATVAL, 0, $1, "");
}
|TOK_BOOLVAL {
	$$ = new Node(TOK_BOOLVAL, $1, 0, "");
}
|TOK_STRINGVAL {
	$$ = new Node(TOK_STRINGVAL, 0, 0, $1);
}
|TOK_IDENTIFIER {
	$$ = new Node(TOK_IDENTIFIER, 0, 0, $1);
}
|fieldreference {
	$$ = $1;
}
|TOK_IDENTIFIER TOK_LBRACKET argument TOK_RBRACKET {
	$$ = new Node(ptArrayAccess, 0, 0, $1);
	$$->attach_child(*$3);
}
|TOK_SUB expression {
	$$ = new Node(ptNegation);
	$$->attach_child(*$2);
}
|TOK_BITNEG expression {
	$$ = new Node(ptBitNegation);
	$$->attach_child(*$2);
}
|expression TOK_ADD expression {
	$$ = new Node(ptOperation, 0, 0, "+");
	$$->attach_child(*$1);
	$$->attach_child(*$3);
}
|expression TOK_SUB expression {
	$$ = new Node(ptOperation, 0, 0, "-");
	$$->attach_child(*$1);
	$$->attach_child(*$3);
}
|expression TOK_MOD expression {
	$$ = new Node(ptOperation, 0, 0, "%");
	$$->attach_child(*$1);
	$$->attach_child(*$3);
}
|expression TOK_DIV expression {
	$$ = new Node(ptOperation, 0, 0, "/");
	$$->attach_child(*$1);
	$$->attach_child(*$3);
}
|expression TOK_MUL expression {
	$$ = new Node(ptOperation, 0, 0, "*");
	$$->attach_child(*$1);
	$$->attach_child(*$3);
}
|expression TOK_EQUAL expression {
	$$ = new Node(ptOperation, 0, 0, "==");
	$$->attach_child(*$1);
	$$->attach_child(*$3);
}
|expression TOK_NEQUAL expression {
	$$ = new Node(ptOperation, 0, 0, "!=");
	$$->attach_child(*$1);
	$$->attach_child(*$3);
}
|expression TOK_GREATER expression {
	$$ = new Node(ptOperation, 0, 0, ">");
	$$->attach_child(*$1);
	$$->attach_child(*$3);
}
|expression TOK_LESS expression {
	$$ = new Node(ptOperation, 0, 0, "<");
	$$->attach_child(*$1);
	$$->attach_child(*$3);
}
|expression TOK_GEQUAL expression {
	$$ = new Node(ptOperation, 0, 0, ">=");
	$$->attach_child(*$1);
	$$->attach_child(*$3);
}
|expression TOK_LEQUAL expression {
	$$ = new Node(ptOperation, 0, 0, "<=");
	$$->attach_child(*$1);
	$$->attach_child(*$3);
}
|expression TOK_AND expression {
	$$ = new Node(ptOperation, 0, 0, "&&");
	$$->attach_child(*$1);
	$$->attach_child(*$3);
}
|expression TOK_OR expression {
	$$ = new Node(ptOperation, 0, 0, "||");
	$$->attach_child(*$1);
	$$->attach_child(*$3);
}
|expression TOK_BITOR expression {
	$$ = new Node(ptOperation, 0, 0, "|");
	$$->attach_child(*$1);
	$$->attach_child(*$3);
}
|expression TOK_BITAND expression {
	$$ = new Node(ptOperation, 0, 0, "&");
	$$->attach_child(*$1);
	$$->attach_child(*$3);
}
|expression TOK_BITXOR expression {
	$$ = new Node(ptOperation, 0, 0, "^");
	$$->attach_child(*$1);
	$$->attach_child(*$3);
}
|expression TOK_LSHIFT expression {
	$$ = new Node(ptOperation, 0, 0, "<<");
	$$->attach_child(*$1);
	$$->attach_child(*$3);
}
|expression TOK_RSHIFT expression {
	$$ = new Node(ptOperation, 0, 0, ">>");
	$$->attach_child(*$1);
	$$->attach_child(*$3);
}
|expression TOK_RSHIFTZ expression {
	$$ = new Node(ptOperation, 0, 0, ">>>");
	$$->attach_child(*$1);
	$$->attach_child(*$3);
}
;

assignmentstatement:
TOK_IDENTIFIER TOK_MODASSIGN expression {
	$$ = new Node(ptAssignment, 0, 0, "%=");
	$$->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, $1)));
	$$->attach_child(*$3);
}
|TOK_IDENTIFIER TOK_DIVASSIGN expression {
	$$ = new Node(ptAssignment, 0, 0, "/=");
	$$->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, $1)));
	$$->attach_child(*$3);
}
|TOK_IDENTIFIER TOK_MULASSIGN expression {
	$$ = new Node(ptAssignment, 0, 0, "*=");
	$$->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, $1)));
	$$->attach_child(*$3);
}
|TOK_IDENTIFIER TOK_ADDASSIGN expression {
	$$ = new Node(ptAssignment, 0, 0, "+=");
	$$->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, $1)));
	$$->attach_child(*$3);
}
|TOK_IDENTIFIER TOK_SUBASSIGN expression {
	$$ = new Node(ptAssignment, 0, 0, "-=");
	$$->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, $1)));
	$$->attach_child(*$3);
}
|TOK_IDENTIFIER TOK_ASSIGN initializer {
	$$ = new Node(ptAssignment, 0, 0, "=");
	$$->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, $1)));
	$$->attach_child(*$3);
}
|TOK_IDENTIFIER TOK_ASSIGN assignmentstatement {
	$$ = new Node(ptAssignment, 0, 0, "=");
	$$->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, $1)));
	$$->attach_child(*$3);
}
;

controlflowstatement:
whileloop {
	$$ = $1;
}
|dowhileloop {
	$$ = $1;
}
|forloop {
	$$ = $1;
}
|enhancedfor {
	$$ = $1;
}
|ifstatement {
	$$ = $1;
}
|ifelsestatement {
	$$ = $1;
}
|switchstatement {
	$$ = $1;
}
|TOK_BREAK TOK_SEMI {
	$$ = new Node(TOK_BREAK);
}
|TOK_CONTINUE TOK_SEMI {
	$$ = new Node(TOK_CONTINUE);
}
|TOK_RETURN expression TOK_SEMI {
	$$ = new Node(ptReturn);
	$$->attach_child(*$2);
}
|TOK_YIELD expression TOK_SEMI {
	$$ = new Node(ptYield);
	$$->attach_child(*$2);
}
;

identifier:
TOK_IDENTIFIER {
	$$ = new Node(ptIdentifierContainer);
	$$->attach_child(*(new Node(ptIdentifier, 0, 0, $1)));
}
|TOK_IDENTIFIER TOK_LBRACKET TOK_RBRACKET {
	$$ = new Node(ptIdentifierContainer);
	$$->attach_child(*(new Node(ptArrayIdentifier, 0, 0, $1)));
}
|TOK_LBRACKET TOK_RBRACKET TOK_IDENTIFIER {
	$$ = new Node(ptIdentifierContainer);
	$$->attach_child(*(new Node(ptArrayIdentifier, 0, 0, $3)));
}
|TOK_IDENTIFIER TOK_LBRACKET TOK_RBRACKET TOK_COMMA identifier {
	$$ = new Node(ptIdentifierContainer);
	$$->attach_child(*(new Node(ptArrayIdentifier, 0, 0, $1)));
	$$->attach_child(*$5);
}
|TOK_LBRACKET TOK_RBRACKET TOK_IDENTIFIER TOK_COMMA identifier {
	$$ = new Node(ptIdentifierContainer);
	$$->attach_child(*(new Node(ptArrayIdentifier, 0, 0, $3)));
	$$->attach_child(*$5);
}
|TOK_IDENTIFIER TOK_COMMA identifier {
	$$ = new Node(ptIdentifierContainer);
	$$->attach_child(*(new Node(ptIdentifier, 0, 0, $1)));
	$$->attach_child(*$3);
}
;

declarationstatement:
datatype identifier {
	$$ = new Node(ptDeclarationStatement);
	$$->attach_child(*$1);
	$1->attach_child(*$2);
}
|TOK_IDENTIFIER TOK_LESS datatype TOK_GREATER identifier {
	$$ = new Node(ptDeclarationStatement);
	Node* _it = new Node(ptInstanceGeneric, 0, 0, $1);
	_it->attach_child(*$5);
	_it->attach_child(*$3);
	$$->attach_child(*_it);
}
;

declarator:
datatype TOK_IDENTIFIER {
	$$ = new Node(ptDeclaration, 0, 0, $2);
	$$->attach_child(*$1);
}
|datatype TOK_LBRACKET TOK_RBRACKET TOK_IDENTIFIER {
	$$ = new Node(ptArrayDeclaration, 0, 0, $4);
	$$->attach_child(*$1);
}
|datatype TOK_IDENTIFIER TOK_LBRACKET TOK_RBRACKET {
	$$ = new Node(ptArrayDeclaration, 0, 0, $2);
	$$->attach_child(*$1);
}
|TOK_IDENTIFIER TOK_LESS datatype TOK_GREATER TOK_IDENTIFIER {
	$$ = new Node(ptDeclaration, 0, 0, $5);
	Node* _it = new Node(ptInstanceGeneric, 0, 0, $1);
	_it->attach_child(*$3);
	$$->attach_child(*_it);
}
|fieldreference {
	$$ = $1;
}
;

initializer:
expression {
	$$ = $1;
}
|TOK_NEW datatype TOK_LBRACKET TOK_INTVAL TOK_RBRACKET {
	$$ = new Node(ptArraySizeInitializer);
	$$->attach_child(*$2);
	$$->attach_child(*(new Node(TOK_INTVAL, $4, 0, "")));
}
|TOK_LBRACE argument TOK_RBRACE {
	$$ = new Node(ptArrayExplicitInitializer);
	$$->attach_child(*$2);
}
|TOK_NEW datatype TOK_LBRACKET TOK_RBRACKET TOK_LBRACE argument TOK_RBRACE {
	$$ = new Node(ptArrayExplicitInitializer);
	$$->attach_child(*$6);
}
|TOK_NEW TOK_IDENTIFIER TOK_LPAREN argument TOK_RPAREN {
	$$ = new Node(ptInstanceInitializer);
	$$->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, $2)));
	$$->attach_child(*$4);
}
|TOK_NEW TOK_IDENTIFIER TOK_LPAREN argument TOK_RPAREN TOK_LBRACE classbody TOK_RBRACE {
	$$ = new Node(ptAnonymousClass, 0, 0, $2);
	$$->attach_child(*$4);
	$$->attach_child(*$7);
}
|methodcall {
	$$ = $1;
}
|instancemethodcall {
	$$ = $1;
}
|TOK_NEW datastructure TOK_LPAREN argument TOK_RPAREN {
	$$ = new Node(ptDataStructureInitializer);
	$$->attach_child(*$2);
	$$->attach_child(*$4);
}
;

initializationstatement:
declarator TOK_ASSIGN initializer {
	$$ = new Node(ptInitializationContainer);
	Node* _is = new Node(ptInitializationStatement);
	_is->attach_child(*$1);
	_is->attach_child(*$3);
	$$->attach_child(*_is);
}
;

datastructure:
TOK_IDENTIFIER TOK_LESS datatype TOK_GREATER {
	$$ = new Node(ptDataStructure);
	$$->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, $1)));
	$$->attach_child(*$3);
}
|TOK_IDENTIFIER TOK_LESS TOK_GREATER {
	$$ = new Node(ptDataStructure);
	$$->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, $1)));
}
;

whileloop:
TOK_WHILE TOK_LPAREN expression TOK_RPAREN TOK_LBRACE block TOK_RBRACE {
	$$ = new Node(ptWhile);
	$$->attach_child(*$3);
	$$->attach_child(*$6);
}
;

dowhileloop:
TOK_DO TOK_LBRACE block TOK_RBRACE TOK_WHILE TOK_LPAREN expression TOK_RPAREN TOK_SEMI {
	$$ = new Node(ptDoWhile);
	$$->attach_child(*$7);
	$$->attach_child(*$3);
}
;

forloop:
TOK_FOR TOK_LPAREN forinit TOK_SEMI expression TOK_SEMI forupdate TOK_RPAREN TOK_LBRACE block TOK_RBRACE {
	$$ = new Node(ptFor);
	Node* _init = new Node(ptStatement);
	Node* _exp = new Node(ptStatement);
	_init->attach_child(*$3);
	_init->attach_child(*_exp);
	_exp->attach_child(*$5);
	_exp->attach_child(*$7);
	$$->attach_child(*_init);
	$$->attach_child(*$10);
}
;

enhancedfor:
TOK_FOR TOK_LPAREN datatype TOK_IDENTIFIER TOK_COLON TOK_IDENTIFIER TOK_RPAREN TOK_LBRACE block TOK_RBRACE {
	$$ = new Node(ptForEach);
	Node* _dec = new Node(ptDeclaration, 0, 0, $4);
	_dec->attach_child(*$3);
	//Node* _id_con = new Node(ptIdentifierContainer);
	//_dec->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, $4)));
	//_dec->attach_child(*_id_con);
	Node* _f_inf = new Node(ptForEachDec);
	_f_inf->attach_child(*_dec);
	_f_inf->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, $6)));
	$$->attach_child(*_f_inf);
	$$->attach_child(*$9);
}
;

forinit:
declarationstatement {
	$$ = $1;
}
|expressionstatement {
	$$ = $1;
}
|initializationstatement {
	$$ = $1;
}
;

forupdate:
expressionstatement {
	$$ = $1;
}
|expressionstatement TOK_COMMA forupdate {
	$$ = new Node(ptArgument);
	$$->attach_child(*$1);
	$$->attach_child(*$3);
}
;

ifstatement:
TOK_IF TOK_LPAREN expression TOK_RPAREN TOK_LBRACE block TOK_RBRACE {
	$$ = new Node(ptIf);
	$$->attach_child(*$3);
	$$->attach_child(*$6);
}
|TOK_IF TOK_LPAREN expression TOK_RPAREN statement {
	$$ = new Node(ptIf);
	$$->attach_child(*$3);
	$$->attach_child(*$5);
}
;

ifelsestatement:
ifstatement TOK_ELSE TOK_LBRACE block TOK_RBRACE {
	$$ = new Node(ptIfElse);
	$$->attach_child(*$1);
	$$->attach_child(*$4);
}
|ifstatement TOK_ELSE statement {
	$$ = new Node(ptIfElse);
	$$->attach_child(*$1);
	$$->attach_child(*$3);
}
;

/*lambda help?*/
switchstatement:
TOK_SWITCH TOK_LPAREN expression TOK_RPAREN TOK_LBRACE switchblock TOK_RBRACE {
	$$ = new Node(ptSwitch);
	$$->attach_child(*$3);
	$$->attach_child(*$6);
}
;

switchblock:
switchrules {
	$$ = $1;
}
|switchblockstates {
	$$ = $1;
}
;

switchrules:
switchrule {
	$$ = new Node(ptSwitchBlock);
	$$->attach_child(*$1);
}
|switchrule switchrules {
	$$ = new Node(ptSwitchBlock);
	$$->attach_child(*$1);
	$$->attach_child(*$2);
}
;

switchrule:
switchlabel TOK_LAMBDA expressionstatement TOK_SEMI {
	$$ = new Node(ptSwitchRule);
	$$->attach_child(*$1);
	$$->attach_child(*$3);
}
|switchlabel TOK_LAMBDA expression TOK_SEMI {
	$$ = new Node(ptSwitchRule);
	$$->attach_child(*$1);
	$$->attach_child(*$3);
}
|switchlabel TOK_LAMBDA TOK_LBRACE block TOK_RBRACE {
	$$ = new Node(ptSwitchRule);
	$$->attach_child(*$1);
	$$->attach_child(*$4);
}
|switchlabel TOK_LAMBDA throwstate TOK_SEMI {
	$$ = new Node(ptSwitchRule);
	$$->attach_child(*$1);
	$$->attach_child(*$3);
}
;

switchblockstates:
switchblockstate {
	$$ = new Node(ptSwitchBlock);
	$$->attach_child(*$1);
}
|switchblockstate switchblockstates {
	$$ = new Node(ptSwitchBlock);
	$$->attach_child(*$1);
	$$->attach_child(*$2);
}
;

switchblockstate:
switchlabel TOK_COLON TOK_LBRACE block TOK_RBRACE {
	$$ = new Node(ptSwitchState);
	$$->attach_child(*$1);
	$$->attach_child(*$4);
}
|switchlabel TOK_COLON block {
	$$ = new Node(ptSwitchState);
	$$->attach_child(*$1);
	$$->attach_child(*$3);
}
;

switchlabel:
TOK_CASE case {
	$$ = new Node(ptSwitchLabel);
	$$->attach_child(*$2);
}
|TOK_DEFAULT {
	$$ = new Node(ptSwitchLabel);
	$$->attach_child(*(new Node(TOK_DEFAULT)));
}
;

case:
expression {
	$$ = new Node(ptCase);
	$$->attach_child(*$1);
}
|expression TOK_COMMA case {
	$$ = new Node(ptCase);
	$$->attach_child(*$1);
	$$->attach_child(*$3);
}
;

/*fix to catch multiple*/
trycatchblock:
TOK_TRY TOK_LBRACE block TOK_RBRACE TOK_CATCH TOK_LPAREN exceptionname TOK_IDENTIFIER TOK_RPAREN TOK_LBRACE block TOK_RBRACE {
	$$ = new Node(ptTryCatch);
	Node* _try = new Node(ptTry);
	Node* _exc = new Node(ptExceptionContainer);
	Node* _cat = new Node(ptCatch);
	_try->attach_child(*$3);
	_try->attach_child(*_exc);
	_exc->attach_child(*$7);
	_exc->attach_child(*_cat);
	_cat->attach_child(*$11);
	$$->attach_child(*_try);
}
|TOK_TRY TOK_LBRACE block TOK_RBRACE TOK_CATCH TOK_LPAREN exceptionname TOK_IDENTIFIER  TOK_RPAREN TOK_LBRACE block TOK_RBRACE TOK_FINALLY TOK_LBRACE block TOK_RBRACE {
	$$ = new Node(ptTryCatch);
	Node* _try = new Node(ptTry);
	Node* _exc = new Node(ptExceptionContainer);
	Node* _cat = new Node(ptCatch);
	Node* _fin = new Node(ptFinally);
	_try->attach_child(*$3);
	_try->attach_child(*_exc);
	_exc->attach_child(*$7);
	_exc->attach_child(*_cat);
	_cat->attach_child(*$11);
	_cat->attach_child(*_fin);
	_fin->attach_child(*$15);
	$$->attach_child(*_try);
}
;

exceptionname:
TOK_IDENTIFIER {
	$$ = new Node(ptException);
	$$->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, $1)));
}
|TOK_IDENTIFIER TOK_BITOR exceptionname {
	$$ = new Node(ptException);
	$$->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, $1)));
	$$->attach_child(*$3);
}
;


throwstate:
TOK_THROW TOK_NEW TOK_IDENTIFIER TOK_LPAREN argument TOK_RPAREN {
	$$ = new Node(ptThrowState);
	$$->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, $3)));
	$$->attach_child(*$5);
}
;

postdecrement:
TOK_IDENTIFIER TOK_ADDADD {
	$$ = new Node(ptPostDecrement);
	$$->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, $1)));
	$$->attach_child(*(new Node(TOK_ADDADD)));
}
|TOK_IDENTIFIER TOK_SUBSUB {
	$$ = new Node(ptPostDecrement);
	$$->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, $1)));
	$$->attach_child(*(new Node(TOK_SUBSUB)));
}
;

predecrement:
TOK_ADDADD TOK_IDENTIFIER {
	$$ = new Node(ptPreDecrement);
	$$->attach_child(*(new Node(TOK_ADDADD)));
	$$->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, $2)));
}
|TOK_SUBSUB TOK_IDENTIFIER {
	$$ = new Node(ptPreDecrement);
	$$->attach_child(*(new Node(TOK_SUBSUB)));
	$$->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, $2)));
}
;

instancemethodcall:
fieldreference TOK_DOT methodcall {
	$$ = new Node(ptInstanceMethodCall);
	$$->attach_child(*$1);
	$$->attach_child(*$3);
}
|TOK_IDENTIFIER TOK_DOT methodcall {
	$$ = new Node(ptInstanceMethodCall);
	$$->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, $1)));
	$$->attach_child(*$3);
}
;

methodcall:
TOK_IDENTIFIER TOK_LPAREN argument TOK_RPAREN {
	$$ = new Node(ptMethodCall);
	Node* _method_name = new Node(TOK_IDENTIFIER, 0, 0, $1);
	$$->attach_child(*_method_name);
	_method_name->attach_child(*$3);
}
|methodcall TOK_DOT TOK_IDENTIFIER TOK_LPAREN argument TOK_RPAREN {
	$$ = $1;
	Node* _method_call = new Node(ptMethodCall);
	Node* _method_name = new Node(TOK_IDENTIFIER, 0, 0, $3);
	_method_call->attach_child(*_method_name);
	_method_name->attach_child(*$5);
	$$->attach_child(*_method_call);
}
;

fieldreference:
TOK_IDENTIFIER TOK_DOT TOK_IDENTIFIER {
	$$ = new Node(ptFieldReference);
	$$->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, $1)));
	$$->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, $3)));
}
|fieldreference TOK_DOT TOK_IDENTIFIER /*supposed to be field access??*/{
	$$ = new Node(ptFieldReference);
	$$->attach_child(*$1);
	$$->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, $3)));
}
;

%%

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
	std::string new_filename = filename;
	new_filename = (new_filename.substr(0, new_filename.rfind(".java"))) + "_refactored.java";
	std::ofstream dump_file;
	dump_file.open(new_filename);
	dump_tree(*root, &dump_file, 0);
	dump_file.close();
	return 0;
}

#include <stdio.h>
void yyerror (char const *s)
{
	std::cout << s << std::endl;
}
