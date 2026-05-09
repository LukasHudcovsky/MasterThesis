%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int yylex(void);
void yyerror(const char*);
FILE* yyin;
%}

%token

token1 token2 token3 token4 token5 token6 token7 token8 token9 token10 token11 token12 token13 token14 token15 token16 token17 token18 token19 token20 token21 token22 token23 token24 token25 token26 token27 token28 token29 token30 token31 token32 token33 token34 token35 token36 token37 token38 token39 token40 token41 token42 token43 token44 token45 token46 token47 token48 token49 token50 token51 token52 token53 token54

%%

init
	: symbol2 
	| symbol3 
	| symbol4 
	| symbol1 
	;

symbol1
	: token10 token1 token3 token2 token5 token4 token6 
	| token10 token3 token2 token1 token6 token4 token5 
	| token10 token2 token1 token3 token5 token4 token6 
	| token10 token2 token3 token1 token5 token4 token6 
	| token10 token3 token1 token2 token5 token4 token6 
	| token10 token3 token2 token1 token5 token4 token6 
	| token10 token1 token2 token3 token5 token6 token4 
	| token10 token1 token3 token2 token5 token6 token4 
	| token10 token2 token1 token3 token5 token6 token4 
	| token10 token2 token3 token1 token5 token6 token4 
	| token10 token3 token1 token2 token5 token6 token4 
	| token10 token3 token2 token1 token5 token6 token4 
	| token10 token1 token2 token3 token6 token4 token5 
	| token10 token1 token3 token2 token6 token4 token5 
	| token10 token2 token1 token3 token6 token4 token5 
	| token10 token2 token3 token1 token6 token4 token5 
	| token10 token3 token1 token2 token6 token4 token5 
	| token10 token1 token2 token3 token6 token5 token4 
	| token10 token1 token3 token2 token6 token5 token4 
	| token10 token2 token1 token3 token6 token5 token4 
	| token10 token2 token3 token1 token6 token5 token4 
	| token10 token3 token1 token2 token6 token5 token4 
	| token10 token3 token2 token1 token6 token5 token4 
	| token10 token3 token2 token1 token4 token6 token5 
	| token1 token2 token3 
	| token4 token5 token6 token7 token8 token9 
	| token4 token7 token8 token9 token5 token6 
	| token5 token6 token4 token7 token8 token9 
	| token5 token6 token7 token8 token9 token4 
	| token7 token8 token9 token4 token5 token6 
	| token7 token8 token9 token5 token6 token4 
	| token10 token1 token2 token3 token5 token4 token6 
	| token1 token2 token1 token2 token4 
	| token1 token2 token4 token1 token2 
	| token4 token1 token2 token1 token2 
	| token10 token1 token3 token2 token4 token5 token6 
	| token10 token1 token2 token3 token4 token5 token6 
	| token10 token3 token1 token2 token4 token6 token5 
	| token10 token2 token3 token1 token4 token6 token5 
	| token10 token2 token1 token3 token4 token6 token5 
	| token10 token1 token3 token2 token4 token6 token5 
	| token10 token1 token2 token3 token4 token6 token5 
	| token10 token3 token2 token1 token4 token5 token6 
	| token10 token3 token1 token2 token4 token5 token6 
	| token10 token2 token3 token1 token4 token5 token6 
	| token10 token2 token1 token3 token4 token5 token6 
	;

symbol2
	: token17 token4 token6 token8 token3 token17 
	| token17 token4 token6 token8 token1 token3 token17 
	| token17 token4 token6 token8 token2 token3 token17 
	| token17 token4 token6 token8 token1 token2 token3 token17 
	| token17 token4 token6 token7 token8 token3 token17 
	| token17 token4 token6 token7 token8 token1 token3 token17 
	| token17 token4 token6 token7 token8 token2 token3 token17 
	| token17 token4 token6 token7 token8 token1 token2 token3 token17 
	| token17 token4 token5 token6 token8 token3 token17 
	| token17 token4 token5 token6 token8 token1 token3 token17 
	| token17 token4 token5 token6 token8 token2 token3 token17 
	| token17 token4 token5 token6 token8 token1 token2 token3 token17 
	| token17 token4 token5 token6 token7 token8 token3 token17 
	| token17 token4 token5 token6 token7 token8 token1 token3 token17 
	| token17 token4 token5 token6 token7 token8 token2 token3 token17 
	| token17 token4 token5 token6 token7 token8 token1 token2 token3 token17 
	| token17 token8 token3 token17 
	| token17 token8 token1 token3 token17 
	| token17 token4 token7 token8 token2 token3 token17 
	| token17 token4 token5 token6 token1 token2 token3 token17 
	| token17 token7 token8 token1 token2 token3 token4 token17 
	| token17 token4 token8 token3 token17 
	| token17 token4 token8 token1 token3 token17 
	| token17 token4 token8 token2 token3 token17 
	| token17 token4 token8 token1 token2 token3 token17 
	| token17 token4 token7 token8 token3 token17 
	| token17 token4 token7 token8 token1 token3 token17 
	| token17 token4 token5 token7 token8 token1 token2 token3 token17 
	| token17 token4 token7 token8 token1 token2 token3 token17 
	| token17 token4 token5 token8 token3 token17 
	| token17 token4 token5 token8 token1 token3 token17 
	| token17 token4 token5 token8 token2 token3 token17 
	| token17 token4 token5 token8 token1 token2 token3 token17 
	| token17 token4 token5 token7 token8 token3 token17 
	| token17 token4 token5 token7 token8 token1 token3 token17 
	| token17 token4 token5 token7 token8 token2 token3 token17 
	| token17 token7 token8 token1 token3 token4 token17 
	| token17 token8 token1 token2 token3 token4 token17 
	| token17 token8 token1 token2 token3 token4 token5 token17 
	| token17 token8 token1 token2 token3 token4 token6 token17 
	| token17 token8 token1 token2 token3 token4 token5 token6 token17 
	| token17 token7 token8 token3 token4 token17 
	| token17 token7 token8 token3 token4 token5 token17 
	| token17 token7 token8 token3 token4 token6 token17 
	| token17 token7 token8 token3 token4 token5 token6 token17 
	| token17 token8 token2 token3 token4 token5 token6 token17 
	| token17 token7 token8 token1 token3 token4 token5 token17 
	| token17 token7 token8 token1 token3 token4 token6 token17 
	| token17 token7 token8 token1 token3 token4 token5 token6 token17 
	| token17 token7 token8 token2 token3 token4 token17 
	| token17 token7 token8 token2 token3 token4 token5 token17 
	| token17 token7 token8 token2 token3 token4 token6 token17 
	| token17 token7 token8 token2 token3 token4 token5 token6 token17 
	| token17 token2 token3 token8 token4 token17 
	| token17 token8 token3 token4 token5 token6 token17 
	| token17 token8 token1 token2 token3 token17 
	| token17 token7 token8 token3 token17 
	| token17 token7 token8 token1 token3 token17 
	| token17 token7 token8 token2 token3 token17 
	| token17 token7 token8 token1 token2 token3 token17 
	| token17 token8 token3 token4 token17 
	| token17 token8 token3 token4 token5 token17 
	| token17 token8 token3 token4 token6 token17 
	| token17 token8 token2 token3 token17 
	| token17 token8 token1 token3 token4 token17 
	| token17 token8 token1 token3 token4 token5 token17 
	| token17 token8 token1 token3 token4 token6 token17 
	| token17 token8 token1 token3 token4 token5 token6 token17 
	| token17 token8 token2 token3 token4 token17 
	| token17 token8 token2 token3 token4 token5 token17 
	| token17 token8 token2 token3 token4 token6 token17 
	| token17 token4 token3 token7 token8 token17 
	| token17 token8 token4 token5 token17 
	| token17 token8 token4 token6 token17 
	| token17 token8 token4 token5 token6 token17 
	| token17 token7 token8 token4 token17 
	| token17 token7 token8 token4 token5 token17 
	| token17 token7 token8 token4 token6 token17 
	| token17 token7 token8 token4 token5 token6 token17 
	| token17 token4 token3 token8 token17 
	| token17 token8 token4 token17 
	| token17 token4 token3 token17 
	| token17 token4 token1 token3 token8 token17 
	| token17 token4 token1 token3 token7 token8 token17 
	| token17 token4 token2 token3 token8 token17 
	| token17 token4 token2 token3 token7 token8 token17 
	| token17 token4 token2 token3 token17 
	| token17 token4 token1 token2 token3 token8 token17 
	| token17 token4 token1 token2 token3 token7 token8 token17 
	| token17 token1 token2 token3 token8 token4 token17 
	| token17 token4 token1 token3 token17 
	| token17 token2 token3 token8 token4 token5 token17 
	| token17 token2 token3 token8 token4 token6 token17 
	| token17 token2 token3 token8 token4 token5 token6 token17 
	| token17 token2 token3 token7 token8 token4 token17 
	| token17 token2 token3 token7 token8 token4 token5 token17 
	| token17 token2 token3 token7 token8 token4 token6 token17 
	| token17 token2 token3 token7 token8 token4 token5 token6 token17 
	| token17 token4 token1 token2 token3 token17 
	| token17 token1 token2 token3 token8 token4 token5 token17 
	| token17 token1 token2 token3 token8 token4 token6 token17 
	| token17 token1 token2 token3 token8 token4 token5 token6 token17 
	| token17 token1 token2 token3 token7 token8 token4 token17 
	| token17 token1 token2 token3 token7 token8 token4 token5 token17 
	| token17 token1 token2 token3 token7 token8 token4 token6 token17 
	| token17 token1 token2 token3 token7 token8 token4 token5 token6 token17 
	| token17 token4 token5 token6 token3 token7 token8 token17 
	| token17 token4 token6 token1 token3 token17 
	| token17 token4 token6 token2 token3 token8 token17 
	| token17 token4 token6 token2 token3 token7 token8 token17 
	| token17 token4 token6 token2 token3 token17 
	| token17 token4 token6 token1 token2 token3 token8 token17 
	| token17 token4 token6 token1 token2 token3 token7 token8 token17 
	| token17 token4 token6 token1 token2 token3 token17 
	| token17 token4 token5 token6 token3 token8 token17 
	| token17 token4 token6 token1 token3 token7 token8 token17 
	| token17 token4 token5 token6 token3 token17 
	| token17 token4 token5 token6 token1 token3 token8 token17 
	| token17 token4 token5 token6 token1 token3 token7 token8 token17 
	| token17 token4 token5 token6 token1 token3 token17 
	| token17 token4 token5 token6 token2 token3 token8 token17 
	| token17 token4 token5 token6 token2 token3 token7 token8 token17 
	| token17 token4 token5 token6 token2 token3 token17 
	| token17 token4 token5 token6 token1 token2 token3 token8 token17 
	| token17 token4 token5 token2 token3 token17 
	| token17 token4 token5 token3 token8 token17 
	| token17 token4 token5 token3 token7 token8 token17 
	| token17 token4 token5 token3 token17 
	| token17 token4 token5 token1 token3 token8 token17 
	| token17 token4 token5 token1 token3 token7 token8 token17 
	| token17 token4 token5 token1 token3 token17 
	| token17 token4 token5 token2 token3 token8 token17 
	| token17 token4 token5 token2 token3 token7 token8 token17 
	| token17 token4 token5 token6 token1 token2 token3 token7 token8 token17 
	| token17 token4 token5 token1 token2 token3 token8 token17 
	| token17 token4 token5 token1 token2 token3 token7 token8 token17 
	| token17 token4 token5 token1 token2 token3 token17 
	| token17 token4 token6 token3 token8 token17 
	| token17 token4 token6 token3 token7 token8 token17 
	| token17 token4 token6 token3 token17 
	| token17 token4 token6 token1 token3 token8 token17 
	| token18 token4 token5 token1 token3 
	| token18 token5 token1 token3 
	| token18 token5 token1 token2 token3 
	| token18 token5 token6 token1 
	| token18 token5 token6 token1 token2 
	| token18 token5 token6 token1 token3 
	| token18 token5 token6 token1 token2 token3 
	| token18 token4 token5 token1 
	| token18 token4 token5 token1 token2 
	| token18 token5 token1 token2 
	| token18 token4 token5 token1 token2 token3 
	| token18 token4 token5 token6 token1 
	| token18 token4 token5 token6 token1 token2 
	| token18 token4 token5 token6 token1 token3 
	| token18 token4 token5 token6 token1 token2 token3 
	| token18 token5 token1 token4 
	| token18 token5 token1 token2 token4 
	| token18 token5 token1 token3 token4 
	| token18 token4 token1 token2 token5 token6 
	| token18 token1 token2 token3 token5 token4 
	| token18 token1 token2 token3 token5 token6 token4 
	| token18 token5 token4 
	| token18 token5 token6 token4 
	| token18 token4 token1 token5 
	| token18 token4 token1 token5 token6 
	| token18 token4 token1 
	| token18 token4 token1 token2 token5 
	| token18 token5 token1 token2 token3 token4 
	| token18 token4 token1 token2 
	| token18 token4 token1 token3 token5 
	| token18 token4 token1 token3 token5 token6 
	| token18 token4 token1 token3 
	| token18 token4 token1 token2 token3 token5 
	| token18 token4 token1 token2 token3 token5 token6 
	| token18 token4 token1 token2 token3 
	| token18 token5 token1 
	| token19 token4 token1 token2 token3 token19 
	| token19 token2 token3 token4 token19 
	| token19 token1 token2 token3 token19 
	| token19 token1 token2 token3 token4 token19 
	| token19 token19 
	| token19 token4 token19 
	| token19 token4 token2 token19 
	| token19 token4 token1 token2 token19 
	| token19 token4 token2 token3 token19 
	| token19 token2 token3 token19 
	| token20 
	| token20 token1 
	| token20 token2 
	| token20 token1 token2 
	| token20 token3 
	| token20 token1 token3 
	| token20 token2 token3 
	| token20 token1 token2 token3 
	| token18 token5 token6 token4 token1 
	| token18 token5 token6 token1 token4 
	| token18 token5 token6 token1 token2 token4 
	| token18 token5 token6 token1 token3 token4 
	| token18 token5 token6 token1 token2 token3 token4 
	| token18 token5 token4 token1 
	| token18 token5 token4 token1 token2 
	| token18 token5 token4 token1 token3 
	| token18 token5 token4 token1 token2 token3 
	| token18 token1 token3 token5 token6 token4 
	| token18 token5 token6 token4 token1 token2 
	| token18 token5 token6 token4 token1 token3 
	| token18 token5 token6 token4 token1 token2 token3 
	| token19 token2 token19 
	| token19 token2 token4 token19 
	| token19 token1 token2 token19 
	| token19 token1 token2 token4 token19 
	| token17 token7 token8 token4 token5 token1 token2 token3 token17 
	| token17 token8 token4 token5 token6 token1 token2 token3 token17 
	| token17 token7 token8 token4 token3 token17 
	| token17 token7 token8 token4 token1 token3 token17 
	| token17 token7 token8 token4 token2 token3 token17 
	| token17 token7 token8 token4 token1 token2 token3 token17 
	| token17 token7 token8 token4 token5 token3 token17 
	| token17 token7 token8 token4 token5 token1 token3 token17 
	| token17 token7 token8 token4 token5 token2 token3 token17 
	| token17 token8 token4 token5 token6 token2 token3 token17 
	| token17 token7 token8 token4 token6 token3 token17 
	| token17 token7 token8 token4 token6 token1 token3 token17 
	| token17 token7 token8 token4 token6 token2 token3 token17 
	| token17 token7 token8 token4 token6 token1 token2 token3 token17 
	| token17 token7 token8 token4 token5 token6 token3 token17 
	| token17 token7 token8 token4 token5 token6 token1 token3 token17 
	| token17 token7 token8 token4 token5 token6 token2 token3 token17 
	| token17 token7 token8 token4 token5 token6 token1 token2 token3 token17 
	| token17 token8 token4 token5 token2 token3 token17 
	| token17 token7 token8 token1 token2 token3 token4 token6 token17 
	| token17 token7 token8 token1 token2 token3 token4 token5 token6 token17 
	| token17 token8 token4 token3 token17 
	| token17 token8 token4 token1 token3 token17 
	| token17 token8 token4 token2 token3 token17 
	| token17 token8 token4 token1 token2 token3 token17 
	| token17 token8 token4 token5 token3 token17 
	| token17 token8 token4 token5 token1 token3 token17 
	| token18 token1 token5 
	| token17 token8 token4 token5 token1 token2 token3 token17 
	| token17 token8 token4 token6 token3 token17 
	| token17 token8 token4 token6 token1 token3 token17 
	| token17 token8 token4 token6 token2 token3 token17 
	| token17 token8 token4 token6 token1 token2 token3 token17 
	| token17 token8 token4 token5 token6 token3 token17 
	| token17 token8 token4 token5 token6 token1 token3 token17 
	| token18 
	| token18 token1 token2 token3 token5 
	| token18 token1 token2 token3 token5 token6 
	| token18 token1 token2 token3 
	| token18 token1 token2 token3 token4 token5 
	| token18 token1 token2 token3 token4 token5 token6 
	| token18 token1 token2 token3 token4 
	| token18 token5 
	| token18 token5 token6 
	| token18 token1 token3 token4 
	| token18 token4 token5 
	| token18 token4 token5 token6 
	| token18 token4 
	| token18 token1 token5 token4 
	| token18 token1 token5 token6 token4 
	| token18 token1 token2 token5 token4 
	| token18 token1 token2 token5 token6 token4 
	| token18 token1 token3 token5 token4 
	| token18 token1 token2 token4 token5 
	| token18 token1 token5 token6 
	| token18 token1 
	| token18 token1 token4 token5 
	| token18 token1 token4 token5 token6 
	| token18 token1 token4 
	| token18 token1 token2 token5 
	| token18 token1 token2 token5 token6 
	| token18 token1 token2 
	| token17 token7 token8 token1 token2 token3 token4 token5 token17 
	| token18 token1 token2 token4 token5 token6 
	| token18 token1 token2 token4 
	| token18 token1 token3 token5 
	| token18 token1 token3 token5 token6 
	| token18 token1 token3 
	| token18 token1 token3 token4 token5 
	| token18 token1 token3 token4 token5 token6 
	| token14 token6 token2 token3 token4 token5 
	| token14 token4 token6 token2 token3 
	| token14 token4 token6 token1 token2 token3 
	| token14 token5 token6 token2 token3 
	| token14 token5 token6 token1 token2 token3 
	| token14 token4 token5 token6 token2 token3 
	| token14 token4 token5 token6 token1 token2 token3 
	| token14 token6 token2 token3 token4 
	| token14 token6 token2 token3 token5 
	| token14 token6 token1 token2 token3 
	| token14 token6 token1 token2 token3 token4 
	| token14 token6 token1 token2 token3 token5 
	| token14 token6 token1 token2 token3 token4 token5 
	| token14 token6 token4 token2 token3 
	| token14 token6 token4 token1 token2 token3 
	| token14 token6 token5 token2 token3 
	| token14 token6 token5 token1 token2 token3 
	| token14 token6 token4 token5 token2 token3 
	| token14 token6 token5 
	| token14 token4 token5 token6 
	| token14 token2 token3 token6 token4 
	| token14 token2 token3 token6 token5 
	| token14 token2 token3 token6 token4 token5 
	| token14 token1 token2 token3 token6 token4 
	| token14 token1 token2 token3 token6 token5 
	| token14 token1 token2 token3 token6 token4 token5 
	| token14 token6 token4 
	| token14 token6 token4 token5 token1 token2 token3 
	| token14 token6 token4 token5 
	| token14 token4 token2 token3 token6 
	| token14 token4 token1 token2 token3 token6 
	| token14 token5 token2 token3 token6 
	| token14 token5 token1 token2 token3 token6 
	| token14 token4 token5 token2 token3 token6 
	| token14 token4 token5 token1 token2 token3 token6 
	| token14 token6 token2 token3 
	| token16 token1 token2 token4 token5 
	| token15 token6 token4 token5 token1 token3 token15 
	| token15 token6 token4 token5 token1 token2 token3 token15 
	| token16 token1 token2 
	| token16 token1 token2 token6 
	| token16 token1 token2 token4 
	| token16 token1 token2 token4 token6 
	| token16 token1 token2 token5 
	| token16 token1 token2 token5 token6 
	| token15 token6 token1 token2 token3 token4 token5 token15 
	| token16 token1 token2 token4 token5 token6 
	| token16 token1 token2 token3 
	| token16 token1 token2 token3 token6 
	| token16 token1 token2 token3 token4 
	| token16 token1 token2 token3 token4 token6 
	| token16 token1 token2 token3 token5 
	| token16 token1 token2 token3 token5 token6 
	| token16 token1 token2 token3 token4 token5 
	| token15 token6 token4 token5 token15 
	| token15 token1 token3 token4 token5 token6 token15 
	| token15 token1 token3 token6 token15 
	| token15 token1 token2 token3 token4 token5 token6 token15 
	| token15 token1 token2 token3 token6 token15 
	| token15 token4 token5 token6 token15 
	| token15 token6 token15 
	| token15 token1 token3 token6 token4 token5 token15 
	| token15 token1 token2 token3 token6 token4 token5 token15 
	| token14 token5 token6 
	| token15 token4 token5 token1 token3 token6 token15 
	| token15 token4 token5 token1 token2 token3 token6 token15 
	| token15 token4 token5 token6 token1 token3 token15 
	| token15 token4 token5 token6 token1 token2 token3 token15 
	| token15 token6 token1 token3 token15 
	| token15 token6 token1 token2 token3 token15 
	| token15 token6 token1 token3 token4 token5 token15 
	| token12 token4 token1 token2 token5 
	| token12 token2 token5 token4 
	| token12 token1 token2 token5 token4 
	| token12 token3 token5 token4 
	| token12 token1 token3 token5 token4 
	| token12 token2 token3 token5 token4 
	| token12 token1 token2 token3 token5 token4 
	| token12 token4 token1 token5 
	| token12 token4 token2 token5 
	| token12 token1 token5 token4 
	| token12 token4 token3 token5 
	| token12 token4 token1 token3 token5 
	| token12 token4 token2 token3 token5 
	| token12 token4 token1 token2 token3 token5 
	| token12 token4 token5 token1 
	| token12 token4 token5 token2 
	| token12 token4 token5 token1 token2 
	| token12 token4 token5 token3 
	| token12 token4 token5 
	| token11 token2 token3 token11 
	| token11 token1 token2 token3 token11 
	| token11 token3 token2 token11 
	| token11 token1 token3 token2 token11 
	| token11 token2 token1 token3 token11 
	| token11 token2 token3 token1 token11 
	| token11 token3 token1 token2 token11 
	| token11 token3 token2 token1 token11 
	| token12 token4 token5 token1 token3 
	| token12 token1 token4 token5 
	| token12 token2 token4 token5 
	| token12 token1 token2 token4 token5 
	| token12 token3 token4 token5 
	| token12 token1 token3 token4 token5 
	| token12 token2 token3 token4 token5 
	| token12 token1 token2 token3 token4 token5 
	| token12 token5 token4 
	| token14 token2 token3 token4 token6 
	| token13 token4 token5 token13 
	| token13 token1 token2 token3 token5 token4 token13 
	| token13 token5 token4 token13 
	| token13 token4 token1 token2 token3 token5 token13 
	| token13 token4 token5 token1 token2 token3 token13 
	| token13 token5 token1 token2 token3 token4 token13 
	| token13 token5 token4 token1 token2 token3 token13 
	| token14 token2 token3 token6 
	| token13 token1 token2 token3 token4 token5 token13 
	| token14 token2 token3 token5 token6 
	| token14 token2 token3 token4 token5 token6 
	| token14 token1 token2 token3 token6 
	| token14 token1 token2 token3 token4 token6 
	| token14 token1 token2 token3 token5 token6 
	| token14 token1 token2 token3 token4 token5 token6 
	| token14 token6 
	| token14 token4 token6 
	| token12 token5 token1 token2 token3 token4 
	| token12 token4 token5 token2 token3 
	| token12 token4 token5 token1 token2 token3 
	| token12 token5 token1 token4 
	| token12 token5 token2 token4 
	| token12 token5 token1 token2 token4 
	| token12 token5 token3 token4 
	| token12 token5 token1 token3 token4 
	| token12 token5 token2 token3 token4 
	| token17 token1 token3 token7 token8 token4 token6 token17 
	| token12 token5 token4 token1 
	| token12 token5 token4 token2 
	| token12 token5 token4 token1 token2 
	| token12 token5 token4 token3 
	| token12 token5 token4 token1 token3 
	| token12 token5 token4 token2 token3 
	| token12 token5 token4 token1 token2 token3 
	| token17 token1 token2 token3 token4 token7 token8 token17 
	| token17 token2 token3 token4 token6 token17 
	| token17 token2 token3 token4 token5 token6 token8 token17 
	| token17 token2 token3 token4 token5 token6 token7 token8 token17 
	| token17 token2 token3 token4 token5 token6 token17 
	| token17 token2 token3 token8 token17 
	| token17 token2 token3 token7 token8 token17 
	| token17 token2 token3 token17 
	| token17 token1 token2 token3 token4 token8 token17 
	| token17 token2 token3 token4 token6 token7 token8 token17 
	| token17 token1 token2 token3 token4 token17 
	| token17 token1 token2 token3 token4 token5 token8 token17 
	| token17 token1 token2 token3 token4 token5 token7 token8 token17 
	| token17 token1 token2 token3 token4 token5 token17 
	| token17 token1 token2 token3 token4 token6 token8 token17 
	| token17 token1 token2 token3 token4 token6 token7 token8 token17 
	| token17 token1 token2 token3 token4 token6 token17 
	| token17 token1 token2 token3 token4 token5 token6 token8 token17 
	| token17 token1 token3 token17 
	| token17 token1 token3 token4 token6 token8 token17 
	| token17 token1 token3 token4 token6 token7 token8 token17 
	| token17 token1 token3 token4 token6 token17 
	| token17 token1 token3 token4 token5 token6 token8 token17 
	| token17 token1 token3 token4 token5 token6 token7 token8 token17 
	| token17 token1 token3 token4 token5 token6 token17 
	| token17 token1 token3 token8 token17 
	| token17 token1 token3 token7 token8 token17 
	| token17 token1 token2 token3 token4 token5 token6 token7 token8 token17 
	| token17 token2 token3 token4 token8 token17 
	| token17 token2 token3 token4 token7 token8 token17 
	| token17 token2 token3 token4 token17 
	| token17 token2 token3 token4 token5 token8 token17 
	| token17 token2 token3 token4 token5 token7 token8 token17 
	| token17 token2 token3 token4 token5 token17 
	| token17 token2 token3 token4 token6 token8 token17 
	| token17 token3 token7 token8 token4 token6 token17 
	| token17 token7 token8 token17 
	| token17 token17 
	| token17 token3 token8 token4 token17 
	| token17 token3 token8 token4 token5 token17 
	| token17 token3 token8 token4 token6 token17 
	| token17 token3 token8 token4 token5 token6 token17 
	| token17 token3 token7 token8 token4 token17 
	| token17 token3 token7 token8 token4 token5 token17 
	| token17 token8 token17 
	| token17 token3 token7 token8 token4 token5 token6 token17 
	| token17 token1 token3 token8 token4 token17 
	| token17 token1 token3 token8 token4 token5 token17 
	| token17 token1 token3 token8 token4 token6 token17 
	| token17 token1 token3 token8 token4 token5 token6 token17 
	| token17 token1 token3 token7 token8 token4 token17 
	| token17 token1 token3 token7 token8 token4 token5 token17 
	| token17 token1 token3 token7 token8 token4 token5 token6 token17 
	| token17 token4 token5 token7 token8 token17 
	| token17 token1 token2 token3 token4 token5 token6 token17 
	| token17 token1 token2 token3 token8 token17 
	| token17 token1 token2 token3 token7 token8 token17 
	| token17 token1 token2 token3 token17 
	| token17 token4 token8 token17 
	| token17 token4 token7 token8 token17 
	| token17 token4 token17 
	| token17 token4 token5 token8 token17 
	| token16 
	| token17 token4 token5 token17 
	| token17 token4 token6 token8 token17 
	| token17 token4 token6 token7 token8 token17 
	| token17 token4 token6 token17 
	| token17 token4 token5 token6 token8 token17 
	| token17 token4 token5 token6 token7 token8 token17 
	| token17 token4 token5 token6 token17 
	| token16 token4 token5 token1 token2 token6 
	| token16 token4 token1 token2 token6 
	| token16 token4 token1 token2 token3 
	| token16 token4 token1 token2 token3 token6 
	| token16 token5 token1 token2 
	| token16 token5 token1 token2 token6 
	| token16 token5 token1 token2 token3 
	| token16 token5 token1 token2 token3 token6 
	| token16 token4 token5 token1 token2 
	| token16 token4 token1 token2 
	| token16 token4 token5 token1 token2 token3 
	| token17 token1 token3 token4 token5 token17 
	| token16 token4 token5 token1 token2 token3 token6 
	| token16 token6 token1 token2 
	| token16 token6 token1 token2 token3 
	| token16 token4 token6 token1 token2 
	| token16 token4 token6 token1 token2 token3 
	| token16 token5 token6 token1 token2 
	| token16 token1 token2 token6 token4 
	| token16 token1 token2 token3 token4 token5 token6 
	| token16 token6 
	| token16 token4 
	| token16 token4 token6 
	| token16 token5 
	| token16 token5 token6 
	| token16 token4 token5 
	| token16 token4 token5 token6 
	| token17 token1 token3 token4 token5 token7 token8 token17 
	| token16 token1 token2 token6 token5 
	| token16 token1 token2 token6 token4 token5 
	| token16 token1 token2 token3 token6 token4 
	| token16 token1 token2 token3 token6 token5 
	| token16 token1 token2 token3 token6 token4 token5 
	| token16 token6 token4 
	| token16 token6 token5 
	| token16 token6 token4 token5 
	| token17 token3 token4 token5 token6 token17 
	| token17 token3 token4 token5 token8 token17 
	| token17 token3 token4 token5 token7 token8 token17 
	| token17 token3 token4 token5 token17 
	| token17 token3 token4 token6 token8 token17 
	| token17 token3 token4 token6 token7 token8 token17 
	| token17 token3 token4 token6 token17 
	| token17 token3 token4 token5 token6 token8 token17 
	| token17 token3 token4 token5 token6 token7 token8 token17 
	| token16 token4 token5 token6 token1 token2 
	| token17 token3 token8 token17 
	| token17 token3 token7 token8 token17 
	| token17 token3 token17 
	| token17 token1 token3 token4 token8 token17 
	| token17 token1 token3 token4 token7 token8 token17 
	| token17 token1 token3 token4 token17 
	| token17 token1 token3 token4 token5 token8 token17 
	| token16 token5 token6 token1 token2 token3 
	| token17 token3 token4 token7 token8 token17 
	| token17 token3 token4 token17 
	| token16 token4 token5 token6 token1 token2 token3 
	| token16 token6 token1 token2 token4 
	| token16 token6 token1 token2 token5 
	| token16 token6 token1 token2 token4 token5 
	| token16 token6 token1 token2 token3 token4 
	| token16 token6 token1 token2 token3 token5 
	| token16 token6 token1 token2 token3 token4 token5 
	| token16 token6 token4 token1 token2 token3 
	| token16 token6 token5 token1 token2 
	| token16 token6 token5 token1 token2 token3 
	| token16 token6 token4 token5 token1 token2 
	| token16 token6 token4 token5 token1 token2 token3 
	| token17 token3 token4 token8 token17 
	| token16 token6 token4 token1 token2 
	;

symbol3
	: token29 token1 token3 token4 token5 
	| token29 token3 token4 token5 
	| token28 token5 token4 token1 token2 token3 
	| token28 token5 token4 token2 token3 
	| token28 token5 token4 token1 token3 
	| token28 token5 token4 token3 
	| token28 token5 token4 token1 token2 
	| token28 token5 token4 token2 
	| token28 token5 token4 token1 
	| token28 token5 token1 token2 token3 token4 
	| token28 token5 token2 token3 token4 
	| token28 token5 token1 token3 token4 
	| token28 token5 token3 token4 
	| token29 token2 token3 token4 token5 
	| token29 token1 token2 token3 token4 token5 
	| token29 token4 token5 
	| token29 token3 token5 token4 
	| token29 token1 token3 token5 token4 
	| token29 token2 token3 token5 token4 
	| token29 token1 token2 token3 token5 token4 
	| token29 token5 token4 
	| token29 token4 token3 token5 
	| token29 token4 token1 token3 token5 
	| token29 token4 token2 token3 token5 
	| token29 token4 token1 token2 token3 token5 
	| token29 token4 token5 token3 
	| token29 token4 token5 token1 token3 
	| token28 token4 token1 token3 token5 
	| token28 token1 token2 token3 token4 token5 
	| token28 token5 token4 
	| token28 token1 token5 token4 
	| token28 token2 token5 token4 
	| token28 token1 token2 token5 token4 
	| token28 token3 token5 token4 
	| token28 token1 token3 token5 token4 
	| token28 token2 token3 token5 token4 
	| token28 token1 token2 token3 token5 token4 
	| token28 token4 token1 token5 
	| token28 token4 token2 token5 
	| token28 token4 token1 token2 token5 
	| token28 token4 token3 token5 
	| token28 token5 token1 token2 token4 
	| token28 token4 token2 token3 token5 
	| token28 token4 token1 token2 token3 token5 
	| token28 token4 token5 token1 
	| token28 token4 token5 token2 
	| token28 token4 token5 token1 token2 
	| token28 token4 token5 token3 
	| token28 token2 token3 token4 token5 
	| token28 token4 token5 token1 token3 
	| token28 token4 token5 token2 token3 
	| token28 token4 token5 token1 token2 token3 
	| token28 token5 token1 token4 
	| token28 token5 token2 token4 
	| token30 token5 token2 token4 
	| token30 token4 token1 token2 token5 
	| token30 token4 token3 token5 
	| token30 token4 token1 token3 token5 
	| token30 token4 token2 token3 token5 
	| token30 token4 token1 token2 token3 token5 
	| token30 token4 token5 token1 
	| token30 token4 token5 token2 
	| token30 token4 token5 token1 token2 
	| token30 token4 token5 token3 
	| token30 token4 token5 token1 token3 
	| token30 token4 token5 token2 token3 
	| token30 token4 token5 token1 token2 token3 
	| token30 token5 token1 token4 
	| token30 token4 token2 token5 
	| token30 token5 token1 token2 token4 
	| token30 token5 token3 token4 
	| token30 token5 token1 token3 token4 
	| token30 token5 token2 token3 token4 
	| token30 token5 token1 token2 token3 token4 
	| token30 token5 token4 token1 
	| token30 token5 token4 token2 
	| token30 token5 token4 token1 token2 
	| token30 token5 token4 token3 
	| token30 token5 token4 token1 token3 
	| token30 token5 token4 token2 token3 
	| token30 token5 token4 token1 token2 token3 
	| token23 token4 token3 token2 
	| token30 token3 token4 token5 
	| token29 token4 token5 token1 token2 token3 
	| token29 token5 token3 token4 
	| token29 token5 token1 token3 token4 
	| token29 token5 token2 token3 token4 
	| token29 token5 token1 token2 token3 token4 
	| token29 token5 token4 token3 
	| token29 token5 token4 token1 token3 
	| token29 token5 token4 token2 token3 
	| token29 token5 token4 token1 token2 token3 
	| token30 token4 token5 
	| token30 token1 token4 token5 
	| token30 token2 token4 token5 
	| token30 token1 token2 token4 token5 
	| token29 token4 token5 token2 token3 
	| token30 token1 token3 token4 token5 
	| token30 token2 token3 token4 token5 
	| token30 token1 token2 token3 token4 token5 
	| token30 token5 token4 
	| token30 token1 token5 token4 
	| token30 token2 token5 token4 
	| token30 token1 token2 token5 token4 
	| token30 token3 token5 token4 
	| token30 token1 token3 token5 token4 
	| token30 token2 token3 token5 token4 
	| token30 token1 token2 token3 token5 token4 
	| token30 token4 token1 token5 
	| token24 token3 token1 token4 
	| token24 token1 token4 token3 
	| token24 token2 token4 token3 
	| token24 token1 token2 token4 token3 
	| token24 token3 token4 
	| token24 token1 token3 token4 
	| token24 token2 token3 token4 
	| token24 token1 token2 token3 token4 
	| token24 token4 token1 token3 
	| token24 token4 token2 token3 
	| token24 token4 token1 token2 token3 
	| token24 token4 token3 token1 
	| token24 token4 token3 token2 
	| token24 token4 token3 token1 token2 
	| token24 token4 token3 
	| token24 token3 token2 token4 
	| token24 token3 token1 token2 token4 
	| token24 token3 token4 token1 
	| token24 token3 token4 token2 
	| token24 token3 token4 token1 token2 
	| token25 token2 token4 token3 
	| token25 token1 token2 token4 token3 
	| token25 token4 token3 
	| token25 token2 token3 token4 
	| token25 token1 token2 token3 token4 
	| token25 token3 token4 
	| token25 token4 token2 token3 
	| token25 token4 token1 token2 token3 
	| token22 token3 token1 token2 
	| token28 token1 token3 token4 token5 
	| token21 token1 token2 token3 
	| token21 token1 token3 token2 
	| token21 token2 token1 token3 
	| token21 token2 token3 token1 
	| token21 token3 token1 token2 
	| token21 token3 token2 token1 
	| token22 token2 token3 
	| token22 token1 token2 token3 
	| token22 token3 token2 
	| token22 token1 token3 token2 
	| token22 token2 token1 token3 
	| token22 token2 token3 token1 
	| token28 token3 token4 token5 
	| token22 token3 token2 token1 
	| token23 token2 token4 token3 
	| token23 token1 token2 token4 token3 
	| token23 token2 token3 token4 
	| token23 token1 token2 token3 token4 
	| token23 token4 token2 token3 
	| token23 token4 token1 token2 token3 
	| token23 token4 token3 token1 token2 
	| token23 token3 token2 token4 
	| token23 token3 token1 token2 token4 
	| token23 token3 token4 token2 
	| token23 token3 token4 token1 token2 
	| token27 token4 token5 token1 token2 token3 
	| token27 token2 token3 token4 token5 
	| token27 token1 token2 token3 token4 token5 
	| token27 token3 token5 token4 
	| token27 token1 token3 token5 token4 
	| token27 token2 token3 token5 token4 
	| token27 token1 token2 token3 token5 token4 
	| token27 token4 token3 token5 
	| token27 token4 token1 token3 token5 
	| token27 token4 token2 token3 token5 
	| token27 token4 token1 token2 token3 token5 
	| token27 token4 token5 token3 
	| token27 token4 token5 token1 token3 
	| token27 token4 token5 token2 token3 
	| token25 token4 token3 token1 token2 
	| token27 token5 token3 token4 
	| token27 token5 token1 token3 token4 
	| token27 token5 token2 token3 token4 
	| token27 token5 token1 token2 token3 token4 
	| token27 token5 token4 token3 
	| token27 token5 token4 token1 token3 
	| token27 token5 token4 token2 token3 
	| token27 token5 token4 token1 token2 token3 
	| token28 token4 token5 
	| token28 token1 token4 token5 
	| token28 token2 token4 token5 
	| token28 token1 token2 token4 token5 
	| token25 token4 token3 token2 
	| token27 token3 token4 token5 
	| token27 token1 token3 token4 token5 
	| token25 token3 token2 token4 
	| token25 token3 token1 token2 token4 
	| token25 token3 token4 token2 
	| token25 token3 token4 token1 token2 
	| token26 token4 token3 
	| token26 token1 token4 token3 
	| token26 token2 token4 token3 
	| token26 token1 token2 token4 token3 
	| token26 token3 token4 
	| token26 token1 token3 token4 
	| token26 token2 token3 token4 
	| token26 token1 token2 token3 token4 
	| token26 token4 token2 token3 
	| token26 token4 token1 token3 
	| token26 token3 token4 token1 token2 
	| token26 token3 token4 token2 
	| token26 token3 token4 token1 
	| token26 token3 token1 token2 token4 
	| token26 token3 token2 token4 
	| token26 token4 token3 token1 token2 
	| token26 token4 token3 token2 
	| token26 token4 token3 token1 
	| token26 token4 token1 token2 token3 
	| token26 token3 token1 token4 
	;

symbol4
	: token49 token1 token3 token4 token5 
	| token49 token1 token2 token3 token4 token5 
	| token49 token4 token5 
	| token49 token1 token3 token5 token4 
	| token49 token1 token2 token3 token5 token4 
	| token49 token5 token4 
	| token49 token4 token1 token3 token5 
	| token49 token4 token1 token2 token3 token5 
	| token49 token4 token5 token1 token3 
	| token49 token4 token5 token1 token2 token3 
	| token49 token5 token1 token3 token4 
	| token49 token5 token1 token2 token3 token4 
	| token49 token5 token4 token1 token3 
	| token48 token5 token4 token1 token2 token3 
	| token48 token5 token4 token2 token3 
	| token48 token5 token1 token2 token3 token4 
	| token48 token5 token2 token3 token4 
	| token48 token4 token5 token1 token2 token3 
	| token48 token4 token5 token2 token3 
	| token48 token4 token1 token2 token3 token5 
	| token48 token4 token2 token3 token5 
	| token48 token5 token4 
	| token48 token1 token2 token3 token5 token4 
	| token48 token2 token3 token5 token4 
	| token48 token4 token5 
	| token48 token1 token2 token3 token4 token5 
	| token48 token2 token3 token4 token5 
	| token50 token5 token4 token1 token2 
	| token51 token4 token1 token3 token5 
	| token51 token4 token3 token5 
	| token51 token5 token4 
	| token51 token1 token2 token3 token5 token4 
	| token51 token2 token3 token5 token4 
	| token51 token1 token3 token5 token4 
	| token51 token3 token5 token4 
	| token51 token4 token5 
	| token51 token1 token2 token3 token4 token5 
	| token51 token2 token3 token4 token5 
	| token51 token1 token3 token4 token5 
	| token51 token3 token4 token5 
	| token50 token5 token4 token1 token2 token3 
	| token49 token5 token4 token1 token2 token3 
	| token50 token5 token1 token2 token3 token4 
	| token50 token5 token1 token2 token4 
	| token50 token4 token5 token1 token2 token3 
	| token50 token4 token5 token1 token2 
	| token50 token4 token1 token2 token3 token5 
	| token50 token4 token1 token2 token5 
	| token50 token5 token4 
	| token50 token1 token2 token3 token5 token4 
	| token50 token1 token2 token5 token4 
	| token50 token4 token5 
	| token50 token1 token2 token3 token4 token5 
	| token50 token1 token2 token4 token5 
	| token46 token2 token5 token4 
	| token46 token4 token5 token1 
	| token46 token4 token1 token2 token3 token5 
	| token46 token4 token2 token3 token5 
	| token46 token4 token1 token3 token5 
	| token46 token4 token3 token5 
	| token46 token4 token1 token2 token5 
	| token46 token4 token2 token5 
	| token46 token4 token1 token5 
	| token46 token1 token2 token3 token5 token4 
	| token46 token2 token3 token5 token4 
	| token46 token1 token3 token5 token4 
	| token46 token3 token5 token4 
	| token46 token1 token2 token5 token4 
	| token46 token4 token5 token2 
	| token46 token1 token5 token4 
	| token46 token5 token4 
	| token46 token1 token2 token3 token4 token5 
	| token46 token2 token3 token4 token5 
	| token46 token1 token3 token4 token5 
	| token46 token3 token4 token5 
	| token46 token1 token2 token4 token5 
	| token46 token2 token4 token5 
	| token46 token1 token4 token5 
	| token46 token4 token5 
	| token45 token5 token4 token1 token2 token3 
	| token54 token5 token4 token1 token2 token3 
	| token45 token5 token4 token2 token3 
	| token46 token5 token4 token1 
	| token47 token5 token1 token2 token3 token4 
	| token47 token4 token5 token1 token2 token3 
	| token47 token4 token1 token2 token3 token5 
	| token47 token5 token4 
	| token47 token1 token2 token3 token5 token4 
	| token47 token4 token5 
	| token47 token1 token2 token3 token4 token5 
	| token46 token5 token4 token1 token2 token3 
	| token46 token5 token4 token2 token3 
	| token46 token5 token4 token1 token3 
	| token46 token5 token4 token3 
	| token46 token5 token4 token1 token2 
	| token46 token5 token4 token2 
	| token47 token5 token4 token1 token2 token3 
	| token46 token5 token1 token2 token3 token4 
	| token46 token5 token2 token3 token4 
	| token46 token5 token1 token3 token4 
	| token46 token5 token3 token4 
	| token46 token5 token1 token2 token4 
	| token46 token5 token2 token4 
	| token46 token5 token1 token4 
	| token46 token4 token5 token1 token2 token3 
	| token46 token4 token5 token2 token3 
	| token46 token4 token5 token1 token3 
	| token46 token4 token5 token3 
	| token46 token4 token5 token1 token2 
	| token54 token2 token4 token5 
	| token54 token1 token2 token3 token5 token4 
	| token54 token2 token3 token5 token4 
	| token54 token1 token3 token5 token4 
	| token54 token3 token5 token4 
	| token54 token1 token2 token5 token4 
	| token54 token2 token5 token4 
	| token54 token1 token5 token4 
	| token54 token5 token4 
	| token54 token1 token2 token3 token4 token5 
	| token54 token2 token3 token4 token5 
	| token54 token1 token3 token4 token5 
	| token54 token3 token4 token5 
	| token54 token1 token2 token4 token5 
	| token54 token4 token1 token5 
	| token54 token1 token4 token5 
	| token54 token4 token5 
	| token53 token5 token4 token1 token2 token3 
	| token53 token5 token4 token2 token3 
	| token53 token5 token4 token1 token2 
	| token53 token5 token4 token2 
	| token53 token5 token1 token2 token3 token4 
	| token53 token5 token2 token3 token4 
	| token53 token5 token1 token2 token4 
	| token53 token5 token2 token4 
	| token53 token4 token5 token1 token2 token3 
	| token53 token4 token5 token2 token3 
	| token53 token4 token5 token1 token2 
	| token54 token4 token5 token1 token2 token3 
	| token54 token5 token4 token2 token3 
	| token54 token5 token4 token1 token3 
	| token54 token5 token4 token3 
	| token54 token5 token4 token1 token2 
	| token54 token5 token4 token2 
	| token54 token5 token4 token1 
	| token54 token5 token1 token2 token3 token4 
	| token54 token5 token2 token3 token4 
	| token54 token5 token1 token3 token4 
	| token54 token5 token3 token4 
	| token54 token5 token1 token2 token4 
	| token54 token5 token2 token4 
	| token54 token5 token1 token4 
	| token53 token4 token5 token2 
	| token54 token4 token5 token2 token3 
	| token54 token4 token5 token1 token3 
	| token54 token4 token5 token3 
	| token54 token4 token5 token1 token2 
	| token54 token4 token5 token2 
	| token54 token4 token5 token1 
	| token54 token4 token1 token2 token3 token5 
	| token54 token4 token2 token3 token5 
	| token54 token4 token1 token3 token5 
	| token54 token4 token3 token5 
	| token54 token4 token1 token2 token5 
	| token54 token4 token2 token5 
	| token51 token5 token4 token1 token2 token3 
	| token52 token4 token1 token3 token5 
	| token52 token4 token1 token2 token5 
	| token52 token4 token1 token5 
	| token52 token5 token4 
	| token52 token1 token2 token3 token5 token4 
	| token52 token1 token3 token5 token4 
	| token52 token1 token2 token5 token4 
	| token52 token1 token5 token4 
	| token52 token4 token5 
	| token52 token1 token2 token3 token4 token5 
	| token52 token1 token3 token4 token5 
	| token52 token1 token2 token4 token5 
	| token52 token1 token4 token5 
	| token52 token4 token1 token2 token3 token5 
	| token51 token5 token4 token2 token3 
	| token51 token5 token4 token1 token3 
	| token51 token5 token4 token3 
	| token51 token5 token1 token2 token3 token4 
	| token51 token5 token2 token3 token4 
	| token51 token5 token1 token3 token4 
	| token51 token5 token3 token4 
	| token51 token4 token5 token1 token2 token3 
	| token51 token4 token5 token2 token3 
	| token51 token4 token5 token1 token3 
	| token51 token4 token5 token3 
	| token51 token4 token1 token2 token3 token5 
	| token53 token2 token4 token5 
	| token53 token4 token1 token2 token3 token5 
	| token53 token4 token2 token3 token5 
	| token53 token4 token1 token2 token5 
	| token53 token4 token2 token5 
	| token53 token5 token4 
	| token53 token1 token2 token3 token5 token4 
	| token53 token2 token3 token5 token4 
	| token53 token1 token2 token5 token4 
	| token53 token2 token5 token4 
	| token53 token4 token5 
	| token53 token1 token2 token3 token4 token5 
	| token53 token2 token3 token4 token5 
	| token53 token1 token2 token4 token5 
	| token51 token4 token2 token3 token5 
	| token52 token5 token4 token1 token2 token3 
	| token52 token5 token4 token1 token3 
	| token52 token5 token4 token1 token2 
	| token52 token5 token4 token1 
	| token52 token5 token1 token2 token3 token4 
	| token52 token5 token1 token3 token4 
	| token52 token5 token1 token2 token4 
	| token52 token5 token1 token4 
	| token52 token4 token5 token1 token2 token3 
	| token52 token4 token5 token1 token3 
	| token52 token4 token5 token1 token2 
	| token52 token4 token5 token1 
	| token36 token4 token5 token1 token2 
	| token37 token4 token5 token1 
	| token37 token4 token1 token2 token5 
	| token37 token4 token1 token5 
	| token37 token5 token4 
	| token37 token1 token2 token5 token4 
	| token37 token1 token5 token4 
	| token37 token4 token5 
	| token37 token1 token2 token4 token5 
	| token37 token1 token4 token5 
	| token36 token5 token4 token1 token2 
	| token36 token5 token4 token2 
	| token36 token5 token1 token2 token4 
	| token36 token5 token2 token4 
	| token37 token4 token5 token1 token2 
	| token36 token4 token5 token2 
	| token36 token4 token1 token2 token5 
	| token36 token4 token2 token5 
	| token36 token5 token4 
	| token36 token1 token2 token5 token4 
	| token36 token2 token5 token4 
	| token36 token4 token5 
	| token36 token1 token2 token4 token5 
	| token36 token2 token4 token5 
	| token35 token5 token4 token1 token2 
	| token35 token5 token1 token2 token4 
	| token35 token4 token5 token1 token2 
	| token35 token4 token1 token2 token5 
	| token38 token4 token1 token5 
	| token39 token1 token2 token3 token5 token4 
	| token39 token1 token2 token3 token4 token5 
	| token38 token5 token4 token1 token2 
	| token38 token5 token4 token2 
	| token38 token5 token4 token1 
	| token38 token5 token1 token2 token4 
	| token38 token5 token2 token4 
	| token38 token5 token1 token4 
	| token38 token4 token5 token1 token2 
	| token38 token4 token5 token2 
	| token38 token4 token5 token1 
	| token38 token4 token1 token2 token5 
	| token38 token4 token2 token5 
	| token35 token5 token4 
	| token38 token1 token2 token5 token4 
	| token38 token2 token5 token4 
	| token38 token1 token5 token4 
	| token38 token5 token4 
	| token38 token1 token2 token4 token5 
	| token38 token2 token4 token5 
	| token38 token1 token4 token5 
	| token38 token4 token5 
	| token37 token5 token4 token1 token2 
	| token37 token5 token4 token1 
	| token37 token5 token1 token2 token4 
	| token37 token5 token1 token4 
	| token32 token4 token5 token2 
	| token33 token4 token5 token1 token2 
	| token33 token4 token5 token1 
	| token33 token4 token1 token2 token5 
	| token33 token4 token1 token5 
	| token33 token1 token2 token5 token4 
	| token33 token1 token5 token4 
	| token33 token1 token2 token4 token5 
	| token33 token1 token4 token5 
	| token32 token5 token4 token1 token2 
	| token32 token5 token4 token2 
	| token32 token5 token1 token2 token4 
	| token32 token5 token2 token4 
	| token32 token4 token5 token1 token2 
	| token33 token5 token1 token4 
	| token32 token4 token1 token2 token5 
	| token32 token4 token2 token5 
	| token32 token1 token2 token5 token4 
	| token32 token2 token5 token4 
	| token32 token1 token2 token4 token5 
	| token32 token2 token4 token5 
	| token31 token5 token4 token1 token2 
	| token31 token5 token1 token2 token4 
	| token31 token4 token5 token1 token2 
	| token31 token4 token1 token2 token5 
	| token31 token1 token2 token5 token4 
	| token31 token1 token2 token4 token5 
	| token34 token4 token2 token5 
	| token35 token1 token2 token5 token4 
	| token35 token4 token5 
	| token35 token1 token2 token4 token5 
	| token34 token5 token4 token1 token2 
	| token34 token5 token4 token2 
	| token34 token5 token4 token1 
	| token34 token5 token1 token2 token4 
	| token34 token5 token2 token4 
	| token34 token5 token1 token4 
	| token34 token4 token5 token1 token2 
	| token34 token4 token5 token2 
	| token34 token4 token5 token1 
	| token34 token4 token1 token2 token5 
	| token39 token4 token1 token2 token3 token5 
	| token34 token4 token1 token5 
	| token34 token1 token2 token5 token4 
	| token34 token2 token5 token4 
	| token34 token1 token5 token4 
	| token34 token5 token4 
	| token34 token1 token2 token4 token5 
	| token34 token2 token4 token5 
	| token34 token1 token4 token5 
	| token34 token4 token5 
	| token33 token5 token4 token1 token2 
	| token33 token5 token4 token1 
	| token33 token5 token1 token2 token4 
	| token44 token1 token5 token4 
	| token44 token5 token1 token2 token4 
	| token44 token5 token1 token4 
	| token44 token4 token5 token1 token2 token3 
	| token44 token4 token5 token1 token3 
	| token44 token4 token5 token1 token2 
	| token44 token4 token5 token1 
	| token44 token4 token1 token2 token3 token5 
	| token44 token4 token1 token3 token5 
	| token44 token4 token1 token2 token5 
	| token44 token4 token1 token5 
	| token44 token1 token2 token3 token5 token4 
	| token44 token1 token3 token5 token4 
	| token44 token1 token2 token5 token4 
	| token44 token5 token1 token3 token4 
	| token44 token1 token2 token3 token4 token5 
	| token44 token1 token3 token4 token5 
	| token44 token1 token2 token4 token5 
	| token44 token1 token4 token5 
	| token43 token5 token4 token1 token2 token3 
	| token43 token5 token4 token2 token3 
	| token43 token5 token4 token1 token3 
	| token43 token5 token4 token3 
	| token43 token5 token1 token2 token3 token4 
	| token43 token5 token2 token3 token4 
	| token43 token5 token1 token3 token4 
	| token43 token5 token3 token4 
	| token43 token4 token5 token1 token2 token3 
	| token45 token1 token2 token3 token5 token4 
	| token45 token5 token4 token2 
	| token45 token5 token1 token2 token3 token4 
	| token45 token5 token2 token3 token4 
	| token45 token5 token1 token2 token4 
	| token45 token5 token2 token4 
	| token45 token4 token5 token1 token2 token3 
	| token45 token4 token5 token2 token3 
	| token45 token4 token5 token1 token2 
	| token45 token4 token5 token2 
	| token45 token4 token1 token2 token3 token5 
	| token45 token4 token2 token3 token5 
	| token45 token4 token1 token2 token5 
	| token45 token4 token2 token5 
	| token43 token4 token5 token2 token3 
	| token45 token2 token3 token5 token4 
	| token45 token1 token2 token5 token4 
	| token45 token2 token5 token4 
	| token45 token1 token2 token3 token4 token5 
	| token45 token2 token3 token4 token5 
	| token45 token1 token2 token4 token5 
	| token45 token2 token4 token5 
	| token44 token5 token4 token1 token2 token3 
	| token44 token5 token4 token1 token3 
	| token44 token5 token4 token1 token2 
	| token44 token5 token4 token1 
	| token44 token5 token1 token2 token3 token4 
	| token40 token5 token1 token2 token3 token4 
	| token41 token5 token4 token1 token3 
	| token41 token5 token1 token2 token3 token4 
	| token41 token5 token1 token3 token4 
	| token41 token4 token5 token1 token2 token3 
	| token41 token4 token5 token1 token3 
	| token41 token4 token1 token2 token3 token5 
	| token41 token4 token1 token3 token5 
	| token41 token1 token2 token3 token5 token4 
	| token41 token1 token3 token5 token4 
	| token41 token1 token2 token3 token4 token5 
	| token41 token1 token3 token4 token5 
	| token40 token5 token4 token1 token2 token3 
	| token40 token5 token4 token2 token3 
	| token41 token5 token4 token1 token2 token3 
	| token40 token5 token2 token3 token4 
	| token40 token4 token5 token1 token2 token3 
	| token40 token4 token5 token2 token3 
	| token40 token4 token1 token2 token3 token5 
	| token40 token4 token2 token3 token5 
	| token40 token1 token2 token3 token5 token4 
	| token40 token2 token3 token5 token4 
	| token40 token1 token2 token3 token4 token5 
	| token40 token2 token3 token4 token5 
	| token39 token5 token4 token1 token2 token3 
	| token39 token5 token1 token2 token3 token4 
	| token39 token4 token5 token1 token2 token3 
	| token43 token3 token4 token5 
	| token43 token4 token5 token1 token3 
	| token43 token4 token5 token3 
	| token43 token4 token1 token2 token3 token5 
	| token43 token4 token2 token3 token5 
	| token43 token4 token1 token3 token5 
	| token43 token4 token3 token5 
	| token43 token1 token2 token3 token5 token4 
	| token43 token2 token3 token5 token4 
	| token43 token1 token3 token5 token4 
	| token43 token3 token5 token4 
	| token43 token1 token2 token3 token4 token5 
	| token43 token2 token3 token4 token5 
	| token43 token1 token3 token4 token5 
	| token45 token5 token4 token1 token2 
	| token42 token5 token4 token1 token2 token3 
	| token42 token5 token4 token1 token2 
	| token42 token5 token1 token2 token3 token4 
	| token42 token5 token1 token2 token4 
	| token42 token4 token5 token1 token2 token3 
	| token42 token4 token5 token1 token2 
	| token42 token4 token1 token2 token3 token5 
	| token42 token4 token1 token2 token5 
	| token42 token1 token2 token3 token5 token4 
	| token42 token1 token2 token5 token4 
	| token42 token1 token2 token3 token4 token5 
	| token42 token1 token2 token4 token5 
	;

%%

int yylex(void){
    static char buffer[256];

    if (fscanf(yyin, "%255s", buffer) != 1)
        return 0;
        
    if (strcmp(buffer, "token1") == 0) return token1;
    if (strcmp(buffer, "token2") == 0) return token2;
    if (strcmp(buffer, "token3") == 0) return token3;
    if (strcmp(buffer, "token4") == 0) return token4;
    if (strcmp(buffer, "token5") == 0) return token5;
    if (strcmp(buffer, "token6") == 0) return token6;
    if (strcmp(buffer, "token7") == 0) return token7;
    if (strcmp(buffer, "token8") == 0) return token8;
    if (strcmp(buffer, "token9") == 0) return token9;
    if (strcmp(buffer, "token10") == 0) return token10;
    if (strcmp(buffer, "token11") == 0) return token11;
    if (strcmp(buffer, "token12") == 0) return token12;
    if (strcmp(buffer, "token13") == 0) return token13;
    if (strcmp(buffer, "token14") == 0) return token14;
    if (strcmp(buffer, "token15") == 0) return token15;
    if (strcmp(buffer, "token16") == 0) return token16;
    if (strcmp(buffer, "token17") == 0) return token17;
    if (strcmp(buffer, "token18") == 0) return token18;
    if (strcmp(buffer, "token19") == 0) return token19;
    if (strcmp(buffer, "token20") == 0) return token20;
    if (strcmp(buffer, "token21") == 0) return token21;
    if (strcmp(buffer, "token22") == 0) return token22;
    if (strcmp(buffer, "token23") == 0) return token23;
    if (strcmp(buffer, "token24") == 0) return token24;
    if (strcmp(buffer, "token25") == 0) return token25;
    if (strcmp(buffer, "token26") == 0) return token26;
    if (strcmp(buffer, "token27") == 0) return token27;
    if (strcmp(buffer, "token28") == 0) return token28;
    if (strcmp(buffer, "token29") == 0) return token29;
    if (strcmp(buffer, "token30") == 0) return token30;
    if (strcmp(buffer, "token31") == 0) return token31;
    if (strcmp(buffer, "token32") == 0) return token32;
    if (strcmp(buffer, "token33") == 0) return token33;
    if (strcmp(buffer, "token34") == 0) return token34;
    if (strcmp(buffer, "token35") == 0) return token35;
    if (strcmp(buffer, "token36") == 0) return token36;
    if (strcmp(buffer, "token37") == 0) return token37;
    if (strcmp(buffer, "token38") == 0) return token38;
    if (strcmp(buffer, "token39") == 0) return token39;
    if (strcmp(buffer, "token40") == 0) return token40;
    if (strcmp(buffer, "token41") == 0) return token41;
    if (strcmp(buffer, "token42") == 0) return token42;
    if (strcmp(buffer, "token43") == 0) return token43;
    if (strcmp(buffer, "token44") == 0) return token44;
    if (strcmp(buffer, "token45") == 0) return token45;
    if (strcmp(buffer, "token46") == 0) return token46;
    if (strcmp(buffer, "token47") == 0) return token47;
    if (strcmp(buffer, "token48") == 0) return token48;
    if (strcmp(buffer, "token49") == 0) return token49;
    if (strcmp(buffer, "token50") == 0) return token50;
    if (strcmp(buffer, "token51") == 0) return token51;
    if (strcmp(buffer, "token52") == 0) return token52;
    if (strcmp(buffer, "token53") == 0) return token53;
    if (strcmp(buffer, "token54") == 0) return token54;

    fprintf(stderr, "Unknown token: %s\n", buffer);
    return 0;
}

void yyerror(const char* s){
    fprintf(stderr, "Parse error: %s\n", s);
}
