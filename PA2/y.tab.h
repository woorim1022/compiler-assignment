/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INTEGER = 258,
    STRING = 259,
    ID = 260,
    STRUCT = 261,
    INT = 262,
    VOID = 263,
    CHAR = 264,
    FLOAT = 265,
    IF = 266,
    ELSE = 267,
    SWITCH = 268,
    CASE = 269,
    DEFAULT = 270,
    RETURN = 271,
    BREAK = 272,
    WHILE = 273,
    FOR = 274,
    app = 275,
    aapp = 276,
    sapp = 277,
    mapp = 278,
    dapp = 279,
    rapp = 280,
    aa = 281,
    ss = 282,
    mmm = 283,
    ddd = 284,
    rrr = 285,
    aaa = 286,
    sss = 287,
    lt = 288,
    gt = 289,
    le = 290,
    ge = 291,
    ee = 292,
    ne = 293,
    REAL = 294
  };
#endif
/* Tokens.  */
#define INTEGER 258
#define STRING 259
#define ID 260
#define STRUCT 261
#define INT 262
#define VOID 263
#define CHAR 264
#define FLOAT 265
#define IF 266
#define ELSE 267
#define SWITCH 268
#define CASE 269
#define DEFAULT 270
#define RETURN 271
#define BREAK 272
#define WHILE 273
#define FOR 274
#define app 275
#define aapp 276
#define sapp 277
#define mapp 278
#define dapp 279
#define rapp 280
#define aa 281
#define ss 282
#define mmm 283
#define ddd 284
#define rrr 285
#define aaa 286
#define sss 287
#define lt 288
#define gt 289
#define le 290
#define ge 291
#define ee 292
#define ne 293
#define REAL 294

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 7 "bar.y" /* yacc.c:1909  */

	int   ival;
	float rval;

#line 137 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
