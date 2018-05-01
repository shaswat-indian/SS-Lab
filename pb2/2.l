%{
#include<stdio.h>
int c=0;
%}
%%
"/*".+"*/"|"//".+"\n"	{c++; printf(" ");}
%%
int main()
{
	yyin=fopen("input.txt","r");
	printf("Program without Comments:-\n");
	yylex();
	printf("Comments: %d\n",c);
	return 0;
}

