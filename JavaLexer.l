/*test lex file*/

%{
	#include <iostream>
	#include <string.h>
	#include "JavaGrammar.tab.hh"
	
	extern int yylex();
%}

DIGIT		[0-9]
ID			[a-zA-Z_$][a-zA-Z_0-9$]*

%%

"abstract"				{ return TOK_ABSTRACT; }
"continue"				{ return TOK_CONTINUE; }
"for"					{ return TOK_FOR; }
"new"					{ return TOK_NEW; }
"switch"				{ return TOK_SWITCH; }
"assert"				{ return TOK_ASSERT; }
"default"				{ return TOK_DEFAULT; }
"goto"					{ return TOK_GOTO; }
"package"				{ return TOK_PACKAGE; }
"synchronized"			{ return TOK_SYNCHRONIZED; }
"boolean"				{ return TOK_BOOLEAN; }
"do"					{ return TOK_DO; }
"if"					{ return TOK_IF; }
"private"				{ return TOK_PRIVATE; }
"this"					{ return TOK_THIS; }
"break"					{ return TOK_BREAK; }
"double"				{ return TOK_DOUBLE; }
"implements"			{ return TOK_IMPLEMENTS; }
"protected"				{ return TOK_PROTECTED; }
"throws"				{ return TOK_THROWS; }
"throw"					{ return TOK_THROW; }
"byte"					{ return TOK_BYTE; }
"else"					{ return TOK_ELSE; }
"import"				{ return TOK_IMPORT; }
"public"				{ return TOK_PUBLIC; }
"case"					{ return TOK_CASE; }
"enum"					{ return TOK_ENUM; }
"instanceof"			{ return TOK_INSTANCEOF; }
"return"				{ return TOK_RETURN; }
"transient"				{ return TOK_TRANSIENT; }
"catch"					{ return TOK_CATCH; }
"extends"				{ return TOK_EXTENDS; }
"int"					{ return TOK_INT; }
"short"					{ return TOK_SHORT; }
"try"					{ return TOK_TRY; }
"char"					{ return TOK_CHAR; }
"final"					{ return TOK_FINAL; }
"interface"				{ return TOK_INTERFACE; }
"static"				{ return TOK_STATIC; }
"void"					{ return TOK_VOID; }
"class"					{ return TOK_CLASS; }
"finally"				{ return TOK_FINALLY; }
"long"					{ return TOK_LONG; }
"strictfp"				{ return TOK_STRICTFP; }
"volatile"				{ return TOK_VOLATILE; }
"const"					{ return TOK_CONST; }
"float"					{ return TOK_FLOAT; }
"native"				{ return TOK_NATIVE; }
"super"					{ return TOK_SUPER; }
"while"					{ return TOK_WHILE; }


"("						{ return TOK_LPAREN; }
")"						{ return TOK_RPAREN; }
"["						{ return TOK_LBRACKET; }
"]"						{ return TOK_RBRACKET; }
"{"						{ return TOK_LBRACE; }
"}"						{ return TOK_RBRACE; }
","						{ return TOK_COMMA; }
";"						{ return TOK_SEMI; }
"."						{ return TOK_DOT; }
"="						{ return TOK_ASSIGN; }
"%="					{ return TOK_MODASSIGN; }
"/="					{ return TOK_DIVASSIGN; }
"*="					{ return TOK_MULASSIGN; }
"+="					{ return TOK_ADDASSIGN; }
"-="					{ return TOK_SUBASSIGN; }
":"						{ return TOK_COLON; }
"?"						{ return TOK_QUESTION; }
"||"					{ return TOK_OR; }
"&&"					{ return TOK_AND; }
"|"						{ return TOK_BITOR; }
"&"						{ return TOK_BITAND; }
"^"						{ return TOK_BITXOR; }
"=="					{ return TOK_EQUAL; }
"!="					{ return TOK_NEQUAL; }
"<"						{ return TOK_LESS; }
">"						{ return TOK_GREATER; }
"<="					{ return TOK_LEQUAL; }
">="					{ return TOK_GEQUAL; }
"<<"					{ return TOK_LSHIFT; }
">>"					{ return TOK_RSHIFT; }
">>>"					{ return TOK_RSHIFTZ; }
"+"						{ return TOK_ADD; }
"-"						{ return TOK_SUB; }
"%"						{ return TOK_MOD; }
"/"						{ return TOK_DIV; }
"*"						{ return TOK_MUL; }
"~"						{ return TOK_BITNEG; }
"!"						{ return TOK_NEG; }
"--"					{ return TOK_SUBSUB; }
"++"					{ return TOK_ADDADD; }

{DIGIT}+				{ yylval.iVal = atoi(yytext); return TOK_INTVAL; }
{DIGIT}+"."{DIGIT}*		{ yylval.fVal = atof(yytext); return TOK_FLOATVAL; }
"\'".?"\'"				{ yylval.cVal = yytext[0]; return TOK_CHARVAL; }
"\"".*"\""				{	std::string _st (yytext);
							yylval.stVal = &_st; 
							return TOK_STRINGVAL; }
"true"|"false"			{ yylval.bVal = strcmp(yytext, "true") == 0; return TOK_BOOLVAL; }
"null"					{ return TOK_NULLVAL; }
{ID}					{	std::string _st (yytext);
							yylval.stVal = &_st; 
							return TOK_IDENTIFIER; }

[ \t\n]+				{ ;/*eat whitespace*/ }
"//".*$					{ ;/*eat one line comments*/ }
"/*"(.|\n)*"*/"			{ ;/*probably eats multiline comments???*/ }


%%

/* program for testing */
/*
int main(int argc, char **argv) {
	++argv, --argc;
	if(argc > 0){
		yyin = fopen(argv[0], "r");
	}else{
		yyin = stdin;
	}
	while(yylex());
}
*/
/* 
temporary yywrap function 
I don't really know why this has to exist lol
*/
int yywrap(void){
	return 1;
}
