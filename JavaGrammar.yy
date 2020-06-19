%{
#include <cstdlib>
#include "Node/Node.cpp"

enum ParseTreeNode{
	ptPackage,
	ptPackageId,
	ptImport,
	ptImportId,
	ptClassContainer,
	ptClass,
	ptClassAccessMod,
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
	ptDoWhile
};



extern int yylex();
void yyerror (char const *error);

Node* root;
%}

%code requires{
	#include <string>
	#include <iostream> 
}

%union {
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

}

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

%type <node> classdec classdecs classbody classaccessmod classmod method datatype returntype methodmod accessmod formalparameters declarationstatement block

%%


/*interfaces*/
program:
classdecs {
	root = $1;
}
;

classdecs:
classdec classdecs {
	$$ = new Node(ptClassContainer, 0, 0, "");
	$$->attach_child(*$1);
	$$->attach_child(*$2);
}
|classdec{
	$$ = new Node(ptClassContainer, 0, 0, "");
	$$->attach_child(*$1);
}
;

classdec:
classaccessmod classmod TOK_CLASS TOK_IDENTIFIER TOK_LBRACE classbody TOK_RBRACE {
	$$ = new Node(ptClass, 0, 0, $4);
	$$->attach_child(*$1); //left branch of class node starts with access modifier
	$1->attach_child(*$2); //left branch class modifier
	//have to add extends
	//have to add implements
	if($6->get_type() != ptEmpty){
		$$->attach_child(*$6); //right branch of class node is the class body tree
	}
}
;

nestedclassdec:
accessmod classmod TOK_CLASS TOK_IDENTIFIER TOK_LBRACE classbody TOK_RBRACE
;

classaccessmod:
%empty {
	$$ = new Node(ptClassAccessMod, 0, 0, "default");
}
|TOK_PUBLIC {
	$$ = new Node(ptClassAccessMod, 0, 0, "public");
}
;

accessmod:
%empty {
	$$ = new Node(ptAccessMod, 0, 0, "default");
}
|TOK_PUBLIC {
	$$ = new Node(ptAccessMod, 0, 0, "pulic");
}
|TOK_PRIVATE {
	$$ = new Node(ptAccessMod, 0, 0, "private");
}
|TOK_PROTECTED {
	$$ = new Node(ptAccessMod, 0, 0, "protected");
}
;

/*rename*/
classmod:
%empty {
	$$ = new Node(ptClassMod, 0, 0, "default");
}
|TOK_FINAL {
	$$ = new Node(ptClassMod, 0, 0, "final");
}
|TOK_ABSTRACT {
	$$ = new Node(ptClassMod, 0, 0, "abstract");
}
;

methodmod:
%empty {
	$$ = new Node(ptMethodMod, 0, 0, "default");
}
|TOK_FINAL {
	$$ = new Node(ptMethodMod, 0, 0, "final");
}
|TOK_STATIC {
	$$ = new Node(ptMethodMod, 0, 0, "static");
}
|TOK_ABSTRACT {
	$$ = new Node(ptMethodMod, 0, 0, "abstract");
}
|TOK_TRANSIENT {
	$$ = new Node(ptMethodMod, 0, 0, "transient");
}
|TOK_SYNCHRONIZED {
	$$ = new Node(ptMethodMod, 0, 0, "synchronized");
}
|TOK_VOLATILE {
	$$ = new Node(ptMethodMod, 0, 0, "volatile");
}
;

fieldmod:
TOK_STATIC
|TOK_FINAL
|TOK_TRANSIENT
|TOK_VOLATILE
;


classbody:
%empty {
	$$ = new Node(ptEmpty, 0, 0, "");
}
/*
|classbody declarationstatement TOK_SEMI
|classbody initializationstatement TOK_SEMI
*/
|method classbody{
	$$ = new Node(ptMethodContainer, 0, 0, "");
	$$->attach_child(*$1);
	if($2->get_type() != ptEmpty){
		$$->attach_child(*$2);
	}
}
|nestedclassdec classbody {
	$$ = new Node(ptNestedClassContainer, 0, 0, "a nested class");	
}
;

method:
accessmod methodmod returntype TOK_IDENTIFIER TOK_LPAREN formalparameters TOK_RPAREN TOK_LBRACE block TOK_RBRACE {
	$$ = new Node(ptMethod, 0, 0, $4);
	//method info
	$$->attach_child(*$1);
	$1->attach_child(*$2);
	$2->attach_child(*$3);
	//method parameters
	$3->attach_child(*$6);
	//method body
	//$$->attach_child(*$9);
}
;

returntype:
TOK_VOID {
	$$ = new Node(ptMethodReturnVoid, 0, 0, "");
}
|datatype {
	$$ = $1;
}
;

formalparameters:
declarationstatement {
	$$ = $1;
}
|formalparameters TOK_COMMA declarationstatement {
	$$ = $3;
	$$->attach_child(*$1);
}
;

argument:
%empty
|expression
|expressionstatement
|argument TOK_COMMA expression
|argument TOK_COMMA expressionstatement
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
	$$ = new Node(ptInstanceType, 0, 0, $1);
}
;

block:
%empty
|block statement 
;

statement:
expressionstatement TOK_SEMI
|controlflowstatement 
|declarationstatement TOK_SEMI
|initializationstatement TOK_SEMI
|trycatchblock
;

expressionstatement:
instancemethodcall
|methodcall
|postdecrement
|predecrement
|assignmentstatement
;

expression:
TOK_INTVAL
|TOK_FLOATVAL
|TOK_STRINGVAL
|TOK_IDENTIFIER
|TOK_IDENTIFIER TOK_LBRACKET TOK_INTVAL TOK_RBRACKET
|expression TOK_ADD expression
|expression TOK_SUB expression
|expression TOK_MOD expression
|expression TOK_DIV expression
|expression TOK_MUL expression
|expression TOK_EQUAL expression
|expression TOK_NEQUAL expression
|expression TOK_GREATER expression
|expression TOK_LESS expression
|expression TOK_GEQUAL expression
|expression TOK_LEQUAL expression
|expression TOK_AND expression
|expression TOK_OR expression
;

assignmentstatement:
TOK_IDENTIFIER TOK_ASSIGN expression
|TOK_IDENTIFIER TOK_MODASSIGN expression
|TOK_IDENTIFIER TOK_DIVASSIGN expression
|TOK_IDENTIFIER TOK_MULASSIGN expression
|TOK_IDENTIFIER TOK_ADDASSIGN expression
|TOK_IDENTIFIER TOK_SUBASSIGN expression
|TOK_IDENTIFIER TOK_ASSIGN TOK_NEW datastructure TOK_LPAREN TOK_RPAREN 
|TOK_IDENTIFIER TOK_ASSIGN TOK_NEW TOK_IDENTIFIER TOK_LPAREN argument TOK_RPAREN
|TOK_IDENTIFIER TOK_ASSIGN TOK_NEW datatype TOK_LBRACKET TOK_RBRACKET TOK_LBRACE argument TOK_RBRACE
|TOK_IDENTIFIER TOK_ASSIGN TOK_NEW datatype TOK_LBRACKET TOK_INTVAL TOK_RBRACKET
|TOK_IDENTIFIER TOK_ASSIGN methodcall
|TOK_IDENTIFIER TOK_ASSIGN instancemethodcall
;

controlflowstatement:
whileloop
|dowhileloop
|forloop
|ifstatement
|ifelsestatement
|switchstatement
|TOK_BREAK TOK_SEMI
|TOK_CONTINUE TOK_SEMI
|TOK_RETURN TOK_SEMI
;

declarationstatement:
datatype TOK_IDENTIFIER {
	$$ = new Node(ptDeclaration, 0, 0, $2);
	$$->attach_child(*$1);
}
|TOK_IDENTIFIER TOK_LESS datatype TOK_GREATER TOK_IDENTIFIER {
	$$ = new Node(ptDeclaration, 0, 0, $5);
	Node* _n = new Node(ptInstanceType, 0, 0, $1);
	_n->attach_child(*$3);
	$$->attach_child(*_n);
}
|datatype TOK_LBRACKET TOK_RBRACKET TOK_IDENTIFIER {
	$$ = new Node(ptArrayDeclaration, 0, 0, $4);
	$$->attach_child(*$1);
}
|datatype TOK_IDENTIFIER TOK_LBRACKET TOK_RBRACKET {
	$$ = new Node(ptArrayDeclaration, 0, 0, $2);
	$$->attach_child(*$1);
}
;

initializationstatement:
datatype TOK_IDENTIFIER TOK_ASSIGN expression
|datatype TOK_LBRACKET TOK_RBRACKET TOK_IDENTIFIER TOK_ASSIGN TOK_NEW datatype TOK_LBRACKET TOK_INTVAL TOK_RBRACKET
|datatype TOK_IDENTIFIER TOK_LBRACKET TOK_RBRACKET TOK_ASSIGN TOK_NEW datatype TOK_LBRACKET TOK_INTVAL TOK_RBRACKET
|datatype TOK_LBRACKET TOK_RBRACKET TOK_IDENTIFIER TOK_ASSIGN  TOK_LBRACE argument TOK_RBRACE 
|datatype TOK_IDENTIFIER TOK_LBRACKET TOK_RBRACKET TOK_ASSIGN TOK_LBRACE argument TOK_RBRACE
|datatype TOK_LBRACKET TOK_RBRACKET TOK_IDENTIFIER TOK_ASSIGN TOK_NEW datatype TOK_LBRACKET TOK_RBRACKET TOK_LBRACE argument TOK_RBRACE
|datatype TOK_IDENTIFIER TOK_LBRACKET TOK_RBRACKET TOK_ASSIGN TOK_NEW datatype TOK_LBRACKET TOK_RBRACKET TOK_LBRACE argument TOK_RBRACE
|datatype TOK_IDENTIFIER TOK_ASSIGN TOK_NEW TOK_IDENTIFIER TOK_LPAREN argument TOK_RPAREN
|datatype TOK_IDENTIFIER TOK_ASSIGN TOK_NEW datastructure TOK_LPAREN TOK_RPAREN
|datatype TOK_IDENTIFIER TOK_ASSIGN methodcall
|datatype TOK_IDENTIFIER TOK_ASSIGN instancemethodcall
|TOK_IDENTIFIER TOK_LESS datatype TOK_GREATER TOK_IDENTIFIER TOK_ASSIGN TOK_NEW datastructure TOK_LPAREN argument TOK_RPAREN
;

/*might be able to remove*/
datastructure:
TOK_IDENTIFIER TOK_LESS datatype TOK_GREATER
|TOK_IDENTIFIER TOK_LESS TOK_GREATER 
;


whileloop:
TOK_WHILE TOK_LPAREN expression TOK_RPAREN TOK_LBRACE block TOK_RBRACE
;

dowhileloop:
TOK_DO TOK_LBRACE block TOK_RBRACE TOK_WHILE TOK_LPAREN expression TOK_RPAREN TOK_SEMI
;

forloop:
TOK_FOR TOK_LPAREN initializationstatement TOK_SEMI expression TOK_SEMI postdecrement TOK_RPAREN TOK_LBRACE block TOK_RBRACE
;

ifstatement:
TOK_IF TOK_LPAREN expression TOK_RPAREN TOK_LBRACE block TOK_RBRACE
|TOK_IF TOK_LPAREN expression TOK_RPAREN statement 
;

ifelsestatement:
ifstatement TOK_ELSE TOK_LBRACE block TOK_RBRACE
|ifstatement TOK_ELSE statement 
;

switchstatement:
TOK_SWITCH TOK_LPAREN expression TOK_RPAREN TOK_LBRACE switchbody TOK_RBRACE
|TOK_SWITCH TOK_LPAREN expression TOK_RPAREN TOK_LBRACE switchbody TOK_DEFAULT TOK_COLON block TOK_RBRACE
;

switchbody:
TOK_CASE expression TOK_COLON block
|switchbody TOK_CASE expression TOK_COLON block 
;

trycatchblock:
TOK_TRY TOK_LBRACE block TOK_RBRACE TOK_CATCH TOK_LPAREN declarationstatement TOK_RPAREN 
TOK_LBRACE block TOK_RBRACE
|TOK_TRY TOK_LBRACE block TOK_RBRACE TOK_CATCH TOK_LPAREN declarationstatement TOK_RPAREN TOK_LBRACE block TOK_RBRACE TOK_FINALLY TOK_LBRACE block TOK_RBRACE
;

postdecrement:
TOK_IDENTIFIER TOK_ADDADD
|TOK_IDENTIFIER TOK_SUBSUB
;

predecrement:
TOK_ADDADD TOK_IDENTIFIER
|TOK_SUBSUB TOK_IDENTIFIER 
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
