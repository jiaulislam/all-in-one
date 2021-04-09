%{
	#include<stdio.h>
%}
%%
(a|e|i|o|u|A|E|I|O|U)*[a-z]*[A-Z]*("D") {
	printf("%s\n", yytext);printf("Accepted\n");
	}
(.*) {printf("%s\n", yytext);printf("Not Accepted\n");}
%%

int yywrap()
{
	return 1;
}

int main()
{
	yylex();
	return 0;
}