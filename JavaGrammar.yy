%{
#include <cstdlib>
#include "Node/Node.cpp"

enum ParseTreeNode{
	ptEmpty,
	ptPackageContainer,
	ptPackage,
	ptImportContainer,
	ptImport,
	ptTypeDec,
	ptInterface,
	ptClass,
	ptClassMod,
	ptMethodContainer,
	ptMethod,
	ptAbstractMethod,
	ptFieldDeclaration,
	ptFieldInitialization,
	ptDeclaration,
	ptArrayDeclaration,
	ptDataType,
	ptInstanceType,
	ptFormalParameter,
	ptStatement,
	ptWhile,
	ptDoWhile,
	ptIf,
	ptIfElse
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

%type<node> packagedec importstatements typedec
%type<node> interfacedec classdec classmod
%type<node> importstatement packagename
%type<node> declarationstatement datatype classbody
%type<node> formalparameters classmethod
%type<node> abstractmethod
%type<node> block statement expressionstatement controlflowstatement
%type<node> whileloop ifstatement ifelsestatement dowhileloop
%type<node> expression

%%


/*interfaces*/
program:
packagedec importstatements typedec {
	if($1->get_type() != ptEmpty){
		root = $1;
		if($2->get_type() != ptEmpty){
			root->attach_child(*$2);
			$2->attach_child(*$3);
		}else{
			root->attach_child(*$3);
		}
	}else if($2->get_type() != ptEmpty){
		root = $2;
		root->attach_child(*$3);
	}else{
		root = $3;
	}
}
;

packagedec:
%empty {
	$$ = new Node(ptEmpty, 0, 0, "");
}
|TOK_PACKAGE packagename TOK_SEMI {
	$$ = new Node(ptPackageContainer, 0, 0, "");
	$$->attach_child(*$2);
}
;

importstatements:
%empty {
	$$ = new Node(ptEmpty, 0, 0, "");
}
|importstatement importstatements {
	$$ = new Node(ptImportContainer, 0, 0, "");
	$$->attach_child(*$1);
	if($2->get_type() != ptEmpty){
		$1->attach_child(*$2);
	}
}
;

importstatement:
TOK_IMPORT packagename TOK_SEMI {
	$$ = new Node(ptImport, 0, 0, "");
	$$->attach_child(*$2);
}
|TOK_IMPORT packagename TOK_DOT TOK_MUL TOK_SEMI {
	$$ = new Node(ptImport, 0, 0, "");
	$$->attach_child(*$2);
	$2->attach_child(*(new Node(TOK_MUL, 0, 0, "")));
}
;

packagename:
TOK_IDENTIFIER {
	$$ = new Node(ptPackage, 0, 0, $1);
}
|packagename TOK_DOT TOK_IDENTIFIER {
	$$ = new Node(ptPackage, 0, 0, $3);
	$$->attach_child(*$1);
}
;

typedec:
interfacedec {
	$$ = new Node(ptTypeDec, 0, 0, "");
	$$->attach_child(*(new Node(ptEmpty, 0, 0, "interface placeholder")));
}
|classdec {
	$$ = new Node(ptTypeDec, 0, 0, "");
	$$->attach_child(*$1);
}
|classdec typedec {
	$$ = new Node(ptTypeDec, 0, 0, "");
	$$->attach_child(*$1);
	$$->attach_child(*$2);
}
|interfacedec typedec {
	$$ = new Node(ptTypeDec, 0, 0, "");
	$$->attach_child(*(new Node(ptEmpty, 0, 0, "interface placeholder")));
	$$->attach_child(*$2);
}
;


interfacedec:
classmod TOK_INTERFACE TOK_IDENTIFIER TOK_LBRACE interfacebody TOK_RBRACE {
	$$ = new Node(ptInterface, 0, 0, $3);
	$$->attach_child(*$1);
	//$$->attach_child(*$5);
}
;

classdec:
classmod TOK_CLASS TOK_IDENTIFIER TOK_LBRACE classbody TOK_RBRACE {
	$$ = new Node(ptClass, 0, 0, $3);
	$$->attach_child(*$1);
	$$->attach_child(*$5);
}
;

/*rename*/
classmod:
%empty {
	$$ = new Node(ptClassMod, 0, 0, "default");
}
|TOK_FINAL classmod {
	$$ = new Node(ptClassMod, 0, 0, "final");
	if($2->get_id().compare("default") != 0){
		$$->attach_child(*$2);
	}
}
|TOK_ABSTRACT classmod {
	$$ = new Node(ptClassMod, 0, 0, "abstract");
	if($2->get_id().compare("default") != 0){
		$$->attach_child(*$2);
	}
}
|TOK_STRICTFP classmod {
	$$ = new Node(ptClassMod, 0, 0, "strictfp");
	if($2->get_id().compare("default") != 0){
		$$->attach_child(*$2);
	}
}
|TOK_STATIC classmod {
	$$ = new Node(ptClassMod, 0, 0, "static");
	if($2->get_id().compare("default") != 0){
		$$->attach_child(*$2);
	}
}
|TOK_NATIVE classmod {
	$$ = new Node(ptClassMod, 0, 0, "native");
	if($2->get_id().compare("default") != 0){
		$$->attach_child(*$2);
	}
}
|TOK_SYNCHRONIZED classmod {
	$$ = new Node(ptClassMod, 0, 0, "synchronized");
	if($2->get_id().compare("default") != 0){
		$$->attach_child(*$2);
	}
}
|TOK_TRANSIENT classmod {
	$$ = new Node(ptClassMod, 0, 0, "transient");
	if($2->get_id().compare("default") != 0){
		$$->attach_child(*$2);
	}
}
|TOK_VOLATILE classmod {
	$$ = new Node(ptClassMod, 0, 0, "volatile");
	if($2->get_id().compare("default") != 0){
		$$->attach_child(*$2);
	}
}
|TOK_PUBLIC classmod {
	$$ = new Node(ptClassMod, 0, 0, "public");
	if($2->get_id().compare("default") != 0){
		$$->attach_child(*$2);
	}
}
|TOK_PRIVATE classmod {
	$$ = new Node(ptClassMod, 0, 0, "private");
	if($2->get_id().compare("default") != 0){
		$$->attach_child(*$2);
	}
}
|TOK_PROTECTED classmod {
	$$ = new Node(ptClassMod, 0, 0, "protected");
	if($2->get_id().compare("default") != 0){
		$$->attach_child(*$2);
	}
}
;


interfacemod:
%empty
|TOK_PRIVATE interfacemod
|TOK_PUBLIC interfacemod
|TOK_DEFAULT interfacemod
|TOK_STATIC interfacemod
|TOK_STRICTFP interfacemod
|TOK_FINAL interfacemod
|TOK_ABSTRACT interfacemod
;

classbody:
%empty {
	$$ = new Node(ptEmpty, 0, 0, "");
}
|classmod declarationstatement TOK_SEMI classbody {
	$$ = new Node(ptFieldDeclaration, 0, 0, "");
	$$->attach_child(*$2);
	$2->attach_child(*$1);
	$$->attach_child(*$4);
	
}
|classmod initializationstatement TOK_SEMI classbody{
	$$ = new Node(ptFieldInitialization, 0, 0, "this is an initialization");
	$$->attach_child(*(new Node(ptEmpty, 0, 0, "placeholder")));
	$$->attach_child(*$4);
}
|classmethod classbody {
	$$ = new Node(ptMethodContainer, 0, 0, "");
	$$->attach_child(*$1);
	$$->attach_child(*$2);
}
|classdec classbody {
	$$ = new Node(ptTypeDec, 0, 0, "");
	$$->attach_child(*$1);
	$$->attach_child(*$2);
}
|interfacedec classbody {
	$$ = new Node(ptTypeDec, 0, 0, "");
	$$->attach_child(*$1);
	$$->attach_child(*$2);
}
;

interfacebody:
%empty
|interfacemod initializationstatement TOK_SEMI interfacebody
|interfacemethod interfacebody
|classdec interfacebody
|interfacedec interfacebody
;

interfacemethod:
interfacemod abstractmethod
|interfacemod datatype TOK_IDENTIFIER TOK_LPAREN formalparameters TOK_RPAREN TOK_LBRACE block TOK_RBRACE
|interfacemod TOK_VOID TOK_IDENTIFIER TOK_LPAREN formalparameters TOK_RPAREN TOK_LBRACE block TOK_RBRACE
;

abstractmethod:
datatype TOK_IDENTIFIER TOK_LPAREN formalparameters TOK_RPAREN TOK_SEMI {
	$$ = new Node(ptAbstractMethod, 0, 0, $2);
	$$->attach_child(*$1);
	$1->attach_child(*$4);
}
|TOK_VOID TOK_IDENTIFIER TOK_LPAREN formalparameters TOK_RPAREN TOK_SEMI {
	$$ = new Node(ptAbstractMethod, 0, 0, $2);
	Node* _ret = new Node(TOK_VOID, 0, 0, "");
	$$->attach_child(*_ret);
	_ret->attach_child(*$4);
}
;

classmethod:
classmod datatype TOK_IDENTIFIER TOK_LPAREN formalparameters TOK_RPAREN TOK_LBRACE block TOK_RBRACE {
	$$ = new Node(ptMethod, 0, 0, $3);
	$$->attach_child(*$2);
	$2->attach_child(*$5);
	$2->attach_child(*$1);
	if($8->get_type() != ptEmpty){
		$$->attach_child(*$8);
	}
}
|classmod TOK_VOID TOK_IDENTIFIER TOK_LPAREN formalparameters TOK_RPAREN TOK_LBRACE block TOK_RBRACE {
	$$ = new Node(ptMethod, 0, 0, $3);
	Node* _ret = new Node(TOK_VOID, 0, 0, "");
	$$->attach_child(*_ret);
	_ret->attach_child(*$5);
	_ret->attach_child(*$1);
	if($8->get_type() != ptEmpty){
		$$->attach_child(*$8);
	}
}
|classmod TOK_IDENTIFIER TOK_LPAREN formalparameters TOK_RPAREN TOK_LBRACE block TOK_RBRACE {
	$$ = new Node(ptMethod, 0, 0, $2);
	Node* _ret = new Node(ptEmpty, 0, 0, "constructor");
	$$->attach_child(*_ret);
	_ret->attach_child(*$4);
	_ret->attach_child(*$1);
	if($7->get_type() != ptEmpty){
		$$->attach_child(*$7);
	}
}
|classmod abstractmethod {
	$$ = $2;
	$$->attach_child(*$1);
}
;


formalparameters:
%empty {
	$$ = new Node(ptEmpty, 0, 0, "");
}
|declarationstatement {
	$$ = new Node(ptFormalParameter, 0, 0, "");
	$$->attach_child(*$1);
}
|declarationstatement TOK_COMMA formalparameters {
	$$ = new Node(ptFormalParameter, 0, 0, "");
	$$->attach_child(*$1);
	if($3->get_type() != ptEmpty){
		$$->attach_child(*$3);
	}
}
;

argument:
%empty
|expression
|expressionstatement
|expression TOK_COMMA argument
|expressionstatement TOK_COMMA argument
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
;

block:
%empty {
	$$ = new Node(ptEmpty, 0, 0, "");
}
|statement block {
	$$ = new Node(ptStatement, 0, 0, "");
	$$->attach_child(*$1);
	if($2->get_type() != ptEmpty){
		$$->attach_child(*$2);
	}
}
;

statement:
expressionstatement TOK_SEMI {
	$$ = $1;
}
|controlflowstatement {
	$$ = $1;
}
|declarationstatement TOK_SEMI {
	$$ = new Node(ptEmpty, 0, 0, "placeholder statement");
}
|initializationstatement TOK_SEMI {
	$$ = new Node(ptEmpty, 0, 0, "placeholder statement");
}
|trycatchblock {
	$$ = new Node(ptEmpty, 0, 0, "placeholder statement");
}
;

expressionstatement:
instancemethodcall {
	$$ = new Node(ptEmpty, 0, 0, "placeholder expression");
}
|methodcall {
	$$ = new Node(ptEmpty, 0, 0, "placeholder expression");
}
|postdecrement {
	$$ = new Node(ptEmpty, 0, 0, "placeholder expression");
}
|predecrement {
	$$ = new Node(ptEmpty, 0, 0, "placeholder expression");
}
|assignmentstatement {
	$$ = new Node(ptEmpty, 0, 0, "placeholder expression");
}
;

expression:
TOK_INTVAL {
	$$ = new Node(TOK_INTVAL, $1, 0, "");
}
|TOK_FLOATVAL {
	$$ = new Node(TOK_FLOATVAL, 0, $1, "");
}
|TOK_STRINGVAL {
	$$ = new Node(TOK_STRINGVAL, 0, 0, $1);
}
|TOK_IDENTIFIER {
	$$ = new Node(TOK_IDENTIFIER, 0, 0, $1);
}
|TOK_IDENTIFIER TOK_LBRACKET TOK_INTVAL TOK_RBRACKET {
	$$ = new Node(TOK_IDENTIFIER, 0, 0, $1);
	$$->attach_child(*(new Node(TOK_INTVAL, $3, 0, "")));
}
|expression TOK_ADD expression {
	$$ = new Node(TOK_ADD);
	$$->attach_child(*$1);
	$$->attach_child(*$3);
}
|expression TOK_SUB expression {
	$$ = new Node(TOK_SUB);
	$$->attach_child(*$1);
	$$->attach_child(*$3);
}
|expression TOK_MOD expression {
	$$ = new Node(TOK_MOD);
	$$->attach_child(*$1);
	$$->attach_child(*$3);
}
|expression TOK_DIV expression {
	$$ = new Node(TOK_DIV);
	$$->attach_child(*$1);
	$$->attach_child(*$3);
}
|expression TOK_MUL expression {
	$$ = new Node(TOK_MUL);
	$$->attach_child(*$1);
	$$->attach_child(*$3);
}
|expression TOK_EQUAL expression {
	$$ = new Node(TOK_EQUAL);
	$$->attach_child(*$1);
	$$->attach_child(*$3);
}
|expression TOK_NEQUAL expression {
	$$ = new Node(TOK_NEQUAL);
	$$->attach_child(*$1);
	$$->attach_child(*$3);
}
|expression TOK_GREATER expression {
	$$ = new Node(TOK_GREATER);
	$$->attach_child(*$1);
	$$->attach_child(*$3);
}
|expression TOK_LESS expression {
	$$ = new Node(TOK_LESS);
	$$->attach_child(*$1);
	$$->attach_child(*$3);
}
|expression TOK_GEQUAL expression {
	$$ = new Node(TOK_GEQUAL);
	$$->attach_child(*$1);
	$$->attach_child(*$3);
}
|expression TOK_LEQUAL expression {
	$$ = new Node(TOK_LEQUAL);
	$$->attach_child(*$1);
	$$->attach_child(*$3);
}
|expression TOK_AND expression {
	$$ = new Node(TOK_AND);
	$$->attach_child(*$1);
	$$->attach_child(*$3);
}
|expression TOK_OR expression {
	$$ = new Node(TOK_OR);
	$$->attach_child(*$1);
	$$->attach_child(*$3);
}
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
whileloop {
	$$ = $1;
}
|dowhileloop {
	$$ = $1;
}
|forloop {
	$$ = new Node(ptEmpty, 0, 0, "placeholder controlflowstatement");
}
|ifstatement {
	$$ = $1;
}
|ifelsestatement {
	$$ = $1;
}
|switchstatement {
	$$ = new Node(ptEmpty, 0, 0, "placeholder controlflowstatement");
}
|TOK_BREAK TOK_SEMI {
	$$ = new Node(TOK_BREAK, 0, 0, "");
}
|TOK_CONTINUE TOK_SEMI {
	$$ = new Node(TOK_CONTINUE, 0, 0, "");
}
|TOK_RETURN TOK_IDENTIFIER TOK_SEMI {
	$$ = new Node(TOK_RETURN, 0, 0, "");
	$$->attach_child(*(new Node(TOK_IDENTIFIER, 0, 0, $2)));
}
;

declarationstatement:
datatype TOK_IDENTIFIER {
	$$ = new Node(ptDeclaration, 0, 0, $2);
	$$->attach_child(*$1);
}
|TOK_IDENTIFIER TOK_LESS datatype TOK_GREATER TOK_IDENTIFIER {
	$$ = new Node(ptDeclaration, 0, 0, $5);
	Node* _it = new Node(ptInstanceType, 0, 0, $1);
	_it->attach_child(*$3);
	$$->attach_child(*_it);
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
TOK_WHILE TOK_LPAREN expression TOK_RPAREN TOK_LBRACE block TOK_RBRACE {
	$$ = new Node(ptWhile, 0, 0, "");
	$$->attach_child(*$3);
	$$->attach_child(*$6);
}
;

dowhileloop:
TOK_DO TOK_LBRACE block TOK_RBRACE TOK_WHILE TOK_LPAREN expression TOK_RPAREN TOK_SEMI {
	$$ = new Node(ptDoWhile, 0, 0, "");
	$$->attach_child(*$7);
	$$->attach_child(*$3);
}
;

forloop:
TOK_FOR TOK_LPAREN initializationstatement TOK_SEMI expression TOK_SEMI postdecrement TOK_RPAREN TOK_LBRACE block TOK_RBRACE
;

ifstatement:
TOK_IF TOK_LPAREN expression TOK_RPAREN TOK_LBRACE block TOK_RBRACE {
	$$ = new Node(ptIf, 0, 0, "");
	$$->attach_child(*$3);
	$$->attach_child(*$6);
}
|TOK_IF TOK_LPAREN expression TOK_RPAREN statement {
	$$ = new Node(ptIf, 0, 0, "");
	$$->attach_child(*$3);
	$$->attach_child(*$5);
}
;

ifelsestatement:
ifstatement TOK_ELSE TOK_LBRACE block TOK_RBRACE {
	$$ = new Node(ptIfElse, 0, 0, "");
	$$->attach_child(*$1);
	$$->attach_child(*$4);
}
|ifstatement TOK_ELSE statement {
	$$ = new Node(ptIfElse, 0, 0, "");
	$$->attach_child(*$1);
	$$->attach_child(*$3);
}
;

switchstatement:
TOK_SWITCH TOK_LPAREN expression TOK_RPAREN TOK_LBRACE switchbody TOK_RBRACE 
|TOK_SWITCH TOK_LPAREN expression TOK_RPAREN TOK_LBRACE switchbody TOK_DEFAULT TOK_COLON block TOK_RBRACE 
;

switchbody:
TOK_CASE expression TOK_COLON block
|TOK_CASE expression TOK_COLON block switchbody
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
TOK_IDENTIFIER TOK_DOT TOK_IDENTIFIER
|fieldreference TOK_DOT TOK_IDENTIFIER /*supposed to be field access??*/
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
