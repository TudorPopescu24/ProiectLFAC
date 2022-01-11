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
    TYPE = 276,
    INT = 277,
    FLOAT = 278,
    STRING = 279,
    CHAR = 280,
    BOOL = 281,
    ID = 282
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
#define TYPE 276
#define INT 277
#define FLOAT 278
#define STRING 279
#define CHAR 280
#define BOOL 281
#define ID 282

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

#line 201 "y.tab.c"

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
#define YYLAST   351

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  106
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  224

#define YYUNDEFTOK  2
#define YYMAXUTOK   282


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
      28,    29,    40,    38,    32,    39,     2,    41,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    36,    33,
      42,    37,    43,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    34,     2,    35,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    30,     2,    31,     2,     2,     2,     2,
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
      25,    26,    27
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    43,    43,    43,    44,    47,    48,    49,    50,    51,
      52,    55,    55,    58,    59,    62,    62,    63,    63,    64,
      65,    68,    69,    70,    71,    74,    75,    78,    79,    82,
      83,    86,    86,    87,    90,    91,    94,    95,    96,    97,
     100,   101,   102,   105,   106,   109,   110,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   155,   155,   156,   156,   159,
     159,   160,   160,   163,   163,   164,   164,   167,   168,   169,
     170,   171,   174,   175,   176,   177,   178
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
  "TYPE", "INT", "FLOAT", "STRING", "CHAR", "BOOL", "ID", "'('", "')'",
  "'{'", "'}'", "','", "';'", "'['", "']'", "':'", "'='", "'+'", "'-'",
  "'*'", "'/'", "'<'", "'>'", "$accept", "progr", "$@1",
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
     275,   276,   277,   278,   279,   280,   281,   282,    40,    41,
     123,   125,    44,    59,    91,    93,    58,    61,    43,    45,
      42,    47,    60,    62
};
# endif

#define YYPACT_NINF (-155)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      27,    49,    31,   251,  -155,    19,  -155,    56,    74,    77,
      86,    97,    55,    94,   103,    -5,   171,   269,   164,  -155,
    -155,  -155,  -155,  -155,  -155,  -155,  -155,   301,   309,   309,
     105,   113,   122,   121,   137,   146,    73,   173,   279,    81,
     301,  -155,  -155,   183,  -155,  -155,  -155,  -155,  -155,   181,
     185,  -155,  -155,  -155,  -155,  -155,    -8,   301,  -155,   106,
     309,    78,    28,    38,    53,    80,   178,   199,   -14,   208,
     210,   216,   187,  -155,   301,   214,  -155,   218,    18,   188,
    -155,  -155,   213,   244,  -155,  -155,   215,  -155,   227,   222,
     180,    96,   235,   301,   301,   301,   301,    20,    82,    84,
     301,   301,   301,   301,   317,   317,  -155,   317,   317,  -155,
    -155,  -155,   301,  -155,   186,  -155,   301,  -155,  -155,   204,
    -155,    43,   254,  -155,  -155,   232,   301,   245,  -155,  -155,
     233,  -155,   239,  -155,  -155,    83,  -155,   238,   188,   188,
     188,   188,  -155,  -155,   188,   188,   188,   188,   317,  -155,
    -155,   269,  -155,  -155,   269,   269,   269,   276,  -155,  -155,
    -155,    -2,  -155,    15,   280,   181,   131,   181,   150,  -155,
    -155,   188,    81,  -155,  -155,  -155,    66,   236,   262,  -155,
    -155,  -155,  -155,   309,  -155,  -155,    39,   259,  -155,  -155,
    -155,   181,  -155,   181,   263,   270,  -155,  -155,     9,    12,
      95,    48,  -155,  -155,  -155,  -155,  -155,   283,   284,  -155,
     128,   275,   310,  -155,   301,   301,   101,   136,  -155,  -155,
     269,   269,  -155,  -155
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     0,     0,     4,     0,     1,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      62,     9,     8,    59,    60,    61,    11,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    54,     0,     0,     0,
       0,    25,    66,     0,    43,     3,     7,     6,     5,     0,
       0,    75,    76,    77,    78,    79,    80,     0,    84,     0,
       0,     0,     0,     0,     0,     0,     0,    31,    57,     0,
       0,     0,    17,    48,     0,     0,    63,     0,     0,    45,
      29,    30,     0,    53,    67,    44,     0,    12,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    85,     0,     0,    87,
      91,    89,     0,    33,     0,    51,     0,    68,    69,     0,
      15,     0,    55,    26,    64,     0,     0,    28,    47,    14,
       0,    83,     0,    23,    81,     0,    74,     0,    70,    71,
      72,    73,   101,   106,    97,    98,    99,   100,     0,   102,
     103,     0,   104,   105,     0,     0,     0,     0,    40,    41,
      42,     0,    34,     0,    56,     0,     0,     0,     0,    49,
      65,    46,     0,    13,    21,    82,     0,    58,     0,    86,
      88,    92,    90,     0,    32,    35,     0,     0,    39,    50,
      19,     0,    16,     0,     0,     0,    24,    52,     0,     0,
       0,     0,    38,    20,    18,    27,    22,     0,     0,    37,
       0,     0,     0,    36,     0,     0,     0,     0,    95,    93,
       0,     0,    96,    94
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -155,  -155,  -155,  -155,   328,  -155,  -154,    -1,  -155,  -155,
      59,    -3,   -33,   176,   331,  -155,  -155,   189,  -155,   265,
    -155,     3,   -22,  -155,  -155,  -155,  -155,  -155,  -155,  -155,
    -155,  -155,   -19,   -28
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    18,     4,    49,    87,    42,   167,   121,
     135,    58,    41,    82,    21,   114,   161,   162,   163,    43,
      78,    44,    61,    23,   151,   154,    24,   156,   155,    25,
     221,   220,    62,    63
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      20,    65,    19,    75,    89,    59,    22,   158,   159,   160,
      64,   190,    35,   192,    20,    20,    79,    46,    83,   115,
      90,    48,    36,   116,   104,   105,    39,   107,   108,   184,
       1,     6,    99,   100,   101,    91,   186,   203,    97,   204,
      20,    98,   207,   104,   105,   208,    85,   125,    26,   136,
     126,   187,   122,   107,   108,    75,    35,   106,    93,    94,
      95,    96,   102,   103,   132,    35,   200,   109,   104,   105,
     133,   138,   139,   140,   141,   210,    32,     5,   144,   145,
     146,   147,   110,    20,    27,   149,   150,   195,   152,   153,
     157,   100,   101,   196,   164,   107,   108,   104,   105,   107,
     108,    72,    28,    80,   171,    29,    73,    39,    81,   111,
      74,   142,   175,   143,    30,   176,    93,    94,    95,    96,
     102,   103,    33,    72,    31,   136,    97,    20,   209,   178,
     218,    34,    66,    85,    93,    94,    95,    96,    92,    93,
      94,    95,    96,    67,    93,    94,    95,    96,    20,    68,
      69,    20,    20,    20,   179,   199,    72,   180,   181,   182,
     191,   213,   188,   176,   198,   219,    70,     1,     7,     8,
       9,    10,    11,    71,    93,    94,    95,    96,   166,   193,
     168,    12,   176,    13,    14,    15,   202,     7,     8,     9,
      10,    16,   216,   217,    17,   158,   159,   160,    37,    38,
      12,   132,    13,    14,    15,    39,    76,   133,    40,   134,
      16,    86,    88,    17,    84,   112,   120,    20,    20,     7,
       8,     9,    10,   222,   223,   132,    93,    94,    95,    96,
     113,   133,    12,   165,    13,    14,    15,     7,     8,     9,
      10,   117,    16,   118,   119,    17,   129,   123,   127,   131,
      12,   124,    13,    14,    15,     7,     8,     9,    10,    11,
      16,    39,   137,    17,   173,   170,   174,   177,    12,   197,
      13,    14,    15,     7,     8,     9,    10,   128,    16,   172,
     201,    17,    93,    94,    95,    96,    12,   169,    13,    14,
      15,   142,    93,    94,    95,    96,    16,   206,   205,    17,
      50,    51,    52,    53,    54,    55,    56,    57,    77,   183,
     211,   212,   214,   189,    93,    94,    95,    96,    93,    94,
      95,    96,    50,    51,    52,    53,    54,    55,    56,    57,
      50,    51,    52,    53,    54,    55,    56,    60,    50,    51,
      52,    53,    54,    55,    56,   148,    45,   215,   194,    47,
     185,   130
};

static const yytype_uint8 yycheck[] =
{
       3,    29,     3,    36,    12,    27,     3,     9,    10,    11,
      29,   165,    17,   167,    17,    18,    38,    18,    40,    33,
      28,    18,    27,    37,    15,    16,    34,    15,    16,    31,
       3,     0,    60,    13,    14,    57,    21,   191,    60,   193,
      43,    60,    33,    15,    16,    33,    43,    29,    29,    29,
      32,    36,    74,    15,    16,    88,    17,    29,    38,    39,
      40,    41,    42,    43,    21,    17,    27,    29,    15,    16,
      27,    93,    94,    95,    96,    27,    21,    28,   100,   101,
     102,   103,    29,    86,    28,   104,   105,    21,   107,   108,
     112,    13,    14,    27,   116,    15,    16,    15,    16,    15,
      16,    28,    28,    22,   126,    28,    33,    34,    27,    29,
      37,    29,    29,    29,    28,    32,    38,    39,    40,    41,
      42,    43,    28,    28,    27,    29,   148,   130,    33,   148,
      29,    28,    27,   130,    38,    39,    40,    41,    32,    38,
      39,    40,    41,    30,    38,    39,    40,    41,   151,    27,
      29,   154,   155,   156,   151,   183,    28,   154,   155,   156,
      29,    33,   163,    32,   183,    29,    29,     3,     4,     5,
       6,     7,     8,    27,    38,    39,    40,    41,   119,    29,
     121,    17,    32,    19,    20,    21,   187,     4,     5,     6,
       7,    27,   214,   215,    30,     9,    10,    11,    27,    28,
      17,    21,    19,    20,    21,    34,    33,    27,    37,    29,
      27,    30,    27,    30,    31,    37,    29,   220,   221,     4,
       5,     6,     7,   220,   221,    21,    38,    39,    40,    41,
      31,    27,    17,    29,    19,    20,    21,     4,     5,     6,
       7,    33,    27,    33,    28,    30,    31,    33,    35,    27,
      17,    33,    19,    20,    21,     4,     5,     6,     7,     8,
      27,    34,    27,    30,    31,    33,    27,    29,    17,    33,
      19,    20,    21,     4,     5,     6,     7,    33,    27,    34,
      21,    30,    38,    39,    40,    41,    17,    33,    19,    20,
      21,    29,    38,    39,    40,    41,    27,    27,    35,    30,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    33,
      27,    27,    37,    33,    38,    39,    40,    41,    38,    39,
      40,    41,    21,    22,    23,    24,    25,    26,    27,    28,
      21,    22,    23,    24,    25,    26,    27,    28,    21,    22,
      23,    24,    25,    26,    27,    28,    18,    37,   172,    18,
     161,    86
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    45,    46,    48,    28,     0,     4,     5,     6,
       7,     8,    17,    19,    20,    21,    27,    30,    47,    51,
      55,    58,    65,    67,    70,    73,    29,    28,    28,    28,
      28,    27,    21,    28,    28,    17,    27,    27,    28,    34,
      37,    56,    51,    63,    65,    48,    51,    58,    65,    49,
      21,    22,    23,    24,    25,    26,    27,    28,    55,    66,
      28,    66,    76,    77,    76,    77,    27,    30,    27,    29,
      29,    27,    28,    33,    37,    56,    33,    29,    64,    66,
      22,    27,    57,    66,    31,    65,    30,    50,    27,    12,
      28,    66,    32,    38,    39,    40,    41,    66,    76,    77,
      13,    14,    42,    43,    15,    16,    29,    15,    16,    29,
      29,    29,    37,    31,    59,    33,    37,    33,    33,    28,
      29,    53,    66,    33,    33,    29,    32,    35,    33,    31,
      63,    27,    21,    27,    29,    54,    29,    27,    66,    66,
      66,    66,    29,    29,    66,    66,    66,    66,    28,    76,
      76,    68,    76,    76,    69,    72,    71,    66,     9,    10,
      11,    60,    61,    62,    66,    29,    54,    52,    54,    33,
      33,    66,    34,    31,    27,    29,    32,    29,    76,    65,
      65,    65,    65,    33,    31,    61,    21,    36,    51,    33,
      50,    29,    50,    29,    57,    21,    27,    33,    76,    77,
      27,    21,    51,    50,    50,    35,    27,    33,    33,    33,
      27,    27,    27,    33,    37,    37,    66,    66,    29,    29,
      75,    74,    65,    65
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    44,    46,    45,    45,    47,    47,    47,    47,    47,
      47,    49,    48,    50,    50,    52,    51,    53,    51,    51,
      51,    54,    54,    54,    54,    55,    55,    56,    56,    57,
      57,    59,    58,    58,    60,    60,    61,    61,    61,    61,
      62,    62,    62,    63,    63,    64,    64,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    68,    67,    69,    67,    71,
      70,    72,    70,    74,    73,    75,    73,    76,    76,    76,
      76,    76,    77,    77,    77,    77,    77
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     3,     1,     2,     2,     2,     1,     1,
       1,     0,     5,     3,     2,     0,     6,     0,     7,     6,
       7,     2,     4,     1,     3,     2,     4,     6,     3,     1,
       1,     0,     6,     4,     1,     2,     5,     4,     3,     2,
       1,     1,     1,     1,     2,     1,     3,     4,     3,     5,
       6,     4,     7,     3,     2,     4,     5,     3,     6,     1,
       1,     1,     1,     3,     4,     5,     1,     3,     4,     4,
       3,     3,     3,     3,     3,     1,     1,     1,     1,     1,
       1,     3,     4,     3,     1,     0,     6,     0,     6,     0,
       6,     0,     6,     0,    14,     0,    14,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3
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
#line 1553 "y.tab.c"
    break;

  case 3:
#line 43 "lfac.y"
                                                         { if (sintacticCorect == 1) {printf("Programul este corect sintactic\n");} else {printf("Program nu este corect sintactic.\n");}}
#line 1559 "y.tab.c"
    break;

  case 4:
#line 44 "lfac.y"
            {if (sintacticCorect == 1) {printf("Programul este corect sintactic\n");} else {printf("Program nu este corect sintactic.\n");}}
#line 1565 "y.tab.c"
    break;

  case 11:
#line 55 "lfac.y"
                   { memory.push_scope(); }
#line 1571 "y.tab.c"
    break;

  case 12:
#line 55 "lfac.y"
                                                          { memory.pop_scope(); memory.pop_scope();}
#line 1577 "y.tab.c"
    break;

  case 15:
#line 62 "lfac.y"
                           {if(memory.exists_function((yyvsp[-3].string_value), (yyvsp[-2].string_value))) {std::cout<<"Exista o functie cu acelasi nume \n";} memory.define_function((yyvsp[-3].string_value), (yyvsp[-2].string_value)); memory.push_scope();}
#line 1583 "y.tab.c"
    break;

  case 16:
#line 62 "lfac.y"
                                                                                                                                                                                       {memory.pop_scope();}
#line 1589 "y.tab.c"
    break;

  case 17:
#line 63 "lfac.y"
                      {if(memory.exists_function((yyvsp[-2].string_value), (yyvsp[-1].string_value))) {std::cout<<"Exista o functie cu acelasi nume.\n";} memory.define_function((yyvsp[-2].string_value), (yyvsp[-1].string_value)); memory.push_scope();}
#line 1595 "y.tab.c"
    break;

  case 18:
#line 63 "lfac.y"
                                                                                                                                                                                                {memory.pop_scope();}
#line 1601 "y.tab.c"
    break;

  case 21:
#line 68 "lfac.y"
                   { memory.declare((yyvsp[-1].string_value),(yyvsp[0].string_value)); }
#line 1607 "y.tab.c"
    break;

  case 22:
#line 69 "lfac.y"
                                  { memory.declare((yyvsp[-1].string_value),(yyvsp[0].string_value)); }
#line 1613 "y.tab.c"
    break;

  case 26:
#line 75 "lfac.y"
                        { memory.declare((yyvsp[-3].string_value),(yyvsp[-2].string_value)); }
#line 1619 "y.tab.c"
    break;

  case 31:
#line 86 "lfac.y"
                    {if(memory.exists_class((yyvsp[-1].string_value))) {std::cout<<"Exista o clasa cu acelasi nume \n";} memory.define_class((yyvsp[-1].string_value)); memory.push_scope(); }
#line 1625 "y.tab.c"
    break;

  case 32:
#line 86 "lfac.y"
                                                                                                                                                                    { memory.pop_scope(); }
#line 1631 "y.tab.c"
    break;

  case 33:
#line 87 "lfac.y"
                         {if(memory.exists_class((yyvsp[-2].string_value))) {std::cout<<"Exista o clasa cu acelasi nume\n ";} memory.define_class((yyvsp[-2].string_value));}
#line 1637 "y.tab.c"
    break;

  case 36:
#line 94 "lfac.y"
                                                     { memory.declare((yyvsp[-2].string_value),(yyvsp[-1].string_value)); }
#line 1643 "y.tab.c"
    break;

  case 37:
#line 95 "lfac.y"
                                                 { memory.declare((yyvsp[-2].string_value),(yyvsp[-1].string_value)); }
#line 1649 "y.tab.c"
    break;

  case 47:
#line 113 "lfac.y"
                                {if(memory.exists((yyvsp[-3].string_value))){memory.assign((yyvsp[-3].string_value),(yyvsp[-1].data_value));} else {std::cout<< "Variabila " << (yyvsp[-3].string_value) << " nu a fost declarata.\n"; sintacticCorect = 0;}}
#line 1655 "y.tab.c"
    break;

  case 48:
#line 114 "lfac.y"
                        { memory.declare((yyvsp[-2].string_value),(yyvsp[-1].string_value)); }
#line 1661 "y.tab.c"
    break;

  case 49:
#line 115 "lfac.y"
                                      {memory.declare((yyvsp[-4].string_value),(yyvsp[-3].string_value)); memory.assign((yyvsp[-3].string_value),(yyvsp[-1].data_value));}
#line 1667 "y.tab.c"
    break;

  case 50:
#line 116 "lfac.y"
                                            {memory.declare((yyvsp[-4].string_value),(yyvsp[-3].string_value)); memory.assign((yyvsp[-3].string_value),(yyvsp[-1].data_value));}
#line 1673 "y.tab.c"
    break;

  case 51:
#line 117 "lfac.y"
                             {std::cout<< "Variabila constanta " << (yyvsp[-1].string_value) << " nu poate fi declarata fara sa i se asigneze o valoare.\n"; sintacticCorect = 0;}
#line 1679 "y.tab.c"
    break;

  case 52:
#line 118 "lfac.y"
                                               {memory.print((yyvsp[-4].data_value),(yyvsp[-2].string_value)); }
#line 1685 "y.tab.c"
    break;

  case 53:
#line 119 "lfac.y"
                             {std::cout<< "Lipseste ';' la finalul instructiunii\n"; sintacticCorect = 0;}
#line 1691 "y.tab.c"
    break;

  case 54:
#line 120 "lfac.y"
                   {std::cout<< "Lipseste ';' la finalul instructiunii.\n"; sintacticCorect = 0;}
#line 1697 "y.tab.c"
    break;

  case 55:
#line 121 "lfac.y"
                                  {std::cout<< "Lipseste ';' la finalul instructiunii.\n"; sintacticCorect = 0;}
#line 1703 "y.tab.c"
    break;

  case 56:
#line 122 "lfac.y"
                                        {std::cout<< "Lipseste ';' la finalul instructiunii.\n"; sintacticCorect = 0;}
#line 1709 "y.tab.c"
    break;

  case 57:
#line 123 "lfac.y"
                         {std::cout<< "Lipseste ';' la finalul instructiunii.\n"; sintacticCorect = 0;}
#line 1715 "y.tab.c"
    break;

  case 58:
#line 124 "lfac.y"
                                           {memory.print((yyvsp[-3].data_value),(yyvsp[-1].string_value)); }
#line 1721 "y.tab.c"
    break;

  case 63:
#line 129 "lfac.y"
                     {if(!memory.exists_class((yyvsp[-2].string_value))) {std::cout<<"Clasa nu este definita. \n";} memory.declare((yyvsp[-2].string_value),(yyvsp[-1].string_value)); }
#line 1727 "y.tab.c"
    break;

  case 64:
#line 130 "lfac.y"
                          {if(!memory.exists_function_byName((yyvsp[-3].string_value))) {std::cout<<"Functia nu este definita. \n";} }
#line 1733 "y.tab.c"
    break;

  case 65:
#line 131 "lfac.y"
                                         {if(!memory.exists_function_byName((yyvsp[-4].string_value))) {std::cout<<"Functia nu este definita.\n";} }
#line 1739 "y.tab.c"
    break;

  case 68:
#line 134 "lfac.y"
                                   { memory.table_print();}
#line 1745 "y.tab.c"
    break;

  case 69:
#line 135 "lfac.y"
                                             {memory.table_print_functions();}
#line 1751 "y.tab.c"
    break;

  case 70:
#line 138 "lfac.y"
                                      { Data &a=*((yyvsp[-2].data_value)); Data &b=*((yyvsp[0].data_value)); (yyval.data_value)=a+b; }
#line 1757 "y.tab.c"
    break;

  case 71:
#line 139 "lfac.y"
                                      { Data &a=*((yyvsp[-2].data_value)); Data &b=*((yyvsp[0].data_value)); (yyval.data_value)=a-b; }
#line 1763 "y.tab.c"
    break;

  case 72:
#line 140 "lfac.y"
                                      { Data &a=*((yyvsp[-2].data_value)); Data &b=*((yyvsp[0].data_value)); (yyval.data_value)=a*b; }
#line 1769 "y.tab.c"
    break;

  case 73:
#line 141 "lfac.y"
                                      { Data &a=*((yyvsp[-2].data_value)); Data &b=*((yyvsp[0].data_value)); (yyval.data_value)=a/b; }
#line 1775 "y.tab.c"
    break;

  case 74:
#line 142 "lfac.y"
                             {Data &a=*((yyvsp[-1].data_value)); (yyval.data_value)=&a;}
#line 1781 "y.tab.c"
    break;

  case 75:
#line 143 "lfac.y"
                { (yyval.data_value)=new Data((yyvsp[0].int_value));}
#line 1787 "y.tab.c"
    break;

  case 76:
#line 144 "lfac.y"
                  { (yyval.data_value)=new Data((yyvsp[0].float_value));}
#line 1793 "y.tab.c"
    break;

  case 77:
#line 145 "lfac.y"
                   { (yyval.data_value)=new Data((yyvsp[0].string_value));}
#line 1799 "y.tab.c"
    break;

  case 78:
#line 146 "lfac.y"
                 { (yyval.data_value)=new Data((yyvsp[0].char_value));}
#line 1805 "y.tab.c"
    break;

  case 79:
#line 147 "lfac.y"
                 { (yyval.data_value)=new Data((yyvsp[0].bool_value));}
#line 1811 "y.tab.c"
    break;

  case 80:
#line 148 "lfac.y"
               { (yyval.data_value)=memory.get((yyvsp[0].string_value));}
#line 1817 "y.tab.c"
    break;

  case 81:
#line 149 "lfac.y"
                        {if(!memory.exists_function_byName((yyvsp[-2].string_value))) {std::cout<<"Functia nu este definita.\n";} (yyval.data_value)=new Data(0); }
#line 1823 "y.tab.c"
    break;

  case 82:
#line 150 "lfac.y"
                                {if(!memory.exists_function_byName((yyvsp[-3].string_value))) {std::cout<<"Functia nu este definita.\n";} (yyval.data_value)=new Data(0); }
#line 1829 "y.tab.c"
    break;

  case 83:
#line 151 "lfac.y"
                      { if(!memory.exists((yyvsp[-2].string_value))) {std::cout<<"Nu exista o clasa cu acest nume. \n";}   (yyval.data_value)=new Data(0);}
#line 1835 "y.tab.c"
    break;

  case 84:
#line 152 "lfac.y"
                  {(yyval.data_value)=new Data(0);}
#line 1841 "y.tab.c"
    break;

  case 85:
#line 155 "lfac.y"
                                           {memory.push_scope();}
#line 1847 "y.tab.c"
    break;

  case 86:
#line 155 "lfac.y"
                                                                            {memory.pop_scope();}
#line 1853 "y.tab.c"
    break;

  case 87:
#line 156 "lfac.y"
                                               {memory.push_scope();}
#line 1859 "y.tab.c"
    break;

  case 88:
#line 156 "lfac.y"
                                                                                {memory.pop_scope();}
#line 1865 "y.tab.c"
    break;

  case 89:
#line 159 "lfac.y"
                                                     {memory.push_scope();}
#line 1871 "y.tab.c"
    break;

  case 90:
#line 159 "lfac.y"
                                                                                      {memory.pop_scope();}
#line 1877 "y.tab.c"
    break;

  case 91:
#line 160 "lfac.y"
                                                 {memory.push_scope();}
#line 1883 "y.tab.c"
    break;

  case 92:
#line 160 "lfac.y"
                                                                                  {memory.pop_scope();}
#line 1889 "y.tab.c"
    break;

  case 93:
#line 163 "lfac.y"
                                                                                              {{if(memory.exists((yyvsp[-9].string_value))){memory.assign((yyvsp[-9].string_value),(yyvsp[-7].data_value));} else {std::cout<<"Variabila nu a fost declarata.\n"; sintacticCorect = 0;}} memory.push_scope();}
#line 1895 "y.tab.c"
    break;

  case 94:
#line 163 "lfac.y"
                                                                                                                                                                                                                                                         {memory.pop_scope();}
#line 1901 "y.tab.c"
    break;

  case 95:
#line 164 "lfac.y"
                                                                                          {{if(memory.exists((yyvsp[-9].string_value))){memory.assign((yyvsp[-9].string_value),(yyvsp[-7].data_value));} else {std::cout<<"Variabila nu a fost declarata.\n"; sintacticCorect = 0;}} memory.push_scope(); }
#line 1907 "y.tab.c"
    break;

  case 96:
#line 164 "lfac.y"
                                                                                                                                                                                                                                                       {memory.pop_scope();}
#line 1913 "y.tab.c"
    break;

  case 97:
#line 167 "lfac.y"
                                             { Data &a=*((yyvsp[-2].data_value)); Data &b=*((yyvsp[0].data_value)); (yyval.data_value)=(a==b); }
#line 1919 "y.tab.c"
    break;

  case 98:
#line 168 "lfac.y"
                                                 { Data &a=*((yyvsp[-2].data_value)); Data &b=*((yyvsp[0].data_value)); (yyval.data_value)=(a!=b); }
#line 1925 "y.tab.c"
    break;

  case 99:
#line 169 "lfac.y"
                                           { Data &a=*((yyvsp[-2].data_value)); Data &b=*((yyvsp[0].data_value)); (yyval.data_value)=(a<b); }
#line 1931 "y.tab.c"
    break;

  case 100:
#line 170 "lfac.y"
                                           { Data &a=*((yyvsp[-2].data_value)); Data &b=*((yyvsp[0].data_value)); (yyval.data_value)=(a>b); }
#line 1937 "y.tab.c"
    break;

  case 101:
#line 171 "lfac.y"
                                          {Data &a=*((yyvsp[-1].data_value)); (yyval.data_value)=&a;}
#line 1943 "y.tab.c"
    break;

  case 102:
#line 174 "lfac.y"
                                                         { Data &a=*((yyvsp[-2].data_value)); Data &b=*((yyvsp[0].data_value)); (yyval.data_value)=(a&&b); }
#line 1949 "y.tab.c"
    break;

  case 103:
#line 175 "lfac.y"
                                                        { Data &a=*((yyvsp[-2].data_value)); Data &b=*((yyvsp[0].data_value)); (yyval.data_value)=(a||b); }
#line 1955 "y.tab.c"
    break;

  case 104:
#line 176 "lfac.y"
                                                             { Data &a=*((yyvsp[-2].data_value)); Data &b=*((yyvsp[0].data_value)); (yyval.data_value)=(a&&b); }
#line 1961 "y.tab.c"
    break;

  case 105:
#line 177 "lfac.y"
                                                            { Data &a=*((yyvsp[-2].data_value)); Data &b=*((yyvsp[0].data_value)); (yyval.data_value)=(a||b); }
#line 1967 "y.tab.c"
    break;

  case 106:
#line 178 "lfac.y"
                                                 {Data &a=*((yyvsp[-1].data_value)); (yyval.data_value)=&a;}
#line 1973 "y.tab.c"
    break;


#line 1977 "y.tab.c"

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
#line 180 "lfac.y"


void yyerror(char * s){
printf("eroare: %s la linia:%d\n",s,yylineno);
}

int main(int argc, char** argv){
yyin=fopen(argv[1],"r");
yyparse();
}
