%{
#include <string.h>
char s[10000];
int i;
int last_digit_of_my_id = 3;
%}
%%
[a-z]+	{  
    int ctr = 0;
    printf("%s\n", yytext);
	strcpy(s,yytext);
	for(i=0; i<strlen(s); i++)
	{
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || 
            s[i]=='u')
		    ctr++;
	}
    printf("%d %s\n", ctr, yytext+last_digit_of_my_id);
}
(.*) {printf("%s\n0", yytext);}
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