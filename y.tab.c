/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "PseudoToC.y" /* yacc.c:339  */

    #include<stdio.h>
    #include<stdlib.h>
    #include<string.h>
    #include <stdarg.h>
	int yylex();
	void yyerror(const char *s);
	extern char yytext[];
	#define YYDEBUG_LEXER_TEXT yytext
	void updateSymTab(char* data_type, char* id_name,int lineNo);
	void printSymTab();
	void tostring(char str[], int num);
	char* new_temp();
	int lookUpSymTab(char* nam);
	char* code_gen(int arg_count,...);
	char* code_concatenate(int arg_count,...);
	char* gen_addr(char* string);
	char* get_specifier(char *type);
	int t=0;
	extern int yylineno;

#line 88 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
    BEG = 258,
    END = 259,
    INIT = 260,
    TO = 261,
    IF = 262,
    THEN = 263,
    WHILE = 264,
    DO = 265,
    PRINT = 266,
    READ = 267,
    ASSIGN = 268,
    FLOATING_NUMBER = 269,
    BREAK = 270,
    RETURN = 271,
    END_FUNCTION = 272,
    START_PROCEDURE = 273,
    CLOSE_BRACKET = 274,
    OPEN_BRACKET = 275,
    EXP = 276,
    DIV = 277,
    MUL = 278,
    MINUS = 279,
    PLUS = 280,
    NOT = 281,
    ELSE = 282,
    ENDIF = 283,
    COMMA = 284,
    NEWLINE = 285,
    ENDWHILE = 286,
    INT = 287,
    FLOAT = 288,
    CHAR = 289,
    DOUBLE = 290,
    LONG = 291,
    ID = 292,
    NUM = 293,
    LESS = 294,
    GREAT = 295,
    LESS_E = 296,
    GREAT_E = 297,
    NOT_EQUAL = 298,
    EQUAL = 299,
    OR = 300,
    AND = 301,
    NAME_PROCEDURE = 302
  };
#endif
/* Tokens.  */
#define BEG 258
#define END 259
#define INIT 260
#define TO 261
#define IF 262
#define THEN 263
#define WHILE 264
#define DO 265
#define PRINT 266
#define READ 267
#define ASSIGN 268
#define FLOATING_NUMBER 269
#define BREAK 270
#define RETURN 271
#define END_FUNCTION 272
#define START_PROCEDURE 273
#define CLOSE_BRACKET 274
#define OPEN_BRACKET 275
#define EXP 276
#define DIV 277
#define MUL 278
#define MINUS 279
#define PLUS 280
#define NOT 281
#define ELSE 282
#define ENDIF 283
#define COMMA 284
#define NEWLINE 285
#define ENDWHILE 286
#define INT 287
#define FLOAT 288
#define CHAR 289
#define DOUBLE 290
#define LONG 291
#define ID 292
#define NUM 293
#define LESS 294
#define GREAT 295
#define LESS_E 296
#define GREAT_E 297
#define NOT_EQUAL 298
#define EQUAL 299
#define OR 300
#define AND 301
#define NAME_PROCEDURE 302

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 24 "PseudoToC.y" /* yacc.c:355  */
char* dataType; char* IdName; struct attributes{
	char* code; 
	char* addr;
	char* specifier;
}A;

#line 229 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 246 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  30
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   135

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  58
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  113

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   302

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
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
      45,    46,    47
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    42,    42,    45,    46,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    64,    67,
      68,    69,    72,    73,    76,    79,    82,    85,    87,    90,
      93,    97,    98,   100,   101,   102,   105,   106,   107,   110,
     111,   112,   116,   117,   118,   119,   120,   121,   124,   125,
     129,   130,   133,   134,   138,   139,   140,   141,   142
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BEG", "END", "INIT", "TO", "IF", "THEN",
  "WHILE", "DO", "PRINT", "READ", "ASSIGN", "FLOATING_NUMBER", "BREAK",
  "RETURN", "END_FUNCTION", "START_PROCEDURE", "CLOSE_BRACKET",
  "OPEN_BRACKET", "EXP", "DIV", "MUL", "MINUS", "PLUS", "NOT", "ELSE",
  "ENDIF", "COMMA", "NEWLINE", "ENDWHILE", "INT", "FLOAT", "CHAR",
  "DOUBLE", "LONG", "ID", "NUM", "LESS", "GREAT", "LESS_E", "GREAT_E",
  "NOT_EQUAL", "EQUAL", "OR", "AND", "NAME_PROCEDURE", "$accept",
  "program", "codes", "Stmt", "function_call", "Expr", "print_stmt",
  "read_stmt", "RelExpr", "LogExpr", "assign_stmt", "initialize_stmt",
  "function", "parameter_list", "E", "T", "F", "relOp", "logOp",
  "datatypelist", "namelist", "datatype", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302
};
# endif

#define YYPACT_NINF -61

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-61)))

#define YYTABLE_NINF -40

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      20,    22,    13,     4,    -2,    -2,    22,    88,    88,   -61,
      -2,    -4,    -2,    33,   -61,    32,    10,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,    31,   -18,   -61,
     -61,    24,    73,   -61,    58,    81,    72,   -61,   -61,   -61,
     -61,   -61,    64,   -61,    67,   -61,    77,    25,    -2,    89,
      95,   -61,    -2,    -2,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,    -2,    -2,    -2,    -2,    88,    -2,    22,    22,
      -2,    75,    82,    89,   -61,   -16,    88,    59,   -61,   -18,
     -18,   -16,   -16,   -61,   -61,   108,   -16,    37,    97,   -61,
      60,   -61,   -61,   -61,   100,    61,   -61,   -61,    93,   -61,
      22,   -61,   -61,    94,    22,    88,   104,   -61,   116,   -61,
     -61,    88,   -61
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
       0,     0,     0,    39,    40,     0,     0,     3,    17,     5,
      10,     9,    19,    20,     7,     8,    16,    21,    35,    38,
       1,     0,     0,    39,     0,     0,     0,    55,    57,    54,
      56,    58,     0,    50,     0,     6,     0,     0,     0,     0,
       0,     4,     0,     0,    46,    47,    42,    43,    44,    45,
      49,    48,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    41,    28,     0,     0,     2,    34,
      33,    25,    26,    37,    36,     0,    27,     0,     0,    15,
      23,    22,    51,    52,    24,     0,    31,    18,     0,    29,
       0,    12,    14,     0,     0,     0,     0,    53,     0,    32,
      13,     0,    30
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -61,   -61,   -61,    -6,   -61,    -3,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,    62,    -9,    34,    27,   -61,   -61,   126,
     -61,   -60
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    77,    27,    28,    29,    62,    63,    42,
      94,    43
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      36,    34,    35,    47,    64,    65,    85,    45,    52,    53,
      51,    92,    92,    30,    50,     3,    96,     4,    12,     5,
       6,     7,     8,     1,    31,     9,    10,     3,    11,     4,
      12,     5,     6,     7,     8,    33,    14,     9,    10,    75,
      11,    32,    12,    46,    74,   109,    48,    13,    14,    52,
      53,   112,    49,    81,    82,    52,    53,    15,    86,    13,
      14,    66,    87,    88,   100,   101,    68,    89,    91,    15,
      54,    55,    56,    57,    58,    59,    60,    61,    97,    67,
     104,    70,   -39,   -39,   -39,   -39,    79,    80,    98,    69,
      98,    83,    84,    71,   106,    12,    72,    73,   108,   -39,
     -39,   -39,   -39,   -39,   -39,   -39,   -39,    37,    38,    39,
      40,    41,    90,    14,    37,    38,    39,    40,    41,    93,
      37,    38,    39,    40,    41,    78,    76,    99,   102,   103,
     105,   107,   110,   111,    44,    95
};

static const yytype_uint8 yycheck[] =
{
       6,     4,     5,    12,    22,    23,    66,    10,    24,    25,
      16,    71,    72,     0,     4,     5,    76,     7,    20,     9,
      10,    11,    12,     3,    20,    15,    16,     5,    18,     7,
      20,     9,    10,    11,    12,    37,    38,    15,    16,    48,
      18,    37,    20,    47,    19,   105,    13,    37,    38,    24,
      25,   111,    20,    62,    63,    24,    25,    47,    67,    37,
      38,    37,    68,    69,    27,    28,     8,    70,    71,    47,
      39,    40,    41,    42,    43,    44,    45,    46,    19,     6,
      19,     9,    22,    23,    24,    25,    52,    53,    29,     8,
      29,    64,    65,    29,   100,    20,    29,    20,   104,    39,
      40,    41,    42,    43,    44,    45,    46,    32,    33,    34,
      35,    36,    37,    38,    32,    33,    34,    35,    36,    37,
      32,    33,    34,    35,    36,    30,    37,    19,    31,    29,
      37,    37,    28,    17,     8,    73
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    49,     5,     7,     9,    10,    11,    12,    15,
      16,    18,    20,    37,    38,    47,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    62,    63,    64,
       0,    20,    37,    37,    53,    53,    51,    32,    33,    34,
      35,    36,    67,    69,    67,    53,    47,    62,    13,    20,
       4,    51,    24,    25,    39,    40,    41,    42,    43,    44,
      45,    46,    65,    66,    22,    23,    37,     6,     8,     8,
       9,    29,    29,    20,    19,    62,    37,    61,    30,    63,
      63,    62,    62,    64,    64,    69,    62,    51,    51,    53,
      37,    53,    69,    37,    68,    61,    69,    19,    29,    19,
      27,    28,    31,    29,    19,    37,    51,    37,    51,    69,
      28,    17,    69
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    48,    49,    50,    50,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    52,    53,
      53,    53,    54,    54,    55,    56,    57,    58,    58,    59,
      60,    61,    61,    62,    62,    62,    63,    63,    63,    64,
      64,    64,    65,    65,    65,    65,    65,    65,    66,    66,
      67,    67,    68,    68,    69,    69,    69,    69,    69
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     1,     2,     1,     2,     1,     1,     1,
       1,     1,     5,     7,     5,     4,     1,     1,     4,     1,
       1,     1,     4,     4,     4,     3,     3,     4,     3,     5,
       8,     2,     4,     3,     3,     1,     3,     3,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     3,     1,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
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
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

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
      int yyn = yypact[*yyssp];
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
          yyp++;
          yyformat++;
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

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
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
#line 42 "PseudoToC.y" /* yacc.c:1646  */
    {(yyval.A)=(yyvsp[-2].A);printSymTab(); printf("\n C code: \n%s",(yyval.A).code);  YYACCEPT;}
#line 1407 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 45 "PseudoToC.y" /* yacc.c:1646  */
    {(yyval.A).code=(yyvsp[0].A).code;}
#line 1413 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 46 "PseudoToC.y" /* yacc.c:1646  */
    {(yyval.A).code=code_concatenate(2,(yyvsp[-1].A).code,(yyvsp[0].A).code);}
#line 1419 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 49 "PseudoToC.y" /* yacc.c:1646  */
    {(yyval.A)=(yyvsp[0].A);}
#line 1425 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 50 "PseudoToC.y" /* yacc.c:1646  */
    {(yyval.A).code=code_concatenate(3,"return ",(yyvsp[0].A).code," ; ");}
#line 1431 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 51 "PseudoToC.y" /* yacc.c:1646  */
    {(yyval.A).code=(yyvsp[0].A).code;}
#line 1437 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 52 "PseudoToC.y" /* yacc.c:1646  */
    {(yyval.A).code=(yyvsp[0].A).code;}
#line 1443 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 53 "PseudoToC.y" /* yacc.c:1646  */
    {(yyval.A).code=(yyvsp[0].A).code;}
#line 1449 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 54 "PseudoToC.y" /* yacc.c:1646  */
    {(yyval.A).code=(yyvsp[0].A).code;}
#line 1455 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 55 "PseudoToC.y" /* yacc.c:1646  */
    {(yyval.A).code=code_gen(1,"break;");}
#line 1461 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 56 "PseudoToC.y" /* yacc.c:1646  */
    {(yyval.A).code=code_concatenate(5,"If( ",(yyvsp[-3].A).code,") { ",(yyvsp[-1].A).code," } " );}
#line 1467 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 57 "PseudoToC.y" /* yacc.c:1646  */
    {(yyval.A).code=code_concatenate(7,"If( ",(yyvsp[-5].A).code,")  {",(yyvsp[-3].A).code," } else {",(yyvsp[-1].A).code," }");}
#line 1473 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 58 "PseudoToC.y" /* yacc.c:1646  */
    {(yyval.A).code=code_concatenate(5,"While (",(yyvsp[-3].A).code,")  {",(yyvsp[-1].A).code," } ");}
#line 1479 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 59 "PseudoToC.y" /* yacc.c:1646  */
    {(yyval.A).code=code_concatenate(5,"do{",(yyvsp[-2].A).code,"} while(",(yyvsp[0].A).code,");");}
#line 1485 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 60 "PseudoToC.y" /* yacc.c:1646  */
    {(yyval.A)=(yyvsp[0].A);}
#line 1491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 61 "PseudoToC.y" /* yacc.c:1646  */
    {(yyval.A)=(yyvsp[0].A);}
#line 1497 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 64 "PseudoToC.y" /* yacc.c:1646  */
    { (yyval.A).code=code_gen(4,(yyvsp[-3].IdName),"(",(yyvsp[-1].A).code,");");}
#line 1503 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 67 "PseudoToC.y" /* yacc.c:1646  */
    {(yyval.A)=(yyvsp[0].A);}
#line 1509 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 68 "PseudoToC.y" /* yacc.c:1646  */
    {(yyval.A)=(yyvsp[0].A);}
#line 1515 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 69 "PseudoToC.y" /* yacc.c:1646  */
    {(yyval.A)=(yyvsp[0].A);}
#line 1521 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 72 "PseudoToC.y" /* yacc.c:1646  */
    {(yyval.A).code=code_gen(5,"printf(\" ",(yyvsp[-2].A).code,"\" ,",(yyvsp[0].A).code,");");}
#line 1527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 73 "PseudoToC.y" /* yacc.c:1646  */
    {(yyval.A).code=code_gen(5,"printf(\" ",(yyvsp[-2].A).code,"\" ,",(yyvsp[0].IdName),");");}
#line 1533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 76 "PseudoToC.y" /* yacc.c:1646  */
    {(yyval.A).code=code_gen(5,"scanf(\"",(yyvsp[-2].A).code,"\",",(yyvsp[0].A).code,");");}
#line 1539 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 79 "PseudoToC.y" /* yacc.c:1646  */
    {(yyval.A).code = code_concatenate(4,(yyvsp[-2].A).code,(yyvsp[0].A).code,code_gen(3,(yyvsp[-2].A).addr,(yyvsp[-1].IdName),(yyvsp[0].A).addr)," ; ");}
#line 1545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 82 "PseudoToC.y" /* yacc.c:1646  */
    {(yyval.A).code = code_concatenate(4,(yyvsp[-2].A).code,(yyvsp[0].A).code,code_gen(3,(yyvsp[-2].A).addr,(yyvsp[-1].IdName),(yyvsp[0].A).addr)," ; ");}
#line 1551 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 85 "PseudoToC.y" /* yacc.c:1646  */
    { (yyval.A).addr = gen_addr((yyvsp[-2].IdName)); 
																									(yyval.A).code = code_concatenate(3,(yyvsp[0].A).code,code_gen(3,(yyval.A).addr," = ",(yyvsp[0].A).addr)," ; ");}
#line 1558 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 87 "PseudoToC.y" /* yacc.c:1646  */
    { (yyval.A).addr = gen_addr((yyvsp[-2].IdName));  
																										          							(yyval.A).code = code_concatenate(3,(yyvsp[0].A).code,code_gen(3,(yyval.A).addr," = ",(yyvsp[0].A).addr)," ; ");}
#line 1565 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 90 "PseudoToC.y" /* yacc.c:1646  */
    {updateSymTab((yyvsp[-1].dataType),(yyvsp[-2].IdName),yylineno); (yyval.A).code=code_concatenate(2,code_gen(3,(yyvsp[-1].dataType)," ",(yyvsp[-2].IdName))," ; ");}
#line 1571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 93 "PseudoToC.y" /* yacc.c:1646  */
    { (yyval.A).code = code_gen(8,(yyvsp[0].dataType)," ",(yyvsp[-6].IdName),"(",(yyvsp[-4].A).code,"){ ",(yyvsp[-2].A).code,"}");}
#line 1577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 97 "PseudoToC.y" /* yacc.c:1646  */
    {updateSymTab((yyvsp[0].dataType),(yyvsp[-1].IdName),yylineno);(yyval.A).code=code_gen(3,(yyvsp[0].dataType)," ",(yyvsp[-1].IdName));}
#line 1583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 98 "PseudoToC.y" /* yacc.c:1646  */
    {updateSymTab((yyvsp[0].dataType),(yyvsp[-1].IdName),yylineno);(yyval.A).code=code_concatenate(5,(yyvsp[-3].A).code,",",(yyvsp[0].dataType)," ",(yyvsp[-1].IdName));}
#line 1589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 100 "PseudoToC.y" /* yacc.c:1646  */
    {(yyval.A).addr = new_temp(); (yyval.A).code = code_concatenate(4,(yyvsp[-2].A).code,(yyvsp[0].A).code,code_gen(5,(yyval.A).addr," = ",(yyvsp[-2].A).addr," + ",(yyvsp[0].A).addr)," ; "); }
#line 1595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 101 "PseudoToC.y" /* yacc.c:1646  */
    {(yyval.A).addr = new_temp(); (yyval.A).code = code_concatenate(4,(yyvsp[-2].A).code,(yyvsp[0].A).code,code_gen(5,(yyval.A).addr," = ",(yyvsp[-2].A).addr," - ",(yyvsp[0].A).addr)," ; ");}
#line 1601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 102 "PseudoToC.y" /* yacc.c:1646  */
    {(yyval.A).addr = (yyvsp[0].A).addr; (yyval.A).code = (yyvsp[0].A).code;}
#line 1607 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 105 "PseudoToC.y" /* yacc.c:1646  */
    {(yyval.A).addr = new_temp(); (yyval.A).code = code_concatenate(4,(yyvsp[-2].A).code,(yyvsp[0].A).code,code_gen(5,(yyval.A).addr," = ",(yyvsp[-2].A).addr," * ",(yyvsp[0].A).addr)," ; "); }
#line 1613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 106 "PseudoToC.y" /* yacc.c:1646  */
    {(yyval.A).addr = new_temp(); (yyval.A).code = code_concatenate(4,(yyvsp[-2].A).code,(yyvsp[0].A).code,code_gen(5,(yyval.A).addr," = ",(yyvsp[-2].A).addr," / ",(yyvsp[0].A).addr)," ; "); }
#line 1619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 107 "PseudoToC.y" /* yacc.c:1646  */
    {(yyval.A).addr = (yyvsp[0].A).addr; (yyval.A).code = (yyvsp[0].A).code;}
#line 1625 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 110 "PseudoToC.y" /* yacc.c:1646  */
    {(yyval.A).addr = gen_addr((yyvsp[0].IdName)); (yyval.A).code = code_gen(1," ");}
#line 1631 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 111 "PseudoToC.y" /* yacc.c:1646  */
    {(yyval.A).addr = gen_addr((yyvsp[0].IdName)); (yyval.A).code = code_gen(1," ");;}
#line 1637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 112 "PseudoToC.y" /* yacc.c:1646  */
    {(yyval.A)=(yyvsp[-1].A);}
#line 1643 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 116 "PseudoToC.y" /* yacc.c:1646  */
    {(yyval.IdName)=(yyvsp[0].IdName);}
#line 1649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 117 "PseudoToC.y" /* yacc.c:1646  */
    {(yyval.IdName)=(yyvsp[0].IdName);}
#line 1655 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 118 "PseudoToC.y" /* yacc.c:1646  */
    {(yyval.IdName)=(yyvsp[0].IdName);}
#line 1661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 119 "PseudoToC.y" /* yacc.c:1646  */
    {(yyval.IdName)=(yyvsp[0].IdName);}
#line 1667 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 120 "PseudoToC.y" /* yacc.c:1646  */
    {(yyval.IdName)=(yyvsp[0].IdName);}
#line 1673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 121 "PseudoToC.y" /* yacc.c:1646  */
    {(yyval.IdName)=(yyvsp[0].IdName);}
#line 1679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 124 "PseudoToC.y" /* yacc.c:1646  */
    {(yyval.IdName)=(yyvsp[0].IdName);}
#line 1685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 125 "PseudoToC.y" /* yacc.c:1646  */
    {(yyval.IdName)=(yyvsp[0].IdName);}
#line 1691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 129 "PseudoToC.y" /* yacc.c:1646  */
    { (yyval.A).specifier=get_specifier((yyvsp[0].dataType));(yyval.A).code=code_gen(1,(yyval.A).specifier);}
#line 1697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 130 "PseudoToC.y" /* yacc.c:1646  */
    { (yyval.A).specifier=get_specifier((yyvsp[0].dataType));(yyval.A).code=code_gen(3,(yyvsp[-2].A).code,",",(yyval.A).specifier);}
#line 1703 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 133 "PseudoToC.y" /* yacc.c:1646  */
    {(yyval.A).code=code_gen(1,(yyvsp[0].IdName));}
#line 1709 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 134 "PseudoToC.y" /* yacc.c:1646  */
    {(yyval.A).code=code_gen(3,(yyvsp[-2].A).code,",",(yyvsp[0].IdName));}
#line 1715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 138 "PseudoToC.y" /* yacc.c:1646  */
    {(yyval.dataType) = (yyvsp[0].dataType);}
#line 1721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 139 "PseudoToC.y" /* yacc.c:1646  */
    {(yyval.dataType) = (yyvsp[0].dataType);}
#line 1727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 140 "PseudoToC.y" /* yacc.c:1646  */
    {(yyval.dataType) = (yyvsp[0].dataType);}
#line 1733 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 141 "PseudoToC.y" /* yacc.c:1646  */
    {(yyval.dataType) = (yyvsp[0].dataType);}
#line 1739 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 142 "PseudoToC.y" /* yacc.c:1646  */
    {(yyval.dataType) = (yyvsp[0].dataType);}
#line 1745 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1749 "y.tab.c" /* yacc.c:1646  */
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

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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
                  yystos[*yyssp], yyvsp);
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
#line 146 "PseudoToC.y" /* yacc.c:1906  */

struct symbolTable
{
	char name[30];
	char type[10];
	int width;
	int line;
};
int yywrap()
{
  return 1;
}
void yyerror(const char* arg)
{
	printf("%s\n",arg);
}


struct symbolTable symTab[100];
int ctr=0;
void updateSymTab(char* data_type, char* id_name,int lineNo)
{
	strcpy(symTab[ctr].name,id_name);
	strcpy(symTab[ctr].type,data_type);
	if(strcmp(data_type,"int")==0|| strcmp(data_type,"integer")==0)
		symTab[ctr].width=4;
	else if(strcmp(data_type,"float")==0)
		symTab[ctr].width=4;
	else if(strcmp(data_type,"char")==0 || strcmp(data_type,"character")==0)
		symTab[ctr].width=1;
	else if	(strcmp(data_type,"double")==0)
		symTab[ctr].width=8;
	else if(strcmp(data_type,"long")==0)
		symTab[ctr].width=10;
	symTab[ctr].line=lineNo;
	ctr++;
	printf("\n");


	
}
void printSymTab()
{
	int j;
	printf("Symbol Table: \n");
	printf("ID  Type  Size LineNo.\n");
	for(j=0;j<ctr;j++)
	{	
		printf("%s ",symTab[j].name);
		printf("  %s ",symTab[j].type);
		printf("  %d ",symTab[j].width);
		printf("  %d ",symTab[j].line);
		printf("\n");
	}
}
int lookUpSymTab(char* nam)
{
	int i; 
	for(i=0;i<ctr;i++)
	{
		if(strcmp(symTab[i].name,nam)==0)
		{
			return 1;
		}
	}
	return 0;
}
char* gen_addr(char* string)
{
	char* addr = (char*)malloc(sizeof(string));
	strcpy(addr, string);
	return addr;
}

char* code_gen(int arg_count,...)
{
	int i;
	va_list ap;
	va_start(ap, arg_count);
	char* temp = malloc(1000);
	for (i = 1; i <= arg_count; i++)
    {   
     	char* a = va_arg(ap, char*);
     	temp = (char*)realloc(temp,(strlen(temp)+strlen(a)+10));
     	strcat(temp,a);
    }
    strcat(temp,"   ");
     return temp;  
}
char* code_concatenate(int arg_count,...)
{
	int i;
	va_list ap;
	va_start(ap, arg_count);
	char* temp = malloc(1000);
	for (i = 1; i <= arg_count; i++)
    {   
     	char* a = va_arg(ap, char*);
     	temp = (char*)realloc(temp,(strlen(temp)+strlen(a)+10));
     	strcat(temp,a);
     }
     return temp;     
}
void tostring(char str[], int num)
{
    int i, rem, len = 0, n;
 
    n = num;
    while (n != 0)
    {
        len++;
        n /= 10;
    }
    for (i = 0; i < len; i++)
    {
        rem = num % 10;
        num = num / 10;
        str[len - (i + 1)] = rem + '0';
    }
    str[len] = '\0';
}
char* new_temp()
{
	t++;
	char* num = (char*)malloc(sizeof(int));
	tostring(num,t);
	char* temp = (char*)malloc(sizeof(int));
	strcat(temp,"t");
	strcat(temp,num);
	return temp;
}

char* get_specifier(char *type){
	char* data;
	if(strcmp(type,"int")==0|| strcmp(type,"integer")==0)
		data="%d";
	else if(strcmp(type,"float")==0)
		data="%f";
	else if(strcmp(type,"char")==0 || strcmp(type,"character")==0)
		data="%c";
	else if	(strcmp(type,"double")==0)
		data="%f";
	else if(strcmp(type,"long")==0)
		data="%ld";
	return data;
}	

int main()
{
	extern FILE *yyin;
	yyin=fopen("Input.txt","r");
	printf("Opened file\n");
	int yydebug=1;
	printf("Algorithm\n");
	if(!yyparse())
	{	
		printf("\nSuccess\n");
		
	}
	fclose(yyin);
	return 0;
}

