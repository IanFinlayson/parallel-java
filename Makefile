parser: JavaGrammar.tab.c lex.yy.c
	g++ JavaGrammar.tab.c lex.yy.c -o parser

JavaGrammar.tab.c: JavaGrammar.y
	bison -d JavaGrammar.y

lex.yy.c: JavaLexer.l
	flex JavaLexer.l

clean:
	rm -f JavaGrammar.tab.c lex.yy.c parser


