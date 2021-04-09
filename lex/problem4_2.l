%{
	#include<stdio.h>
%}
%%
(2|4|6|8)[0-9]* {printf("%s\n", yytext);printf("Accepted\n");}
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