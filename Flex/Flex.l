%{
#include <stdio.h>
#include<string.h>
int counter = 0;
char what[2000];

extern FILE *yyin;
extern FILE *yyout;

%}

HEADER "!BRINGING"[ ]+[^\n]+[.h][ ]*
REALNUMBER	[-]?[0-9][0-9]*[.]?[0-9]*
NUMBER [0-9]+
VARIABLE [a-zA-Z_][a-zA-Z_0-9]*
CHARACTER .
BINARY_OPERATOR "+"|"/"|"-"|"*"|"%"
UNARY_OPERATOR "++"|"--"
LOGICAL "<"|">"|"<="|">="|"=="|"!="
TYPE "InTe"|"void"|"chr"|"Float"

%%
{HEADER} {
	printf("Header included\n");
}
"Main()" {
	counter++;
	what[counter] = 'M';
	printf("Main Function %d\n",counter);
}
"	" {}
"InTe"[ ]+{VARIABLE}[ ]*[=][ ]*{NUMBER} {
	printf("Variable declared : %s\n",yytext);
}
"Chr"[ ]+{VARIABLE}[ ]*[=][ ]*[']{CHARACTER}[']  {
	printf("Character declared : %s\n",yytext);
 }

"Float"[ ]+{VARIABLE}[ ]*[=][ ]*{REALNUMBER}  {
	printf("Float declared : %s\n",yytext);
 }

 {TYPE}[ ]+{VARIABLE}[ ]*"(".*")" {
	counter++;
	what[counter] = 'F';
	printf("Function Definition Started\n");
 }

 ``.* {
	printf("Single line Comment : %s\n",yytext);
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
        printf("Multiple line comment \n");
    } else {
        goto label;
    }
}
{VARIABLE}[ ]*[=][ ]*"Sine("{REALNUMBER}")" {
	printf("Sine function\n");
 }
{VARIABLE}[ ]*[=][ ]*"Cosine("{REALNUMBER}")" {
	printf("Cosine function\n");
}
{VARIABLE}[ ]*[=][ ]*"Tangent("{REALNUMBER}")" {
	printf("Tangent function\n");
}

{VARIABLE}[ ]*[=][ ]*{REALNUMBER}  {
	printf("Assignment \n");
}

"Display("{VARIABLE}")" {
	printf("Print %s\n",yytext);
}

{VARIABLE}[ ]*[=][ ]*{VARIABLE}[ ]*{BINARY_OPERATOR}[ ]*{VARIABLE} {
	printf("Operation : %s\n",yytext);
}

{UNARY_OPERATOR}{VARIABLE} {
	printf("UNARY : %s\n",yytext);
}
{VARIABLE}{UNARY_OPERATOR} {
	printf("UNARY : %s\n",yytext);
}

"Random("{NUMBER}","{NUMBER}")" {
	printf("Pick a Random Number in a given range\n");
}

"{" {
	printf("Second bracket begining\n");
}
"}" {
	if(what[counter] == 'M')
		printf("Main ended %d",counter);
	else if(what[counter] == 'I')
		printf("If ended %d",counter);
	else if(what[counter] == 'L')
		printf("Loop ended %d",counter);
	else if(what[counter] == 'S')
		printf("Switch ended %d",counter);
	else if(what[counter] == 'F')
		printf("User defined function scope ended");
	counter--;
	printf("\nSecond bracket closing\n");
}

"whenever" {
	counter++;
	what[counter] = 'I';
	printf("If started %d\n",counter);
}

"loop"[ ]+({VARIABLE}|{REALNUMBER})[ ]+"to"[ ]+({VARIABLE}|{REALNUMBER})[ ]+{UNARY_OPERATOR}({VARIABLE}|{REALNUMBER}) {
	counter++;
	what[counter] = 'L';
	printf("Loop %d\n",counter);
}

[(]({VARIABLE}|{REALNUMBER})[ ]*{LOGICAL}[ ]*({VARIABLE}|{REALNUMBER})[)] {
	printf("Condition\n");
}

"match"[ ]+({VARIABLE}|{REALNUMBER})[ ]* {
	counter++;
	what[counter] = 'S';
	printf("Switch statement \n");
}
"when"[ ]+({VARIABLE}|{REALNUMBER})[:].* {
	printf("Case statement \n");
}

"Is_Prime("[ ]*({VARIABLE}|{NUMBER})[ ]*")" {
	printf("Prime Checker Function\n");
}

"Max"[ ]*"("[ ]*({VARIABLE}|{NUMBER})[ ]*[,][ ]*({VARIABLE}|{NUMBER})[ ]*")" {
	printf("Maximum function");
}

"Min"[ ]*"("[ ]*({VARIABLE}|{NUMBER})[ ]*[,][ ]*({VARIABLE}|{NUMBER})[ ]*")" {
	printf("Minimum function");
}

. printf("Error in %s\n",yytext);
\n
%%

int yywrap()
{
	return 1;
}
int main()
{
	yyin = freopen("Language.txt","r",stdin);
	yyout = freopen("Out","w",stdout);
	yylex();
	return 0;
}
