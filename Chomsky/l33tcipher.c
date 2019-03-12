%{
	#include <stdio.h>
	#include <ctype.h>
	#include <string.h>
	#include <time.h>
	#include <stdlib.h>

	int x=0;

	typedef struct
	{
		char c;
		char *d[7];
	} cipher;

	cipher L337[] = 
	{
		{'a',{"4","/-\\","a","/\\","a","a","a"}},
		{'b',{"!3","|3","8","ß","b","b","b"}},
		{'c',{"[","<","{","c","c","c","c"}},
		{'d',{"|}","d","|>","T)","d","d","d"}},
		{'e',{"3","&","e","€","e","e","e"}},
		{'f',{"|=","|#","/=","f","f","f","f"}},
		{'g',{"&","6","g","(_+","g","g","g"}},
		{'h',{"|-|",")-(","[-]","h","h","h","h"}},
		{'i',{"1","[]","!","|","i","i","i"}},
		{'j',{"_|",";","1","j","j","j","j"}},
		{'k',{">|","1<","|c","k","k","k","k"}},
		{'l',{"1","|_","l","|","l","l","l"}},
		{'m',{"/\\/\\","/V\\","[V]","m","m","m","m"}},
		{'n',{"</>","n","|\\|","^/","n","n","n"}},
		{'o',{"0","Q","o","<>","o","o","o"}},
		{'p',{"|*","|>","p","|7","p","p","p"}},
		{'q',{"(_,)","q","9","&","q","q","q"}},
		{'r',{"I2","|?","Iz","r","r","r","r"}},
		{'s',{"s","5","z","§","s","s","s"}},
		{'t',{"4","-|-","7","t","t","t","t"}},
		{'u',{"(_)","u","v","L|","u","u","u"}},
		{'v',{"v","\\/","|/","\\|","v","v","v"}},
		{'w',{"\\/\\/","w","\\x/","\\\\//\\\\//","w","w","w"}},
		{'x',{"4","}{","><","x","x","x","x"}},
		{'y',{"y","j","`/","\\|/","y","y","y"}},
		{'z',{"2","-/_","z",">_","z","z","z"}},
		{'1',{"I","1","L","I"}},
		{'2',{"R","2","2","Z"}},
		{'3',{"E","3","E","3"}},
		{'4',{"4","A","A","4"}},
		{'5',{"S","5","S","5"}},
		{'6',{"b","6","G","6"}},
		{'7',{"7","7","L","T"}},
		{'8',{"8","B","8","B"}},
		{'9',{"g","q","9","9"}},
		{'0',{"0","()","[]","0"}},
	};
%}

%option noyywrap

%%
\n 	{
		printf("\n");
	}
. 	{
		srand(time(0)+x++);

   		char c = tolower(*yytext);

   		int i=0;

   		while(i<36 && L337[i++].c!=c);

   		if(i<36)
   		{
   			char *s=L337[i-1].d[rand()%7];
   			printf("%s",s);
   		}
		else 
		{
			printf("%c",c);
		}
	}
%%

int main()
{
	yylex();
	return 0;
}
