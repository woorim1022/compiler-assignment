%{
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
enum tnumber {TEOF, TSPACE, TKEYWORD, TIDENTIFIER, TCHARACTER, TSTRING, TINTEGER, TREAL, TCOMMENT, TOPERATOR, TPUNCTUATION};
char *tokenType[] = {"Keyword", "Identifier", "Character constant", "String constant", "Integer constant", "Real constant", "Comment", "Operator", "Punctuation symbol"};
// You can declare additional global variables or functions here if you need.
int ll = 0, lp = 0, position = 0, lcount = 0;
unsigned int n;
int comment(char *s);
int notation(char *s);
%}
ws [ \t]+
LINE [\n]
KEYWORD break|case|char|default|else|float|for|if|int|return|struct|switch|void|while
ID [A-Za-z_][A-Za-z0-9_]*
STR \"([^\\\'\"]|\\[abfnrtv0\'\"\?])*\"
CHAR \'\\[abfnrtv0\'\"\?\\]\'|\'[A-Za-z0-9]\'|\'[!#%\^&\*_\(\)\-\+=~\[\]\|;:\{\},\.\<\>\/]\'
INT [1-9][0-9]*|0|0[0-7]+|0(x|X)[0-9A-Fa-f]+
FLOAT [0-9]+\.[0-9]+|[0-9]+\.[0-9]+(e|E)(\+|\-)?[0-9]+
COM \/\*([^\*]|\*+[^\*\/])*\*+\/|\/\/[^\n]*\n
OPR \+|\-|\*|\/|\%|\!|\=|\<|\>|\+\=|\-\=|\*\=|\/\=|\%\=|\=\=|\!\=|\<\=|\>\=|\<\<|\>\>|\&\&|\|\||\+\+|\-\-|\,
PS [\(\)\{\}\[\];:\.] 
%%
{ws} {return (TSPACE);}
{LINE} {ll++; lp = 0;}
{KEYWORD} {return (TKEYWORD);}
{ID} {return (TIDENTIFIER);}
{CHAR} {return (TCHARACTER);}
{STR} {return (TSTRING);}
{INT} {int h = notation(yytext); n = strtoul(yytext, NULL, h); return (TINTEGER);}
{FLOAT} {return (TREAL);}
{COM}   {position = lp; lcount = comment(yytext);return (TCOMMENT);}
{OPR} {return (TOPERATOR);}
{PS} {return (TPUNCTUATION);}
%%
int main(int argc, char *argv[]){
	enum tnumber tn;
	if(argc == 1) exit(0);
	yyin = fopen(argv[1], "r");
	while((tn = yylex()) != TEOF){
		switch(tn){
			case TSPACE:
				lp += yyleng;
				break;
			case TKEYWORD:
				printf("%-15s -> %18s, %10d, %5d, %5d\n", yytext, tokenType[tn-2], 0, ll, lp);
				lp += yyleng;
				break;
			case TIDENTIFIER:
				printf("%-15s -> %18s, %10d, %5d, %5d\n", yytext, tokenType[tn-2], 0, ll, lp);
				lp += yyleng;				
				break;
			case TCHARACTER:
				printf("%-15s -> %18s, %10d, %5d, %5d\n", yytext, tokenType[tn-2], (int)yytext[1], ll, lp);
				lp += yyleng;
				break;
			case TSTRING:
				printf("%-15s -> %18s, %10d, %5d, %5d\n", yytext, tokenType[tn-2], 0, ll, lp);
				lp += yyleng;
				break;
			case TINTEGER:
				printf("%-15s -> %18s, %10d, %5d, %5d\n", yytext, tokenType[tn-2], n, ll, lp);
				lp += yyleng;
				break;
			case TREAL:
				printf("%-15s -> %18s, %10.2f, %5d, %5d\n", yytext, tokenType[tn-2], atof(yytext), ll, lp);
				lp += yyleng;
				break;
			case TCOMMENT:
				printf("%-15s -> %18s, %10d, %5d, %5d\n", yytext, tokenType[tn-2], 0, ll, position);
				ll = ll  + lcount;
				break;
			case TOPERATOR:
				printf("%-15s -> %18s, %10d, %5d, %5d\n", yytext, tokenType[tn-2], 0, ll, lp);
				lp += yyleng;
				break;
			case TPUNCTUATION:
				printf("%-15s -> %18s, %10d, %5d, %5d\n", yytext, tokenType[tn-2], 0, ll, lp);
				lp += yyleng;
				break;
			default:
				lp += yyleng;
				break;
		}
	}				  				    
	return 0;
}
int notation(char *s){
	if(s[0] == '0'){
		if(s[1] == 'x' || s[1] == 'X')
			return 16;
	
		else
			return 8;
	}
	else	
		return 10;
}

int comment(char *s){
	int count, i = 0, j, line = 0;
	if(s[1] == '*'){
		for(i; s[i] != '\0'; i++){
			if(s[i] == '\n')
			{
                       		 count = 0;
				 for(j = i+1; s[j] != '\0'; j++)
				{
					s[j-1] = s[j];
					count++;
				}	
				s[j-1] = '\0';
				line++;
				lp = count;
		 	}
		}
	 
	}
	if(s[1] == '/'){
		while(s[i] != '\n')
			i++;
		s[i] ='\0';
		line = 1;
		lp =  0;    
	}
        return line;
}
// Define functions here if you declare the additional functions at the top. 
