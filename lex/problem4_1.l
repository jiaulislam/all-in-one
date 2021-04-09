%{
	#include<stdio.h>
%}
%%
[A-Z]*[a-z]*[0-9]*("ed"|"ED") {
	printf("%s\n", yytext);printf("MATCHING\n");
	}
(.*) {printf("%s\n", yytext);printf("NOT MATCHING\n");}
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