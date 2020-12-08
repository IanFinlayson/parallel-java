%{
	#include <cstdlib>
	#include <fstream>
	#include "Node/Node.hpp"
	#include "nodeTypes.h"
	#include "expandParallel.cpp"
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
	

	/*// root is always a package (but the package can be no package)
	root = $1;
	Node* _im = new Node(ptImports); //import section node
	_im->attach_child(*$2);
	//right child of root is the import section
	root->attach_child(*_im);
	//right child of import section is the rest of the program starting with a class definition
	_im->attach_child(*$3);*/
}
;

packagedec:
%empty {
}
|TOK_PACKAGE packagename TOK_SEMI {
}
;

importstatements:
%empty {
}
|importstatement importstatements {
}
;

importstatement:
TOK_IMPORT packagename TOK_SEMI {
}
|TOK_IMPORT packagename TOK_DOT TOK_MUL TOK_SEMI {
}
;

packagename:
TOK_IDENTIFIER {
}
|packagename TOK_DOT TOK_IDENTIFIER {
}
;

typedec:
interfacedec {
}
|classdec {
}
|classdec typedec {
}
|interfacedec typedec {
}
;

interfacedec:
mod TOK_INTERFACE TOK_IDENTIFIER TOK_LBRACE interfacebody TOK_RBRACE {
}
|mod TOK_INTERFACE TOK_IDENTIFIER TOK_EXTENDS TOK_IDENTIFIER TOK_LBRACE interfacebody TOK_RBRACE {
}
;

classdec:
mod TOK_CLASS TOK_IDENTIFIER TOK_LBRACE classbody TOK_RBRACE {
}
|mod TOK_CLASS TOK_IDENTIFIER extendsorimplements TOK_LBRACE classbody TOK_RBRACE {
}
;

extendsorimplements:
TOK_EXTENDS TOK_IDENTIFIER {
}
|TOK_IMPLEMENTS basicidentifier {
}
|TOK_EXTENDS TOK_IDENTIFIER TOK_IMPLEMENTS basicidentifier {
}
;

basicidentifier:
TOK_IDENTIFIER {
}
|TOK_IDENTIFIER TOK_COMMA basicidentifier {
}
;


mod:
%empty {
}
|TOK_FINAL mod {
}
|TOK_ABSTRACT mod {
}
|TOK_STRICTFP mod {
}
|TOK_STATIC mod {
}
|TOK_NATIVE mod {
}
|TOK_SYNCHRONIZED mod {
}
|TOK_TRANSIENT mod {
}
|TOK_VOLATILE mod {
}
|TOK_PUBLIC mod {
}
|TOK_PRIVATE mod {
}
|TOK_PROTECTED mod {
}
|TOK_DEFAULT mod {
}
;

classbody:
%empty {
}
|mod declarationstatement TOK_SEMI classbody {
}
|mod initializationstatement TOK_SEMI classbody {
}
|method classbody {
}
|classdec classbody {
}
|interfacedec classbody {
}
;

interfacebody:
%empty {
}
|mod initializationstatement TOK_SEMI interfacebody {
}
|method interfacebody {
}
|classdec interfacebody {
}
|interfacedec interfacebody {
}
;

abstractmethod:
datatype TOK_IDENTIFIER TOK_LPAREN formalparameters TOK_RPAREN throwsclause TOK_SEMI {
}
|TOK_VOID TOK_IDENTIFIER TOK_LPAREN formalparameters TOK_RPAREN throwsclause TOK_SEMI {
}
;

method:
mod datatype TOK_IDENTIFIER TOK_LPAREN formalparameters TOK_RPAREN throwsclause TOK_LBRACE block TOK_RBRACE {
}
|mod TOK_VOID TOK_IDENTIFIER TOK_LPAREN formalparameters TOK_RPAREN throwsclause TOK_LBRACE block TOK_RBRACE {
}
|mod TOK_IDENTIFIER TOK_LPAREN formalparameters TOK_RPAREN throwsclause TOK_LBRACE block TOK_RBRACE {
}
|mod abstractmethod {
}
;

parallelblock:
TOK_IDENTIFIER TOK_LBRACE block TOK_RBRACE {
}
;

throwsclause:
%empty {
}
|TOK_THROWS basicidentifier {
}
;

formalparameters:
formalparameter {
}
|formalparameter TOK_COMMA formalparameters{
}
;

formalparameter:
%empty {
}
|declarator {
}
;

argument:
%empty {
}
|expression {
}
|expressionstatement {
}
|expression TOK_COMMA argument {
}
|expressionstatement TOK_COMMA argument {
}
;

datatype:
TOK_INT {
}
|TOK_BOOLEAN {
}
|TOK_FLOAT {
}
|TOK_IDENTIFIER {
}
|TOK_DOUBLE {
}
;

block:
%empty {
}
|statement block {
}
|parallelblock block {
}
;

statement:
expressionstatement TOK_SEMI {
}
|controlflowstatement {
}
|declarationstatement TOK_SEMI {
}
|initializationstatement TOK_SEMI {
}
|trycatchblock {
}
|throwstate TOK_SEMI {
}
;

expressionstatement:
instancemethodcall {
}
|methodcall {
}
|postdecrement {
}
|predecrement {
}
|assignmentstatement {
}
;

expression:
TOK_LPAREN expression TOK_RPAREN {
}
|TOK_INTVAL {
}
|TOK_FLOATVAL {
}
|TOK_BOOLVAL {
}
|TOK_STRINGVAL {
}
|TOK_IDENTIFIER {
}
|fieldreference {
}
|TOK_IDENTIFIER TOK_LBRACKET argument TOK_RBRACKET {
}
|TOK_SUB expression {
}
|TOK_BITNEG expression {
}
|expression TOK_ADD expression {
}
|expression TOK_SUB expression {
}
|expression TOK_MOD expression {
}
|expression TOK_DIV expression {
}
|expression TOK_MUL expression {
}
|expression TOK_EQUAL expression {
}
|expression TOK_NEQUAL expression {
}
|expression TOK_GREATER expression {
}
|expression TOK_LESS expression {
}
|expression TOK_GEQUAL expression {
}
|expression TOK_LEQUAL expression {
}
|expression TOK_AND expression {
}
|expression TOK_OR expression {
}
|expression TOK_BITOR expression {
}
|expression TOK_BITAND expression {
}
|expression TOK_BITXOR expression {
}
|expression TOK_LSHIFT expression {
}
|expression TOK_RSHIFT expression {
}
|expression TOK_RSHIFTZ expression {
}
;

assignmentstatement:
TOK_IDENTIFIER TOK_MODASSIGN expression {
}
|TOK_IDENTIFIER TOK_DIVASSIGN expression {
}
|TOK_IDENTIFIER TOK_MULASSIGN expression {
}
|TOK_IDENTIFIER TOK_ADDASSIGN expression {
}
|TOK_IDENTIFIER TOK_SUBASSIGN expression {
}
|TOK_IDENTIFIER TOK_ASSIGN initializer {
}
|TOK_IDENTIFIER TOK_ASSIGN assignmentstatement {
}
;

controlflowstatement:
whileloop {
}
|dowhileloop {
}
|forloop {
}
|enhancedfor {
}
|ifstatement {
}
|ifelsestatement {
}
|switchstatement {
}
|TOK_BREAK TOK_SEMI {
}
|TOK_CONTINUE TOK_SEMI {
}
|TOK_RETURN expression TOK_SEMI {
}
|TOK_YIELD expression TOK_SEMI {
}
;

identifier:
TOK_IDENTIFIER {
}
|TOK_IDENTIFIER TOK_LBRACKET TOK_RBRACKET {
}
|TOK_LBRACKET TOK_RBRACKET TOK_IDENTIFIER {
}
|TOK_IDENTIFIER TOK_LBRACKET TOK_RBRACKET TOK_COMMA identifier {
}
|TOK_LBRACKET TOK_RBRACKET TOK_IDENTIFIER TOK_COMMA identifier {
}
|TOK_IDENTIFIER TOK_COMMA identifier {
}
;

declarationstatement:
datatype identifier {
}
|TOK_IDENTIFIER TOK_LESS datatype TOK_GREATER identifier {
}
;

declarator:
datatype TOK_IDENTIFIER {
}
|datatype TOK_LBRACKET TOK_RBRACKET TOK_IDENTIFIER {
}
|datatype TOK_IDENTIFIER TOK_LBRACKET TOK_RBRACKET {
}
|TOK_IDENTIFIER TOK_LESS datatype TOK_GREATER TOK_IDENTIFIER {
}
|fieldreference {
}
;

initializer:
expression {
}
|TOK_NEW datatype TOK_LBRACKET TOK_INTVAL TOK_RBRACKET {
}
|TOK_LBRACE argument TOK_RBRACE {
}
|TOK_NEW datatype TOK_LBRACKET TOK_RBRACKET TOK_LBRACE argument TOK_RBRACE {
}
|TOK_NEW TOK_IDENTIFIER TOK_LPAREN argument TOK_RPAREN {
}
|TOK_NEW TOK_IDENTIFIER TOK_LPAREN argument TOK_RPAREN TOK_LBRACE classbody TOK_RBRACE {
}
|methodcall {
}
|instancemethodcall {
}
|TOK_NEW datastructure TOK_LPAREN argument TOK_RPAREN {
}
;

initializationstatement:
declarator TOK_ASSIGN initializer {
}
;

datastructure:
TOK_IDENTIFIER TOK_LESS datatype TOK_GREATER {
}
|TOK_IDENTIFIER TOK_LESS TOK_GREATER {
}
;

whileloop:
TOK_WHILE TOK_LPAREN expression TOK_RPAREN TOK_LBRACE block TOK_RBRACE {
}
;

dowhileloop:
TOK_DO TOK_LBRACE block TOK_RBRACE TOK_WHILE TOK_LPAREN expression TOK_RPAREN TOK_SEMI {
}
;

forloop:
TOK_FOR TOK_LPAREN forinit TOK_SEMI expression TOK_SEMI forupdate TOK_RPAREN TOK_LBRACE block TOK_RBRACE {
}
;

enhancedfor:
TOK_FOR TOK_LPAREN datatype TOK_IDENTIFIER TOK_COLON TOK_IDENTIFIER TOK_RPAREN TOK_LBRACE block TOK_RBRACE {
}
;

forinit:
declarationstatement {
}
|expressionstatement {
}
|initializationstatement {
}
;

forupdate:
expressionstatement {
}
|expressionstatement TOK_COMMA forupdate {
}
;

ifstatement:
TOK_IF TOK_LPAREN expression TOK_RPAREN TOK_LBRACE block TOK_RBRACE {
}
|TOK_IF TOK_LPAREN expression TOK_RPAREN statement {
}
;

ifelsestatement:
ifstatement TOK_ELSE TOK_LBRACE block TOK_RBRACE {
}
|ifstatement TOK_ELSE statement {
}
;

/*lambda help?*/
switchstatement:
TOK_SWITCH TOK_LPAREN expression TOK_RPAREN TOK_LBRACE switchblock TOK_RBRACE {
}
;

switchblock:
switchrules {
}
|switchblockstates {
}
;

switchrules:
switchrule {
}
|switchrule switchrules {
}
;

switchrule:
switchlabel TOK_LAMBDA expressionstatement TOK_SEMI {
}
|switchlabel TOK_LAMBDA expression TOK_SEMI {
}
|switchlabel TOK_LAMBDA TOK_LBRACE block TOK_RBRACE {
}
|switchlabel TOK_LAMBDA throwstate TOK_SEMI {
}
;

switchblockstates:
switchblockstate {
}
|switchblockstate switchblockstates {
}
;

switchblockstate:
switchlabel TOK_COLON TOK_LBRACE block TOK_RBRACE {
}
|switchlabel TOK_COLON block {
}
;

switchlabel:
TOK_CASE case {
}
|TOK_DEFAULT {
}
;

case:
expression {
}
|expression TOK_COMMA case {
}
;

/*fix to catch multiple*/
trycatchblock:
TOK_TRY TOK_LBRACE block TOK_RBRACE TOK_CATCH TOK_LPAREN exceptionname TOK_IDENTIFIER TOK_RPAREN TOK_LBRACE block TOK_RBRACE {
}
|TOK_TRY TOK_LBRACE block TOK_RBRACE TOK_CATCH TOK_LPAREN exceptionname TOK_IDENTIFIER  TOK_RPAREN TOK_LBRACE block TOK_RBRACE TOK_FINALLY TOK_LBRACE block TOK_RBRACE {
}
;

exceptionname:
TOK_IDENTIFIER {
}
|TOK_IDENTIFIER TOK_BITOR exceptionname {
}
;


throwstate:
TOK_THROW TOK_NEW TOK_IDENTIFIER TOK_LPAREN argument TOK_RPAREN {
}
;

postdecrement:
TOK_IDENTIFIER TOK_ADDADD {
}
|TOK_IDENTIFIER TOK_SUBSUB {
}
;

predecrement:
TOK_ADDADD TOK_IDENTIFIER {
}
|TOK_SUBSUB TOK_IDENTIFIER {
}
;

instancemethodcall:
fieldreference TOK_DOT methodcall {
}
|TOK_IDENTIFIER TOK_DOT methodcall {
}
;

methodcall:
TOK_IDENTIFIER TOK_LPAREN argument TOK_RPAREN {
}
|methodcall TOK_DOT TOK_IDENTIFIER TOK_LPAREN argument TOK_RPAREN {
}
;

fieldreference:
TOK_IDENTIFIER TOK_DOT TOK_IDENTIFIER {
}
|fieldreference TOK_DOT TOK_IDENTIFIER /*supposed to be field access??*/{
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