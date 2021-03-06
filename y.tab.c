/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "lfac.y"

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

#line 86 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 203 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   361

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  108
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  229

#define YYUNDEFTOK  2
#define YYMAXUTOK   283


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      29,    30,    41,    39,    33,    40,     2,    42,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    37,    34,
      43,    38,    44,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    35,     2,    36,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    31,     2,    32,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    43,    43,    43,    44,    47,    48,    49,    50,    51,
      52,    55,    55,    58,    59,    60,    63,    63,    64,    64,
      65,    66,    69,    70,    71,    72,    75,    76,    79,    80,
      83,    84,    87,    87,    88,    91,    92,    95,    96,    97,
      98,   101,   102,   103,   106,   107,   110,   111,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   157,   157,   158,
     158,   161,   161,   162,   162,   165,   165,   166,   166,   169,
     170,   171,   172,   173,   176,   177,   178,   179,   180
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "MAIN", "PRINT", "IF", "WHILE", "FOR",
  "CLASS", "PUBLIC", "PRIVATE", "PROTECTED", "PCT", "EQUAL", "NOT_EQUAL",
  "AND", "OR", "CONST", "ARRAY", "PRINT_TABLE", "PRINT_TABLE_FUNCTIONS",
  "ASTFUNC", "TYPE", "INT", "FLOAT", "STRING", "CHAR", "BOOL", "ID", "'('",
  "')'", "'{'", "'}'", "','", "';'", "'['", "']'", "':'", "'='", "'+'",
  "'-'", "'*'", "'/'", "'<'", "'>'", "$accept", "progr", "$@1",
  "declarations_global", "main", "$@2", "function_body", "function", "$@3",
  "$@4", "param_seq", "array", "var", "size", "class", "$@5",
  "class_contain", "class_statement", "modification_access",
  "statement_seq", "parameter_list", "statement", "expression",
  "if_instruction", "$@6", "$@7", "while_instruction", "$@8", "$@9",
  "for_instruction", "$@10", "$@11", "bool_expression",
  "bool_expression_big", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,    40,
      41,   123,   125,    44,    59,    91,    93,    58,    61,    43,
      45,    42,    47,    60,    62
};
# endif

#define YYPACT_NINF (-150)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       1,    -9,    28,   251,  -150,    20,  -150,    48,    49,    83,
     107,    92,   124,   131,   139,   140,    67,   171,   270,    94,
    -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,   299,   307,
     307,   125,   179,   142,   172,   182,   196,   203,   259,   208,
     159,   144,   299,  -150,  -150,   173,  -150,  -150,  -150,  -150,
    -150,   219,   233,  -150,  -150,  -150,  -150,  -150,     2,   299,
    -150,   174,   307,    27,    42,    73,    89,    93,   224,   234,
      72,   231,   235,   250,   238,   266,  -150,   299,   247,  -150,
     261,    22,   185,  -150,  -150,   264,   244,  -150,  -150,   213,
    -150,   267,   285,    16,   103,   286,   299,   299,   299,   299,
      21,   102,   111,   299,   299,   299,   299,   315,   315,  -150,
     315,   315,  -150,  -150,  -150,   299,  -150,   237,  -150,   299,
    -150,  -150,   281,    57,  -150,     4,   265,  -150,  -150,   282,
     299,   310,  -150,  -150,   232,  -150,   318,  -150,  -150,    91,
    -150,   317,   185,   185,   185,   185,  -150,  -150,   185,   185,
     185,   185,   315,  -150,  -150,   270,  -150,  -150,   270,   270,
     270,   269,  -150,  -150,  -150,    -2,  -150,   -10,   278,  -150,
     219,   178,   219,   210,  -150,  -150,   185,   144,  -150,  -150,
    -150,    31,   314,   319,  -150,  -150,  -150,  -150,   307,  -150,
    -150,   123,   328,  -150,  -150,  -150,   219,  -150,   219,   316,
     323,  -150,  -150,    -5,     9,   105,   137,  -150,  -150,  -150,
    -150,  -150,   325,   326,  -150,   169,   320,   321,  -150,   299,
     299,   108,   134,  -150,  -150,   270,   270,  -150,  -150
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     0,     0,     4,     0,     1,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    63,     9,     8,    60,    61,    62,    11,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    55,     0,
       0,     0,     0,    26,    67,     0,    44,     3,     7,     6,
       5,     0,     0,    77,    78,    79,    80,    81,    82,     0,
      86,     0,     0,     0,     0,     0,     0,     0,     0,    32,
      58,     0,     0,     0,     0,    18,    49,     0,     0,    64,
       0,     0,    46,    30,    31,     0,    54,    68,    45,     0,
      12,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    87,
       0,     0,    89,    93,    91,     0,    34,     0,    52,     0,
      69,    70,     0,     0,    16,     0,    56,    27,    65,     0,
       0,    29,    48,    14,    15,    85,     0,    24,    83,     0,
      76,     0,    72,    73,    74,    75,   103,   108,    99,   100,
     101,   102,     0,   104,   105,     0,   106,   107,     0,     0,
       0,     0,    41,    42,    43,     0,    35,     0,    57,    71,
       0,     0,     0,     0,    50,    66,    47,     0,    13,    22,
      84,     0,    59,     0,    88,    90,    94,    92,     0,    33,
      36,     0,     0,    40,    51,    20,     0,    17,     0,     0,
       0,    25,    53,     0,     0,     0,     0,    39,    21,    19,
      28,    23,     0,     0,    38,     0,     0,     0,    37,     0,
       0,     0,     0,    97,    95,     0,     0,    98,    96
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -150,  -150,  -150,  -150,   336,  -150,  -149,    -1,  -150,  -150,
       5,    -3,   -35,   180,   337,  -150,  -150,   195,  -150,   272,
    -150,     3,   -23,  -150,  -150,  -150,  -150,  -150,  -150,  -150,
    -150,  -150,   -17,   -29
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    19,     4,    51,    90,    44,   172,   125,
     139,    60,    43,    85,    22,   117,   165,   166,   167,    45,
      81,    46,    63,    24,   155,   158,    25,   160,   159,    26,
     226,   225,    64,    65
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      21,    67,    20,    78,     1,    61,    23,   162,   163,   164,
     107,   108,   191,    66,    92,    21,    21,    82,    48,    86,
       5,   195,    50,   197,   110,   111,   136,   192,     6,   212,
     189,    93,   137,   102,   103,   104,    94,    41,   136,   100,
     103,   104,    21,   213,   137,   101,   138,   208,    88,   209,
      27,   140,   129,   200,   126,   130,    78,   107,   108,   201,
      96,    97,    98,    99,   105,   106,    96,    97,    98,    99,
     105,   106,   109,   142,   143,   144,   145,    28,    29,   136,
     148,   149,   150,   151,    37,   137,    21,   170,   110,   111,
     153,   154,   161,   156,   157,    38,   168,     1,     7,     8,
       9,    10,    11,   112,   107,   108,   118,   176,   110,   111,
     119,    12,    30,    13,    14,    15,    16,   107,   108,   113,
      32,   180,    17,   114,   181,    18,   110,   111,   171,   100,
     173,    21,   146,   140,    75,   183,    31,    88,   223,   214,
      37,   147,    96,    97,    98,    99,    33,    96,    97,    98,
      99,   205,    21,    68,    37,    21,    21,    21,   184,   204,
      34,   185,   186,   187,   224,   215,   193,    83,    35,    36,
      70,   203,    84,    96,    97,    98,    99,     7,     8,     9,
      10,    52,    53,    54,    55,    56,    57,    58,    59,    80,
      12,   207,    13,    14,    15,    16,   221,   222,    75,    39,
      40,    17,    71,   218,    18,    87,    41,    95,   196,    42,
      69,   181,    72,    96,    97,    98,    99,     7,     8,     9,
      10,    73,    21,    21,    96,    97,    98,    99,   227,   228,
      12,    74,    13,    14,    15,    16,     7,     8,     9,    10,
     198,    17,    79,   181,    18,   133,   162,   163,   164,    12,
      89,    13,    14,    15,    16,     7,     8,     9,    10,    11,
      17,    91,   115,    18,   178,   120,   116,   123,    12,   121,
      13,    14,    15,    16,     7,     8,     9,    10,   132,    17,
     122,   127,    18,    96,    97,    98,    99,    12,    75,    13,
      14,    15,    16,    76,    41,   128,   124,    77,    17,   174,
     131,    18,    41,   188,    96,    97,    98,    99,    96,    97,
      98,    99,   194,   135,   141,   169,   175,    96,    97,    98,
      99,    52,    53,    54,    55,    56,    57,    58,    59,    52,
      53,    54,    55,    56,    57,    58,    62,    52,    53,    54,
      55,    56,    57,    58,   152,   177,   179,   182,   202,   146,
     206,   211,   210,   216,   217,    47,    49,   199,   219,   220,
     190,   134
};

static const yytype_uint8 yycheck[] =
{
       3,    30,     3,    38,     3,    28,     3,     9,    10,    11,
      15,    16,    22,    30,    12,    18,    19,    40,    19,    42,
      29,   170,    19,   172,    15,    16,    22,    37,     0,    34,
      32,    29,    28,    62,    13,    14,    59,    35,    22,    62,
      13,    14,    45,    34,    28,    62,    30,   196,    45,   198,
      30,    30,    30,    22,    77,    33,    91,    15,    16,    28,
      39,    40,    41,    42,    43,    44,    39,    40,    41,    42,
      43,    44,    30,    96,    97,    98,    99,    29,    29,    22,
     103,   104,   105,   106,    17,    28,    89,    30,    15,    16,
     107,   108,   115,   110,   111,    28,   119,     3,     4,     5,
       6,     7,     8,    30,    15,    16,    34,   130,    15,    16,
      38,    17,    29,    19,    20,    21,    22,    15,    16,    30,
      28,    30,    28,    30,    33,    31,    15,    16,   123,   152,
     125,   134,    30,    30,    29,   152,    29,   134,    30,    34,
      17,    30,    39,    40,    41,    42,    22,    39,    40,    41,
      42,    28,   155,    28,    17,   158,   159,   160,   155,   188,
      29,   158,   159,   160,    30,    28,   167,    23,    29,    29,
      28,   188,    28,    39,    40,    41,    42,     4,     5,     6,
       7,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      17,   192,    19,    20,    21,    22,   219,   220,    29,    28,
      29,    28,    30,    34,    31,    32,    35,    33,    30,    38,
      31,    33,    30,    39,    40,    41,    42,     4,     5,     6,
       7,    25,   225,   226,    39,    40,    41,    42,   225,   226,
      17,    28,    19,    20,    21,    22,     4,     5,     6,     7,
      30,    28,    34,    33,    31,    32,     9,    10,    11,    17,
      31,    19,    20,    21,    22,     4,     5,     6,     7,     8,
      28,    28,    38,    31,    32,    34,    32,    29,    17,    34,
      19,    20,    21,    22,     4,     5,     6,     7,    34,    28,
      30,    34,    31,    39,    40,    41,    42,    17,    29,    19,
      20,    21,    22,    34,    35,    34,    30,    38,    28,    34,
      36,    31,    35,    34,    39,    40,    41,    42,    39,    40,
      41,    42,    34,    28,    28,    34,    34,    39,    40,    41,
      42,    22,    23,    24,    25,    26,    27,    28,    29,    22,
      23,    24,    25,    26,    27,    28,    29,    22,    23,    24,
      25,    26,    27,    28,    29,    35,    28,    30,    34,    30,
      22,    28,    36,    28,    28,    19,    19,   177,    38,    38,
     165,    89
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    46,    47,    49,    29,     0,     4,     5,     6,
       7,     8,    17,    19,    20,    21,    22,    28,    31,    48,
      52,    56,    59,    66,    68,    71,    74,    30,    29,    29,
      29,    29,    28,    22,    29,    29,    29,    17,    28,    28,
      29,    35,    38,    57,    52,    64,    66,    49,    52,    59,
      66,    50,    22,    23,    24,    25,    26,    27,    28,    29,
      56,    67,    29,    67,    77,    78,    77,    78,    28,    31,
      28,    30,    30,    25,    28,    29,    34,    38,    57,    34,
      30,    65,    67,    23,    28,    58,    67,    32,    66,    31,
      51,    28,    12,    29,    67,    33,    39,    40,    41,    42,
      67,    77,    78,    13,    14,    43,    44,    15,    16,    30,
      15,    16,    30,    30,    30,    38,    32,    60,    34,    38,
      34,    34,    30,    29,    30,    54,    67,    34,    34,    30,
      33,    36,    34,    32,    64,    28,    22,    28,    30,    55,
      30,    28,    67,    67,    67,    67,    30,    30,    67,    67,
      67,    67,    29,    77,    77,    69,    77,    77,    70,    73,
      72,    67,     9,    10,    11,    61,    62,    63,    67,    34,
      30,    55,    53,    55,    34,    34,    67,    35,    32,    28,
      30,    33,    30,    77,    66,    66,    66,    66,    34,    32,
      62,    22,    37,    52,    34,    51,    30,    51,    30,    58,
      22,    28,    34,    77,    78,    28,    22,    52,    51,    51,
      36,    28,    34,    34,    34,    28,    28,    28,    34,    38,
      38,    67,    67,    30,    30,    76,    75,    66,    66
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    45,    47,    46,    46,    48,    48,    48,    48,    48,
      48,    50,    49,    51,    51,    51,    53,    52,    54,    52,
      52,    52,    55,    55,    55,    55,    56,    56,    57,    57,
      58,    58,    60,    59,    59,    61,    61,    62,    62,    62,
      62,    63,    63,    63,    64,    64,    65,    65,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    69,    68,    70,
      68,    72,    71,    73,    71,    75,    74,    76,    74,    77,
      77,    77,    77,    77,    78,    78,    78,    78,    78
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     3,     1,     2,     2,     2,     1,     1,
       1,     0,     5,     3,     2,     2,     0,     6,     0,     7,
       6,     7,     2,     4,     1,     3,     2,     4,     6,     3,
       1,     1,     0,     6,     4,     1,     2,     5,     4,     3,
       2,     1,     1,     1,     1,     2,     1,     3,     4,     3,
       5,     6,     4,     7,     3,     2,     4,     5,     3,     6,
       1,     1,     1,     1,     3,     4,     5,     1,     3,     4,
       4,     5,     3,     3,     3,     3,     3,     1,     1,     1,
       1,     1,     1,     3,     4,     3,     1,     0,     6,     0,
       6,     0,     6,     0,     6,     0,    14,     0,    14,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 43 "lfac.y"
       { memory.push_scope(); }
#line 1557 "y.tab.c"
    break;

  case 3:
#line 43 "lfac.y"
                                                         { if (sintacticCorect == 1) {printf("Programul este corect sintactic\n");} else {printf("Program nu este corect sintactic.\n");}}
#line 1563 "y.tab.c"
    break;

  case 4:
#line 44 "lfac.y"
            {if (sintacticCorect == 1) {printf("Programul este corect sintactic\n");} else {printf("Program nu este corect sintactic.\n");}}
#line 1569 "y.tab.c"
    break;

  case 11:
#line 55 "lfac.y"
                   { memory.push_scope(); }
#line 1575 "y.tab.c"
    break;

  case 12:
#line 55 "lfac.y"
                                                          { memory.pop_scope(); memory.pop_scope();}
#line 1581 "y.tab.c"
    break;

  case 15:
#line 60 "lfac.y"
                                 {std::cout<<"Lipseste acolada de la finalul declararii functiei. \n";}
#line 1587 "y.tab.c"
    break;

  case 16:
#line 63 "lfac.y"
                           {if(memory.exists_function((yyvsp[-3].string_value), (yyvsp[-2].string_value))) {std::cout<<"Exista o functie cu acelasi nume \n";} memory.define_function((yyvsp[-3].string_value), (yyvsp[-2].string_value)); memory.push_scope();}
#line 1593 "y.tab.c"
    break;

  case 17:
#line 63 "lfac.y"
                                                                                                                                                                                       {memory.pop_scope();}
#line 1599 "y.tab.c"
    break;

  case 18:
#line 64 "lfac.y"
                      {if(memory.exists_function((yyvsp[-2].string_value), (yyvsp[-1].string_value))) {std::cout<<"Exista o functie cu acelasi nume.\n";} memory.define_function((yyvsp[-2].string_value), (yyvsp[-1].string_value)); memory.push_scope();}
#line 1605 "y.tab.c"
    break;

  case 19:
#line 64 "lfac.y"
                                                                                                                                                                                                {memory.pop_scope();}
#line 1611 "y.tab.c"
    break;

  case 22:
#line 69 "lfac.y"
                   { memory.declare((yyvsp[-1].string_value),(yyvsp[0].string_value)); }
#line 1617 "y.tab.c"
    break;

  case 23:
#line 70 "lfac.y"
                                  { memory.declare((yyvsp[-1].string_value),(yyvsp[0].string_value)); }
#line 1623 "y.tab.c"
    break;

  case 27:
#line 76 "lfac.y"
                        { memory.declare((yyvsp[-3].string_value),(yyvsp[-2].string_value)); }
#line 1629 "y.tab.c"
    break;

  case 32:
#line 87 "lfac.y"
                    {if(memory.exists_class((yyvsp[-1].string_value))) {std::cout<<"Exista o clasa cu acelasi nume \n";} memory.define_class((yyvsp[-1].string_value)); memory.push_scope(); }
#line 1635 "y.tab.c"
    break;

  case 33:
#line 87 "lfac.y"
                                                                                                                                                                    { memory.pop_scope(); }
#line 1641 "y.tab.c"
    break;

  case 34:
#line 88 "lfac.y"
                         {if(memory.exists_class((yyvsp[-2].string_value))) {std::cout<<"Exista o clasa cu acelasi nume\n ";} memory.define_class((yyvsp[-2].string_value));}
#line 1647 "y.tab.c"
    break;

  case 37:
#line 95 "lfac.y"
                                                     { memory.declare((yyvsp[-2].string_value),(yyvsp[-1].string_value)); }
#line 1653 "y.tab.c"
    break;

  case 38:
#line 96 "lfac.y"
                                                 { memory.declare((yyvsp[-2].string_value),(yyvsp[-1].string_value)); }
#line 1659 "y.tab.c"
    break;

  case 48:
#line 114 "lfac.y"
                                {if(memory.exists((yyvsp[-3].string_value))){memory.assign((yyvsp[-3].string_value),(yyvsp[-1].data_value));} else {std::cout<< "Variabila " << (yyvsp[-3].string_value) << " nu a fost declarata.\n"; sintacticCorect = 0;}}
#line 1665 "y.tab.c"
    break;

  case 49:
#line 115 "lfac.y"
                        { memory.declare((yyvsp[-2].string_value),(yyvsp[-1].string_value)); }
#line 1671 "y.tab.c"
    break;

  case 50:
#line 116 "lfac.y"
                                      {memory.declare((yyvsp[-4].string_value),(yyvsp[-3].string_value)); memory.assign((yyvsp[-3].string_value),(yyvsp[-1].data_value));}
#line 1677 "y.tab.c"
    break;

  case 51:
#line 117 "lfac.y"
                                            {memory.declare((yyvsp[-4].string_value),(yyvsp[-3].string_value)); memory.assign((yyvsp[-3].string_value),(yyvsp[-1].data_value));}
#line 1683 "y.tab.c"
    break;

  case 52:
#line 118 "lfac.y"
                             {std::cout<< "Variabila constanta " << (yyvsp[-1].string_value) << " nu poate fi declarata fara sa i se asigneze o valoare.\n"; sintacticCorect = 0;}
#line 1689 "y.tab.c"
    break;

  case 53:
#line 119 "lfac.y"
                                               {memory.print((yyvsp[-4].data_value),(yyvsp[-2].string_value)); }
#line 1695 "y.tab.c"
    break;

  case 54:
#line 120 "lfac.y"
                             {std::cout<< "Lipseste ';' la finalul instructiunii\n"; sintacticCorect = 0;}
#line 1701 "y.tab.c"
    break;

  case 55:
#line 121 "lfac.y"
                   {std::cout<< "Lipseste ';' la finalul instructiunii.\n"; sintacticCorect = 0;}
#line 1707 "y.tab.c"
    break;

  case 56:
#line 122 "lfac.y"
                                  {std::cout<< "Lipseste ';' la finalul instructiunii.\n"; sintacticCorect = 0;}
#line 1713 "y.tab.c"
    break;

  case 57:
#line 123 "lfac.y"
                                        {std::cout<< "Lipseste ';' la finalul instructiunii.\n"; sintacticCorect = 0;}
#line 1719 "y.tab.c"
    break;

  case 58:
#line 124 "lfac.y"
                         {std::cout<< "Lipseste ';' la finalul instructiunii.\n"; sintacticCorect = 0;}
#line 1725 "y.tab.c"
    break;

  case 59:
#line 125 "lfac.y"
                                           {memory.print((yyvsp[-3].data_value),(yyvsp[-1].string_value)); }
#line 1731 "y.tab.c"
    break;

  case 64:
#line 130 "lfac.y"
                     {if(!memory.exists_class((yyvsp[-2].string_value))) {std::cout<<"Clasa nu este definita. \n";} memory.declare((yyvsp[-2].string_value),(yyvsp[-1].string_value)); }
#line 1737 "y.tab.c"
    break;

  case 65:
#line 131 "lfac.y"
                          {if(!memory.exists_function_byName((yyvsp[-3].string_value))) {std::cout<<"Functia nu este definita. \n";} }
#line 1743 "y.tab.c"
    break;

  case 66:
#line 132 "lfac.y"
                                         {if(!memory.exists_function_byName((yyvsp[-4].string_value))) {std::cout<<"Functia nu este definita.\n";} }
#line 1749 "y.tab.c"
    break;

  case 69:
#line 135 "lfac.y"
                                   { memory.table_print();}
#line 1755 "y.tab.c"
    break;

  case 70:
#line 136 "lfac.y"
                                             {memory.table_print_functions();}
#line 1761 "y.tab.c"
    break;

  case 71:
#line 137 "lfac.y"
                                      { memory.AST((yyvsp[-2].string_value)); }
#line 1767 "y.tab.c"
    break;

  case 72:
#line 140 "lfac.y"
                                      { Data &a=*((yyvsp[-2].data_value)); Data &b=*((yyvsp[0].data_value)); (yyval.data_value)=a+b; }
#line 1773 "y.tab.c"
    break;

  case 73:
#line 141 "lfac.y"
                                      { Data &a=*((yyvsp[-2].data_value)); Data &b=*((yyvsp[0].data_value)); (yyval.data_value)=a-b; }
#line 1779 "y.tab.c"
    break;

  case 74:
#line 142 "lfac.y"
                                      { Data &a=*((yyvsp[-2].data_value)); Data &b=*((yyvsp[0].data_value)); (yyval.data_value)=a*b; }
#line 1785 "y.tab.c"
    break;

  case 75:
#line 143 "lfac.y"
                                      { Data &a=*((yyvsp[-2].data_value)); Data &b=*((yyvsp[0].data_value)); (yyval.data_value)=a/b; }
#line 1791 "y.tab.c"
    break;

  case 76:
#line 144 "lfac.y"
                             {Data &a=*((yyvsp[-1].data_value)); (yyval.data_value)=&a;}
#line 1797 "y.tab.c"
    break;

  case 77:
#line 145 "lfac.y"
                { (yyval.data_value)=new Data((yyvsp[0].int_value));}
#line 1803 "y.tab.c"
    break;

  case 78:
#line 146 "lfac.y"
                  { (yyval.data_value)=new Data((yyvsp[0].float_value));}
#line 1809 "y.tab.c"
    break;

  case 79:
#line 147 "lfac.y"
                   { (yyval.data_value)=new Data((yyvsp[0].string_value));}
#line 1815 "y.tab.c"
    break;

  case 80:
#line 148 "lfac.y"
                 { (yyval.data_value)=new Data((yyvsp[0].char_value));}
#line 1821 "y.tab.c"
    break;

  case 81:
#line 149 "lfac.y"
                 { (yyval.data_value)=new Data((yyvsp[0].bool_value));}
#line 1827 "y.tab.c"
    break;

  case 82:
#line 150 "lfac.y"
               { (yyval.data_value)=memory.get((yyvsp[0].string_value));}
#line 1833 "y.tab.c"
    break;

  case 83:
#line 151 "lfac.y"
                        {if(!memory.exists_function_byName((yyvsp[-2].string_value))) {std::cout<<"Functia nu este definita.\n";} (yyval.data_value)=new Data(0); }
#line 1839 "y.tab.c"
    break;

  case 84:
#line 152 "lfac.y"
                                {if(!memory.exists_function_byName((yyvsp[-3].string_value))) {std::cout<<"Functia nu este definita.\n";} (yyval.data_value)=new Data(0); }
#line 1845 "y.tab.c"
    break;

  case 85:
#line 153 "lfac.y"
                      { if(!memory.exists((yyvsp[-2].string_value))) {std::cout<<"Nu exista o clasa cu acest nume. \n";}   (yyval.data_value)=new Data(0);}
#line 1851 "y.tab.c"
    break;

  case 86:
#line 154 "lfac.y"
                  {(yyval.data_value)=new Data(0);}
#line 1857 "y.tab.c"
    break;

  case 87:
#line 157 "lfac.y"
                                           {memory.push_scope();}
#line 1863 "y.tab.c"
    break;

  case 88:
#line 157 "lfac.y"
                                                                            {memory.pop_scope();}
#line 1869 "y.tab.c"
    break;

  case 89:
#line 158 "lfac.y"
                                               {memory.push_scope();}
#line 1875 "y.tab.c"
    break;

  case 90:
#line 158 "lfac.y"
                                                                                {memory.pop_scope();}
#line 1881 "y.tab.c"
    break;

  case 91:
#line 161 "lfac.y"
                                                     {memory.push_scope();}
#line 1887 "y.tab.c"
    break;

  case 92:
#line 161 "lfac.y"
                                                                                      {memory.pop_scope();}
#line 1893 "y.tab.c"
    break;

  case 93:
#line 162 "lfac.y"
                                                 {memory.push_scope();}
#line 1899 "y.tab.c"
    break;

  case 94:
#line 162 "lfac.y"
                                                                                  {memory.pop_scope();}
#line 1905 "y.tab.c"
    break;

  case 95:
#line 165 "lfac.y"
                                                                                              {{if(memory.exists((yyvsp[-9].string_value))){memory.assign((yyvsp[-9].string_value),(yyvsp[-7].data_value));} else {std::cout<<"Variabila nu a fost declarata.\n"; sintacticCorect = 0;}} memory.push_scope();}
#line 1911 "y.tab.c"
    break;

  case 96:
#line 165 "lfac.y"
                                                                                                                                                                                                                                                         {memory.pop_scope();}
#line 1917 "y.tab.c"
    break;

  case 97:
#line 166 "lfac.y"
                                                                                          {{if(memory.exists((yyvsp[-9].string_value))){memory.assign((yyvsp[-9].string_value),(yyvsp[-7].data_value));} else {std::cout<<"Variabila nu a fost declarata.\n"; sintacticCorect = 0;}} memory.push_scope(); }
#line 1923 "y.tab.c"
    break;

  case 98:
#line 166 "lfac.y"
                                                                                                                                                                                                                                                       {memory.pop_scope();}
#line 1929 "y.tab.c"
    break;

  case 99:
#line 169 "lfac.y"
                                             { Data &a=*((yyvsp[-2].data_value)); Data &b=*((yyvsp[0].data_value)); (yyval.data_value)=(a==b); }
#line 1935 "y.tab.c"
    break;

  case 100:
#line 170 "lfac.y"
                                                 { Data &a=*((yyvsp[-2].data_value)); Data &b=*((yyvsp[0].data_value)); (yyval.data_value)=(a!=b); }
#line 1941 "y.tab.c"
    break;

  case 101:
#line 171 "lfac.y"
                                           { Data &a=*((yyvsp[-2].data_value)); Data &b=*((yyvsp[0].data_value)); (yyval.data_value)=(a<b); }
#line 1947 "y.tab.c"
    break;

  case 102:
#line 172 "lfac.y"
                                           { Data &a=*((yyvsp[-2].data_value)); Data &b=*((yyvsp[0].data_value)); (yyval.data_value)=(a>b); }
#line 1953 "y.tab.c"
    break;

  case 103:
#line 173 "lfac.y"
                                          {Data &a=*((yyvsp[-1].data_value)); (yyval.data_value)=&a;}
#line 1959 "y.tab.c"
    break;

  case 104:
#line 176 "lfac.y"
                                                         { Data &a=*((yyvsp[-2].data_value)); Data &b=*((yyvsp[0].data_value)); (yyval.data_value)=(a&&b); }
#line 1965 "y.tab.c"
    break;

  case 105:
#line 177 "lfac.y"
                                                        { Data &a=*((yyvsp[-2].data_value)); Data &b=*((yyvsp[0].data_value)); (yyval.data_value)=(a||b); }
#line 1971 "y.tab.c"
    break;

  case 106:
#line 178 "lfac.y"
                                                             { Data &a=*((yyvsp[-2].data_value)); Data &b=*((yyvsp[0].data_value)); (yyval.data_value)=(a&&b); }
#line 1977 "y.tab.c"
    break;

  case 107:
#line 179 "lfac.y"
                                                            { Data &a=*((yyvsp[-2].data_value)); Data &b=*((yyvsp[0].data_value)); (yyval.data_value)=(a||b); }
#line 1983 "y.tab.c"
    break;

  case 108:
#line 180 "lfac.y"
                                                 {Data &a=*((yyvsp[-1].data_value)); (yyval.data_value)=&a;}
#line 1989 "y.tab.c"
    break;


#line 1993 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 182 "lfac.y"


void yyerror(char * s){
printf("eroare: %s la linia:%d\n",s,yylineno);
}

int main(int argc, char** argv){
yyin=fopen(argv[1],"r");
yyparse();
}
