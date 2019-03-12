%{
#include <stdio.h>
int szam = 0;
%}

%option noyywrap

%%

[:digit:]+ {szam++;}
[a-zA-Z] [a-zA-Z0-9]* {}

%%

int main(void)
{
	yylex();
	printf("%d valós szám: \n", szam);
	return 0;
}
