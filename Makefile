parser: JavaGrammar.tab.cc lex.yy.c
	g++ JavaGrammar.tab.cc lex.yy.c -o parser

JavaGrammar.tab.cc: JavaGrammar.yy
	bison -dv JavaGrammar.yy

lex.yy.c: JavaLexer.l
	flex JavaLexer.l

clean:
	rm -f JavaGrammar.tab.cc lex.yy.c parser


