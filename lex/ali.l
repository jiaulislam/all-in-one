%{
#include <string.h>
char s[10000];
int i;

%}
%%
[a-zA-Z]*	{  
    int ctr = 0;
    printf("Intput: %s\n", yytext);
	strcpy(s,yytext);
	for(i=0; i<strlen(s); i++)
	{
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || 
            s[i]=='u')
		    ctr++;
	}
	if (ctr){
    	printf("Output: %d %s\n", ctr, yytext+ctr);
	}else{
    	printf("Output: %d\n", ctr);
	}
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