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
#line 1 "bison_parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int yylex(void);
void yyerror(const char*);
FILE* yyin;

#line 80 "bison_parser.tab.c"

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
typedef yytype_int16 yy_state_t;

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
#define YYFINAL  234
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2816

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  6
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1269
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  2772

#define YYUNDEFTOK  2
#define YYMAXUTOK   311


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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    18,    18,    19,    20,    21,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,   410,   411,
     412,   413,   414,   415,   416,   417,   418,   419,   420,   421,
     422,   423,   424,   425,   426,   427,   428,   429,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   439,   440,   441,
     442,   443,   444,   445,   446,   447,   448,   449,   450,   451,
     452,   453,   454,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,   471,
     472,   473,   474,   475,   476,   477,   478,   479,   480,   481,
     482,   483,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,   513,   514,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,   529,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   545,   546,   547,   548,   549,   550,   551,
     552,   553,   554,   555,   556,   557,   558,   559,   560,   561,
     562,   563,   564,   565,   566,   567,   568,   569,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   579,   580,   581,
     582,   583,   584,   585,   586,   587,   588,   589,   590,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   606,   607,   608,   609,   610,   611,
     612,   613,   614,   615,   616,   617,   618,   619,   620,   621,
     622,   623,   624,   625,   626,   627,   628,   629,   630,   631,
     632,   633,   634,   635,   636,   637,   641,   642,   643,   644,
     645,   646,   647,   648,   649,   650,   651,   652,   653,   654,
     655,   656,   657,   658,   659,   660,   661,   662,   663,   664,
     665,   666,   667,   668,   669,   670,   671,   672,   673,   674,
     675,   676,   677,   678,   679,   680,   681,   682,   683,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,   701,   702,   703,   704,
     705,   706,   707,   708,   709,   710,   711,   712,   713,   714,
     715,   716,   717,   718,   719,   720,   721,   722,   723,   724,
     725,   726,   727,   728,   729,   730,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,   741,   742,   743,   744,
     745,   746,   747,   748,   749,   750,   751,   752,   753,   754,
     755,   756,   757,   758,   759,   760,   761,   762,   763,   764,
     765,   766,   767,   768,   769,   770,   771,   772,   773,   774,
     775,   776,   777,   778,   779,   780,   781,   782,   783,   784,
     785,   786,   787,   788,   789,   790,   791,   792,   793,   794,
     795,   796,   797,   798,   799,   800,   801,   802,   803,   804,
     805,   806,   807,   808,   809,   810,   811,   812,   813,   814,
     815,   816,   817,   818,   819,   820,   821,   822,   823,   824,
     825,   826,   827,   828,   829,   830,   831,   832,   833,   834,
     835,   836,   837,   838,   839,   840,   841,   842,   843,   844,
     845,   846,   847,   848,   849,   850,   851,   852,   853,   854,
     855,   856,   857,   858,   862,   863,   864,   865,   866,   867,
     868,   869,   870,   871,   872,   873,   874,   875,   876,   877,
     878,   879,   880,   881,   882,   883,   884,   885,   886,   887,
     888,   889,   890,   891,   892,   893,   894,   895,   896,   897,
     898,   899,   900,   901,   902,   903,   904,   905,   906,   907,
     908,   909,   910,   911,   912,   913,   914,   915,   916,   917,
     918,   919,   920,   921,   922,   923,   924,   925,   926,   927,
     928,   929,   930,   931,   932,   933,   934,   935,   936,   937,
     938,   939,   940,   941,   942,   943,   944,   945,   946,   947,
     948,   949,   950,   951,   952,   953,   954,   955,   956,   957,
     958,   959,   960,   961,   962,   963,   964,   965,   966,   967,
     968,   969,   970,   971,   972,   973,   974,   975,   976,   977,
     978,   979,   980,   981,   982,   983,   984,   985,   986,   987,
     988,   989,   990,   991,   992,   993,   994,   995,   996,   997,
     998,   999,  1000,  1001,  1002,  1003,  1004,  1005,  1006,  1007,
    1008,  1009,  1010,  1011,  1012,  1013,  1014,  1015,  1016,  1017,
    1018,  1019,  1020,  1021,  1022,  1023,  1024,  1025,  1026,  1027,
    1028,  1029,  1030,  1031,  1032,  1033,  1034,  1035,  1036,  1037,
    1038,  1039,  1040,  1041,  1042,  1043,  1044,  1045,  1046,  1047,
    1048,  1049,  1050,  1051,  1052,  1053,  1054,  1055,  1056,  1057,
    1058,  1059,  1060,  1061,  1062,  1063,  1064,  1065,  1066,  1067,
    1068,  1069,  1070,  1071,  1072,  1073,  1074,  1075,  1076,  1077,
    1078,  1079,  1080,  1081,  1082,  1083,  1084,  1085,  1086,  1087,
    1088,  1089,  1090,  1091,  1092,  1093,  1094,  1095,  1096,  1097,
    1098,  1099,  1100,  1101,  1102,  1103,  1104,  1105,  1106,  1107,
    1108,  1109,  1110,  1111,  1112,  1113,  1114,  1115,  1116,  1117,
    1118,  1119,  1120,  1121,  1122,  1123,  1124,  1125,  1126,  1127,
    1128,  1129,  1130,  1131,  1132,  1133,  1134,  1135,  1136,  1137,
    1138,  1139,  1140,  1141,  1142,  1143,  1144,  1145,  1146,  1147,
    1148,  1149,  1150,  1151,  1152,  1153,  1154,  1155,  1156,  1157,
    1158,  1159,  1160,  1161,  1162,  1163,  1164,  1165,  1166,  1167,
    1168,  1169,  1170,  1171,  1172,  1173,  1174,  1175,  1176,  1177,
    1178,  1179,  1180,  1181,  1182,  1183,  1184,  1185,  1186,  1187,
    1188,  1189,  1190,  1191,  1192,  1193,  1194,  1195,  1196,  1197,
    1198,  1199,  1200,  1201,  1202,  1203,  1204,  1205,  1206,  1207,
    1208,  1209,  1210,  1211,  1212,  1213,  1214,  1215,  1216,  1217,
    1218,  1219,  1220,  1221,  1222,  1223,  1224,  1225,  1226,  1227,
    1228,  1229,  1230,  1231,  1232,  1233,  1234,  1235,  1236,  1237,
    1238,  1239,  1240,  1241,  1242,  1243,  1244,  1245,  1246,  1247,
    1248,  1249,  1250,  1251,  1252,  1253,  1254,  1255,  1256,  1257,
    1258,  1259,  1260,  1261,  1262,  1263,  1264,  1265,  1266,  1267,
    1268,  1269,  1270,  1271,  1272,  1273,  1274,  1275,  1276,  1277,
    1278,  1279,  1280,  1281,  1282,  1283,  1284,  1285,  1286,  1287,
    1288,  1289,  1290,  1291,  1292,  1293,  1294,  1295,  1296,  1297
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "token1", "token2", "token3", "token4",
  "token5", "token6", "token7", "token8", "token9", "token10", "token11",
  "token12", "token13", "token14", "token15", "token16", "token17",
  "token18", "token19", "token20", "token21", "token22", "token23",
  "token24", "token25", "token26", "token27", "token28", "token29",
  "token30", "token31", "token32", "token33", "token34", "token35",
  "token36", "token37", "token38", "token39", "token40", "token41",
  "token42", "token43", "token44", "token45", "token46", "token47",
  "token48", "token49", "token50", "token51", "token52", "token53",
  "token54", "$accept", "init", "symbol1", "symbol2", "symbol3", "symbol4", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311
};
# endif

#define YYPACT_NINF (-7)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -3,     4,    -2,    -6,    98,   978,   981,   526,   654,   496,
     487,   260,    75,   656,    51,   984,   987,   990,   750,   754,
     758,   762,   531,   536,   541,   546,   661,   179,   663,   571,
     668,   576,   670,   581,   675,   586,   677,   682,   551,   684,
     591,   556,   689,   596,   691,   696,   561,   698,   601,   566,
     100,    -7,    -7,    -7,    -7,   838,   318,   195,   201,   931,
     331,   161,   472,  1258,   267,   521,  1260,   765,   991,  1259,
     606,   770,   325,    57,   932,   397,   486,   502,   504,   611,
    1263,   328,   207,   410,   508,   437,   703,  1265,   617,   208,
      58,   417,   130,    -7,   773,   287,   511,   434,    90,    55,
      -7,  1267,   622,    -7,  1269,   746,  1272,  1273,  1181,  1276,
     447,  1277,   842,   996,   998,  1279,   846,  1002,   460,  1281,
     850,  1005,  1007,  1283,   854,  1011,  1286,   627,  1287,   616,
     778,   781,  1012,  1289,   621,   786,  1293,   632,  1294,   626,
     790,   793,  1015,  1296,   631,   798,   572,   300,   936,   577,
    1298,   704,   858,   859,   313,   938,   863,  1300,   709,   868,
     582,   400,   940,   587,  1302,   711,   872,   873,   418,   942,
     877,  1304,   716,   882,   592,   455,   944,   597,   637,   718,
     886,  1308,   494,   946,   602,   609,   948,  1310,   642,  1311,
     636,   802,   805,   735,   950,   648,  1018,   723,   890,   809,
    1021,  1313,   641,   814,   713,   737,   952,   720,   660,   725,
     894,  1317,   738,   954,   727,   740,   956,  1319,   667,  1320,
     646,   818,   821,   743,   958,   843,  1024,   730,   898,   825,
    1027,  1322,   651,   830,    -7,   847,    -7,   676,   683,   833,
     844,   864,   690,  1324,   688,   855,   902,   865,   878,   884,
     906,   887,   910,   479,   891,   485,  1030,  1326,   892,   897,
    1328,   912,   973,   916,  1187,   901,  1180,   920,  1035,  1037,
    1331,  1253,  1041,   926,  1043,    67,  1149,   341,  1211,  1042,
    1288,  1761,   517,  1335,  1295,  1762,  1337,  1312,  1763,   732,
    1339,  1764,   342,   510,  1340,  1274,    -7,   832,  1321,   519,
    1347,  1388,  1356,  1403,   745,  1365,  1765,   213,   219,   268,
    1448,   220,    -7,  1342,  1766,   390,    83,    94,  1457,    70,
      -7,   138,  1344,  1767,   225,   102,    -7,  1046,  1345,  1467,
    1182,   905,   520,  1050,  1372,   960,   109,    50,  1476,    -7,
    1502,   133,    -7,  1768,    -7,    -7,  1769,  1557,  1770,  1510,
    1566,  1529,  1771,  1573,  1772,  1583,  1589,  1610,  1348,  1773,
    1775,  1598,  1776,  1352,  1620,  1778,  1354,  1355,  1779,  1781,
    1782,  1784,  1185,  1785,  1359,  1360,  1787,  1363,  1364,  1788,
    1790,  1629,  1791,  1368,  1642,  1793,  1370,  1371,  1794,  1796,
    1797,  1799,  1188,  1800,  1375,  1376,  1802,  1379,  1803,  1378,
    1380,  1650,  1804,  1384,  1806,  1661,  1054,  1386,  1807,  1808,
    1057,  1058,  1387,  1670,  1809,  1389,  1774,  1810,  1777,  1811,
     909,  1190,  1780,  1063,  1065,  1392,  1812,  1069,  1814,  1393,
    1395,  1783,  1815,  1399,  1817,  1786,  1072,  1401,  1818,  1819,
    1075,  1076,  1402,  1789,  1820,  1404,  1792,  1821,  1795,  1822,
     913,  1191,  1798,  1081,  1083,  1407,  1823,  1087,  1408,  1805,
    1827,  1816,  1828,  1410,  1825,  1829,  1830,  1826,  1415,  1832,
    1831,  1417,  1416,  1833,  1835,   961,  1836,  1195,  1839,  1418,
    1837,  1840,  1838,  1841,   963,  1842,  1423,  1196,  1844,  1425,
    1424,  1834,  1845,  1847,  1849,  1426,  1846,  1848,  1851,  1850,
    1431,  1852,  1853,  1433,  1432,  1854,  1856,   965,  1855,  1199,
    1857,  1434,  1858,  1860,  1861,  1863,   967,  1864,  1439,  1200,
    1866,  1441,  1859,  1869,  1867,  1870,  1872,  1862,  1440,  1873,
    1871,  1445,  1874,  1875,  1447,  1876,  1446,  1450,  1879,  1452,
    1880,  1088,  1881,  1883,  1884,  1886,  1882,  1453,  1455,  1877,
    1885,  1459,  1887,  1888,  1093,  1461,  1889,  1890,  1096,  1097,
    1462,  1891,  1893,   917,  1894,  1101,  1897,  1103,  1464,  1895,
    1898,  1899,  1202,  1469,  1901,  1470,  1474,  1106,  1473,  1900,
    1902,  1475,  1903,  1905,  1906,  1908,   921,  1203,  1909,  1111,
    1113,  1478,  1911,  1117,  1896,  1914,  1912,  1915,  1917,  1904,
    1479,  1918,  1907,  1484,  1919,  1916,  1486,  1920,  1485,  1489,
    1921,  1491,  1923,  1118,  1924,  1926,  1927,  1929,  1922,  1492,
    1494,  1928,  1930,  1498,  1925,  1931,  1123,  1500,  1932,  1933,
    1126,  1127,  1501,  1934,  1936,   925,  1937,  1131,  1940,  1133,
    1503,  1938,  1941,  1942,  1206,  1508,  1944,  1509,  1513,  1136,
    1512,  1943,  1945,  1514,  1946,  1948,  1949,  1951,   929,  1207,
    1952,  1141,  1143,  1517,  1954,  1147,  1955,  1958,  1959,  1939,
    1957,  1956,  1813,  1960,  1947,  1148,  1151,  1154,  1157,  1160,
    1163,  1961,  1962,  1963,  1964,    -7,  1965,  1966,    -7,  1518,
    1973,  1967,  1974,  1976,    -7,    -7,  1977,  1979,    -7,    -7,
      -7,    -7,  1210,  1980,    -7,  1981,    -7,    -7,  1522,  1953,
      -7,  1523,  1983,    -7,  1984,    -7,    -7,  1526,  1978,    -7,
    1527,  1986,  1968,    -7,  1987,  1982,    -7,  1166,  1528,  1985,
    1531,  1989,  1988,  1991,  1992,  1536,  1994,  1995,  1996,  1997,
    1998,  1999,  2001,  1535,  2003,  2004,  1540,  2006,  2007,  1212,
    2008,    84,  1541,    66,  2009,   131,   199,  1169,  1542,  2000,
    1545,   968,  2012,  2010,  2013,   970,  2014,  1173,  2015,  2017,
    2018,   224,   272,  1993,   229,    -7,   276,  2011,   230,    -7,
     345,   396,  2016,  1759,    -7,   231,   112,    -7,  2019,   401,
     403,  2020,  1824,    -7,  1543,  2022,   407,   113,  2021,   155,
      -7,  1549,  2023,   409,  2024,   159,    -7,   165,  1551,  2027,
    1950,    -7,  1553,  2028,   234,   121,    -7,  2030,   235,   236,
     281,    -7,  1555,  2031,  2025,   142,   168,    -7,  1556,  2032,
    1213,  2033,  1216,  2029,    -7,  2005,  1218,  2034,  2035,  1560,
    2026,  1561,  2036,    -7,  1564,  1177,  2042,   106,  1913,    -7,
    2002,    -7,    -7,   134,  2037,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,  2040,
    2043,    -7,    -7,  2041,    -7,  2045,    -7,  2046,    -7,  2048,
      -7,  2044,  2049,    -7,    -7,    -7,    -7,  2047,    -7,    -7,
    2051,    -7,  2052,    -7,    -7,  2055,    -7,  2050,  2056,    -7,
      -7,  2054,    -7,  2058,    -7,  2059,    -7,  2061,    -7,  2057,
    2062,    -7,    -7,    -7,    -7,  2060,    -7,    -7,  2064,    -7,
    2065,    -7,    -7,  2067,    -7,  1565,  2066,  2063,  2068,  2070,
      -7,    -7,  2069,  2071,  2072,    -7,  1569,  2075,    -7,  2076,
    2077,  2078,    -7,  1571,  2080,    -7,  1572,  2079,  2081,  2082,
    2084,    -7,    -7,  2085,  2087,    -7,    -7,    -7,    -7,  1221,
    2088,    -7,  2089,    -7,    -7,  1576,  2083,    -7,  1577,  2091,
      -7,  2092,    -7,    -7,  1580,  2086,    -7,  1581,  2093,  2095,
    2096,  2098,    -7,    -7,  2094,  2099,  2100,    -7,  1585,  2097,
      -7,  2103,  2104,  2105,    -7,  1587,  2107,    -7,  1588,  2102,
    2108,  2106,  2109,    -7,    -7,  2110,  2112,    -7,    -7,    -7,
      -7,  1222,  2113,    -7,  2114,    -7,    -7,  1592,  2111,    -7,
    1593,  2116,    -7,  2117,    -7,    -7,  1596,  2119,    -7,  2118,
    2120,  2121,  2073,  2123,  2090,  2124,  2126,    -7,    -7,  2127,
      -7,  2101,    -7,  2129,    -7,  2115,    -7,  2130,  2132,    -7,
      -7,  2133,    -7,  2135,  2136,    -7,  2137,  2138,  2140,    -7,
      -7,    -7,    -7,  2141,    -7,    -7,  2139,    -7,  2143,    -7,
      -7,  2146,    -7,  2144,  2147,  2145,  2150,  2149,  2152,  2151,
    2153,    -7,    -7,  2154,    -7,  2156,    -7,  2157,    -7,  2158,
      -7,  2159,  2161,    -7,    -7,  2162,    -7,  2160,  2164,    -7,
    2167,  2165,  2168,    -7,    -7,    -7,    -7,  2166,    -7,    -7,
    2171,    -7,  2170,    -7,    -7,  2173,    -7,  1597,  2122,  2174,
    2125,  2175,  1599,  2176,  2178,  2128,  2179,  2177,  2131,  2142,
    2181,  2184,  2163,  1601,  2182,  2185,  2180,  2183,  1605,  2187,
    2188,  1607,  1608,  2186,  2189,  1225,  2192,  1611,  2193,  1612,
    2191,  2194,  2195,  2197,    -7,    -7,  2196,  2198,  2199,    -7,
    1616,  2202,    -7,  2203,  2204,  2205,    -7,  1618,  2207,    -7,
    1619,  2206,  2208,  2209,  2211,    -7,    -7,  1226,  2212,    -7,
    1623,  1624,  2214,    -7,  1627,  1628,  2215,  2217,  2218,  2220,
      -7,    -7,  1229,  2221,    -7,  2200,  2210,  1631,  2223,    -7,
    2226,  2213,  1632,  2224,  2227,  2225,  2228,    -7,    -7,  2229,
    2231,    -7,    -7,    -7,    -7,  1230,  2232,    -7,  2233,    -7,
      -7,  1636,  2216,    -7,  1637,  2235,    -7,  2236,    -7,    -7,
    1640,  2219,    -7,  1641,  2222,  2234,  2230,  2239,  1643,  2237,
    2240,  2242,  2238,  2244,  2245,  2246,  2243,  2248,  2249,  1645,
    2250,  2247,  2251,  2252,  1649,  2253,  2254,  1651,  1652,  2255,
    2257,  1233,  2260,  1655,  2261,  1656,  2259,  2262,  2263,  2265,
      -7,    -7,  2256,  2266,  2267,    -7,  1660,  2264,    -7,  2270,
    2271,  2272,    -7,  1662,  2274,    -7,  1663,  2269,  2275,  2273,
    2276,    -7,    -7,  1234,  2277,    -7,  1667,  1668,  2279,    -7,
    1671,  1672,  2280,  2282,  2283,  2285,    -7,    -7,  1237,  2286,
      -7,  2268,  2278,  1675,  2288,    -7,  2291,  2281,  1676,  2289,
    2292,  2290,  2293,    -7,    -7,  2294,  2296,    -7,    -7,    -7,
      -7,  1238,  2297,    -7,  2298,    -7,    -7,  1680,  2284,    -7,
    1681,  2300,    -7,  2301,    -7,    -7,  1684,  2287,    -7,    -7,
      -7,    -7,  1868,  2074,  2169,  2302,  2201,  2303,  1683,  1240,
    1686,  1687,  1241,  1690,  1691,  1244,  1694,  1695,  1245,  1698,
    1699,  1248,  1702,  1703,  1249,  1706,    -7,    -7,    -7,    -7,
      -7,    -7,  2304,  2306,    -7,    -7,    -7,    -7,    -7,    -7,
    2307,    -7,    -7,    -7,  2295,    -7,    -7,  2309,    -7,    -7,
      -7,  2305,    -7,    -7,  2310,  2312,  2313,  2308,  2315,  2311,
    1707,  2314,  1710,  2316,    -7,    -7,  2318,    -7,  2319,    -7,
    2321,  2320,  2299,  2324,  2325,    -7,  2323,    -7,  2327,    -7,
    1712,  2326,    -7,  2329,    -7,  2331,  2332,  2333,    -7,  2334,
     203,  2328,  2335,    -7,  2338,  2336,  1716,    -7,   256,  2339,
      -7,  1718,    -7,  1717,  2337,  1720,  2340,    -7,    -7,  2342,
      -7,  2343,    -7,   972,  2346,  2347,  2345,    -7,  2349,  1722,
    2348,    -7,  2351,  2353,  2354,   289,  2134,   239,    -7,   351,
     414,  2155,  2053,    -7,   240,   285,    -7,   357,   420,  2172,
    2341,    -7,   241,   294,    -7,   422,  2330,  2344,    -7,  2352,
    2350,    -7,  2355,    -7,   298,    -7,   343,  2356,    -7,   425,
    2357,  2358,    -7,  2360,  2359,    -7,  2361,    -7,  2363,   427,
     433,  2362,  2364,    -7,  1726,  2366,   438,  2369,   172,    -7,
     176,  1728,  2368,  2365,    -7,  2371,   440,   444,  2372,  2367,
      -7,   185,  1730,  2376,  2370,    -7,  1732,  2380,  2373,    -7,
    2382,  2374,  2375,    -7,  2383,   245,   246,   302,    -7,  1734,
    2385,  2377,   148,   189,    -7,   250,   304,    -7,   307,    -7,
     349,  2378,    -7,  2386,  2379,  2381,    -7,  1736,  2390,  2384,
     193,    -7,  1738,  2394,  2387,    -7,  2395,  1252,  2393,    -7,
    2317,  2396,    -7,  2399,    -7,    -7,  2400,  2401,  2402,    -7,
    2403,    -7,  1740,  2405,    -7,    -7,  2407,    -7,  1741,  2408,
      -7,  1744,  2392,    -7,    -7,    -7,  2397,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,  2409,  2411,    -7,    -7,    -7,    -7,  2412,
      -7,    -7,  2410,    -7,    -7,  2414,    -7,    -7,  2416,    -7,
      -7,  2415,  2417,    -7,    -7,    -7,    -7,    -7,    -7,  2418,
      -7,    -7,    -7,  2419,    -7,    -7,  2420,    -7,    -7,    -7,
    2422,    -7,    -7,  2421,  2423,    -7,    -7,    -7,    -7,  2424,
      -7,    -7,  2425,    -7,    -7,  2426,    -7,    -7,  2428,    -7,
      -7,  2427,  2429,    -7,    -7,    -7,    -7,    -7,    -7,  2430,
      -7,    -7,    -7,  2431,    -7,    -7,  2432,    -7,    -7,    -7,
    2434,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,  2433,  2435,  2436,  2437,  2438,  2440,  2439,  2441,    -7,
      -7,  2442,    -7,  2443,    -7,  2444,    -7,  2446,    -7,  2445,
    2447,    -7,    -7,  2448,    -7,  2449,    -7,  2450,    -7,  2452,
      -7,  2451,  2453,    -7,    -7,  2454,    -7,  2455,  2456,    -7,
    2458,  2457,  2459,    -7,    -7,    -7,    -7,  2460,    -7,    -7,
    2461,    -7,    -7,  2462,    -7,    -7,  2464,    -7,    -7,  2463,
    2465,    -7,    -7,    -7,    -7,  2466,    -7,    -7,  2467,    -7,
    2468,    -7,    -7,  2470,    -7,  2469,  2471,    -7,    -7,    -7,
      -7,  2472,    -7,    -7,  2473,    -7,  2474,    -7,    -7,  2476,
      -7,  2475,  2477,    -7,    -7,    -7,    -7,    -7,    -7,  2478,
      -7,    -7,    -7,  2479,    -7,    -7,  2480,    -7,    -7,    -7,
    2482,    -7,    -7,  2481,  2483,  2484,  2485,  2486,  2488,  2487,
    2489,    -7,    -7,  2490,    -7,  2491,    -7,  2492,    -7,  2494,
      -7,  2493,  2495,    -7,    -7,  2496,    -7,  2497,    -7,  2498,
      -7,  2500,    -7,  2499,  2501,    -7,    -7,  2502,    -7,  2503,
    2504,    -7,  2506,  2505,  2507,    -7,    -7,    -7,    -7,  2508,
      -7,    -7,  2509,    -7,    -7,  2510,    -7,    -7,  2512,    -7,
      -7,  2511,  2513,    -7,    -7,    -7,    -7,  2514,    -7,    -7,
    2515,    -7,  2516,    -7,    -7,  2518,    -7,  2517,  2519,    -7,
      -7,    -7,    -7,  2520,    -7,    -7,  2521,    -7,  2522,    -7,
      -7,  2524,    -7,  2523,  2525,    -7,    -7,    -7,    -7,    -7,
      -7,  2526,    -7,    -7,    -7,  2527,    -7,    -7,  2528,    -7,
      -7,    -7,  2530,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,  2529,  2531,  2532,  2533,  2534,  2536,  2535,  2537,  2538,
    2539,  2540,  2542,  2541,  2543,  2544,  2545,  2546,  2548,  2547,
    2549,  2550,  2551,  2552,  2554,  2553,  2555,  2556,  2557,  2558,
    2560,  2559,  2561,  2562,  2563,  2564,  2566,    -7,    -7,    -7,
      -7,    -7,    -7,  1878,  2565,  2567,  2568,  2569,  2570,  2571,
      -7,    -7,  2574,    -7,    -7,    -7,    -7,  2578,    -7,  2572,
      -7,    -7,    -7,    -7,  2580,    -7,    -7,    -7,  2573,    -7,
      -7,  2581,  2583,    -7,  1935,  2322,  2584,  2576,  2586,  2577,
    2588,    -7,  2579,  2592,  2582,  2590,    -7,    -7,  2593,    -7,
      -7,    -7,    -7,  2594,    -7,  2596,    -7,    -7,    -7,  2597,
      -7,    -7,    -7,  2598,    -7,   363,   446,  2595,  2587,    -7,
     251,   311,    -7,   451,  2599,  2589,    -7,  2600,  2601,    -7,
    2602,    -7,   317,    -7,   355,  2603,    -7,   457,  2604,  2605,
      -7,  2606,  2607,    -7,  2608,    -7,   320,    -7,   361,  2609,
      -7,  2613,  2610,    -7,  2611,    -7,  2612,    -7,    -7,   367,
    2614,    -7,  2615,    -7,    -7,  2622,  2616,    -7,  2617,    -7,
    2618,    -7,    -7,   459,  2628,  2620,    -7,  2630,  2623,    -7,
    2624,    -7,  2636,   462,   464,  2634,  2626,    -7,   196,  1746,
    2641,  2629,    -7,  1748,  2642,  2631,    -7,  2644,  2632,  2633,
      -7,   470,  2643,  2635,    -7,  2645,  2637,    -7,  2638,    -7,
    1750,  2653,  2640,    -7,  2655,  2646,  2647,    -7,  2656,  2648,
    2649,    -7,  2650,    -7,    -7,   255,   324,    -7,   326,    -7,
     369,  2651,    -7,  2657,  2652,  2654,    -7,  1752,  2658,  2659,
     202,    -7,  1754,  2667,  2660,    -7,   330,    -7,   370,  2661,
      -7,   371,  2662,    -7,  2663,    -7,    -7,  2664,    -7,    -7,
    2669,  2665,  2666,    -7,  1756,  2670,  2668,    -7,  2671,  2672,
    2673,    -7,  2678,    -7,  2619,    -7,    -7,    -7,    -7,  2680,
      -7,    -7,    -7,  2684,    -7,    -7,    -7,  2687,    -7,    -7,
    2685,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,  2677,  2679,    -7,    -7,  2681,    -7,  2682,    -7,
    2683,    -7,  2686,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
     475,  2691,  2676,    -7,  2692,  2688,    -7,  2689,    -7,   333,
      -7,   373,  2690,    -7,  2694,  2693,    -7,  2695,    -7,  2696,
      -7,    -7,   375,  2697,    -7,  2698,    -7,    -7,  2700,  2699,
      -7,  2701,    -7,  2702,    -7,    -7,   376,  2703,    -7,  2704,
      -7,    -7,  2705,    -7,    -7,    -7,  2706,    -7,    -7,    -7,
    2707,    -7,    -7,    -7,  2709,  2708,    -7,  2710,    -7,  2711,
      -7,    -7,   477,  2718,  2712,    -7,  2722,  2714,    -7,  2715,
      -7,  1758,  2730,  2717,    -7,  2732,  2719,  2720,    -7,  2735,
    2723,  2724,    -7,  2725,    -7,    -7,  2731,  2726,    -7,  2727,
      -7,  2728,    -7,    -7,  2743,  2733,  2734,    -7,  2736,    -7,
      -7,  2737,    -7,    -7,    -7,   339,    -7,   377,  2738,    -7,
     379,  2739,    -7,  2740,    -7,    -7,  2741,    -7,    -7,  2744,
    2742,  2745,    -7,  1760,  2746,  2747,    -7,  2749,  2748,  2750,
      -7,   383,  2751,    -7,  2752,    -7,    -7,  2753,    -7,    -7,
      -7,    -7,  2754,    -7,    -7,  2757,  2755,  2756,    -7,  2758,
      -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,    -7,  2766,  2759,    -7,  2760,    -7,  2761,
      -7,    -7,   385,  2762,    -7,  2763,    -7,    -7,  2764,    -7,
      -7,    -7,  2765,    -7,    -7,    -7,  2767,    -7,    -7,    -7,
    2768,    -7,    -7,    -7,    -7,    -7,    -7,  2769,    -7,    -7,
      -7,  2775,  2770,    -7,  2771,    -7,  2772,    -7,    -7,  2787,
    2774,  2776,    -7,  2777,    -7,    -7,  2778,    -7,    -7,    -7,
    2779,    -7,    -7,    -7,  2780,    -7,    -7,    -7,    -7,   389,
    2781,    -7,  2782,    -7,    -7,  2783,    -7,    -7,    -7,    -7,
    2784,    -7,    -7,  2789,  2785,  2786,    -7,  2788,    -7,    -7,
    2790,    -7,    -7,    -7,    -7,    -7,  2791,    -7,    -7,    -7,
    2792,    -7,    -7,    -7,  2793,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,  2794,    -7,    -7,    -7,  2795,    -7,    -7,
      -7,    -7,    -7,    -7,  2796,    -7,    -7,    -7,    -7,    -7,
    2797,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,    -7
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   538,     0,   299,     0,   239,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     5,     2,     3,     4,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   457,
       0,     0,     0,     0,   567,   569,   566,     0,     0,     0,
       0,     0,     0,   513,   319,   311,   306,     0,     0,     0,
     233,   240,   241,   243,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     1,     0,    30,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   423,     0,
       0,     0,   440,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   458,     0,     0,   397,     0,     0,   360,
     352,     0,     0,     0,     0,     0,   394,   373,     0,   571,
     568,     0,   570,     0,   579,   580,     0,     0,     0,     0,
       0,     0,   594,     0,     0,     0,     0,     0,     0,     0,
     536,     0,     0,     0,     0,     0,   520,   325,   331,   322,
     291,   218,   309,   228,   214,   307,     0,     0,     0,   260,
       0,     0,   234,   242,   244,   245,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   761,     0,   763,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   729,     0,     0,   739,     0,     0,
       0,     0,     0,   750,     0,     0,   747,     0,     0,     0,
       0,     0,     0,     0,   818,     0,     0,   814,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   803,     0,     0,     0,   645,     0,     0,
       0,     0,     0,     0,     0,     0,   631,     0,     0,     0,
     636,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   708,     0,     0,     0,   716,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1157,     0,     0,  1153,
       0,     0,  1136,     0,  1094,     0,     0,     0,     0,     0,
    1073,     0,     0,  1070,     0,     0,     0,     0,  1059,     0,
    1056,     0,     0,     0,     0,     0,     0,     0,  1102,     0,
       0,  1098,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   912,
       0,     0,     0,   904,     0,     0,   922,     0,   920,     0,
       0,     0,     0,   858,     0,     0,   855,     0,     0,     0,
     836,     0,   839,     0,     0,   885,     0,   882,     0,     0,
       0,     0,     0,     0,     0,     0,   869,     0,     0,     0,
     864,     0,     0,     0,     0,     0,  1007,     0,  1002,     0,
       0,     0,     0,     0,     0,  1035,     0,     0,  1030,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   959,     0,     0,     0,   951,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   424,     0,     0,   426,     0,
       0,     0,     0,     0,   433,   414,     0,     0,   434,   406,
     436,   408,     0,     0,   412,     0,   413,   415,   419,   420,
     422,     0,     0,   462,     0,   463,   465,   469,   470,   472,
       0,     0,     0,   442,     0,     0,   444,     0,     0,     0,
     449,     0,     0,     0,     0,   353,     0,     0,     0,     0,
       0,     0,     0,   369,     0,     0,   362,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   381,   375,   377,
     374,   555,     0,   572,     0,   550,     0,   559,     0,   581,
       0,     0,     0,     0,     0,   494,     0,     0,     0,   483,
       0,     0,     0,     0,   601,     0,     0,   592,     0,     0,
       0,     0,     0,   133,     0,     0,     0,     0,     0,     0,
     539,     0,     0,     0,     0,     0,   542,     0,     0,     0,
       0,   534,     0,     0,     0,     0,   512,     0,     0,     0,
       0,    68,     0,     0,     0,     0,     0,   132,   302,   328,
     323,   308,   329,   320,   312,   318,   221,   224,   216,   200,
     310,   202,   194,   208,   252,   196,   215,     0,     0,   262,
       0,   238,   261,     0,     0,   235,   246,   755,   756,   757,
     758,   759,   760,   762,   764,   765,   766,   753,   768,     0,
       0,   771,   769,     0,   776,     0,   778,     0,   773,     0,
     697,     0,     0,   730,   726,   731,   727,     0,   725,   740,
     742,   743,     0,   733,   734,   736,   737,     0,     0,   748,
     745,     0,   810,     0,   812,     0,   751,     0,   807,     0,
       0,   819,   815,   820,   816,     0,   833,   828,   826,   825,
       0,   823,   822,   831,   830,     0,     0,     0,     0,     0,
     808,   783,     0,     0,     0,   787,     0,     0,   791,     0,
       0,     0,   795,     0,     0,   799,     0,     0,     0,     0,
       0,   804,   646,     0,     0,   805,   647,   767,   649,     0,
       0,   653,     0,   654,   656,   660,   661,   663,     0,     0,
     668,     0,   669,   628,   624,   623,   621,     0,     0,     0,
       0,     0,   617,   632,     0,     0,     0,   637,     0,     0,
     641,     0,     0,     0,   700,     0,     0,   704,     0,     0,
       0,     0,     0,   709,   717,     0,     0,   710,   718,   698,
     720,     0,     0,   724,     0,   684,   672,   676,   677,   679,
       0,     0,   683,     0,   670,   686,   690,   691,   693,     0,
       0,     0,     0,     0,     0,     0,     0,  1127,  1125,     0,
    1123,     0,  1107,     0,  1119,     0,  1117,     0,     0,  1115,
    1113,     0,  1111,  1109,     0,  1121,  1159,     0,     0,  1156,
    1152,  1155,  1151,     0,  1149,  1134,  1146,  1145,     0,  1143,
    1142,  1140,  1139,     0,     0,     0,     0,     0,     0,     0,
       0,  1075,  1072,     0,  1069,     0,  1067,     0,  1065,     0,
    1063,     0,     0,  1061,  1058,     0,  1055,  1053,     0,  1106,
    1104,     0,     0,  1101,  1097,  1100,  1096,     0,  1080,  1093,
    1091,  1090,     0,  1088,  1087,  1085,  1084,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1243,  1253,     0,     0,     0,  1249,
       0,     0,  1245,     0,     0,     0,  1187,     0,     0,  1183,
       0,     0,     0,     0,     0,  1179,  1161,     0,     0,  1171,
    1167,     0,     0,  1163,  1214,     0,     0,     0,     0,     0,
    1210,  1206,     0,     0,  1202,     0,  1198,     0,     0,  1194,
       0,  1190,     0,     0,     0,     0,     0,   911,   903,     0,
       0,   910,   888,   908,   900,     0,     0,   896,     0,   895,
     893,   889,   902,   941,     0,     0,   937,     0,   936,   934,
     916,   929,   927,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     873,   868,     0,     0,     0,   863,     0,     0,  1023,     0,
       0,     0,  1019,     0,     0,  1015,     0,     0,     0,     0,
       0,  1011,  1006,     0,     0,  1001,  1051,     0,     0,  1047,
    1043,     0,     0,     0,     0,     0,  1025,  1034,     0,     0,
    1029,     0,   985,     0,     0,   967,     0,   963,     0,     0,
       0,     0,     0,   958,   950,     0,     0,   943,   949,   955,
     947,     0,     0,   957,     0,   997,   995,   991,   990,   988,
       0,     0,   984,     0,   983,   981,   977,   976,   974,    38,
      39,    40,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   425,   427,   428,   429,
     430,   431,     0,     0,   435,   407,   437,   409,   438,   410,
       0,   405,   416,   417,   421,   432,   460,     0,   464,   466,
     467,   471,   473,   474,     0,     0,     0,     0,     0,     0,
       0,     0,   453,     0,   441,   451,   354,   355,     0,   363,
       0,     0,     0,     0,     0,   335,     0,   365,     0,   337,
     343,   341,   342,     0,   347,     0,     0,     0,   349,     0,
       0,     0,     0,   390,     0,     0,     0,   393,     0,     0,
     402,     0,   388,   383,   385,   382,   370,   376,   378,   564,
     574,   548,   547,   554,     0,   561,   552,   551,   563,   560,
     603,   604,   615,     0,   610,     0,     0,     0,   533,     0,
       0,     0,     0,   597,     0,     0,   501,     0,     0,     0,
       0,   506,     0,     0,   481,     0,     0,     0,   585,     0,
       0,   588,     0,   614,     0,   593,     0,     0,   514,     0,
       0,     0,   142,     0,     0,   138,     0,   131,     0,     0,
       0,     0,     0,   179,     0,     0,     0,     0,     0,   545,
       0,     0,     0,     0,   537,     0,     0,     0,     0,     0,
     191,     0,     0,     0,     0,   540,     0,     0,     0,   535,
       0,     0,     0,    73,     0,     0,     0,     0,   108,     0,
       0,     0,     0,     0,   127,     0,     0,    69,     0,   115,
       0,     0,   112,     0,     0,     0,   285,     0,     0,     0,
       0,   124,     0,     0,     0,   125,   305,   300,   317,   314,
     324,   332,   316,   330,   321,   313,   227,   219,   222,   217,
     201,   193,   204,   195,   209,   210,   253,   254,   197,   198,
     248,   247,     0,   231,   263,   230,     0,   236,   237,   772,
     770,   777,   779,   774,   775,   732,   728,   741,   744,   735,
     738,   749,   746,   811,   813,   752,   794,   821,   817,   827,
     824,   832,   829,     0,     0,   809,   784,   781,   785,     0,
     788,   789,     0,   792,   793,     0,   796,   797,     0,   800,
     801,     0,     0,   806,   648,   754,   650,   664,   651,     0,
     655,   643,   658,   662,   665,   666,     0,   657,   627,   626,
     622,   620,   619,     0,     0,   616,   633,   629,   634,     0,
     638,   639,     0,   642,   712,     0,   701,   702,     0,   705,
     706,     0,     0,   711,   719,   713,   721,   714,   722,     0,
     671,   673,   674,   678,   680,   681,     0,   685,   687,   688,
     692,   694,   695,  1133,  1132,  1131,  1130,  1129,  1128,  1126,
    1124,  1122,  1120,  1118,  1116,  1114,  1112,  1110,  1108,  1160,
    1158,  1154,  1150,  1147,  1144,  1141,  1138,  1137,  1135,  1079,
    1078,  1077,  1076,  1074,  1071,  1068,  1052,  1064,  1062,  1060,
    1057,  1054,  1066,  1105,  1103,  1099,  1095,  1092,  1089,  1086,
    1083,     0,     0,     0,     0,     0,     0,     0,     0,  1239,
    1237,     0,  1235,     0,  1233,     0,  1231,     0,  1229,     0,
       0,  1227,  1225,     0,  1223,     0,  1221,     0,  1219,     0,
    1217,     0,     0,  1269,  1267,     0,  1265,  1263,     0,  1261,
    1259,     0,     0,  1256,  1252,  1255,  1251,     0,  1248,  1247,
       0,  1244,  1203,     0,  1186,  1185,     0,  1182,  1181,     0,
       0,  1178,  1174,  1177,  1173,     0,  1170,  1169,  1166,  1165,
       0,  1162,  1175,  1213,  1212,     0,     0,  1209,  1205,  1208,
    1204,     0,  1201,  1200,  1197,  1196,     0,  1193,  1192,  1257,
     915,     0,     0,   909,   901,   907,   899,   906,   898,     0,
     894,   892,   891,   942,   940,   939,     0,   935,   933,   932,
     928,   926,   925,     0,     0,     0,     0,     0,     0,     0,
       0,   860,   857,     0,   854,     0,   852,     0,   850,     0,
     848,     0,     0,   834,   837,     0,   840,     0,   842,     0,
     844,     0,   846,     0,     0,   887,   884,     0,   881,   879,
       0,   877,   861,     0,     0,   872,   867,   871,   866,     0,
     862,  1039,     0,  1022,  1021,     0,  1018,  1017,     0,  1014,
    1013,     0,     0,  1010,  1005,  1009,  1004,     0,  1000,   999,
    1050,  1049,     0,  1046,  1045,  1042,  1041,     0,     0,  1038,
    1033,  1037,  1032,     0,  1028,  1027,   970,   969,     0,   966,
     965,   962,   961,     0,     0,   956,   948,   954,   946,   953,
     945,     0,   996,   994,   993,   989,   987,   986,     0,   982,
     980,   979,   975,   973,   972,    31,    32,    33,    34,    35,
      36,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   439,   411,   418,
     461,   459,   475,     0,     0,     0,     0,     0,     0,     0,
     454,   455,   357,   358,   452,   356,   364,     0,   367,     0,
     339,   336,   366,   338,   344,   345,   334,   348,     0,   351,
     350,     0,     0,   392,     0,     0,     0,     0,     0,     0,
       0,   403,     0,     0,     0,   387,   384,   386,   576,   577,
     380,   575,   549,   556,   546,   591,   562,   553,   599,   606,
     607,   605,   609,   612,   611,     0,     0,     0,     0,   486,
       0,     0,   531,     0,     0,     0,   557,     0,     0,   497,
       0,   595,     0,   502,     0,     0,   522,     0,     0,     0,
     509,     0,     0,   477,     0,   504,     0,   482,     0,     0,
     105,     0,     0,   582,     0,   583,     0,   586,   600,     0,
       0,   518,     0,   515,   516,     0,     0,   150,     0,   134,
       0,   136,   123,     0,     0,     0,   182,     0,     0,   176,
       0,   177,     0,     0,     0,     0,     0,   168,     0,     0,
       0,     0,   543,     0,     0,     0,   529,     0,     0,     0,
      81,     0,     0,     0,   159,     0,     0,   162,     0,   189,
       0,     0,     0,   541,     0,     0,     0,    52,     0,     0,
       0,    77,     0,    74,    75,     0,     0,   109,     0,   110,
       0,     0,    93,     0,     0,     0,   266,     0,     0,     0,
       0,   128,     0,     0,     0,   129,     0,   107,     0,     0,
     116,     0,     0,   120,     0,   113,   114,     0,   286,   287,
       0,     0,     0,   289,     0,     0,     0,   126,     0,     0,
       0,   293,   303,   212,   301,   327,   315,   333,   256,   225,
     211,   223,   203,   205,   206,   220,   255,   199,   249,   250,
     257,   258,   232,   229,   782,   786,   790,   780,   798,   802,
     644,   652,   659,   667,   625,   618,   630,   635,   640,   699,
     703,   707,   715,   723,   675,   682,   689,   696,  1082,  1081,
    1148,  1242,  1241,  1240,  1238,  1236,  1234,  1232,  1216,  1228,
    1226,  1224,  1222,  1220,  1218,  1230,  1268,  1266,  1264,  1262,
    1260,  1258,  1254,  1250,  1246,  1188,  1184,  1180,  1176,  1172,
    1168,  1164,  1215,  1211,  1207,  1189,  1199,  1195,  1191,   913,
     905,   897,   890,   938,   931,   924,   923,   921,   919,   918,
     917,   930,   859,   856,   853,   851,   849,   847,   835,   838,
     841,   843,   845,   875,   886,   883,   880,   878,   876,   874,
     870,   865,  1024,  1020,  1016,   998,  1008,  1003,  1012,  1048,
    1044,  1040,  1036,  1031,  1026,   968,   964,   960,   952,   944,
     992,   971,   978,   914,    42,    47,    37,    12,    18,    23,
      41,    46,     6,    13,    19,    24,    51,    45,     8,    14,
      20,    25,    50,    44,     9,    15,    21,    26,    49,    43,
      10,    16,    22,    27,    48,    29,    11,    17,     7,    28,
     450,   443,   445,   446,   447,   448,   456,   359,   368,   340,
     346,   361,     0,     0,   389,   395,     0,   398,     0,   400,
       0,   404,     0,   371,   565,   578,   558,   602,   608,   613,
       0,     0,     0,   489,     0,     0,   492,     0,   484,     0,
     532,     0,     0,   141,     0,     0,   500,     0,   598,     0,
     495,   596,     0,     0,   526,     0,   523,   524,     0,     0,
     480,     0,   507,     0,   510,   505,     0,     0,   146,     0,
     143,   144,     0,   589,   584,   587,     0,   519,   511,   517,
       0,   139,   135,   137,     0,     0,   188,     0,   180,     0,
     183,   178,     0,     0,     0,   171,     0,     0,   174,     0,
     166,     0,     0,     0,   544,     0,     0,     0,    60,     0,
       0,     0,    85,     0,    82,    83,     0,     0,   165,     0,
     192,     0,   160,   190,     0,     0,     0,    56,     0,    53,
      54,     0,    78,    70,    76,     0,   111,     0,     0,    88,
       0,     0,   101,     0,    94,    95,     0,   267,   268,     0,
       0,     0,   270,     0,     0,     0,   130,     0,     0,     0,
     274,     0,     0,    89,     0,   117,   118,     0,   121,   122,
     106,   288,     0,   290,   282,     0,     0,     0,   297,     0,
     294,   295,   304,   213,   226,   207,   251,   259,   391,   396,
     399,   401,   379,   372,     0,     0,   530,     0,   487,     0,
     490,   476,     0,     0,   154,     0,   151,   152,     0,   498,
     573,   496,     0,   527,   468,   525,     0,   478,   508,   485,
       0,   147,   148,   145,   590,   521,   140,     0,   186,   181,
     184,     0,     0,    71,     0,   169,     0,   172,   158,     0,
       0,     0,    64,     0,    61,    62,     0,    86,    87,    84,
       0,   163,   167,   161,     0,    57,    58,    55,    80,     0,
       0,    72,     0,    98,    99,     0,   102,   103,    96,   269,
       0,   271,   272,     0,     0,     0,   278,     0,   275,   276,
       0,    90,    91,   119,    97,   292,     0,   298,   273,   296,
       0,   493,   488,   491,     0,   155,   156,   153,   499,   528,
     479,   149,   187,     0,   175,   170,   173,     0,    65,    66,
      63,    79,   164,    59,     0,   326,   283,   100,   104,   264,
       0,   279,   280,   277,    92,   265,   503,   157,   185,    67,
     284,   281
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
      -7,    -7,    -7,    -7,    -7,    -7
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    50,    51,    52,    53,    54
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       1,    56,    59,     2,     3,    57,     4,    58,    55,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    97,    98,   850,    99,   340,   341,
     274,   313,   314,   315,   275,   316,   317,   318,   319,  1446,
     722,   851,   100,   808,   809,   810,   342,   320,    87,    88,
      89,    90,   723,  1447,    91,    92,   794,   795,   796,   811,
    1442,   797,   798,   799,    93,   337,   338,   801,   802,   803,
     234,  1443,   800,   804,   805,   822,   823,   824,    60,   825,
     826,   339,  1612,   806,   847,   848,  1524,  1525,  1526,  1506,
    1507,   827,  1527,  1528,  1559,  1560,  1561,  1613,  1562,  1563,
     849,  1508,  1529,   322,   323,   324,   325,  1449,   854,  1616,
    1564,   812,   813,   814,   815,  1577,  1578,  1579,  1450,   326,
    1580,  2227,  2228,  2229,   855,  1617,  2230,   816,  1531,  1532,
    1533,  1581,  1542,  1543,  1544,   244,   245,  2231,  1546,  1547,
    1548,  1582,  1583,  1584,  1534,  2179,  2180,  2181,  1545,  2183,
    2184,  2185,   149,   150,  1549,   151,   152,  1585,  2200,  2201,
    2202,  2182,  2232,  2233,  2234,  2186,  2254,  2255,  2256,  2541,
    2542,  2543,  1451,   239,  2203,  2593,  2594,  2595,  2235,  2072,
     294,   240,  2257,   295,   309,  2544,  1452,   310,   311,   772,
    2073,  2596,   773,   774,   296,   776,   786,   312,   777,   778,
    1475,   820,   775,  1476,  1477,  1485,  1493,  1504,   779,   787,
    1557,  1566,  1568,  1478,   821,  2111,  2122,  2136,  1486,  1494,
    1505,  2216,  2218,  1558,  1567,  1569,  2236,  2479,  2112,  2123,
    2137,  2575,  2080,    83,  2217,  2219,    84,    85,    86,  2237,
    2480,   250,   251,  2081,  2576,   780,   781,   782,   783,  1479,
    1480,  1481,  1482,  1487,  1488,  1489,  1490,   784,  1570,  1571,
     331,  1483,  2124,  2125,   332,  1491,  2105,  2106,  2107,  2108,
    1572,  2138,  2139,   459,  2126,  2149,  2150,   460,  2109,  2220,
    2221,  2238,  2239,  2140,  2241,  2242,   475,  2151,  2481,  2482,
     476,  2222,   238,  2240,  2492,  2493,  2243,  2506,  2507,   273,
    2483,  2577,  2578,  2580,  2581,   293,  2494,  2601,  2602,  2508,
    2642,  2643,   243,  2579,   725,  2582,  2699,  2700,   750,  2603,
     751,  2152,  2644,  1495,  1496,  1497,   726,  2244,  2701,  2113,
    2114,  2115,  2153,  2495,  1498,  2127,  2128,  2129,  2245,  2509,
    2116,  2470,  2471,  2472,  2496,  2516,  2130,  2583,  2604,  2607,
    2510,  2645,  2473,  2652,  2660,  2702,  2517,  2705,  2584,  2605,
    2608,  2720,  2646,  2734,  2653,  2661,  2703,  2754,  2706,   791,
     792,   278,  2721,   491,  2735,  1499,  1500,   492,  2755,   793,
    1510,  1511,  1513,  1514,   297,  1501,  1521,  1522,  1538,  1539,
    1512,   507,  1515,  2117,  2118,   508,  1523,   321,  1540,  2131,
    2132,  2141,  2142,  2119,  2155,  2156,  2164,  2165,   336,  2133,
     301,  2143,  2167,  2168,  2157,   302,  2166,  2175,  2176,  2192,
    2193,   358,  2169,  2195,  2196,  2474,  2475,  2177,   523,  2194,
    2484,  2485,   524,  2197,   378,  2476,  2498,  2499,  2524,  2525,
    2486,  2533,  2534,  2536,  2537,   246,  2500,   247,  2526,  2556,
    2557,  2535,   684,  2538,  2634,  2635,  2671,  2672,   687,  2558,
      80,   279,   685,    81,  2636,    82,  2673,   537,   688,    75,
      76,   538,    77,    78,    79,   280,   281,   284,   285,   282,
     283,   298,   286,   752,   333,   299,   300,   334,   753,   335,
     733,   734,   762,   839,   252,   735,   253,   763,   840,    67,
      68,    69,    70,    71,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   187,   188,   189,   190,   191,   199,
     200,   201,   202,   203,   217,   218,   219,   220,   221,   229,
     230,   231,   232,   233,   156,   157,   458,   158,   159,   163,
     164,   463,   165,   166,   170,   171,   490,   172,   173,   177,
     178,   495,   179,   180,   195,   196,   522,   197,   198,   207,
     208,   527,   209,   210,   225,   226,   541,   227,   228,   265,
     266,   267,   542,   268,   287,   288,   543,   289,   290,   403,
     404,   405,   308,   406,   420,   421,   422,   345,   423,   433,
     434,   435,   400,   436,   450,   451,   452,   430,   453,   551,
     552,   553,   528,   554,   586,   587,   588,   548,   589,   623,
     624,   625,   567,   626,   658,   659,   660,    72,   661,    94,
      73,    74,    95,    96,   146,   600,   153,   147,   148,   154,
     155,   160,   620,   167,   161,   162,   168,   169,   174,   667,
     181,   175,   176,   182,   183,   184,   668,   192,   185,   186,
     193,   194,   204,   675,   211,   205,   206,   212,   213,   214,
     672,   222,   215,   216,   223,   224,   303,   466,   467,   304,
     305,   468,   484,   485,   498,   499,   486,   594,   500,   516,
     517,   529,   530,   518,   599,   531,   571,   572,   601,   602,
     573,   613,   603,   643,   644,   744,   745,   645,   563,   746,
     595,   609,   564,   614,   596,   610,   635,   615,   768,   348,
     636,   349,   769,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   256,
     257,   258,   259,   269,   270,   271,   272,   327,   328,   329,
     330,   407,   408,   409,   410,   411,   412,   413,   414,   424,
     425,   426,   427,   437,   438,   439,   440,   441,   442,   443,
     444,   454,   455,   456,   457,   555,   556,   557,   558,   559,
     560,   561,   562,   577,   578,   579,   580,   590,   591,   592,
     593,   627,   628,   629,   630,   631,   632,   633,   634,   649,
     650,   651,   652,   662,   663,   664,   665,   757,   758,   759,
     760,   235,   669,   236,   237,   361,   362,   639,   363,   372,
     373,   666,   374,   381,   382,   670,   383,   392,   393,   676,
     394,   469,   470,   472,   471,   473,   474,   479,   678,   480,
     481,   487,   488,   671,   489,   501,   502,   504,   503,   505,
     506,   511,   679,   512,   513,   519,   520,   680,   521,   532,
     533,   682,   534,   574,   575,   686,   576,   604,   605,   694,
     606,   646,   647,   695,   648,   702,   703,   677,   704,   836,
     837,   681,   838,   959,   960,   683,   961,  1011,  1012,   698,
    1013,  1177,  1178,   700,  1179,  1215,  1216,   707,  1217,  1293,
    1294,   720,  1295,  1331,  1332,   276,  1333,   241,   277,   461,
     242,   477,   462,   493,   478,   509,   494,   525,   510,   539,
     526,   544,   540,   565,   545,   597,   566,   611,   598,   616,
     612,   637,   617,   845,   638,  1051,   846,  1063,  1052,  1095,
    1064,  1107,  1096,  1461,  1108,  1466,  1462,  2093,  1467,   699,
    2094,    61,    62,    63,    64,    65,    66,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   260,   261,   262,   364,
     365,   366,   367,   368,   369,   375,   376,   377,   384,   385,
     386,   387,   388,   389,   395,   396,   397,   415,   416,   417,
     445,   446,   447,   568,   569,   570,   581,   582,   583,   640,
     641,   642,   653,   654,   655,   689,   690,   691,   708,   709,
     710,   711,   712,   713,   717,   718,   719,   721,   728,   729,
     730,   828,   829,   830,   841,   842,   843,   936,   937,   938,
     943,   944,   945,   946,   947,   948,   965,   966,   967,   968,
     969,   970,   974,   975,   976,   988,   989,   990,   995,   996,
     997,   998,   999,  1000,  1017,  1018,  1019,  1020,  1021,  1022,
    1026,  1027,  1028,  1142,  1143,  1144,  1160,  1161,  1162,  1167,
    1168,  1169,  1170,  1171,  1172,  1181,  1182,  1183,  1185,  1186,
    1187,  1202,  1203,  1204,  1221,  1222,  1223,  1224,  1225,  1226,
    1230,  1231,  1232,  1258,  1259,  1260,  1276,  1277,  1278,  1283,
    1284,  1285,  1286,  1287,  1288,  1297,  1298,  1299,  1301,  1302,
    1303,  1318,  1319,  1320,  1337,  1338,  1339,  1340,  1341,  1342,
    1346,  1347,  1348,   724,  1358,  1359,  1360,  1361,  1362,  1363,
    1364,  1365,  1366,  1367,  1368,  1369,  1370,  1371,  1372,  1373,
    1374,  1375,  1410,  1411,  1412,  1453,  1454,  1455,  1469,  1470,
    1471,  1608,  1609,  1610,   354,   705,   355,   706,   834,   887,
     835,   888,   915,   701,   916,   962,  1014,   963,  1015,  1054,
    1068,  1055,  1069,  1098,  1112,  1099,  1113,  1193,  1218,  1194,
    1219,  1309,  1334,  1310,  1335,  1390,   727,  1391,  1439,  1589,
    1440,  1590,  1592,  1596,  1593,  1597,  1669,  1709,  1670,  1710,
    1805,  1835,  1806,  1836,  1851,  1869,  1852,  1870,  1917,  1947,
    1918,  1948,  1963,  1981,  1964,  1982,  2003,  2009,  2004,  2010,
    2015,  2021,  2016,  2022,  2027,  2033,  2028,  2034,  2263,   716,
    2264,   248,   249,   254,   255,   263,   264,   291,   292,   306,
     307,   343,   344,   346,   347,   350,   351,   352,   353,   356,
     357,   756,   359,   360,   370,   371,   379,   380,   390,   391,
     398,   399,   731,   401,   402,   418,   419,   428,   429,   738,
     431,   432,   448,   449,   464,   465,   482,   483,   496,   497,
     514,   515,   535,   536,   546,   547,   742,   549,   550,   584,
     585,   607,   608,   618,   619,   761,   621,   622,   656,   657,
     673,   674,   692,   693,   696,   697,   714,   715,   736,   737,
     740,   741,   747,   748,   754,   755,   788,   789,   817,   818,
     764,   831,   832,   869,   870,   875,   876,   879,   880,   766,
     881,   882,   890,   891,   892,   893,   895,   896,   770,   897,
     898,   903,   904,   907,   908,   844,   909,   910,   918,   919,
     920,   921,   923,   924,   926,   927,   928,   929,   932,   933,
     939,   940,   765,   949,   950,   953,   954,   971,   972,   978,
     979,   980,   981,   984,   985,   991,   992,   767,  1001,  1002,
    1005,  1006,  1023,  1024,  1029,  1030,  1035,  1036,  1041,  1042,
    1045,  1046,  1047,  1048,  1057,  1058,  1066,  1067,  1071,  1072,
    1073,  1074,  1079,  1080,  1085,  1086,  1089,  1090,  1091,  1092,
    1101,  1102,  1110,  1111,  1115,  1116,  1123,  1124,  1127,  1128,
    1131,  1132,  1134,  1135,  1136,  1137,  1139,  1140,   785,  1150,
    1151,  1152,  1153,  1156,  1157,  1163,  1164,   807,  1173,  1174,
    1188,  1189,  1195,  1196,   833,  1198,  1199,  1200,  1201,  1205,
    1206,  1209,  1210,  1227,  1228,  1239,  1240,  1243,  1244,  1247,
    1248,  1250,  1251,  1252,  1253,  1255,  1256,   852,  1266,  1267,
    1268,  1269,  1272,  1273,  1279,  1280,   853,  1289,  1290,  1304,
    1305,  1311,  1312,   860,  1314,  1315,  1316,  1317,  1321,  1322,
    1325,  1326,  1343,  1344,  1382,  1383,  1394,  1395,  1397,  1398,
    1401,  1402,   862,  1404,  1405,  1413,  1414,  1416,  1417,  1422,
    1423,  1431,  1432,  1435,  1436,  1444,  1445,  1518,  1519,  1456,
    1457,  1459,  1460,  1535,  1536,  1550,  1551,  1554,  1555,  1573,
    1574,   858,  1586,  1587,  1600,  1601,  1603,  1604,  1606,  1607,
     861,  1643,  1644,  1652,  1653,  1658,  1659,   864,  1661,  1662,
    1673,  1674,  1676,  1677,  1680,  1681,   866,  1683,  1684,  1692,
    1693,  1698,  1699,   867,  1701,  1702,  1713,  1714,  1716,  1717,
    1720,  1721,   873,  1771,  1772,  1777,  1778,  1789,  1790,  1795,
    1796,  1799,  1800,   868,  1801,  1802,  1808,  1809,  1811,  1812,
    1820,  1821,  1826,  1827,   877,  1829,  1830,  1838,  1839,  1840,
    1841,  1843,  1844,   901,  1845,  1846,  1856,  1857,  1861,  1862,
    1873,  1874,  1876,  1877,  1880,  1881,   905,  1883,  1884,  1889,
    1890,  1901,  1902,  1907,  1908,  1911,  1912,   930,  1913,  1914,
    1920,  1921,  1923,  1924,  1932,  1933,  1938,  1939,   935,  1941,
    1942,  1950,  1951,  1952,  1953,  1955,  1956,   951,  1957,  1958,
    1968,  1969,  1973,  1974,  1985,  1986,  1988,  1989,  1992,  1993,
    2001,  2002,  2005,  2006,  2007,  2008,  2011,  2012,  2013,  2014,
    2017,  2018,  2019,  2020,  2023,  2024,  2025,  2026,  2029,  2030,
    2031,  2032,  2035,  2036,  2049,  2050,  2052,  2053,  2064,  2065,
    2078,  2079,  2083,  2084,  2085,  2086,  2088,  2089,  2099,  2100,
    2172,  2173,  2187,  2188,  2204,  2205,  2208,  2209,  2223,  2224,
    2250,  2251,  2258,  2259,  2273,  2274,  2277,  2278,  2280,  2281,
    2545,  2546,  2549,  2550,  2564,  2565,  2589,  2590,  2597,  2598,
    2615,  2616,  2679,  2680,  2713,  2714,   732,   739,   743,   749,
     771,   790,   819,   856,   857,   859,   863,   865,  1503,   871,
     872,   955,   874,   878,   957,   883,   884,   964,   885,   886,
     982,   889,   894,   987,   899,   900,  1003,   902,   906,  1007,
     911,   912,  1009,   913,   914,  1016,   917,   922,   925,  1031,
     931,   934,   941,     0,   942,   952,   956,   958,   973,   977,
    1033,   983,   986,   993,  1355,   994,  1004,  1008,  1010,  1025,
    1032,  1034,  1037,  1040,  1039,  1038,  1043,  1044,  1075,  1053,
    1049,  1050,  1056,  1517,  1059,  1061,  1060,  1062,  1076,  1065,
    1070,  1077,  1078,  1081,  1082,  1083,  1087,  1084,  1097,  1088,
    1100,  1093,  1094,     0,  1117,  1103,  1104,  1122,  1105,  1106,
    1119,  1109,  1114,  1118,  1120,  1121,  1126,  1125,  1129,  1995,
    1130,  1133,  1138,  1141,  1154,  1145,  1146,  1149,  1147,  1148,
       0,  1155,  1158,  2440,  1165,  1159,  1166,  1180,  1175,  1176,
    1184,  1233,  1190,  1192,  1191,  1197,     0,  1207,  1208,  1238,
    1211,  1212,  1242,  1213,  1214,  1235,  1220,  1229,  1234,  1236,
    1237,  1246,  1241,  1245,  1254,  1249,  1257,  1265,  1261,  1262,
    1274,  1263,  1264,     0,  1614,  1270,  1271,  1281,  1275,  1282,
    1296,  1291,  1292,  1300,     0,  1306,  1308,  1307,  1313,  1352,
    1323,  1324,  2454,  1327,  1328,  1357,  1329,  1330,  1396,  1336,
    1345,  1349,  1350,  1351,  1353,     0,  1354,  1356,     0,  1553,
       0,     0,  1407,  1385,  1376,  1377,  1378,  1379,  1380,  1381,
    1384,  1386,  1387,  1403,  1388,  1389,  1409,  1392,  1393,  1399,
    1400,  1406,  1408,  1415,  1418,  1420,  1419,  1421,  1424,     0,
    1425,  1426,  1428,  1484,  1429,  1427,  1430,  1433,  1458,  1434,
    1437,  1595,  1438,  1464,  1448,  1441,  1463,  1465,  1468,  1472,
    1473,  1492,  1474,  1615,  1509,     0,  1502,  1520,  1537,  1602,
    1516,  1530,  1552,  1556,  1541,  1565,  1575,  1594,     0,  1588,
    1591,  1598,  1605,  1599,  1576,  1611,  1619,  1621,  1620,  1622,
    1625,  1623,  1624,  1627,  1626,  1628,  1631,  1629,  1618,  1630,
    1633,  1632,  1634,  1637,  1635,  1636,  1639,  1638,  1640,  1646,
    1641,  1642,  2121,  1645,  1649,  1647,  1648,  1726,  1650,  1651,
    1654,  1655,  1996,  1656,  1657,  1660,  1663,  1664,  1675,  1665,
    1666,  1682,  1667,  1668,  1728,  1671,  1672,  1678,  1679,  1689,
    1685,  1686,  1694,  1687,  1688,  1732,  1690,  1691,  1695,  1703,
    1696,  1697,  1700,  1705,  1704,  1706,  1715,  1707,  1708,  1734,
    1711,  1712,  1718,  1719,  1722,  1723,  1724,  1773,  1725,  1727,
    1775,  1729,  1730,  1781,  1731,  1733,  1784,  1735,  1736,  1738,
    1737,  1740,  1739,  1744,  2110,  1741,  1742,  1785,  1743,  1745,
    1746,  1747,  1749,  1748,  1750,  1751,  1752,     0,  1753,  1754,
    1756,  1755,  1758,  1757,  1762,  2120,  1759,  1760,  1788,  1761,
    1763,  1764,  1765,  1767,  1766,  1768,  1769,  1770,  1774,  1776,
    1997,  1783,  2134,  1779,  1780,  1793,  1782,  1786,  1787,  1791,
    1794,  1792,  1797,  1803,  1798,  1804,  1807,  1810,  1813,     0,
    1814,  1817,  1815,  1816,  1854,  1818,  1819,  1822,  1823,  1999,
    1824,  1825,  1828,  1831,  1832,  1855,  1833,  1834,  1860,  1837,
    1842,  1875,  1847,  1848,  1882,  1849,  1850,  1885,  1853,  1858,
    1859,  1863,  1865,  1864,  1866,  1887,  1867,  1868,  1886,  1871,
    1872,  1878,  1879,  1888,  1891,  1894,  1892,  1893,  1895,  1898,
    1896,  1897,  1899,  1904,  1900,     0,  1905,  1903,  1909,  1906,
    1910,  1929,  1915,  1916,  1919,  1922,  1925,     0,  1926,  1934,
    1927,  1928,  1966,  1930,  1931,  1935,  1943,  1936,  1937,  1940,
    1945,  1944,  1946,  1967,  1949,  1954,  1972,  1959,  1960,  1987,
    1961,  1962,  1994,  1965,  1970,  1971,  1975,  1977,  1976,  1978,
    2040,  1979,  1980,  2059,  1983,  1984,  1990,  1991,  1998,  2000,
    2042,  2037,  2038,  2046,  2039,  2041,  2048,  2043,  2044,     0,
    2045,  2047,  2051,  2266,  2054,  2055,  2057,  2056,  2058,  2060,
    2061,  2062,  2063,  2066,  2067,  2068,  2074,  2069,  2070,  2455,
    2144,  2071,  2075,  2076,  2077,  2087,  2082,     0,  2090,  2091,
    2095,  2092,  2096,  2097,  2098,  2101,  2102,  2103,     0,  2104,
    2135,     0,  2146,  2145,     0,     0,     0,  2158,  2163,  2147,
    2160,  2174,  2170,  2189,  2148,  2154,  2191,  2159,  2161,  2178,
    2162,  2206,  2198,  2171,  2190,  2210,  2199,  2212,  2215,  2207,
    2225,  2247,  2211,  2213,  2214,  2252,  2226,  2246,  2248,  2260,
    2249,  2265,  2262,  2253,  2267,  2268,  2261,  2269,  2272,  2270,
    2271,  2275,  2276,  2282,  2279,  2287,  2284,  2285,  2283,  2286,
    2288,  2289,  2290,  2291,  2293,  2292,  2294,  2295,  2296,  2297,
    2299,  2298,  2300,  2301,  2302,  2303,  2305,  2304,  2306,  2307,
    2308,  2309,  2311,  2310,  2312,  2313,  2314,  2315,  2317,  2316,
    2318,  2319,  2320,  2321,  2323,  2322,  2324,  2325,  2326,  2327,
    2329,  2328,  2330,  2331,  2332,  2333,  2335,  2334,  2336,  2337,
    2338,  2339,  2341,  2340,  2342,  2343,  2344,  2345,  2347,  2346,
    2348,  2349,  2350,  2351,  2353,  2352,  2354,  2355,  2356,  2357,
    2359,  2358,  2360,  2361,  2362,  2363,  2365,  2364,  2366,  2367,
    2368,  2369,  2371,  2370,  2372,  2373,  2374,  2375,  2377,  2376,
    2378,  2379,  2380,  2381,  2383,  2382,  2384,  2385,  2386,  2387,
    2389,  2388,  2390,  2391,  2392,  2393,  2395,  2394,  2396,  2397,
    2398,  2399,  2401,  2400,  2402,  2403,     0,  2404,  2405,  2407,
    2406,  2408,  2409,  2410,  2411,  2413,  2412,  2414,  2415,  2416,
    2417,  2419,  2418,  2420,  2421,  2422,  2423,  2425,  2424,  2426,
    2427,  2428,  2429,  2431,  2430,  2432,  2433,  2434,  2435,  2437,
    2436,  2438,  2439,     0,     0,     0,     0,  2449,  2451,  2446,
    2441,  2447,  2442,  2443,  2444,  2445,  2448,  2450,     0,  2452,
    2453,  2458,  2456,  2457,  2459,  2460,  2461,  2462,  2464,  2463,
    2465,  2467,  2466,  2469,  2468,  2477,  2478,     0,  2488,  2487,
    2489,     0,     0,     0,  2501,     0,  2503,     0,     0,     0,
    2490,  2491,  2497,  2512,  2502,  2623,  2504,  2505,  2511,  2513,
    2514,  2515,  2520,  2518,  2519,  2521,  2522,  2523,  2527,  2528,
    2529,  2532,  2530,  2531,  2539,  2540,  2547,  2551,  2548,  2553,
    2552,  2554,  2555,  2559,  2560,  2561,  2562,  2563,  2566,  2567,
    2568,  2571,  2586,  2591,     0,  2569,  2570,  2572,  2573,  2574,
    2585,  2587,  2599,  2588,  2612,  2617,  2619,     0,  2592,  2600,
    2606,  2609,  2610,  2611,  2613,  2614,  2622,  2618,  2624,  2625,
    2627,  2620,  2621,  2626,  2628,  2638,  2629,     0,  2630,  2631,
    2632,  2637,  2639,  2633,  2648,     0,     0,  2640,  2641,  2647,
    2656,     0,  2649,     0,  2650,  2651,  2654,  2655,  2657,  2667,
    2658,  2659,  2662,  2663,  2664,  2665,  2666,  2668,  2674,  2669,
    2670,  2675,  2676,  2677,  2678,  2681,  2682,  2683,  2684,  2685,
    2686,  2690,  2687,  2688,  2689,  2691,  2692,  2693,  2694,  2710,
       0,  2715,  2695,  2696,  2717,  2697,  2698,  2704,  2707,  2708,
    2709,  2711,  2726,     0,  2712,     0,  2716,  2718,     0,  2719,
    2722,  2723,  2724,  2725,  2727,  2728,  2730,  2729,  2731,  2732,
    2733,  2736,  2737,  2738,  2739,  2743,  2740,  2741,  2742,  2744,
    2745,  2746,  2747,  2748,  2760,  2749,  2750,  2751,  2752,  2753,
    2756,  2757,  2758,  2759,  2761,  2762,     0,  2763,     0,  2764,
    2765,  2766,  2767,  2768,  2769,  2770,  2771
};

static const yytype_int8 yycheck[] =
{
       3,     3,     8,     6,     7,     7,     9,     9,     4,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,     3,     4,     6,     6,     3,     4,
       3,     3,     4,     5,     7,     7,     8,     9,    10,     3,
       3,    21,    21,     3,     4,     5,    21,    19,     3,     4,
       5,     6,    15,    17,     9,    10,     3,     4,     5,    19,
       6,     8,     9,    10,    19,     5,     6,     3,     4,     5,
       0,    17,    19,     9,    10,     3,     4,     5,    10,     7,
       8,    21,     6,    19,     5,     6,     3,     4,     5,     7,
       8,    19,     9,    10,     3,     4,     5,    21,     7,     8,
      21,    19,    19,     3,     4,     5,     6,     6,     5,     5,
      19,     3,     4,     5,     6,     3,     4,     5,    17,    19,
       8,     3,     4,     5,    21,    21,     8,    19,     3,     4,
       5,    19,     3,     4,     5,     4,     5,    19,     3,     4,
       5,     3,     4,     5,    19,     3,     4,     5,    19,     3,
       4,     5,     3,     4,    19,     6,     7,    19,     3,     4,
       5,    19,     3,     4,     5,    19,     3,     4,     5,     3,
       4,     5,     3,     8,    19,     3,     4,     5,    19,     6,
       3,    10,    19,     6,     6,    19,    17,     9,    10,     6,
      17,    19,     9,    10,    17,     6,     6,    19,     9,    10,
       6,     6,    19,     9,    10,     6,     6,     6,    19,    19,
       6,     6,     6,    19,    19,     6,     6,     6,    19,    19,
      19,     6,     6,    19,    19,    19,     6,     6,    19,    19,
      19,     6,     6,     3,    19,    19,     6,     7,     8,    19,
      19,     4,     5,    17,    19,     7,     8,     9,    10,     7,
       8,     9,    10,     7,     8,     9,    10,    19,     7,     8,
       3,    19,     7,     8,     7,    19,     7,     8,     9,    10,
      19,     7,     8,     3,    19,     7,     8,     7,    19,     7,
       8,     7,     8,    19,     7,     8,     3,    19,     7,     8,
       7,    19,     4,    19,     7,     8,    19,     7,     8,     4,
      19,     7,     8,     7,     8,     7,    19,     7,     8,    19,
       7,     8,    11,    19,     3,    19,     7,     8,     6,    19,
       8,     8,    19,     8,     9,    10,    15,     8,    19,     8,
       9,    10,    19,     8,    19,     8,     9,    10,    19,     8,
      19,     8,     9,    10,    19,     8,    19,     8,     8,     8,
      19,     8,    19,     8,     8,     8,    19,     8,    19,    19,
      19,     8,    19,     8,    19,    19,    19,     8,    19,     9,
      10,     4,    19,     3,    19,     9,    10,     7,    19,    19,
       9,    10,     9,    10,     4,    19,     9,    10,     9,    10,
      19,     3,    19,     9,    10,     7,    19,    10,    19,     9,
      10,     9,    10,    19,     9,    10,     9,    10,     4,    19,
       3,    19,     9,    10,    19,     8,    19,     9,    10,     9,
      10,     4,    19,     9,    10,     9,    10,    19,     3,    19,
       9,    10,     7,    19,     4,    19,     9,    10,     9,    10,
      19,     9,    10,     9,    10,     3,    19,     5,    19,     9,
      10,    19,     3,    19,     9,    10,     9,    10,     3,    19,
       3,     5,    13,     6,    19,     8,    19,     3,    13,     3,
       4,     7,     6,     7,     8,     3,     4,     3,     4,     7,
       8,     3,     8,     3,     3,     7,     8,     6,     8,     8,
       3,     4,     3,     3,     3,     8,     5,     8,     8,     3,
       4,     5,     6,     7,     3,     4,     5,     6,     7,     3,
       4,     5,     6,     7,     3,     4,     5,     6,     7,     3,
       4,     5,     6,     7,     3,     4,     5,     6,     7,     3,
       4,     5,     6,     7,     3,     4,     5,     6,     7,     3,
       4,     5,     6,     7,     3,     4,     4,     6,     7,     3,
       4,     4,     6,     7,     3,     4,     4,     6,     7,     3,
       4,     4,     6,     7,     3,     4,     4,     6,     7,     3,
       4,     4,     6,     7,     3,     4,     4,     6,     7,     3,
       4,     5,     3,     7,     3,     4,     7,     6,     7,     3,
       4,     5,     5,     7,     3,     4,     5,     5,     7,     3,
       4,     5,     5,     7,     3,     4,     5,     5,     7,     3,
       4,     5,     5,     7,     3,     4,     5,     5,     7,     3,
       4,     5,     4,     7,     3,     4,     5,     3,     7,     3,
       6,     7,     6,     7,     3,     5,     3,     6,     7,     6,
       7,     3,     5,     3,     6,     7,     6,     7,     3,     3,
       3,     6,     7,     6,     7,     3,     3,     3,     6,     7,
       6,     7,     3,     5,     3,     6,     7,     6,     7,     3,
      10,     3,     6,     7,     6,     7,     3,     3,     4,     6,
       7,     7,     3,     4,     3,     4,     7,     4,     7,     3,
       4,     3,     4,     7,     4,     7,     3,     4,     3,     4,
       7,     4,     7,     3,     4,     3,     4,     7,     3,     7,
       3,     3,     7,     3,     7,     7,     3,     7,     3,     3,
       7,     5,     7,     3,     4,     5,     6,     3,     4,     5,
       6,     3,     4,     5,     6,     3,     4,     5,     6,     4,
       5,     6,     7,     3,     4,     5,     6,     4,     5,     6,
       7,     3,     4,     5,     6,     4,     5,     6,     7,     3,
       4,     5,     6,     3,     4,     5,     6,     4,     5,     6,
       7,     3,     4,     5,     6,     3,     4,     5,     6,     4,
       5,     6,     7,     4,     5,     6,     7,     3,     4,     5,
       6,     3,     4,     5,     6,     4,     5,     6,     7,     4,
       5,     6,     7,     3,     4,     5,     6,     5,     6,     7,
       8,     3,     9,     5,     6,     3,     4,     4,     6,     3,
       4,     4,     6,     3,     4,    11,     6,     3,     4,     4,
       6,     3,     4,     4,     6,     6,     7,     4,     3,     6,
       7,     3,     4,     9,     6,     3,     4,     4,     6,     6,
       7,     4,     4,     6,     7,     3,     4,     3,     6,     3,
       4,     4,     6,     3,     4,     4,     6,     3,     4,     7,
       6,     3,     4,     6,     6,     4,     5,     5,     7,     4,
       5,     5,     7,     4,     5,     5,     7,     4,     5,     7,
       7,     4,     5,     7,     7,     4,     5,     7,     7,     4,
       5,     5,     7,     4,     5,     3,     7,     6,     6,     3,
       9,     3,     6,     3,     6,     3,     6,     3,     6,     3,
       6,     3,     6,     3,     6,     3,     6,     3,     6,     3,
       6,     3,     6,     3,     6,     4,     6,     4,     7,     4,
       7,     4,     7,     5,     7,     5,     8,     5,     8,     6,
       8,     3,     4,     5,     3,     4,     5,     3,     4,     5,
       3,     4,     5,     3,     4,     5,     5,     6,     7,     3,
       4,     5,     4,     5,     6,     3,     4,     5,     3,     4,
       5,     4,     5,     6,     3,     4,     5,     5,     6,     7,
       5,     6,     7,     5,     6,     7,     5,     6,     7,     5,
       6,     7,     5,     6,     7,     5,     6,     7,     3,     4,
       5,     4,     5,     6,     3,     4,     5,     4,     6,     7,
       8,     5,     6,     7,     4,     5,     6,     3,     4,     5,
       3,     4,     5,     5,     6,     7,     3,     4,     5,     4,
       5,     6,     3,     4,     5,     3,     4,     5,     3,     4,
       5,     5,     6,     7,     3,     4,     5,     4,     5,     6,
       3,     4,     5,     5,     6,     7,     3,     4,     5,     3,
       4,     5,     5,     6,     7,     4,     5,     6,     5,     6,
       7,     5,     6,     7,     3,     4,     5,     4,     5,     6,
       3,     4,     5,     5,     6,     7,     3,     4,     5,     3,
       4,     5,     5,     6,     7,     4,     5,     6,     5,     6,
       7,     5,     6,     7,     3,     4,     5,     4,     5,     6,
       3,     4,     5,     4,     6,     7,     8,     6,     7,     8,
       6,     7,     8,     6,     7,     8,     6,     7,     8,     6,
       7,     8,     6,     7,     8,     6,     7,     8,     5,     6,
       7,     4,     5,     6,     3,     5,     5,     7,     6,     4,
       8,     6,     4,     6,     6,     5,     5,     7,     7,     4,
       4,     6,     6,     4,     4,     6,     6,     5,     5,     7,
       7,     5,     5,     7,     7,     5,     5,     7,     6,     6,
       8,     8,     6,     5,     8,     7,     5,     5,     7,     7,
       5,     5,     7,     7,     5,     5,     7,     7,     5,     5,
       7,     7,     5,     5,     7,     7,     6,     6,     8,     8,
       6,     6,     8,     8,     6,     6,     8,     8,     6,     6,
       8,     3,     4,     3,     4,     6,     7,     4,     5,     4,
       5,     4,     5,     4,     5,     3,     4,     4,     5,     3,
       4,     7,     5,     6,     5,     6,     5,     6,     5,     6,
       4,     5,     4,     6,     7,     6,     7,     4,     5,     4,
       6,     7,     6,     7,     6,     7,     6,     7,     6,     7,
       6,     7,     4,     5,     4,     5,     4,     6,     7,     6,
       7,     4,     5,     4,     5,     4,     6,     7,     6,     7,
       6,     7,     6,     7,     6,     7,     5,     6,     3,     4,
       3,     4,     3,     4,     4,     5,     4,     5,     4,     5,
       3,     6,     7,     5,     6,     3,     4,     3,     4,     3,
       5,     6,     3,     4,     4,     5,     3,     4,     3,     5,
       6,     3,     4,     3,     4,     3,     5,     6,     3,     4,
       4,     5,     3,     4,     6,     7,     6,     7,     4,     5,
       4,     5,     4,     6,     7,     6,     7,     5,     6,     6,
       7,     6,     7,     4,     5,     4,     5,     4,     6,     7,
       6,     7,     5,     6,     6,     7,     6,     7,     3,     4,
       3,     4,     6,     7,     6,     7,     3,     4,     3,     4,
       6,     7,     6,     7,     3,     4,     3,     4,     6,     7,
       6,     7,     3,     4,     3,     4,     6,     7,     3,     4,
       3,     4,     6,     7,     4,     5,     4,     5,    10,     6,
       7,     6,     7,     4,     5,     4,     5,    10,     6,     7,
       6,     7,     3,     4,     7,     5,     6,     3,     4,     6,
       7,     6,     7,     5,     6,     6,     7,     3,     4,     3,
       4,     6,     7,     4,     5,     4,     5,    21,     6,     7,
       6,     7,     4,     5,     4,     5,     4,     6,     7,     6,
       7,     3,     4,     3,     5,     6,     3,     4,     6,     7,
       6,     7,     5,     6,     6,     7,     4,     5,     5,     6,
       4,     5,     3,     6,     7,     7,     8,     6,     7,     3,
       4,     6,     7,     3,     4,     4,     5,     4,     5,     7,
       8,     6,     7,     4,     5,     4,     5,     4,     5,     4,
       5,     4,     6,     7,     4,     5,     5,     6,     4,     5,
       4,     6,     7,     4,     5,     4,     5,     4,     6,     7,
       4,     5,     5,     6,     4,     5,     3,     6,     7,     4,
       5,     4,     5,     4,     6,     7,     4,     5,     5,     6,
       4,     5,     4,     6,     7,     6,     7,     6,     7,     4,
       5,     4,     5,     3,     6,     7,     5,     6,     6,     7,
       4,     5,     4,     5,     4,     6,     7,     4,     5,     5,
       6,     4,     5,     4,     6,     7,     5,     6,     6,     7,
       4,     5,     5,     6,     4,     5,     4,     6,     7,     6,
       7,     6,     7,     4,     5,     4,     5,     7,     6,     7,
       5,     6,     6,     7,     4,     5,     4,     5,     7,     6,
       7,     4,     5,     5,     6,     4,     5,     7,     6,     7,
       5,     6,     6,     7,     4,     5,     5,     6,     4,     5,
       7,     8,     6,     7,     7,     8,     6,     7,     7,     8,
       6,     7,     7,     8,     6,     7,     7,     8,     6,     7,
       7,     8,     6,     7,     7,     8,     6,     7,     6,     7,
       4,     5,     4,     5,     7,     8,     6,     7,     6,     7,
       4,     5,     4,     5,     4,     5,     4,     5,     4,     5,
       4,     5,     4,     5,     4,     5,     5,     6,     4,     5,
       4,     5,     4,     5,     4,     5,     4,     5,     4,     5,
       4,     5,     4,     5,     4,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     5,    19,     6,
       5,     7,     6,     5,     7,     6,     5,     7,     6,     5,
       7,     6,     5,     7,     6,     5,     7,     6,     5,     7,
       6,     5,     7,     6,     5,     7,     6,     5,     5,     4,
       6,     5,     5,    -1,     6,     6,     6,     6,     6,     5,
       4,     6,     5,     5,    11,     6,     6,     6,     6,     6,
       3,     3,     7,     7,     4,     6,     4,     6,     4,     3,
       7,     6,     3,    19,     7,     7,     6,     6,     3,     7,
       6,     4,     3,     7,     6,     4,     4,     7,     3,     6,
       3,     7,     6,    -1,     5,     7,     6,     5,     7,     6,
       3,     7,     6,     4,     4,     3,     5,     4,     4,    11,
       5,     5,     3,     3,     7,     4,     3,     5,     4,     3,
      -1,     6,     5,    15,     5,     7,     6,     3,     7,     6,
       3,     5,     7,     4,     6,     4,    -1,     7,     6,     5,
       7,     6,     5,     7,     6,     3,     7,     6,     4,     4,
       3,     5,     4,     4,     3,     5,     3,     5,     4,     3,
       5,     4,     3,    -1,    21,     7,     6,     5,     7,     6,
       3,     7,     6,     3,    -1,     7,     4,     6,     4,    10,
       7,     6,    17,     7,     6,     8,     7,     6,     5,     7,
       6,     6,     4,     4,     7,    -1,    10,     7,    -1,    19,
      -1,    -1,     4,     6,    13,    13,    13,    13,    13,    13,
       7,     7,     6,     5,     7,     6,     4,     7,     7,     6,
       6,     5,     5,     8,     5,     4,     8,     5,     4,    -1,
       5,     5,     4,    10,     5,     8,     5,     4,     8,     5,
       4,     6,     5,     3,     5,     7,     4,     4,     4,     4,
       3,    10,     4,    21,     5,    -1,    10,     5,     5,     3,
      10,    10,     5,     5,    10,     5,     5,     8,    -1,     7,
       7,     7,     6,     8,    19,     3,     6,     6,     5,     4,
       6,     5,     4,     6,     5,     4,     6,     5,    21,     4,
       6,     5,     4,     6,     5,     4,     6,     5,     4,     6,
       5,     4,    19,     7,     5,     7,     6,     4,     7,     7,
       5,     5,     8,     6,     6,     5,     7,     6,     5,     7,
       6,     5,     7,     6,     4,     7,     7,     6,     6,     5,
       7,     6,     5,     7,     6,     4,     7,     7,     5,     7,
       6,     6,     5,     7,     6,     6,     5,     7,     6,     4,
       7,     7,     6,     6,     5,     7,     6,     5,     7,     6,
       5,     7,     6,     5,     7,     6,     5,     7,     6,     4,
       7,     4,     6,     4,    10,     7,     6,     5,     7,     6,
       4,     7,     7,     6,     4,     6,     4,    -1,     7,     6,
       4,     7,     4,     6,     4,    10,     7,     6,     5,     7,
       6,     4,     7,     7,     6,     4,     6,     4,     4,     4,
      11,     4,    10,     7,     6,     5,     7,     6,     4,     7,
       7,     6,     5,     7,     6,     6,     4,     4,     7,    -1,
       6,     5,     7,     6,     4,     7,     7,     5,     5,     8,
       6,     6,     5,     7,     6,     5,     7,     6,     5,     7,
       6,     5,     7,     6,     5,     7,     6,     5,     7,     6,
       4,     7,     7,     6,     6,     5,     7,     6,     4,     7,
       7,     6,     6,     4,     7,     7,     6,     5,     4,     6,
       5,     5,     4,     6,     5,    -1,     5,     7,     5,     7,
       6,     5,     7,     6,     4,     4,     7,    -1,     6,     5,
       7,     6,     4,     7,     7,     5,     7,     6,     6,     5,
       7,     6,     6,     5,     7,     6,     5,     7,     6,     5,
       7,     6,     5,     7,     6,     4,     7,     7,     6,     6,
       5,     7,     6,     4,     7,     7,     6,     6,     6,     6,
       5,     7,     6,     5,     7,     6,     5,     7,     6,    -1,
       7,     6,     8,     6,     8,     7,     5,     8,     8,     5,
       5,     8,     5,     7,     5,     4,     8,     5,     5,    17,
      10,     7,     7,     5,     8,     8,     7,    -1,     8,     7,
       4,     8,     5,     8,     5,     7,     5,     4,    -1,     5,
      19,    -1,    10,    19,    -1,    -1,    -1,    10,     5,    19,
      10,     5,    10,     5,    19,    19,     5,    19,    19,    10,
      19,     5,    10,    19,    19,     5,    19,     5,     5,    19,
       5,     5,    19,    19,    19,     5,    19,    19,    19,     5,
      19,     8,     7,    19,     8,     6,    19,     7,     5,     8,
       8,     6,     5,    21,     6,     5,     7,     6,    21,     7,
       6,     5,     7,     6,     5,     7,     6,     5,     7,     6,
       5,     7,     6,     5,     7,     6,     5,     7,     6,     5,
       7,     6,     5,     7,     6,     5,     7,     6,     5,     7,
       6,     5,     7,     6,     5,     7,     6,     5,     7,     6,
       5,     7,     6,     5,     7,     6,     5,     7,     6,     5,
       7,     6,     5,     7,     6,     5,     7,     6,     5,     7,
       6,     5,     7,     6,     5,     7,     6,     5,     7,     6,
       5,     7,     6,     5,     7,     6,     5,     7,     6,     5,
       7,     6,     5,     7,     6,     5,     7,     6,     5,     7,
       6,     5,     7,     6,     5,     7,     6,     5,     7,     6,
       5,     7,     6,     5,     7,     6,     5,     7,     6,     5,
       7,     6,     5,     7,     6,     5,    -1,     8,     7,     6,
       8,     7,     6,     8,     7,     6,     8,     7,     6,     8,
       7,     6,     8,     7,     6,     8,     7,     6,     8,     7,
       6,     8,     7,     6,     8,     7,     6,     8,     7,     6,
       8,     7,     6,    -1,    -1,    -1,    -1,     5,     5,     8,
      15,     7,    15,    15,    15,    15,     8,     7,    -1,     8,
       7,     5,     8,    17,    17,     7,    17,     5,     8,    17,
       7,     5,     8,     5,     7,    10,    19,    -1,    19,    10,
      10,    -1,    -1,    -1,    10,    -1,    10,    -1,    -1,    -1,
      19,    19,    19,    10,    19,     6,    19,    19,    19,    19,
      19,    19,    10,    19,    19,    19,    19,    19,    10,    19,
      10,     5,    19,    19,    10,    19,     5,     5,    19,     5,
      19,    19,    19,    10,    19,    10,    19,    19,     5,    19,
       5,     5,     5,     5,    -1,    19,    19,    19,    19,    19,
      19,    19,     5,    19,     5,     5,     5,    -1,    19,    19,
      19,    19,    19,    19,    19,    19,     8,    19,     8,     5,
       5,    19,    19,     6,    17,    19,    17,    -1,    17,    17,
      17,    10,    10,    17,    10,    -1,    -1,    19,    19,    19,
      10,    -1,    19,    -1,    19,    19,    19,    19,    19,    10,
      19,    19,    19,    19,    19,    19,    19,    19,    10,    19,
      19,    19,    10,    19,    19,     5,    19,     5,    19,    19,
       5,    10,    19,    19,    19,    19,    19,    19,     5,     5,
      -1,     5,    19,    19,     5,    19,    19,    19,    19,    19,
      19,    19,     5,    -1,    19,    -1,    19,    19,    -1,    19,
      19,    19,    19,    19,    19,    19,    10,    19,    19,    19,
      19,    19,    19,    19,    19,    10,    19,    19,    19,    19,
      19,    19,     5,    19,     5,    19,    19,    19,    19,    19,
      19,    19,    19,    19,    19,    19,    -1,    19,    -1,    19,
      19,    19,    19,    19,    19,    19,    19
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     6,     7,     9,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      58,    59,    60,    61,    62,     4,     3,     7,     9,     8,
      10,     3,     4,     5,     3,     4,     5,     3,     4,     5,
       6,     7,     3,     6,     7,     3,     4,     6,     7,     8,
       3,     6,     8,     3,     6,     7,     8,     3,     4,     5,
       6,     9,    10,    19,     3,     6,     7,     3,     4,     6,
      21,     3,     4,     5,     3,     4,     5,     3,     4,     5,
       3,     4,     5,     6,     3,     4,     5,     6,     3,     4,
       5,     6,     3,     4,     5,     6,     3,     4,     5,     6,
       7,     3,     4,     5,     6,     7,     3,     4,     5,     6,
       7,     3,     4,     5,     6,     7,     3,     6,     7,     3,
       4,     6,     7,     3,     6,     7,     3,     4,     6,     7,
       3,     6,     7,     3,     4,     6,     7,     3,     6,     7,
       3,     4,     6,     7,     3,     6,     7,     3,     4,     6,
       7,     3,     6,     7,     3,     6,     7,     3,     4,     5,
       6,     7,     3,     6,     7,     3,     4,     6,     7,     3,
       4,     5,     6,     7,     3,     6,     7,     3,     4,     6,
       7,     3,     6,     7,     3,     6,     7,     3,     4,     5,
       6,     7,     3,     6,     7,     3,     4,     6,     7,     3,
       4,     5,     6,     7,     0,     3,     5,     6,     4,     8,
      10,     6,     9,    11,     4,     5,     3,     5,     3,     4,
       4,     5,     3,     5,     3,     4,     4,     5,     6,     7,
       5,     6,     7,     6,     7,     3,     4,     5,     7,     3,
       4,     5,     6,     4,     3,     7,     3,     6,     4,     5,
       3,     4,     7,     8,     3,     4,     8,     3,     4,     6,
       7,     4,     5,     7,     3,     6,    17,     4,     3,     7,
       8,     3,     8,     3,     6,     7,     4,     5,     5,     6,
       9,    10,    19,     3,     4,     5,     7,     8,     9,    10,
      19,    10,     3,     4,     5,     6,    19,     4,     5,     6,
       7,     3,     7,     3,     6,     8,     4,     5,     6,    21,
       3,     4,    21,     4,     5,     5,     4,     5,     3,     5,
       3,     4,     4,     5,     3,     5,     3,     4,     4,     5,
       6,     3,     4,     6,     3,     4,     5,     4,     5,     6,
       5,     6,     3,     4,     6,     3,     4,     5,     4,     5,
       6,     3,     4,     6,     3,     4,     5,     4,     5,     6,
       5,     6,     3,     4,     6,     3,     4,     5,     4,     5,
       5,     6,     7,     3,     4,     5,     7,     3,     4,     5,
       6,     4,     5,     6,     7,     5,     6,     7,     6,     7,
       3,     4,     5,     7,     3,     4,     5,     6,     4,     5,
       5,     6,     7,     3,     4,     5,     7,     3,     4,     5,
       6,     4,     5,     6,     7,     5,     6,     7,     6,     7,
       3,     4,     5,     7,     3,     4,     5,     6,     4,     3,
       7,     3,     6,     4,     6,     7,     3,     4,     7,     3,
       4,     6,     4,     6,     7,     3,     7,     3,     6,     4,
       6,     7,     6,     7,     3,     4,     7,     3,     4,     6,
       4,     3,     7,     3,     6,     4,     6,     7,     3,     4,
       7,     3,     4,     6,     4,     6,     7,     3,     7,     3,
       6,     4,     6,     7,     6,     7,     3,     4,     7,     3,
       4,     6,     4,     3,     7,     3,     6,     4,     5,     3,
       4,     7,     3,     4,     6,     4,     5,     3,     7,     3,
       6,     4,     3,     7,     3,     6,     4,     5,     5,     6,
       7,     3,     4,     5,     7,     3,     4,     5,     6,     4,
       5,     6,     7,     3,     7,     3,     6,     4,     5,     6,
       7,     3,     4,     7,     3,     4,     6,     4,     5,     6,
       7,     5,     6,     7,     6,     7,     3,     4,     5,     7,
       3,     4,     5,     6,     4,     3,     7,     3,     6,     4,
       5,     3,     4,     7,     3,     4,     6,     4,     5,     3,
       7,     3,     6,     4,     3,     7,     3,     6,     4,     5,
       5,     6,     7,     3,     4,     5,     7,     3,     4,     5,
       6,     4,     5,     6,     7,     3,     7,     3,     6,     4,
       5,     6,     7,     3,     4,     7,     3,     4,     6,     4,
       5,     6,     7,     5,     6,     7,     6,     7,     3,     4,
       5,     7,     3,     4,     5,     6,     4,     3,     3,     9,
      11,     9,    10,     6,     7,     5,     4,     5,     3,     4,
       3,     5,     4,     5,     3,    13,     4,     3,    13,     5,
       6,     7,     6,     7,     7,     6,     6,     7,     7,     6,
       7,     6,     4,     5,     7,     5,     7,     7,     3,     4,
       5,     4,     5,     6,     5,     6,     6,     3,     4,     5,
       5,     4,     3,    15,     4,     3,    15,     5,     6,     7,
       8,     4,     5,     3,     4,     8,     3,     4,     4,     5,
       3,     4,     4,     5,     3,     4,     7,     3,     4,     5,
       6,     8,     3,     8,     4,     5,     7,     5,     6,     7,
       8,     4,     3,     8,     3,     4,     3,     4,     3,     7,
       3,     5,     6,     9,    10,    19,     6,     9,    10,    19,
       7,     8,     9,    10,    19,    10,     6,    19,     4,     5,
       5,     9,    10,    19,     3,     4,     5,     8,     9,    10,
      19,     3,     4,     5,     9,    10,    19,    10,     3,     4,
       5,    19,     3,     4,     5,     6,    19,     4,     5,     5,
       6,    19,     3,     4,     5,     7,     8,    19,     5,     6,
       7,     6,     7,     7,     6,     8,     4,     5,     7,     3,
       8,     4,     5,     6,     3,     3,     6,     5,     6,    21,
       6,    21,    21,     4,     5,    21,     5,     5,     4,     5,
       3,     4,     3,     5,     4,     5,     3,     4,     3,     5,
       6,     6,     5,     4,     6,     3,     4,     4,     5,     3,
       4,     5,     6,     6,     5,     6,     5,     4,     6,     6,
       3,     4,     4,     5,     5,     3,     4,     5,     6,     6,
       5,     4,     6,     3,     4,     4,     5,     3,     4,     5,
       6,     6,     5,     6,     5,     4,     6,     6,     3,     4,
       4,     5,     5,     3,     4,     5,     6,     7,     6,     7,
       7,     6,     4,     5,     5,     7,     3,     4,     5,     4,
       5,     5,     6,     3,     4,     5,     5,     6,     7,     6,
       7,     7,     6,     6,     7,     7,     6,     7,     6,     4,
       5,     7,     5,     7,     7,     3,     4,     5,     4,     5,
       6,     5,     6,     6,     3,     4,     5,     5,     6,     7,
       6,     7,     7,     6,     4,     5,     5,     7,     3,     4,
       5,     4,     5,     5,     6,     3,     4,     5,     5,     6,
       7,     6,     7,     7,     6,     6,     7,     7,     6,     7,
       6,     4,     5,     7,     5,     7,     7,     3,     4,     5,
       4,     5,     6,     5,     6,     6,     3,     4,     5,     6,
       7,     4,     3,     4,     3,     6,     7,     7,     6,     4,
       7,     3,     4,     4,     6,     3,     4,     6,     7,     7,
       6,     4,     7,     3,     4,     6,     3,     6,     7,     7,
       6,     7,     6,     4,     7,     7,     3,     4,     4,     6,
       6,     3,     4,     6,     7,     4,     3,     4,     3,     6,
       7,     7,     6,     4,     7,     3,     4,     4,     6,     3,
       4,     6,     7,     7,     6,     4,     7,     3,     4,     6,
       3,     6,     7,     7,     6,     7,     6,     4,     7,     7,
       3,     4,     4,     6,     6,     3,     4,     5,     4,     3,
       4,     3,     5,     6,     7,     4,     5,     3,     4,     4,
       5,     3,     4,     5,     6,     7,     4,     5,     3,     4,
       5,     3,     5,     6,     7,     4,     3,     4,     3,     5,
       6,     7,     6,     7,     7,     6,     4,     5,     5,     7,
       3,     4,     5,     4,     5,     5,     6,     3,     4,     5,
       5,     6,     7,     6,     7,     7,     6,     4,     5,     7,
       3,     4,     5,     6,     3,     5,     6,     7,     6,     7,
       7,     6,     4,     5,     7,     3,     4,     4,     5,     6,
       3,     4,     5,     6,     7,     6,     7,     7,     6,     6,
       7,     7,     6,     7,     6,     4,     5,     7,     5,     7,
       7,     3,     4,     5,     4,     5,     6,     5,     6,     6,
       3,     4,     5,     5,     4,     3,     4,     3,     5,     6,
       7,     4,     5,     3,     4,     4,     5,     3,     4,     5,
       6,     7,     4,     5,     3,     4,     5,     3,     5,     6,
       7,     4,     3,     4,     3,     5,     6,     7,     6,     7,
       7,     6,     4,     5,     5,     7,     3,     4,     5,     4,
       5,     5,     6,     3,     4,     5,     5,     6,     7,     6,
       7,     7,     6,     4,     5,     7,     3,     4,     5,     6,
       3,     5,     6,     7,     6,     7,     7,     6,     4,     5,
       7,     3,     4,     4,     5,     6,     3,     4,     5,     6,
       7,     6,     7,     7,     6,     6,     7,     7,     6,     7,
       6,     4,     5,     7,     5,     7,     7,     3,     4,     5,
       4,     5,     6,     5,     6,     6,     3,     4,     5,     6,
       4,     4,    10,     7,    10,    11,     7,     8,     6,     7,
       8,     6,     7,     8,     6,     7,     8,     6,     7,     8,
       6,     7,     8,     6,     7,     8,    13,    13,    13,    13,
      13,    13,     6,     7,     7,     6,     7,     6,     7,     6,
       5,     7,     7,     7,     4,     5,     5,     5,     6,     6,
       6,     4,     5,     5,     6,     7,     5,     4,     5,     4,
       6,     7,     8,     7,     8,     8,     6,     7,     5,     8,
       4,     5,     3,     4,     4,     5,     5,     8,     4,     5,
       5,     6,     7,     4,     5,     3,     4,     4,     5,     6,
       8,     7,     6,    17,     4,     5,     3,    17,     5,     6,
      17,     3,    17,     6,     7,     8,     7,     8,     8,     6,
       7,     5,     8,     4,     3,     4,     5,     8,     4,     5,
       6,     7,     4,     3,     4,     6,     9,    10,    19,     7,
       8,     9,    10,    19,    10,     6,    19,     7,     8,     9,
      10,    19,    10,     6,    19,     8,     9,    10,    19,     9,
      10,    19,    10,    19,     6,    19,     7,     8,    19,     5,
       9,    10,    19,     9,    10,    19,    10,    19,     4,     5,
       5,     9,    10,    19,     3,     4,     5,     9,    10,    19,
      10,     3,     4,     5,    19,     4,     5,     5,     9,    10,
      19,    10,     3,     4,     5,    19,     3,     4,     5,    19,
       4,     5,     5,    19,     4,     5,     5,     6,    19,     3,
       4,     5,     7,     8,    19,     5,     6,    19,     6,    19,
       7,     8,    19,     4,     5,     5,    19,     3,     4,     5,
       8,    19,     3,     4,     5,    19,     6,     7,     7,     6,
       8,     7,     6,     8,     8,     6,     5,     7,     7,     8,
       4,     5,     3,     5,     6,     6,     4,     5,     4,     5,
       6,     3,     6,    21,    21,    21,     5,    21,    21,     6,
       5,     6,     4,     5,     4,     6,     5,     6,     4,     5,
       4,     6,     5,     6,     4,     5,     4,     6,     5,     6,
       4,     5,     4,     6,     7,     7,     6,     7,     6,     5,
       7,     7,     4,     5,     5,     5,     6,     6,     4,     5,
       5,     6,     7,     7,     6,     7,     6,     7,     6,     5,
       7,     7,     7,     4,     5,     5,     5,     6,     6,     6,
       4,     5,     5,     6,     7,     7,     6,     7,     6,     5,
       7,     7,     4,     5,     5,     5,     6,     6,     4,     5,
       5,     6,     7,     7,     6,     7,     6,     7,     6,     5,
       7,     7,     7,     4,     5,     5,     5,     6,     6,     6,
       4,     5,     5,     7,     6,     7,     4,     6,     4,     7,
       6,     7,     4,     6,     4,     7,     6,     7,     4,     6,
       4,     7,     6,     7,     4,     6,     4,     7,     6,     7,
       4,     6,     4,     7,     6,     7,     4,     6,     4,     7,
       6,     7,     4,     6,     4,     7,     6,     7,     4,     6,
       4,     6,     7,     5,     4,     5,     4,     6,     7,     7,
       6,     5,     7,     4,     5,     5,     6,     4,     5,     6,
       7,     7,     6,     5,     7,     4,     5,     5,     6,     4,
       5,     6,     7,     7,     6,     5,     7,     4,     5,     6,
       4,     6,     7,     7,     6,     7,     6,     5,     7,     7,
       4,     5,     5,     5,     6,     6,     4,     5,     5,     6,
       7,     7,     6,     7,     6,     5,     7,     7,     4,     5,
       5,     6,     6,     4,     5,     6,     7,     7,     6,     7,
       6,     5,     7,     7,     4,     5,     5,     6,     6,     4,
       5,     6,     7,     7,     6,     7,     6,     7,     6,     5,
       7,     7,     7,     4,     5,     5,     5,     6,     6,     6,
       4,     5,     5,     6,     7,     5,     4,     5,     4,     6,
       7,     7,     6,     5,     7,     4,     5,     5,     6,     4,
       5,     6,     7,     7,     6,     5,     7,     4,     5,     5,
       6,     4,     5,     6,     7,     7,     6,     5,     7,     4,
       5,     6,     4,     6,     7,     7,     6,     7,     6,     5,
       7,     7,     4,     5,     5,     5,     6,     6,     4,     5,
       5,     6,     7,     7,     6,     7,     6,     5,     7,     7,
       4,     5,     5,     6,     6,     4,     5,     6,     7,     7,
       6,     7,     6,     5,     7,     7,     4,     5,     5,     6,
       6,     4,     5,     6,     7,     7,     6,     7,     6,     7,
       6,     5,     7,     7,     7,     4,     5,     5,     5,     6,
       6,     6,     4,     5,     5,    11,     8,    11,     6,     8,
       6,     7,     8,     6,     8,     6,     7,     7,     8,     6,
       8,     6,     7,     7,     8,     6,     8,     6,     7,     7,
       8,     6,     8,     6,     7,     7,     8,     6,     8,     6,
       7,     7,     8,     6,     8,     6,     7,     7,     6,     7,
       5,     6,     5,     7,     6,     7,     5,     6,     5,     7,
       8,     8,     6,     7,     8,     7,     8,     5,     8,     4,
       5,     5,     8,     5,     6,     7,     7,     5,     4,     5,
       5,     7,     6,    17,     8,     7,     5,     8,     4,     5,
       6,    17,     7,     4,     5,     7,     8,     8,     6,     7,
       8,     7,     8,     5,     8,     4,     5,     8,     5,     6,
       7,     7,     5,     4,     5,     7,     8,     9,    10,    19,
      10,     6,    19,     8,     9,    10,    19,     9,    10,    19,
      10,    19,     6,    19,     7,     8,    19,     8,     9,    10,
      19,     9,    10,    19,    10,    19,     6,    19,     7,     8,
      19,     9,    10,    19,    10,    19,    10,    19,    19,     7,
       8,    19,     8,    19,    19,     9,    10,    19,    10,    19,
      10,    19,    19,     5,     9,    10,    19,     9,    10,    19,
      10,    19,     4,     5,     5,     9,    10,    19,    10,     3,
       4,     5,    19,     3,     4,     5,    19,     4,     5,     5,
      19,     5,     9,    10,    19,     9,    10,    19,    10,    19,
       3,     4,     5,    19,     4,     5,     5,    19,     4,     5,
       5,    19,     5,    19,    19,     5,     6,    19,     6,    19,
       7,     8,    19,     4,     5,     5,    19,     3,     4,     5,
       8,    19,     3,     4,     5,    19,     6,    19,     7,     8,
      19,     7,     8,    19,     8,    19,    19,     5,    19,    19,
       4,     5,     5,    19,     3,     4,     5,    19,     4,     5,
       5,    19,     7,     6,     8,     8,     6,     8,     6,     7,
       8,     8,     5,     4,     5,     6,     5,     5,     6,     6,
       4,     5,    21,    21,     7,     6,     7,     5,     6,     5,
       7,     6,     7,     5,     6,     5,     7,     6,     7,     5,
       6,     5,     7,     6,     7,     5,     6,     5,     7,     6,
       7,     5,     6,     5,     7,     6,     7,     5,     6,     5,
       7,     6,     7,     5,     6,     5,     7,     6,     7,     5,
       6,     5,     7,     6,     7,     5,     6,     5,     7,     6,
       7,     5,     6,     5,     7,     6,     7,     5,     6,     5,
       7,     6,     7,     5,     6,     5,     7,     6,     7,     5,
       6,     5,     7,     6,     7,     5,     6,     5,     7,     6,
       7,     5,     6,     5,     7,     6,     7,     5,     6,     5,
       7,     6,     7,     5,     6,     5,     7,     6,     7,     5,
       6,     5,     7,     6,     7,     5,     6,     5,     7,     6,
       7,     5,     6,     5,     8,     7,     8,     6,     7,     6,
       8,     7,     8,     6,     7,     6,     8,     7,     8,     6,
       7,     6,     8,     7,     8,     6,     7,     6,     8,     7,
       8,     6,     7,     6,     8,     7,     8,     6,     7,     6,
      15,    15,    15,    15,    15,    15,     8,     7,     8,     5,
       7,     5,     8,     7,    17,    17,     8,    17,     5,    17,
       7,    17,     5,    17,     8,     7,     8,     5,     7,     5,
       8,     9,    10,    19,     9,    10,    19,    10,    19,     6,
      19,     7,     8,    19,     9,    10,    19,    10,    19,    10,
      19,    19,     7,     8,    19,     8,    19,    19,     9,    10,
      19,    10,    19,    10,    19,    19,     7,     8,    19,     8,
      19,    19,    10,    19,    19,    19,     8,    19,    19,    19,
      10,    19,    19,    19,     9,    10,    19,    10,    19,    10,
      19,    19,     5,     9,    10,    19,     9,    10,    19,    10,
      19,     3,     4,     5,    19,     4,     5,     5,    19,     4,
       5,     5,    19,     5,    19,    19,     9,    10,    19,    10,
      19,    10,    19,    19,     4,     5,     5,    19,     5,    19,
      19,     5,    19,    19,    19,     6,    19,     7,     8,    19,
       7,     8,    19,     8,    19,    19,     5,    19,    19,     4,
       5,     5,    19,     3,     4,     5,    19,     4,     5,     5,
      19,     7,     8,    19,     8,    19,    19,     8,    19,    19,
      19,    19,     5,    19,    19,     4,     5,     5,    19,     5,
      19,    19,     8,     6,     8,     5,     6,     5,    17,    17,
      17,    17,    17,    17,     9,    10,    19,    10,    19,    10,
      19,    19,     7,     8,    19,     8,    19,    19,    10,    19,
      19,    19,     8,    19,    19,    19,    10,    19,    19,    19,
       8,    19,    19,    19,    19,    19,    19,    10,    19,    19,
      19,     9,    10,    19,    10,    19,    10,    19,    19,     4,
       5,     5,    19,     5,    19,    19,     5,    19,    19,    19,
      10,    19,    19,    19,     5,    19,    19,    19,    19,     7,
       8,    19,     8,    19,    19,     8,    19,    19,    19,    19,
       5,    19,    19,     4,     5,     5,    19,     5,    19,    19,
       8,    19,    19,    19,    19,    19,     5,    19,    19,    19,
      10,    19,    19,    19,     8,    19,    19,    19,    19,    19,
      19,    19,    19,    10,    19,    19,    19,     5,    19,    19,
      19,    19,    19,    19,     8,    19,    19,    19,    19,    19,
       5,    19,    19,    19,    19,    19,    19,    19,    19,    19,
      19,    19
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    57,    58,    58,    58,    58,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       3,     6,     6,     6,     6,     6,     6,     7,     5,     5,
       5,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     6,     7,     7,     8,     7,     8,     8,     9,
       7,     8,     8,     9,     8,     9,     9,    10,     4,     5,
       7,     8,     8,     5,     6,     6,     7,     6,     7,     9,
       8,     6,     7,     7,     8,     7,     8,     8,     7,     7,
       8,     8,     9,     6,     7,     7,     8,     8,     8,     8,
       9,     7,     8,     8,     9,     6,     7,     6,     5,     6,
       6,     7,     5,     6,     6,     5,     6,     7,     7,     8,
       6,     7,     7,     6,     5,     5,     6,     5,     6,     6,
       7,     5,     4,     4,     6,     7,     6,     7,     5,     7,
       8,     7,     5,     7,     7,     8,     7,     8,     8,     9,
       6,     8,     8,     9,     8,     9,     9,    10,     8,     6,
       7,     8,     6,     8,     9,     7,     7,     8,     6,     8,
       9,     7,     8,     9,     7,     9,     6,     6,     7,     5,
       7,     8,     6,     7,     8,    10,     8,     9,     7,     6,
       7,     5,     7,     5,     4,     5,     4,     5,     5,     6,
       4,     5,     4,     6,     5,     6,     6,     7,     4,     5,
       5,     6,     6,     7,     3,     4,     4,     5,     3,     5,
       6,     4,     5,     6,     4,     6,     7,     5,     3,     6,
       5,     5,     6,     2,     3,     4,     5,     5,     4,     1,
       2,     2,     3,     2,     3,     3,     4,     5,     5,     6,
       6,     7,     4,     5,     5,     6,     6,     6,     6,     7,
       3,     4,     4,     5,     9,     9,     6,     7,     7,     8,
       7,     8,     8,     8,     7,     8,     8,     9,     8,     9,
       9,    10,     7,     9,    10,     5,     6,     6,     7,     6,
       7,     3,     8,     6,     7,     7,     8,     7,     8,     1,
       5,     6,     4,     6,     7,     5,     2,     3,     4,     3,
       4,     2,     4,     5,     5,     6,     5,     5,     4,     2,
       4,     5,     3,     4,     5,     3,     9,     6,     4,     4,
       5,     3,     5,     6,     6,     5,     6,     5,     6,     6,
       7,     5,     5,     5,     6,     6,     7,     5,     6,     5,
       6,     6,     3,     4,     5,     5,     6,     6,     6,     7,
       3,     7,     4,     5,     6,     5,     6,     6,     7,     4,
       5,     7,     8,     3,     4,     4,     5,     4,     5,     8,
       6,     4,     5,     5,     6,     5,     6,     6,     5,     7,
       5,     8,     6,     5,     3,     7,     8,     3,     7,     8,
       7,     8,     5,     6,     7,     5,     4,     5,     4,     5,
       5,     6,     4,     4,     4,     4,     5,     5,     6,     4,
       4,     5,     4,     3,     4,     5,     4,     5,     5,     5,
       5,     5,     5,     4,     4,     5,     4,     5,     5,     6,
       3,     5,     4,     7,     4,     7,     7,     7,     7,     4,
       7,     5,     6,     5,     6,     6,     7,     2,     3,     6,
       5,     6,     4,     4,     5,     4,     5,     5,     8,     4,
       4,     5,     4,     5,     5,     6,     8,     6,     8,     9,
       7,     5,     6,     4,     7,     8,     6,     8,     9,     7,
       8,     9,     7,     9,     4,     7,     8,     6,     8,     9,
       7,     5,     6,    10,     6,     7,     5,     7,     8,     6,
       7,     7,     4,     2,     5,     6,     6,     7,     6,     7,
       3,     8,     6,     7,     7,     8,     7,     8,     9,     6,
       8,     6,     7,     5,     4,     5,     3,     5,     1,     4,
       5,     6,     4,     6,     7,     5,     6,     5,     5,     6,
       4,     5,     5,     6,     5,     4,     6,     6,     7,     4,
       5,     5,     6,     5,     5,     7,     2,     2,     3,     2,
       3,     3,     4,     8,     5,     6,     6,     6,     7,     3,
       3,     4,     6,     6,     7,     5,     6,     7,     5,     7,
       8,     6,     4,     5,     3,     6,     7,     5,     7,     6,
       6,     4,     7,     5,     5,     6,     6,     6,     7,     6,
       5,     6,     6,     7,     5,     5,     5,     4,     6,     5,
       5,     4,     5,     4,     4,     6,     5,     5,     4,     5,
       6,     3,     4,     5,     5,     6,     3,     4,     5,     5,
       6,     4,     5,     5,     6,     3,     4,     4,     5,     4,
       5,     5,     6,     4,     4,     5,     4,     5,     5,     6,
       4,     4,     5,     4,     5,     5,     5,     6,     4,     4,
       4,     5,     4,     5,     5,     6,     4,     4,     5,     4,
       5,     5,     6,     4,     4,     5,     4,     5,     5,     6,
       4,     4,     5,     4,     5,     5,     6,     4,     4,     6,
       4,     5,     5,     6,     4,     5,     5,     6,     3,     4,
       4,     5,     5,     5,     5,     6,     3,     4,     4,     5,
       4,     5,     5,     6,     4,     4,     4,     4,     5,     3,
       4,     4,     5,     4,     4,     5,     4,     4,     5,     3,
       4,     5,     4,     4,     5,     4,     5,     3,     4,     5,
       3,     4,     5,     4,     5,     4,     4,     4,     4,     4,
       4,     3,     4,     3,     4,     4,     4,     4,     4,     4,
       5,     4,     5,     4,     5,     5,     4,     5,     4,     5,
       6,     5,     6,     4,     5,     5,     6,     4,     5,     5,
       6,     4,     5,     5,     5,     4,     5,     5,     6,     4,
       5,     5,     6,     3,     4,     4,     5,     4,     4,     5,
       4,     5,     4,     5,     3,     4,     4,     5,     3,     4,
       4,     5,     4,     4,     5,     4,     4,     5,     4,     5,
       4,     4,     5,     4,     5,     6,     3,     5,     6,     3,
       5,     6,     5,     6,     5,     6,     5,     6,     5,     6,
       5,     6,     5,     6,     5,     3,     6,     5,     3,     6,
       5,     5,     5,     4,     3,     6,     5,     5,     4,     3,
       6,     5,     5,     4,     6,     6,     6,     5,     6,     5,
       6,     5,     3,     6,     5,     3,     6,     5,     4,     4,
       6,     5,     5,     4,     5,     4,     4,     6,     5,     5,
       4,     5,     4,     4,     3,     6,     5,     5,     4,     5,
       4,     4,     3,     6,     6,     5,     4,     6,     6,     6,
       3,     6,     3,     6,     6,     5,     5,     4,     5,     4,
       6,     6,     5,     5,     4,     5,     4,     4,     6,     5,
       5,     4,     5,     4,     6,     5,     5,     4,     5,     4,
       4,     3,     6,     5,     5,     4,     5,     4,     4,     3,
       6,     5,     5,     4,     6,     5,     5,     4,     6,     5,
       5,     6,     5,     5,     4,     5,     4,     4,     6,     5,
       5,     4,     5,     4,     4,     4,     5,     5,     4,     5,
       4,     4,     6,     5,     5,     4,     5,     4,     6,     5,
       5,     4,     3,     6,     5,     5,     4,     3,     6,     5,
       5,     4,     6,     5,     5,     4,     6,     5,     5,     4,
       6,     5,     5,     4,     6,     4,     6,     5,     5,     4,
       3,     6,     5,     5,     4,     3,     6,     5,     5,     5,
       6,     5,     5,     4,     6,     5,     5,     4,     6,     5,
       5,     4,     5,     4,     5,     4,     3,     5,     4,     3,
       5,     4,     5,     4,     5,     4,     5,     4,     5,     4,
       3,     5,     4,     3,     5,     4,     5,     5,     5,     5,
       4,     6,     6,     5,     4,     4,     5,     4,     4,     5,
       4,     4,     5,     4,     3,     5,     4,     4,     3,     5,
       4,     4,     3,     5,     4,     5,     4,     4,     5,     4,
       5,     4,     5,     4,     5,     4,     5,     4,     5,     4,
       5,     4,     5,     4,     5,     4,     5,     4,     5,     5,
       5,     5,     5,     5,     4,     5,     3,     5,     5,     4,
       4,     5,     4,     4,     5,     4,     4,     5,     6,     4,
       5,     4,     4,     3,     5,     4,     4,     3,     5,     4,
       5,     4,     5,     4,     6,     5,     5,     4,     6,     5,
       5,     4,     6,     5,     5,     5,     6,     5,     5,     4,
       6,     5,     5,     4,     6,     5,     5,     4,     6,     6,
       4,     6,     5,     5,     4,     6,     5,     5,     4,     6,
       5,     5,     4,     5,     5,     5,     4,     6,     5,     5,
       4,     6,     5,     5,     4,     6,     6,     5,     6,     5,
       6,     5,     6,     5,     6,     5,     6,     5,     6,     5,
       6,     5,     6,     5,     6,     5,     6,     5,     6,     5,
       6,     6,     6,     4,     5,     4,     6,     5,     5,     4,
       6,     5,     5,     4,     6,     5,     5,     5,     6,     5,
       6,     5,     6,     5,     6,     5,     6,     5,     6,     5
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

#line 3134 "bison_parser.tab.c"

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
#line 1300 "bison_parser.y"


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
