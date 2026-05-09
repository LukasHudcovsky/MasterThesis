/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_BISON_PARSER_TAB_H_INCLUDED
# define YY_YY_BISON_PARSER_TAB_H_INCLUDED
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
    token1 = 258,
    token2 = 259,
    token3 = 260,
    token4 = 261,
    token5 = 262,
    token6 = 263,
    token7 = 264,
    token8 = 265,
    token9 = 266,
    token10 = 267,
    token11 = 268,
    token12 = 269,
    token13 = 270,
    token14 = 271,
    token15 = 272,
    token16 = 273,
    token17 = 274,
    token18 = 275,
    token19 = 276,
    token20 = 277,
    token21 = 278,
    token22 = 279,
    token23 = 280,
    token24 = 281,
    token25 = 282,
    token26 = 283,
    token27 = 284,
    token28 = 285,
    token29 = 286,
    token30 = 287,
    token31 = 288,
    token32 = 289,
    token33 = 290,
    token34 = 291,
    token35 = 292,
    token36 = 293,
    token37 = 294,
    token38 = 295,
    token39 = 296,
    token40 = 297,
    token41 = 298,
    token42 = 299,
    token43 = 300,
    token44 = 301,
    token45 = 302,
    token46 = 303,
    token47 = 304,
    token48 = 305,
    token49 = 306,
    token50 = 307,
    token51 = 308,
    token52 = 309,
    token53 = 310,
    token54 = 311
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_BISON_PARSER_TAB_H_INCLUDED  */
