%{
#include<stdio.h>
int c=0;
%}
%%
[a-zA-Z][a-zA-Z0-9_]*	{c++; ECHO; printf("\n");}
.+	{}
"\n"	{}
%%
void main()
{
	yyin=fopen("input.txt","r");
	printf("\nValid Identifiers are:-\n");
	yylex();
	printf("\nNumber of Identifiers: %d\n",c);
}
