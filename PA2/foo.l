%{
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "y.tab.h"
//int ival = 0;
//int rval = 0.0f;
//int INTEGER, TKEYWORD, ID, TCHARACTER, STRING;
//float REAL;
//int BREAK=20, CASE = 21, CHAR = 22, DEFAULT = 23, ELSE = 24, FLOAT = 25, FOR = 26, IF = 27, INT = 28, RETURN = 29, STRUCT = 30, SWITCH = 31, VOID = 32, WHILE = 33;
//int aaa = 0, sss = 1, mmm = 2, ddd = 3, rrr = 4, app = 5, lt = 6, gt = 7, ee = 8, ne = 9, le = 10, ge = 11, aa = 12, ss = 13, aapp = 14, sapp = 15, mapp = 16, dapp = 17, rapp = 18;
int octToDecimal(char* token);
int hexToDecimal(char* token);
int charToDecimal(char* token);
%}


NL		\n
WS		[ \t]+
LETTER		[a-zA-Z_]
NONZERO		[1-9]
DIGIT		[0-9]

aaa 		\+
sss 		\-
mmm		\*
ddd 		\/
rrr 		\%
app 		\=
lt 		\<
gt 		\>
ee 		\=\=
ne 		\!\=
le 		\<\=
ge 		\>\=
aa 		\+\+
ss 		\-\-
aapp 		\+\=
sapp 		\-\=
mapp 		\*\=
dapp 		\/\=
rapp 		\%\=


semicolon	;
coma		\,
largeopen	\[
largeclose	\]
smallopen	\(
smallclose	\)
middleopen	\{
middleclose	\}
colon		:
dot		\.
or		\|
and		\&

INTEGER		0|{NONZERO}{DIGIT}*
OCTAL		0[0-7]+
HEXA		0(x|X)[0-9A-Fa-f]+
FLOAT		{DIGIT}+\.{DIGIT}+|{DIGIT}+\.{DIGIT}+(E|e)(\+|\-)?{DIGIT}+
ID		{LETTER}({LETTER}|{DIGIT})*
CHARACTER	\'({LETTER}|{DIGIT}|\\[\'\"\?\\abfnrtv0]|[!#%\^&\*\(_\)\-\+=~\[\]\|;:\{\},\.<>\/])\'
STRING		\"([^\\\'\"]|\\[abfnrtv0\'\"\?])*\"
%%
{NL}		{}
{WS}		{}
break		{return BREAK;}
case		{return CASE;}
char		{return CHAR;}
default		{return DEFAULT;}
else		{return ELSE;}
float		{return FLOAT;}
for 		{return FOR;}
if		{return IF;}
int		{return INT;}
return		{return RETURN;}
struct		{return STRUCT;}
switch		{return SWITCH;}
void 		{return VOID;}
while		{return WHILE;}


{INTEGER}	{yylval.ival = atoi(yytext);	return (INTEGER);}
{OCTAL}		{yylval.ival = octToDecimal(yytext);	return (INTEGER);}
{HEXA}		{yylval.ival = hexToDecimal(yytext);	return (INTEGER);}
{FLOAT}		{yylval.rval = atof(yytext); return (REAL);}
{ID}		{return (ID);}

{STRING}	{return (STRING);}




{aaa} 		{return (aaa);}
{sss}		{return (sss);}
{mmm}		{return (mmm);}
{ddd}		{return (ddd);}
{rrr}		{return (rrr);}
{lt}		{return (lt);}
{gt}		{return (gt);}
{ee}		{return (ee);}
{ne}		{return (ne);}
{le}		{return (le);}
{ge}		{return (ge);}
{aa}		{return (aa);}
{ss}		{return (ss);}
{app}		{return (app);}
{aapp}		{return (aapp);}
{sapp}		{return (sapp);}
{mapp}		{return (mapp);}
{dapp}		{return (dapp);}
{rapp}		{return (rapp);}

{semicolon}       	{return yytext[0];}
{coma}		       	{return yytext[0];}
{largeopen}       	{return yytext[0];}
{largeclose}       	{return yytext[0];}
{smallopen}       	{return yytext[0];}
{smallclose}       	{return yytext[0];}
{middleopen}       	{return yytext[0];}
{middleclose}       	{return yytext[0];}
{colon}       		{return yytext[0];}
{dot}       		{return yytext[0];}
{or}       		{return yytext[0];}
{and}       		{return yytext[0];}



%%

int charToDecimal(char* token){
	if(*(token+1) == '\\'){
		switch(*(token+2)){
		case 'a':	return (int)'\a';
		case 'b':	return (int)'\b';
		case 'f':	return (int)'\f';
		case 'n':	return (int)'\n';
		case 'r':	return (int)'\r';
		case 't':	return (int)'\t';
		case 'v':	return (int)'\v';
		case '0':	return (int)'\0';
		default:	return (int)*(token+2);
		}
	}
	else			return (int)*(token+1); 
}

int octToDecimal(char* token){
	int d = 0, i = 0;
	for(i=0;*(token+i) != '\0';i++){
		d <<= 3;
		d += (int)(*(token+i) - '0');
	}
	return d;
}

int hexToDecimal(char* token){
	int d = 0, i = 0;
	for( i = 2; *(token+i) != '\0';i++){
		d <<= 4;
		if(*(token+i) >= '0' && *(token+i) <= '9')	d += (int)(*(token+i) - '0');
		else if(*(token+i) >= 'A' && *(token+i) <= 'F')	d += (int)(*(token+i) - 'A' + 10);
		else	d += (int)(*(token+i) - 'a' + 10);
	}
	return d;
}
// Define functions here if you declare the additional functions at the top. 
