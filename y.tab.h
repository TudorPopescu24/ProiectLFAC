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
    MAIN = 258,
    PRINT = 259,
    IF = 260,
    WHILE = 261,
    FOR = 262,
    CLASS = 263,
    PUBLIC = 264,
    PRIVATE = 265,
    PROTECTED = 266,
    PCT = 267,
    EQUAL = 268,
    NOT_EQUAL = 269,
    AND = 270,
    OR = 271,
    CONST = 272,
    ARRAY = 273,
    PRINT_TABLE = 274,
    PRINT_TABLE_FUNCTIONS = 275,
    ASTFUNC = 276,
    TYPE = 277,
    INT = 278,
    FLOAT = 279,
    STRING = 280,
    CHAR = 281,
    BOOL = 282,
    ID = 283
  };
#endif
/* Tokens.  */
#define MAIN 258
#define PRINT 259
#define IF 260
#define WHILE 261
#define FOR 262
#define CLASS 263
#define PUBLIC 264
#define PRIVATE 265
#define PROTECTED 266
#define PCT 267
#define EQUAL 268
#define NOT_EQUAL 269
#define AND 270
#define OR 271
#define CONST 272
#define ARRAY 273
#define PRINT_TABLE 274
#define PRINT_TABLE_FUNCTIONS 275
#define ASTFUNC 276
#define TYPE 277
#define INT 278
#define FLOAT 279
#define STRING 280
#define CHAR 281
#define BOOL 282
#define ID 283

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 17 "lfac.y"
 
  int int_value;
  float float_value;
  char * string_value;
  char char_value;
  bool bool_value;
  class Data * data_value;

#line 122 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
