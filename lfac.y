%{
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cstring>
#include "Memory.h"

extern int yylineno;
extern FILE* yyin;
extern char* yytext;
void yyerror(char* s);
int yylex(void);
Memory memory;
int sintacticCorect = 1;
%}

%union { 
  int int_value;
  float float_value;
  char * string_value;
  char char_value;
  bool bool_value;
  class Data * data_value;
}

%token MAIN PRINT IF WHILE FOR CLASS EQUAL NOT_EQUAL AND OR CONST
%token <string_value> TYPE 
%token <int_value> INT
%token <float_value> FLOAT
%token <string_value> STRING
%token <char_value> CHAR
%token <bool_value> BOOL
%token <string_value> ID

%type <data_value> expression
%type <data_value> bool_expression
%type <data_value> bool_expression_big

%start progr
%%

progr: main {if (sintacticCorect == 1) {printf("Programul este corect sintactic\n");} else {printf("Program nu este corect sintactic.\n");}}
     ;

main : MAIN '(' ')'{ memory.push_scope(); } function_body { memory.pop_scope(); }
     ;

function_body: '{' statement_seq '}'
             | '{' '}'
             ;

statement_seq: statement
             | statement_seq statement
             ;

statement: ID '=' expression ';'{if(memory.exists($1)){memory.assign($1,$3);} else {std::cout<< "Variabila " << $1 << " nu a fost declarata.\n"; sintacticCorect = 0;}}
         | TYPE ID ';'  { memory.declare($1,$2); }
         | TYPE ID '=' expression ';' {memory.declare($1,$2); memory.assign($2,$4);}
         | CONST TYPE ID '=' expression ';' {memory.declare($2,$3); memory.assign($3,$5);}
         | CONST TYPE ID ';' {std::cout<< "Variabila constanta " << $3 << " nu poate fi declarata fara sa i se asigneze o valoare.\n"; sintacticCorect = 0;}
         | PRINT '(' expression ',' ID ')' ';' {memory.print($3,$5); }
         | ID '=' expression {std::cout<< "Lipseste ';' la finalul instructiunii\n"; sintacticCorect = 0;}
         | TYPE ID {std::cout<< "Lipseste ';' la finalul instructiunii.\n"; sintacticCorect = 0;}
         | TYPE ID '=' expression {std::cout<< "Lipseste ';' la finalul instructiunii.\n"; sintacticCorect = 0;}
         | CONST TYPE ID '=' expression {std::cout<< "Lipseste ';' la finalul instructiunii.\n"; sintacticCorect = 0;}
         | CONST TYPE ID {std::cout<< "Lipseste ';' la finalul instructiunii.\n"; sintacticCorect = 0;}
         | PRINT '(' expression ',' ID ')' {memory.print($3,$5); }
         | if_instruction
         | while_instruction
         | for_instruction
         | '{' statement_seq '}'
         ;

expression: expression '+' expression { Data &a=*($1); Data &b=*($3); $$=a+b; }
          | expression '-' expression { Data &a=*($1); Data &b=*($3); $$=a-b; }
          | expression '*' expression { Data &a=*($1); Data &b=*($3); $$=a*b; }
          | expression '/' expression { Data &a=*($1); Data &b=*($3); $$=a/b; }
          | '('expression')' {Data &a=*($2); $$=&a;}
          | INT { $$=new Data($1);}
          | FLOAT { $$=new Data($1);}
          | STRING { $$=new Data($1);}
          | CHAR { $$=new Data($1);}
          | BOOL { $$=new Data($1);}
          | ID { $$=memory.get($1);}
          ;

if_instruction: IF '(' bool_expression ')' {memory.push_scope();} statement {memory.pop_scope();}
              | IF '(' bool_expression_big ')' {memory.push_scope();} statement {memory.pop_scope();}
              ;

while_instruction: WHILE '(' bool_expression_big ')' {memory.push_scope();} statement {memory.pop_scope();}
                 | WHILE '(' bool_expression ')' {memory.push_scope();} statement {memory.pop_scope();}
                 ;

for_instruction: FOR '(' ID '=' expression ';' bool_expression_big ';' ID '=' expression ')'  {{if(memory.exists($3)){memory.assign($3,$5);} else {std::cout<<"Variabila nu a fost declarata.\n"; sintacticCorect = 0;}} memory.push_scope();} statement {memory.pop_scope();}
               | FOR '(' ID '=' expression ';' bool_expression ';' ID '=' expression ')'  {{if(memory.exists($3)){memory.assign($3,$5);} else {std::cout<<"Variabila nu a fost declarata.\n"; sintacticCorect = 0;}} memory.push_scope(); }  statement {memory.pop_scope();}
               ;                 

bool_expression: expression EQUAL expression { Data &a=*($1); Data &b=*($3); $$=(a==b); }
               | expression NOT_EQUAL expression { Data &a=*($1); Data &b=*($3); $$=(a!=b); }
               | expression '<' expression { Data &a=*($1); Data &b=*($3); $$=(a<b); }
               | expression '>' expression { Data &a=*($1); Data &b=*($3); $$=(a>b); }
               | '(' bool_expression ')'  {Data &a=*($2); $$=&a;}
               ;

bool_expression_big: bool_expression AND bool_expression { Data &a=*($1); Data &b=*($3); $$=(a&&b); }
                   | bool_expression OR bool_expression { Data &a=*($1); Data &b=*($3); $$=(a||b); }
                   | bool_expression_big AND bool_expression { Data &a=*($1); Data &b=*($3); $$=(a&&b); }
                   | bool_expression_big OR bool_expression { Data &a=*($1); Data &b=*($3); $$=(a||b); }
                   | '(' bool_expression_big ')' {Data &a=*($2); $$=&a;}
                   ;
%%

void yyerror(char * s){
printf("eroare: %s la linia:%d\n",s,yylineno);
}

int main(int argc, char** argv){
yyin=fopen(argv[1],"r");
yyparse();
}