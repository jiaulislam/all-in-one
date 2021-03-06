%{
#include <string.h>
char s[10000];
int i;
int last_digit_of_my_id = 3;
%}
%%
[a-zA-Z]*	{  
    int ctr = 0;
    printf("Input: %s\n", yytext);
	strcpy(s,yytext);
	for(i=0; i<strlen(s); i++)
	{
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || 
            s[i]=='u')
		    ctr++;
	}
	if (ctr){
    	printf("Output: %d %s\n", ctr, yytext+last_digit_of_my_id);
	}else{
    	printf("Output: %d\n", ctr);
	}
}
(.*)
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