%{
#include<stdio.h>
%}
%token LETTER DIGIT
%%
S: S DIGIT|
	S LETTER|
	LETTER;
%%
void main()
{
	printf("Enter a Variable Name: ");
	yyparse();
	printf("\nValid Name\n");
}
void yyerror()
{
	printf("\nInvalid Name\n");
	exit(0);
}
