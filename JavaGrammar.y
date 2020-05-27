%{
	#include <cstdlib>
	int yylex();
	void yyerror (char const *error);
	%require "3.2"
	%language "c++"
	using namespace std;
%}

%define api.value.type {variant}
%token TOK_PUBLIC
%token <string> TOK_CLASS 
%token <string> TOK_IDENTIFIER
%token TOK_LBRACE
%token TOK_RBRACE
%token TOK_STATIC
%token TOK_VOID
%token TOK_LPAREN
%token TOK_RPAREN
%token TOK_LBRACKET
%token TOK_RBRACKET
%token TOK_DOT
%token <string> TOK_STRINGVAL
%token <int> TOK_INTVAL
%token TOK_SEMI
%token <boolean> TOK_BOOLEANVAL
%token TOK_ADD
%token TOK_BREAK
%token TOK_CASE
%token TOK_COLON
%token TOK_COMMA
%token <double>TOK_DOUBLEVAL
%token TOK_EQUAL
%token <float>TOK_FLOATVAL
%token <long>TOK_LONGVAL
%token TOK_SWITCH
%token TOK_WHILE
%token TOK_INT
%token TOK_STRING
%token TOK_LONG
%token TOK_DOUBLE
%token TOK_BOOLEAN
%token TOK_FLOAT
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

