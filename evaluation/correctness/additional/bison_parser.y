%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int yylex(void);
void yyerror(const char*);
FILE* yyin;
%}

%token

ID NUM LPAREN RPAREN LBRACE RBRACE COMMA SEMICOL RETURN IF WHILE ASSIGN PLUS MINUS MUL DIV EQ LT GT

%%

program
    : functions
    ;

functions
    : functions function
    | function
    ;

function
    : ID LPAREN param_list RPAREN block
    ;

param_list
    : 
    | params
    ;

params
    : params COMMA ID
    | ID
    ;

block
    : LBRACE stmt_list RBRACE
    | LBRACE RBRACE
    ;

stmt_list
    : stmt
    | stmt stmt_list
    ;

stmt
    : expr SEMICOL
    | RETURN expr SEMICOL
    | ID ASSIGN expr SEMICOL
    | IF LPAREN logic RPAREN stmt
    | WHILE LPAREN logic RPAREN stmt
    | block
    ;

expr
    : expr PLUS factor
    | expr MINUS factor
    | factor
    ;
    
factor
    : factor MUL term
    | factor DIV term
    | term
    ;

term
    : LPAREN expr RPAREN
    | ID
    | NUM
    ;
    
logic
    : expr EQ expr
    | expr LT expr
    | expr GT expr
    | expr
    ;

%%

int yylex(void){
    static char buffer[256];

    if (fscanf(yyin, "%255s", buffer) != 1)
        return 0;
        
    if (strcmp(buffer, "ID") == 0) return ID;
    if (strcmp(buffer, "NUM") == 0) return NUM;   
     
    if (strcmp(buffer, "LPAREN") == 0) return LPAREN;
    if (strcmp(buffer, "RPAREN") == 0) return RPAREN;
    if (strcmp(buffer, "LBRACE") == 0) return LBRACE;
    if (strcmp(buffer, "RBRACE") == 0) return RBRACE;

    if (strcmp(buffer, "SEMICOL") == 0) return SEMICOL;
    if (strcmp(buffer, "COMMA") == 0) return COMMA;

    if (strcmp(buffer, "IF") == 0) return IF;
    if (strcmp(buffer, "WHILE") == 0) return WHILE;
    if (strcmp(buffer, "RETURN") == 0) return RETURN;
    
    if (strcmp(buffer, "ASSIGN") == 0) return ASSIGN;
    if (strcmp(buffer, "PLUS") == 0) return PLUS;
    if (strcmp(buffer, "MINUS") == 0) return MINUS;
    if (strcmp(buffer, "MUL") == 0) return MUL;
    if (strcmp(buffer, "DIV") == 0) return DIV;
    
    if (strcmp(buffer, "EQ") == 0) return EQ;
    if (strcmp(buffer, "LT") == 0) return LT;
    if (strcmp(buffer, "GT") == 0) return GT;

    fprintf(stderr, "Unknown token: %s\n", buffer);
    return 0;
}

void yyerror(const char* s){
    fprintf(stderr, "Parse error: %s\n", s);
}
