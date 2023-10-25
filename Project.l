%{
    #include<stdio.h>
    #include<string.h>
	#include<stdlib.h>
	#include "project.tab.h"

	extern char* strdup(const char*);
	void yyerror(char *s);
%}

HEADER "!BRINGING"[ ]+[^\n]+[.h][ ]*
ID	[a-zA-Z_][a-zA-Z_0-9]*
NUMBER	[-]?[0-9][0-9]*[.]?[0-9]*

%%

``.* {
	printf("\nSingle line Comment : %s\n",yytext);
 }

"`!" {
    char c,s[500],z = 0;
    label:
        while(c = input() != '!')
		{
			//printf("%d\n",c);
			s[z++] = c;
		}
    if(c = input() == '`') {
		s[z] = '\0';
        printf("\nMultiple line comment \n");
    } else {
        goto label;
    }
	}

[ \t]+
"Main()" {return(MAIN);}
"InTe"	{return(INT);}
"Chr"	{return(CHAR);}
"Float"	{return(FLOAT);}
"match"	{return(SWITCH);}
"Power"	{return(POW);}
"Random" {return(RANDOM);}
"take"	{return(SCAN);}
"until" {return(WHILE);}
"sin" {return(SIN);}
"cos" {return(COS);}
"tan" {return(TAN);}
"log10" {return(LOG10);}
"Factorial"	 {return(FACTORIAL);}
"IS_Prime"	{return(ISPRIME);}
"Display"	{return(OUTPUT);}
"when"	{return(CASE);}
"jar_keu_nai"	{return(DEFAULT);}
"if"	{return(IF);}
"elif"	{return(ELIF);}
"nothingmatches"	{return(ELSE);}
"loop"	{return(REPEAT);}
"to"	{return(TO);}
"++"	{return(INC);}
"--"	{return(DEC);}
"Max"	{return(MAX);}
"Min"	{return(MIN);}
">"		{return(GT);}
">="	{return(GOE);}
"<"		{return(LT);}
"<="	{return(LOE);}
"+"		{return(PLUS);}
"-"		{return(MINUS);}
"*"		{return(MULTI);}
"/"		{return(DIVI);}
"=="	{return(EQUALS);}
"!="	{return(NOTEQUAL);}

{HEADER}	{printf("Header File\n");}
{ID}	{yylval.varString = strdup(yytext); return(ID);}
{NUMBER}	{	int len = strlen(yytext);
				int i = 0;
			while(i<len){
				if(yytext[i]=='.'){
					yylval.var = atof(yytext); 
					return(NUM);
				}
				i++;
			}
			yylval.var = atoi(yytext); 
			return(NUM);
		}
[=,;{}()_^]	{yylval.varString = strdup(yytext); return *yytext;}
.		{printf("\nError in (l file): %s\n",yytext);}
[\n]	{}

%% 

int yywrap(void){
	return 1;
}