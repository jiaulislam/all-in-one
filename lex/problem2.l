%{
#include <string.h>
char s[10000];
%}

%%

[A-Za-z]+	{printf("%s", yytext) ;printf("\n%s",yytext+4);}
.

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
