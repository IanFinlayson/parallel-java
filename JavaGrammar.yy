%{
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
		ptConstructorInfo
	};

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
%type <node> mod extendsorimplements classbody
%type <node> declarationstatement initializationstatement method
%type <node> declarator initializer
%type <node> datatype identifier
%type <node> expression
%type <node> abstractmethod formalparameter formalparameters block

%%


program:
packagedec importstatements typedec {
	root = $1;
	Node* _im = new Node(ptImports);
	_im->attach_child(*$2);
	root->attach_child(*_im);
	_im->attach_child(*$3);
}
;

packagedec:
%empty {
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
	$$ = new Node(ptPackage, 0, 0, $3);
	$$->attach_child(*$1);
}
;

typedec:
interfacedec {
	$$ = new Node(ptTypeDec);
	$$->attach_child(*(new Node(ptEmpty, 0, 0, "interface placeholder")));
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
	$$->attach_child(*(new Node(ptEmpty, 0, 0, "interface placeholder")));
	$$->attach_child(*$2);
}
;

interfacedec:
mod TOK_INTERFACE TOK_IDENTIFIER TOK_LBRACE interfacebody TOK_RBRACE
|mod TOK_INTERFACE TOK_IDENTIFIER TOK_EXTENDS TOK_IDENTIFIER TOK_LBRACE interfacebody TOK_RBRACE
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
	//$1->attach_child(*$4);
}
;

extendsorimplements:
TOK_EXTENDS TOK_IDENTIFIER 
|TOK_IMPLEMENTS interfaceidentifier
|TOK_EXTENDS TOK_IDENTIFIER TOK_IMPLEMENTS interfaceidentifier
;

interfaceidentifier:
TOK_IDENTIFIER
|TOK_IDENTIFIER TOK_COMMA interfaceidentifier
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
	//$$->attach_child(*(new Node(ptEmpty, 0, 0, "method placeholder")));
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
%empty
|mod initializationstatement TOK_SEMI interfacebody
|method interfacebody
|classdec interfacebody
|interfacedec interfacebody
;

abstractmethod:
datatype TOK_IDENTIFIER TOK_LPAREN formalparameters TOK_RPAREN TOK_SEMI {
	$$ = new Node(ptAbstractMethod, 0, 0, $2);
	$$->attach_child(*$1);
	$$->attach_child(*$4);
}
|TOK_VOID TOK_IDENTIFIER TOK_LPAREN formalparameters TOK_RPAREN TOK_SEMI {
	$$ = new Node(ptAbstractMethod, 0, 0, $2);
	$$->attach_child(*(new Node(TOK_VOID)));
	$$->attach_child(*$4);
}
;

method:
mod datatype TOK_IDENTIFIER TOK_LPAREN formalparameters TOK_RPAREN TOK_LBRACE block TOK_RBRACE {
	$$ = new Node(ptMethod, 0, 0, $3);
	$$->attach_child(*$2);
	$2->attach_child(*$5);
	$2->attach_child(*$1);
	$$->attach_child(*$8);
}
|mod TOK_VOID TOK_IDENTIFIER TOK_LPAREN formalparameters TOK_RPAREN TOK_LBRACE block TOK_RBRACE {
	$$ = new Node(ptMethod, 0, 0, $3);
	Node* _rt = new Node(TOK_VOID);
	_rt->attach_child(*$5);
	_rt->attach_child(*$1);
	$$->attach_child(*_rt);
	$$->attach_child(*$8);
}
|mod TOK_IDENTIFIER TOK_LPAREN formalparameters TOK_RPAREN TOK_LBRACE block TOK_RBRACE {
	$$ = new Node(ptMethod, 0, 0, $2);
	Node* _const = new Node(ptConstructorInfo);
	_const->attach_child(*$4);
	_const->attach_child(*$1);
	$$->attach_child(*_const);
	$$->attach_child(*$7);
}
|mod abstractmethod {
	$$ = new Node(ptMethod);
	$$->attach_child(*$1);
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
|TOK_DOUBLE {
	$$ = new Node(ptDataType, 0, 0, "double");
}
;

block:
%empty {
	$$ = new Node(ptEmpty);
}
|statement block {
	$$ = new Node(ptEmpty, 0, 0, "placeholder statement");
	$$->attach_child(*$2);
}
;

statement:
expressionstatement TOK_SEMI
|controlflowstatement
|declarationstatement TOK_SEMI
|initializationstatement TOK_SEMI
|trycatchblock
|throwstate TOK_SEMI
;

expressionstatement:
instancemethodcall
|methodcall
|postdecrement
|predecrement
|assignmentstatement
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
	$$ = new Node(ptEmpty, 0, 0, "fieldreference placeholder");
}
|TOK_IDENTIFIER TOK_LBRACKET argument TOK_RBRACKET {
	$$ = new Node(ptEmpty, 0, 0, "arrayaccess placeholder");
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
TOK_IDENTIFIER TOK_MODASSIGN expression
|TOK_IDENTIFIER TOK_DIVASSIGN expression
|TOK_IDENTIFIER TOK_MULASSIGN expression
|TOK_IDENTIFIER TOK_ADDASSIGN expression
|TOK_IDENTIFIER TOK_SUBASSIGN expression
|TOK_IDENTIFIER TOK_ASSIGN initializer
|TOK_IDENTIFIER TOK_ASSIGN assignmentstatement
;

controlflowstatement:
whileloop
|dowhileloop
|forloop
|enhancedfor
|ifstatement
|ifelsestatement
|switchstatement
|TOK_BREAK TOK_SEMI
|TOK_CONTINUE TOK_SEMI
|TOK_RETURN TOK_IDENTIFIER TOK_SEMI
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
}
;

declarationstatement:
datatype identifier {
	$$ = new Node(ptDeclaration);
	$$->attach_child(*$1);
	$1->attach_child(*$2);
}
|TOK_IDENTIFIER TOK_LESS datatype TOK_GREATER identifier {
	$$ = new Node(ptDeclaration);
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
;

initializer:
expression /*{
	$$ = $1;
}*/
|TOK_NEW datatype TOK_LBRACKET TOK_INTVAL TOK_RBRACKET /*{
	
}*/
|TOK_LBRACE argument TOK_RBRACE
|TOK_NEW datatype TOK_LBRACKET TOK_RBRACKET TOK_LBRACE argument TOK_RBRACE
|TOK_NEW TOK_IDENTIFIER TOK_LPAREN argument TOK_RPAREN
|methodcall
|instancemethodcall
|TOK_NEW datastructure TOK_LPAREN argument TOK_RPAREN
;

initializationstatement:
declarator TOK_ASSIGN initializer {
	$$ = new Node(ptInitializationContainer);
	Node* _is = new Node(ptInitializationStatement);
	_is->attach_child(*$1);
	//_is->attach_child(*$3);
	_is->attach_child(*(new Node(ptEmpty, 0, 0, "initializer placeholder")));
	$$->attach_child(*_is);
}
;

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
TOK_FOR TOK_LPAREN forinit TOK_SEMI expression TOK_SEMI forupdate TOK_RPAREN TOK_LBRACE block TOK_RBRACE
;

enhancedfor:
TOK_FOR TOK_LPAREN datatype TOK_IDENTIFIER TOK_COLON TOK_IDENTIFIER TOK_RPAREN TOK_LBRACE block TOK_RBRACE
;

forinit:
declarationstatement
|expressionstatement
|initializationstatement
;

forupdate:
expressionstatement
|expressionstatement TOK_COMMA forupdate
;

ifstatement:
TOK_IF TOK_LPAREN expression TOK_RPAREN TOK_LBRACE block TOK_RBRACE
|TOK_IF TOK_LPAREN expression TOK_RPAREN statement 
;

ifelsestatement:
ifstatement TOK_ELSE TOK_LBRACE block TOK_RBRACE
|ifstatement TOK_ELSE statement 
;

/*lambda help?*/
switchstatement:
TOK_SWITCH TOK_LPAREN expression TOK_RPAREN TOK_LBRACE switchblock TOK_RBRACE
;

switchblock:
switchrules
|switchblockstates
;

switchrules:
switchrule
|switchrule switchrules
;

switchrule:
switchlabel TOK_LAMBDA expressionstatement TOK_SEMI
|switchlabel TOK_LAMBDA TOK_LBRACE block TOK_RBRACE
|switchlabel TOK_LAMBDA throwstate TOK_SEMI
;

switchblockstates:
switchblockstate
|switchblockstate switchblockstates
;
switchblockstate:
switchlabel TOK_COLON TOK_LBRACE block TOK_RBRACE
|switchlabel TOK_COLON block
;

switchlabel:
TOK_CASE case
|TOK_DEFAULT 
;

case:
expression 
|expression TOK_COMMA case
;

/*fix to catch multiple*/
trycatchblock:
TOK_TRY TOK_LBRACE block TOK_RBRACE TOK_CATCH TOK_LPAREN declarationstatement TOK_RPAREN 
TOK_LBRACE block TOK_RBRACE
|TOK_TRY TOK_LBRACE block TOK_RBRACE TOK_CATCH TOK_LPAREN declarationstatement TOK_RPAREN TOK_LBRACE block TOK_RBRACE TOK_FINALLY TOK_LBRACE block TOK_RBRACE
;

throwstate:
TOK_THROW TOK_NEW TOK_IDENTIFIER TOK_LPAREN argument TOK_RPAREN 
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
