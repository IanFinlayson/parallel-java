
// tokens for a sample 'Hello World' program
int tokens[] = {223, 240, 100, 304, 223, 238, 239, 100, 302, 100, 100, 300, 301,
    303, 304, 100, 308, 100, 308, 100, 302, 103, 303, 307, 305, 305, 0};

int yylex() {
    static int counter = 0;
    counter++;
    return tokens[counter - 1];
}

int main(){
	return yylex();
}
