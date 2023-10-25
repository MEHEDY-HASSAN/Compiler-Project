
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "Project.y"

	
	#include<stdio.h>
	#include<stdlib.h>
    #include<time.h>
	#include<math.h>
	#include<string.h>

	FILE *yyin, *yyout;

	int yylex(void);
	void yyerror(char *s);

	int random(int a,int b)
	{
		srand(time(NULL));
		return a+rand()%(b-a+1);
	}

    	int totVars=0;
	//Informations about Varibles
	struct varStruct{
		char varName[25];
        char *cvar;
		int ivar;
		float fvar;
        int varDataType;
	}vars[10000];   

	// Set data type of a variable
	void setDataType(int type){
		int i;
		for(i=0; i<totVars; i++){
			if(vars[i].varDataType == -1){
				vars[i].varDataType = type;
			}
		}
	}

	// Finding index of a given variable
    int findVarIndex(char name[25]){
		int i;
		for(i=0; i<totVars; i++){
			if(!strcmp(vars[i].varName, name)) return i;
		}
		return -1;
	}


/* Line 189 of yacc.c  */
#line 123 "Project.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     MAIN = 258,
     INT = 259,
     CHAR = 260,
     FLOAT = 261,
     POW = 262,
     RANDOM = 263,
     SCAN = 264,
     IF = 265,
     ELIF = 266,
     ELSE = 267,
     WHILE = 268,
     SIN = 269,
     COS = 270,
     TAN = 271,
     LOG10 = 272,
     FACTORIAL = 273,
     ISPRIME = 274,
     OUTPUT = 275,
     SWITCH = 276,
     CASE = 277,
     DEFAULT = 278,
     REPEAT = 279,
     TO = 280,
     INC = 281,
     DEC = 282,
     MAX = 283,
     MIN = 284,
     ID = 285,
     NUM = 286,
     PLUS = 287,
     MINUS = 288,
     MULTI = 289,
     DIVI = 290,
     EQUALS = 291,
     NOTEQUAL = 292,
     GT = 293,
     GOE = 294,
     LT = 295,
     LOE = 296
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 50 "Project.y"

    char* varString;
	double var;



/* Line 214 of yacc.c  */
#line 207 "Project.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 219 "Project.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   172

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  66
/* YYNRULES -- Number of states.  */
#define YYNSTATES  182

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   296

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      45,    47,     2,     2,    46,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    44,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    42,     2,    43,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,     9,    12,    15,    18,    21,    24,
      27,    30,    33,    36,    39,    42,    45,    48,    51,    53,
      57,    64,    66,    70,    75,    82,    87,    92,    99,   106,
     111,   116,   126,   136,   145,   152,   153,   158,   168,   177,
     178,   183,   184,   188,   192,   196,   200,   204,   208,   211,
     213,   215,   217,   221,   223,   227,   229,   233,   237,   241,
     245,   249,   251,   254,   257,   260,   263
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      49,     0,    -1,     3,    42,    50,    43,    -1,    -1,    70,
      50,    -1,    73,    50,    -1,    66,    50,    -1,    62,    50,
      -1,    63,    50,    -1,    57,    50,    -1,    61,    50,    -1,
      60,    50,    -1,    55,    50,    -1,    51,    50,    -1,    53,
      50,    -1,    56,    50,    -1,    59,    50,    -1,    58,    50,
      -1,    52,    -1,    30,    44,    52,    -1,     8,    45,    31,
      46,    31,    47,    -1,    54,    -1,    30,    44,    54,    -1,
      18,    45,    31,    47,    -1,     7,    45,    31,    46,    31,
      47,    -1,    19,    45,    31,    47,    -1,    20,    45,    30,
      47,    -1,    28,    45,    30,    46,    30,    47,    -1,    29,
      45,    30,    46,    30,    47,    -1,    13,    45,    31,    47,
      -1,     9,    45,    30,    47,    -1,    24,    31,    25,    31,
      26,    31,    42,    50,    43,    -1,    24,    31,    25,    31,
      27,    31,    42,    50,    43,    -1,    21,    45,    30,    47,
      42,    64,    65,    43,    -1,    22,    31,    42,    50,    43,
      64,    -1,    -1,    23,    42,    50,    43,    -1,    10,    45,
      69,    47,    42,    50,    43,    67,    68,    -1,    11,    45,
      69,    47,    42,    50,    43,    67,    -1,    -1,    12,    42,
      50,    43,    -1,    -1,    74,    36,    74,    -1,    74,    37,
      74,    -1,    74,    38,    74,    -1,    74,    39,    74,    -1,
      74,    40,    74,    -1,    74,    41,    74,    -1,    71,    72,
      -1,     5,    -1,     6,    -1,     4,    -1,    72,    46,    30,
      -1,    30,    -1,    30,    44,    74,    -1,    75,    -1,    75,
      32,    75,    -1,    75,    33,    75,    -1,    75,    34,    75,
      -1,    75,    35,    75,    -1,    45,    75,    47,    -1,    31,
      -1,    14,    75,    -1,    15,    75,    -1,    16,    75,    -1,
      17,    75,    -1,    30,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    80,    80,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,   100,   101,
     113,   121,   122,   133,   152,   160,   178,   194,   225,   257,
     268,   276,   288,   303,   307,   311,   313,   323,   334,   344,
     346,   349,   353,   361,   369,   377,   385,   393,   404,   409,
     410,   411,   414,   420,   430,   448,   450,   451,   452,   453,
     462,   463,   464,   465,   466,   467,   469
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "MAIN", "INT", "CHAR", "FLOAT", "POW",
  "RANDOM", "SCAN", "IF", "ELIF", "ELSE", "WHILE", "SIN", "COS", "TAN",
  "LOG10", "FACTORIAL", "ISPRIME", "OUTPUT", "SWITCH", "CASE", "DEFAULT",
  "REPEAT", "TO", "INC", "DEC", "MAX", "MIN", "ID", "NUM", "PLUS", "MINUS",
  "MULTI", "DIVI", "EQUALS", "NOTEQUAL", "GT", "GOE", "LT", "LOE", "'{'",
  "'}'", "'='", "'('", "','", "')'", "$accept", "program", "statements",
  "randFunc", "randF", "Facto", "factorialFunc", "powerFunc", "primeFunc",
  "printFunc", "maxFunc", "minFunc", "whileFunc", "scanFunc", "forLoop",
  "switchCase", "caseNumber", "defaultOption", "condition", "elif",
  "lastElse", "boolianExpr", "declaration", "TYPE", "ID1", "assignation",
  "expression", "e", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   123,   125,    61,    40,    44,    41
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    48,    49,    50,    50,    50,    50,    50,    50,    50,
      50,    50,    50,    50,    50,    50,    50,    50,    51,    51,
      52,    53,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    62,    63,    64,    64,    65,    66,    67,    67,
      68,    68,    69,    69,    69,    69,    69,    69,    70,    71,
      71,    71,    72,    72,    73,    74,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     0,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     1,     3,
       6,     1,     3,     4,     6,     4,     4,     6,     6,     4,
       4,     9,     9,     8,     6,     0,     4,     9,     8,     0,
       4,     0,     3,     3,     3,     3,     3,     3,     2,     1,
       1,     1,     3,     1,     3,     1,     3,     3,     3,     3,
       3,     1,     2,     2,     2,     2,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     3,     1,    51,    49,    50,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     3,    18,     3,    21,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     0,     3,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,    13,    14,    12,    15,     9,    17,    16,
      11,    10,     7,     8,     6,     4,    53,    48,     5,     0,
       0,     0,     0,     0,     0,     0,    66,    61,     0,     0,
       0,    55,     0,     0,     0,     0,     0,     0,     0,     0,
      19,    22,    54,     0,     0,     0,    30,    62,    63,    64,
      65,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    29,    23,    25,    26,     0,     0,     0,
       0,    52,     0,     0,    60,     3,    42,    43,    44,    45,
      46,    47,    56,    57,    58,    59,    35,     0,     0,     0,
       0,    24,    20,     0,     0,     0,     0,     0,    27,    28,
      39,     0,     0,     0,     3,     3,     0,    41,     3,     3,
      33,     0,     0,     0,     0,    37,     0,     0,    31,    32,
       0,     3,    35,    36,     0,     0,    34,     3,    40,     0,
      39,    38
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,   145,   153,    35,   157,
     165,    79,    36,    37,    67,    38,    80,    81
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -53
static const yytype_int16 yypact[] =
{
       0,   -27,    28,    65,   -53,   -53,   -53,   -53,     3,     6,
       7,    14,    31,    32,    34,    35,    42,    57,    45,    46,
      48,    54,    65,   -53,    65,   -53,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    68,    65,    69,
      70,    72,    51,    73,    74,    75,    77,    78,    84,    80,
      81,    19,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,    53,   -53,    66,
      67,    71,    51,    51,    51,    51,   -53,   -53,    51,    76,
       2,    12,    79,    82,    83,    87,    88,    85,    92,    93,
     -53,   -53,   -53,    89,    86,    90,   -53,    12,    12,    12,
      12,   -15,    98,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    51,   -53,   -53,   -53,   -53,    99,    -5,    94,
      95,   -53,    96,    97,   -53,    65,   -53,   -53,   -53,   -53,
     -53,   -53,    -4,    -4,   -53,   -53,   100,   111,   114,   101,
     103,   -53,   -53,   104,   115,    91,   109,   110,   -53,   -53,
     116,   112,   117,   113,    65,    65,   108,   119,    65,    65,
     -53,   118,   120,    51,   122,   -53,   123,   124,   -53,   -53,
     121,    65,   100,   -53,   127,   128,   -53,    65,   -53,   129,
     116,   -53
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -53,   -53,   -22,   -53,    64,   -53,   106,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -52,   -53,   -53,   -20,
     -53,   -35,   -53,   -53,   -53,   -53,   -50,   -49
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      53,    92,    54,     1,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,     3,    68,   109,   110,   111,
     112,   137,   138,    97,    98,    99,   100,     9,     4,   101,
     111,   112,   124,    72,    73,    74,    75,    13,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,    39,    76,
      77,    40,    41,   126,   127,   128,   129,   130,   131,    42,
     132,   133,   134,   135,    78,    72,    73,    74,    75,     5,
       6,     7,     8,     9,    10,    11,    43,    44,    12,    45,
      46,    76,    77,    13,    14,    15,    16,    47,    48,    17,
      49,    50,    51,    18,    19,    20,    78,    52,    66,    93,
      69,    70,    71,   143,    82,    83,    84,    85,    86,    87,
      88,    89,    94,    95,   152,    90,   118,   122,    96,   121,
     176,   123,   144,   102,   139,   140,   113,   156,   170,   114,
     115,   164,   161,   162,   116,   117,   166,   167,   119,   120,
     125,   136,   146,   141,   142,   147,   151,   150,   148,   175,
     149,   154,   155,   163,   158,   179,   160,    91,     0,   159,
     181,   168,     0,   169,   171,     0,   172,   173,   174,   177,
       0,   178,   180
};

static const yytype_int16 yycheck[] =
{
      22,    51,    24,     3,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    42,    38,    32,    33,    34,
      35,    26,    27,    72,    73,    74,    75,     8,     0,    78,
      34,    35,    47,    14,    15,    16,    17,    18,    36,    37,
      38,    39,    40,    41,    32,    33,    34,    35,    45,    30,
      31,    45,    45,   103,   104,   105,   106,   107,   108,    45,
     109,   110,   111,   112,    45,    14,    15,    16,    17,     4,
       5,     6,     7,     8,     9,    10,    45,    45,    13,    45,
      45,    30,    31,    18,    19,    20,    21,    45,    31,    24,
      45,    45,    44,    28,    29,    30,    45,    43,    30,    46,
      31,    31,    30,   125,    31,    31,    31,    30,    30,    25,
      30,    30,    46,    46,    23,    51,    31,    31,    47,    30,
     172,    31,    22,    47,    30,    30,    47,    11,   163,    47,
      47,    12,   154,   155,    47,    47,   158,   159,    46,    46,
      42,    42,    31,    47,    47,    31,    31,    43,    47,   171,
      47,    42,    42,    45,    42,   177,    43,    51,    -1,    42,
     180,    43,    -1,    43,    42,    -1,    43,    43,    47,    42,
      -1,    43,    43
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    49,    42,     0,     4,     5,     6,     7,     8,
       9,    10,    13,    18,    19,    20,    21,    24,    28,    29,
      30,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    66,    70,    71,    73,    45,
      45,    45,    45,    45,    45,    45,    45,    45,    31,    45,
      45,    44,    43,    50,    50,    50,    50,    50,    50,    50,
      50,    50,    50,    50,    50,    50,    30,    72,    50,    31,
      31,    30,    14,    15,    16,    17,    30,    31,    45,    69,
      74,    75,    31,    31,    31,    30,    30,    25,    30,    30,
      52,    54,    74,    46,    46,    46,    47,    75,    75,    75,
      75,    75,    47,    36,    37,    38,    39,    40,    41,    32,
      33,    34,    35,    47,    47,    47,    47,    47,    31,    46,
      46,    30,    31,    31,    47,    42,    74,    74,    74,    74,
      74,    74,    75,    75,    75,    75,    42,    26,    27,    30,
      30,    47,    47,    50,    22,    64,    31,    31,    47,    47,
      43,    31,    23,    65,    42,    42,    11,    67,    42,    42,
      43,    50,    50,    45,    12,    68,    50,    50,    43,    43,
      69,    42,    43,    43,    47,    50,    64,    42,    43,    50,
      43,    67
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

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

/* Line 1455 of yacc.c  */
#line 80 "Project.y"
    {printf("\nProgram Executed Successfully\n");;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 101 "Project.y"
    {
	int i = findVarIndex((yyvsp[(1) - (3)].varString));
	//printf("aa %d %d\n",i,$1);
	if(vars[i].varDataType == 1){
		vars[i].ivar = (yyvsp[(3) - (3)].var);
		printf("\n %s has value %d", vars[i].varName, vars[i].ivar);
	}
	else
		printf("\nError\n");
;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 113 "Project.y"
    {		
    int x = random((yyvsp[(3) - (6)].var),(yyvsp[(5) - (6)].var));
	(yyval.var) = x;
	printf("\nRandom value is %d \n", x);
    ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 122 "Project.y"
    {
	int i = findVarIndex((yyvsp[(1) - (3)].varString));
	//printf("aa %d %d\n",i,$1);
	if(vars[i].varDataType == 1){
		vars[i].ivar = (yyvsp[(3) - (3)].var);
		// printf("\n %s has value %d", vars[i].varName, vars[i].ivar);
	}
	else
		printf("\nError\n");
;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 133 "Project.y"
    {
	int j=(yyvsp[(3) - (4)].var), fact = 1;
	if(j==0){
		(yyval.var) = 1;
		printf("\nFactorial of %d is %d", j, fact);
	}
	else{
        int i;
		for(i = 1; i <= j; i++){
			fact = fact*i;
		}
		(yyval.var) = fact;
		printf("\nFactorial of %d is %d", j, fact);
	}
	
;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 152 "Project.y"
    {		
	int x = pow((yyvsp[(3) - (6)].var), (yyvsp[(5) - (6)].var));
	printf("\nPower value is %d ", x);
    ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 160 "Project.y"
    {
	int i, fl = 0;
	int n = (yyvsp[(3) - (4)].var);
	for (i = 2; i <=n-1; i++) {
		if (n % i == 0) {
			fl = 1;
			break;
		}
	}
    if(fl)
        printf("\nThe number %d is not prime\n", n);
    else
        printf("\nThe number %d is prime\n", n);

    ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 178 "Project.y"
    {
	int i = findVarIndex((yyvsp[(3) - (4)].varString));
	if(vars[i].varDataType == 1){
		printf("\n %s has value %d", vars[i].varName, vars[i].ivar);
	}
	else if(vars[i].varDataType == 2){
		printf("\n%s has value %f", vars[i].varName, vars[i].fvar);
	}
	else if(vars[i].varDataType == 0){
		printf("\n%s has value %c", vars[i].varName, vars[i].cvar);
	}
;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 194 "Project.y"
    {
	int i = findVarIndex((yyvsp[(3) - (6)].varString));
	int j = findVarIndex((yyvsp[(5) - (6)].varString));
	int k,l;
	if((vars[i].varDataType == 1) &&(vars[j].varDataType == 1) ){
		k = vars[i].ivar;
		l = vars[j].ivar;
		if(l>k){
			printf("\nMaximum value is %d", l);
		}
		else{
			printf("\nMaximum value is %d", k);
		}
	}
	else if((vars[i].varDataType == 2) &&(vars[j].varDataType == 2) ){
		k = vars[i].fvar;
		l = vars[j].fvar;
		if(l>k){
			printf("\nMaximum value is %f", l);
		}
		else{
			printf("\nMaximum value is %f", k);
		}
	}
	else{
		printf("\nThe values can not be compared");
	}
;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 225 "Project.y"
    {
	int i = findVarIndex((yyvsp[(3) - (6)].varString));
	int j = findVarIndex((yyvsp[(5) - (6)].varString));
	int k,l;
	if((vars[i].varDataType == 1) && (vars[j].varDataType == 1) ){
		k = vars[i].ivar;
		l = vars[j].ivar;
		if(l<k){
			printf("\nMinimum value is %d", l);
		}
		else{
			printf("\nMinimum value is %d", k);
		}
	}
	else if((vars[i].varDataType == 2) &&(vars[j].varDataType == 2) ){
		k = vars[i].fvar;
		l = vars[j].fvar;
		if(l<k){
			printf("\nMinimum value is %f", l);
		}
		else{
			printf("\nMinimum value is %f", k);
		}
	}
	else{
		printf("\nThe values can not be compared");
	}
;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 257 "Project.y"
    {
	printf("\nWhile loop found\n");
	int i = (yyvsp[(3) - (4)].var);
	while(i>0){
		printf("\nWhile Loop variable value is %d", i);
        i=i-1;
	}
;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 268 "Project.y"
    {
	int i = findVarIndex((yyvsp[(3) - (4)].varString));
	printf("\nThis function reads the variable %s\n",vars[i].varName);
    ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 276 "Project.y"
    {
	printf("\nForward for loop starting");
	int i = (yyvsp[(2) - (9)].var);
	int j = (yyvsp[(4) - (9)].var);
	int inc = (yyvsp[(6) - (9)].var);
	int k;
	for(k=i; k<j; k=k+inc){
		printf("\nValue is %d", k);
	}
    printf("\nForward for loop ended");
		
;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 288 "Project.y"
    {
	printf("\nReverse for loop starting");
	int i = (yyvsp[(2) - (9)].var);
	int j = (yyvsp[(4) - (9)].var);
	int dec = (yyvsp[(6) - (9)].var);
	int k;
	for(k=i; k>j; k=k-dec){
		printf("\nValue is %d", k);
	}
    printf("\nReverse for loop ended");
;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 303 "Project.y"
    {
	printf("\nSwitch-case ladder starts here.");
;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 307 "Project.y"
    {
	printf("\nMatched Case no is %d", (yyvsp[(2) - (6)].var));
    break;
;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 314 "Project.y"
    {
    printf("\nDefault executed\n");
    break;
;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 323 "Project.y"
    {
	printf("\nIF condition found");
	int i = (yyvsp[(3) - (9)].var);
	if(i==1){
		printf("\nIF condition true");
	}
	else{
		printf("\nIF condition false");
	}
;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 334 "Project.y"
    {
	printf("\nELIF condition found");
	int i = (yyvsp[(3) - (8)].var);
	if(i==1){
		printf("\nELIF condition true");
	}
	else{
		printf("\nELIF condition false");
	}
;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 346 "Project.y"
    {
	printf("\nELSE condition found");
;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 353 "Project.y"
    {
	if((yyvsp[(1) - (3)].var)==(yyvsp[(3) - (3)].var)){
		(yyval.var) = 1;
	}
	else{
		(yyval.var) = 0;
	}
;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 361 "Project.y"
    {
	if((yyvsp[(1) - (3)].var)!=(yyvsp[(3) - (3)].var)){
		(yyval.var) = 1;
	}
	else{
		(yyval.var) = 0;
	}
;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 369 "Project.y"
    {
	if((yyvsp[(1) - (3)].var)>(yyvsp[(3) - (3)].var)){
		(yyval.var) = 1;
	}
	else{
		(yyval.var) = 0;
	}
;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 377 "Project.y"
    {
	if((yyvsp[(1) - (3)].var)>=(yyvsp[(3) - (3)].var)){
		(yyval.var) = 1;
	}
	else{
		(yyval.var) = 0;
	}
;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 385 "Project.y"
    {
	if((yyvsp[(1) - (3)].var)<(yyvsp[(3) - (3)].var)){
		(yyval.var) = 1;
	}
	else{
		(yyval.var) = 0;
	}
;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 393 "Project.y"
    {
	if((yyvsp[(1) - (3)].var)<=(yyvsp[(3) - (3)].var)){
		(yyval.var) = 1;
	}
	else{
		(yyval.var) = 0;
	}
;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 404 "Project.y"
    {
	setDataType((yyvsp[(1) - (2)].var));
;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 409 "Project.y"
    {(yyval.var) = 0; printf("\nCharacter type variable");;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 410 "Project.y"
    {(yyval.var) = 2; printf("\nFloat type variable");;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 411 "Project.y"
    {(yyval.var) = 1; printf("\nInteger type variable");;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 414 "Project.y"
    {
		strcpy(vars[totVars].varName, (yyvsp[(3) - (3)].varString));
		printf("\nThe variable is %s", (yyvsp[(3) - (3)].varString));
		vars[totVars].varDataType =  -1;
		totVars = totVars + 1;
	;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 420 "Project.y"
    {
		strcpy(vars[totVars].varName, (yyvsp[(1) - (1)].varString));
		printf("\nThe variable is %s", (yyvsp[(1) - (1)].varString));
		vars[totVars].varDataType =  -1;
		totVars = totVars + 1;
	    strcpy((yyval.varString), (yyvsp[(1) - (1)].varString)); /// edit
    ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 430 "Project.y"
    {
	(yyval.var) = (yyvsp[(3) - (3)].var);
		int i = findVarIndex((yyvsp[(1) - (3)].varString));
		if(vars[i].varDataType==0){
			vars[i].cvar = (char*)&(yyvsp[(3) - (3)].var);
			printf("\nThe variable is %s", vars[i].cvar);
		}
		else if(vars[i].varDataType==1){
			vars[i].ivar = (yyvsp[(3) - (3)].var);
			printf("\nThe variable is %d", vars[i].ivar);
		}
		else if(vars[i].varDataType==2){
			vars[i].fvar = (float)(yyvsp[(3) - (3)].var);
			printf("\nThe variable is %f", vars[i].fvar);
		}
    ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 448 "Project.y"
    {(yyval.var) = (yyvsp[(1) - (1)].var);;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 450 "Project.y"
    {(yyval.var) = (yyvsp[(1) - (3)].var) + (yyvsp[(3) - (3)].var); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 451 "Project.y"
    {(yyval.var) = (yyvsp[(1) - (3)].var) - (yyvsp[(3) - (3)].var);;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 452 "Project.y"
    {(yyval.var) = (yyvsp[(1) - (3)].var) * (yyvsp[(3) - (3)].var);;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 454 "Project.y"
    {if((yyvsp[(3) - (3)].var) != 0)
	    {
		(yyval.var) = (yyvsp[(1) - (3)].var) / (yyvsp[(3) - (3)].var);
	    }
	    else{
		printf("\nDivision not possible. Logical Error");
    	}
        ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 462 "Project.y"
    {(yyval.var) = (yyvsp[(2) - (3)].var);;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 463 "Project.y"
    {(yyval.var) = (yyvsp[(1) - (1)].var);;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 464 "Project.y"
    {printf("\nThe angle inside sin() is %lf\n",(yyvsp[(2) - (2)].var),sin((yyvsp[(2) - (2)].var)*3.1416/180)); (yyval.var)=sin((yyvsp[(2) - (2)].var)*3.1416/180);;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 465 "Project.y"
    {printf("\nThe angle inside of cos() is %lf\n",(yyvsp[(2) - (2)].var),cos((yyvsp[(2) - (2)].var)*3.1416/180)); (yyval.var)=cos((yyvsp[(2) - (2)].var)*3.1416/180);;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 466 "Project.y"
    {printf("\nThe angle inside of tan() is %lf\n",(yyvsp[(2) - (2)].var),tan((yyvsp[(2) - (2)].var)*3.1416/180)); (yyval.var)=tan((yyvsp[(2) - (2)].var)*3.1416/180);;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 467 "Project.y"
    {printf("\nThe angle inside log10() is %lf\n",(yyvsp[(2) - (2)].var),(log((yyvsp[(2) - (2)].var)*1.0)/log(10.0))); (yyval.var)=(log((yyvsp[(2) - (2)].var)*1.0)/log(10.0));;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 469 "Project.y"
    {
	    int indexOfVar = findVarIndex((yyvsp[(1) - (1)].varString));
	    if(indexOfVar == -1)
	    {
		yyerror("Invalid variable mentioned");
        }
	    else
	    {
		if(vars[indexOfVar].varDataType == 1)
		{
			(yyval.var) = vars[indexOfVar].ivar;
		}
		else if(vars[indexOfVar].varDataType == 2)
		{
			(yyval.var) = vars[indexOfVar].fvar;
		}
	}
    ;}
    break;



/* Line 1455 of yacc.c  */
#line 2142 "Project.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 489 "Project.y"



void yyerror(char *s)
{
	//fprintf(stderr, "\nError found (y file) %s", s);
}

int main(){

	// FILE *yyin = freopen("Lan_input.txt","r",stdin);
	// freopen("Lan_output.txt","w",stdout);
	yyin = freopen("Lan_input.txt","r", stdin);
	//yyout = freopen("out.txt","w", stdout);
	yyparse();
	return 0;
}

