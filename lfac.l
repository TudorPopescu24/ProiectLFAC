%{ 
#include <stdlib.h>
#include "y.tab.h"
#include <string.h>
%}
%option noyywrap
%option yylineno
%%

"int"|"float"|"string"|"char"|"bool" {yylval.string_value = strdup(yytext); return TYPE;}
"const" {return CONST;}
"class" {return CLASS;}
"main" {return MAIN;}
"if" {return IF;}
"while" {return WHILE;}
"for" {return FOR;}
"public" {return PUBLIC;}
"private" {return PRIVATE;}
"protected" {return PROTECTED;}
"print_table" {return PRINT_TABLE;}
"print_table_functions" {return PRINT_TABLE_FUNCTIONS;}
"ASTfunction" {return ASTFUNC;}
"==" {return EQUAL;}
"!=" {return NOT_EQUAL;}
"."  {return PCT;}
"&&" {return AND;}
"||" {return OR;}
"print" {return PRINT;}

[1-9][0-9]*|0 {yylval.int_value=atoi(yytext); return INT;}
[0-9]*"."[0-9]* {yylval.float_value=atof(yytext); return FLOAT;}
\".*\" {yylval.string_value=strdup(yytext); return STRING;}
\'.\' {yylval.char_value = yytext[1]; return CHAR;}
"true"  {yylval.bool_value = 1; return BOOL;}
"false" {yylval.bool_value = 0; return BOOL;}

[a-zA-Z][a-zA-Z0-9]* {yylval.string_value = strdup(yytext); return ID;}

[ \t] ;
"/*"(.|\n)+"*/" ;
\n {yylineno++;}
. {return yytext[0];}

%%

