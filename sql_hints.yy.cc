
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
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 28 ".\\sql_hints.yy"

#include <assert.h>
#include <climits>
#include <cstdlib>

#include "lex_string.h"
#include "m_string.h"

#include "my_double2ulonglong.h"
#include "my_inttypes.h"  // TODO: replace with cstdint
#include "mysqld_error.h"
#include "sql/derror.h"
#include "sql/item.h"
#include "sql/item_subselect.h"
#include "sql/lexer_yystype.h"
#include "sql/opt_hints.h"
#include "sql/parse_tree_helpers.h"  // check_resource_group_name_len
#include "sql/parse_tree_hints.h"
#include "sql/parser_yystype.h"
#include "sql/sql_class.h"
#include "sql/sql_const.h"
#include "sql/sql_error.h"
#include "sql/sql_hints.yy.h"
#include "sql/sql_lex_hints.h"

#define NEW_PTN new (thd->mem_root)

static bool parse_int(longlong *to, const char *from, size_t from_length)
{
  int error;
  const char *end= from + from_length;
  *to= my_strtoll10(from, &end, &error);
  return error != 0 || end != from + from_length;
}



/* Line 189 of yacc.c  */
#line 111 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
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
     MAX_EXECUTION_TIME_HINT = 1000,
     RESOURCE_GROUP_HINT = 1001,
     BKA_HINT = 1002,
     BNL_HINT = 1003,
     DUPSWEEDOUT_HINT = 1004,
     FIRSTMATCH_HINT = 1005,
     INTOEXISTS_HINT = 1006,
     LOOSESCAN_HINT = 1007,
     MATERIALIZATION_HINT = 1008,
     NO_BKA_HINT = 1009,
     NO_BNL_HINT = 1010,
     NO_ICP_HINT = 1011,
     NO_MRR_HINT = 1012,
     NO_RANGE_OPTIMIZATION_HINT = 1013,
     NO_SEMIJOIN_HINT = 1014,
     MRR_HINT = 1015,
     QB_NAME_HINT = 1016,
     SEMIJOIN_HINT = 1017,
     SUBQUERY_HINT = 1018,
     DERIVED_MERGE_HINT = 1019,
     NO_DERIVED_MERGE_HINT = 1020,
     JOIN_PREFIX_HINT = 1021,
     JOIN_SUFFIX_HINT = 1022,
     JOIN_ORDER_HINT = 1023,
     JOIN_FIXED_ORDER_HINT = 1024,
     INDEX_MERGE_HINT = 1025,
     NO_INDEX_MERGE_HINT = 1026,
     SET_VAR_HINT = 1027,
     SKIP_SCAN_HINT = 1028,
     NO_SKIP_SCAN_HINT = 1029,
     HASH_JOIN_HINT = 1030,
     NO_HASH_JOIN_HINT = 1031,
     HINT_ARG_NUMBER = 1032,
     HINT_ARG_IDENT = 1033,
     HINT_ARG_QB_NAME = 1034,
     HINT_ARG_TEXT = 1035,
     HINT_IDENT_OR_NUMBER_WITH_SCALE = 1036,
     HINT_CLOSE = 1037,
     HINT_ERROR = 1038,
     INDEX_HINT = 1039,
     NO_INDEX_HINT = 1040,
     JOIN_INDEX_HINT = 1041,
     NO_JOIN_INDEX_HINT = 1042,
     GROUP_INDEX_HINT = 1043,
     NO_GROUP_INDEX_HINT = 1044,
     ORDER_INDEX_HINT = 1045,
     NO_ORDER_INDEX_HINT = 1046,
     DERIVED_CONDITION_PUSHDOWN_HINT = 1047,
     NO_DERIVED_CONDITION_PUSHDOWN_HINT = 1048,
     HINT_ARG_FLOATING_POINT_NUMBER = 1049,
     YYUNDEF = 1150
   };
#endif
/* Tokens.  */
#define MAX_EXECUTION_TIME_HINT 1000
#define RESOURCE_GROUP_HINT 1001
#define BKA_HINT 1002
#define BNL_HINT 1003
#define DUPSWEEDOUT_HINT 1004
#define FIRSTMATCH_HINT 1005
#define INTOEXISTS_HINT 1006
#define LOOSESCAN_HINT 1007
#define MATERIALIZATION_HINT 1008
#define NO_BKA_HINT 1009
#define NO_BNL_HINT 1010
#define NO_ICP_HINT 1011
#define NO_MRR_HINT 1012
#define NO_RANGE_OPTIMIZATION_HINT 1013
#define NO_SEMIJOIN_HINT 1014
#define MRR_HINT 1015
#define QB_NAME_HINT 1016
#define SEMIJOIN_HINT 1017
#define SUBQUERY_HINT 1018
#define DERIVED_MERGE_HINT 1019
#define NO_DERIVED_MERGE_HINT 1020
#define JOIN_PREFIX_HINT 1021
#define JOIN_SUFFIX_HINT 1022
#define JOIN_ORDER_HINT 1023
#define JOIN_FIXED_ORDER_HINT 1024
#define INDEX_MERGE_HINT 1025
#define NO_INDEX_MERGE_HINT 1026
#define SET_VAR_HINT 1027
#define SKIP_SCAN_HINT 1028
#define NO_SKIP_SCAN_HINT 1029
#define HASH_JOIN_HINT 1030
#define NO_HASH_JOIN_HINT 1031
#define HINT_ARG_NUMBER 1032
#define HINT_ARG_IDENT 1033
#define HINT_ARG_QB_NAME 1034
#define HINT_ARG_TEXT 1035
#define HINT_IDENT_OR_NUMBER_WITH_SCALE 1036
#define HINT_CLOSE 1037
#define HINT_ERROR 1038
#define INDEX_HINT 1039
#define NO_INDEX_HINT 1040
#define JOIN_INDEX_HINT 1041
#define NO_JOIN_INDEX_HINT 1042
#define GROUP_INDEX_HINT 1043
#define NO_GROUP_INDEX_HINT 1044
#define ORDER_INDEX_HINT 1045
#define NO_ORDER_INDEX_HINT 1046
#define DERIVED_CONDITION_PUSHDOWN_HINT 1047
#define NO_DERIVED_CONDITION_PUSHDOWN_HINT 1048
#define HINT_ARG_FLOATING_POINT_NUMBER 1049
#define YYUNDEF 1150




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 258 "y.tab.c"

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
#define YYFINAL  65
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   202

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  97
/* YYNRULES -- Number of states.  */
#define YYNSTATES  165

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   1151

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      54,    55,     2,     2,    56,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    57,     2,     2,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
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
      53,     2
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,    10,    13,    15,    18,    20,    22,
      24,    26,    28,    30,    32,    37,    38,    40,    42,    46,
      47,    49,    51,    55,    56,    58,    60,    64,    66,    68,
      71,    73,    76,    77,    79,    85,    91,    97,   102,   108,
     113,   119,   124,   130,   135,   136,   138,   142,   144,   146,
     148,   150,   152,   154,   159,   165,   170,   176,   182,   188,
     190,   192,   194,   196,   198,   200,   202,   204,   206,   208,
     210,   212,   214,   216,   218,   220,   222,   224,   226,   228,
     230,   232,   234,   236,   238,   240,   245,   252,   257,   259,
     261,   263,   265,   267,   269,   271,   273,   275
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      59,     0,    -1,    60,    40,    -1,    60,     1,    40,    -1,
       1,    40,    -1,    61,    -1,    60,    61,    -1,    79,    -1,
      78,    -1,    74,    -1,    84,    -1,    62,    -1,    85,    -1,
      86,    -1,     3,    54,    35,    55,    -1,    -1,    64,    -1,
      71,    -1,    64,    56,    71,    -1,    -1,    66,    -1,    70,
      -1,    66,    56,    70,    -1,    -1,    68,    -1,    69,    -1,
      68,    56,    69,    -1,    36,    -1,    36,    -1,    36,    73,
      -1,    71,    -1,    37,    36,    -1,    -1,    37,    -1,    20,
      54,    73,    75,    55,    -1,    17,    54,    73,    75,    55,
      -1,    21,    54,    73,    77,    55,    -1,    24,    54,    63,
      55,    -1,    24,    54,    37,    65,    55,    -1,    25,    54,
      63,    55,    -1,    25,    54,    37,    65,    55,    -1,    26,
      54,    63,    55,    -1,    26,    54,    37,    65,    55,    -1,
      27,    54,    73,    55,    -1,    -1,    76,    -1,    75,    56,
      76,    -1,     8,    -1,    10,    -1,    11,    -1,     7,    -1,
      11,    -1,     9,    -1,    80,    54,    63,    55,    -1,    80,
      54,    37,    65,    55,    -1,    81,    54,    63,    55,    -1,
      81,    54,    37,    65,    55,    -1,    82,    54,    72,    67,
      55,    -1,    83,    54,    72,    67,    55,    -1,     5,    -1,
       6,    -1,    33,    -1,    22,    -1,    50,    -1,    12,    -1,
      13,    -1,    34,    -1,    23,    -1,    51,    -1,    18,    -1,
      16,    -1,    28,    -1,    31,    -1,    42,    -1,    44,    -1,
      46,    -1,    48,    -1,    14,    -1,    15,    -1,    29,    -1,
      32,    -1,    43,    -1,    45,    -1,    47,    -1,    49,    -1,
      19,    54,    36,    55,    -1,    30,    54,    87,    57,    91,
      55,    -1,     4,    54,    36,    55,    -1,    36,    -1,     3,
      -1,    35,    -1,    52,    -1,    39,    -1,    36,    -1,    38,
      -1,    89,    -1,    90,    -1,    88,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   206,   206,   208,   210,   215,   221,   229,   230,   231,
     232,   233,   234,   235,   240,   260,   261,   265,   271,   280,
     281,   285,   291,   300,   301,   305,   311,   320,   324,   332,
     340,   341,   349,   350,   354,   361,   368,   375,   382,   389,
     396,   403,   410,   417,   426,   427,   431,   438,   439,   440,
     441,   445,   447,   452,   458,   465,   471,   481,   488,   498,
     502,   506,   510,   514,   521,   525,   529,   533,   537,   544,
     548,   552,   556,   560,   564,   568,   572,   579,   583,   587,
     591,   595,   599,   603,   607,   614,   623,   632,   644,   645,
     649,   664,   668,   703,   704,   708,   716,   717
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "MAX_EXECUTION_TIME_HINT",
  "RESOURCE_GROUP_HINT", "BKA_HINT", "BNL_HINT", "DUPSWEEDOUT_HINT",
  "FIRSTMATCH_HINT", "INTOEXISTS_HINT", "LOOSESCAN_HINT",
  "MATERIALIZATION_HINT", "NO_BKA_HINT", "NO_BNL_HINT", "NO_ICP_HINT",
  "NO_MRR_HINT", "NO_RANGE_OPTIMIZATION_HINT", "NO_SEMIJOIN_HINT",
  "MRR_HINT", "QB_NAME_HINT", "SEMIJOIN_HINT", "SUBQUERY_HINT",
  "DERIVED_MERGE_HINT", "NO_DERIVED_MERGE_HINT", "JOIN_PREFIX_HINT",
  "JOIN_SUFFIX_HINT", "JOIN_ORDER_HINT", "JOIN_FIXED_ORDER_HINT",
  "INDEX_MERGE_HINT", "NO_INDEX_MERGE_HINT", "SET_VAR_HINT",
  "SKIP_SCAN_HINT", "NO_SKIP_SCAN_HINT", "HASH_JOIN_HINT",
  "NO_HASH_JOIN_HINT", "HINT_ARG_NUMBER", "HINT_ARG_IDENT",
  "HINT_ARG_QB_NAME", "HINT_ARG_TEXT", "HINT_IDENT_OR_NUMBER_WITH_SCALE",
  "HINT_CLOSE", "HINT_ERROR", "INDEX_HINT", "NO_INDEX_HINT",
  "JOIN_INDEX_HINT", "NO_JOIN_INDEX_HINT", "GROUP_INDEX_HINT",
  "NO_GROUP_INDEX_HINT", "ORDER_INDEX_HINT", "NO_ORDER_INDEX_HINT",
  "DERIVED_CONDITION_PUSHDOWN_HINT", "NO_DERIVED_CONDITION_PUSHDOWN_HINT",
  "HINT_ARG_FLOATING_POINT_NUMBER", "YYUNDEF", "'('", "')'", "','", "'='",
  "$accept", "start", "hint_list", "hint", "max_execution_time_hint",
  "opt_hint_param_table_list", "hint_param_table_list",
  "opt_hint_param_table_list_empty_qb", "hint_param_table_list_empty_qb",
  "opt_hint_param_index_list", "hint_param_index_list", "hint_param_index",
  "hint_param_table_empty_qb", "hint_param_table", "hint_param_table_ext",
  "opt_qb_name", "qb_level_hint", "semijoin_strategies",
  "semijoin_strategy", "subquery_strategy", "table_level_hint",
  "index_level_hint", "table_level_hint_type_on",
  "table_level_hint_type_off", "key_level_hint_type_on",
  "key_level_hint_type_off", "qb_name_hint", "set_var_hint",
  "resource_group_hint", "set_var_ident", "set_var_num_item",
  "set_var_text_value", "set_var_string_item", "set_var_arg", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,  1151,  1000,  1001,  1002,  1003,  1004,  1005,  1006,
    1007,  1008,  1009,  1010,  1011,  1012,  1013,  1014,  1015,  1016,
    1017,  1018,  1019,  1020,  1021,  1022,  1023,  1024,  1025,  1026,
    1027,  1028,  1029,  1030,  1031,  1032,  1033,  1034,  1035,  1036,
    1037,  1038,  1039,  1040,  1041,  1042,  1043,  1044,  1045,  1046,
    1047,  1048,  1049,  1150,    40,    41,    44,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    59,    59,    60,    60,    61,    61,    61,
      61,    61,    61,    61,    62,    63,    63,    64,    64,    65,
      65,    66,    66,    67,    67,    68,    68,    69,    70,    71,
      72,    72,    73,    73,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    75,    75,    75,    76,    76,    76,
      76,    77,    77,    78,    78,    78,    78,    79,    79,    80,
      80,    80,    80,    80,    81,    81,    81,    81,    81,    82,
      82,    82,    82,    82,    82,    82,    82,    83,    83,    83,
      83,    83,    83,    83,    83,    84,    85,    86,    87,    87,
      88,    88,    88,    89,    89,    90,    91,    91
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     2,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     4,     0,     1,     1,     3,     0,
       1,     1,     3,     0,     1,     1,     3,     1,     1,     2,
       1,     2,     0,     1,     5,     5,     5,     4,     5,     4,
       5,     4,     5,     4,     0,     1,     3,     1,     1,     1,
       1,     1,     1,     4,     5,     4,     5,     5,     5,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     6,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,    59,    60,    64,    65,    77,    78,
      70,     0,    69,     0,     0,     0,    62,    67,     0,     0,
       0,     0,    71,    79,     0,    72,    80,    61,    66,    73,
      81,    74,    82,    75,    83,    76,    84,    63,    68,     0,
       0,     5,    11,     9,     8,     7,     0,     0,     0,     0,
      10,    12,    13,     4,     0,     0,    32,     0,    32,    32,
      15,    15,    15,    32,     0,     1,     0,     2,     6,    15,
      15,     0,     0,     0,     0,    33,    44,     0,    44,     0,
      32,    19,     0,    16,    17,    19,     0,    19,     0,     0,
      89,    88,     0,     3,    19,     0,    19,     0,     0,    30,
      23,    23,    14,    87,    50,    47,    48,    49,     0,    45,
      85,     0,    52,    51,     0,    29,    28,     0,    20,    21,
      37,     0,     0,    39,     0,    41,    43,     0,     0,    53,
       0,    55,    31,    27,     0,    24,    25,     0,    35,     0,
      34,    36,    38,     0,    18,    40,    42,    90,    93,    94,
      92,    91,    97,    95,    96,     0,    54,    56,    57,     0,
      58,    46,    22,    86,    26
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    39,    40,    41,    42,    82,    83,   117,   118,   134,
     135,   136,   119,    84,   100,    76,    43,   108,   109,   114,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    92,
     152,   153,   154,   155
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -65
static const yytype_int8 yypact[] =
{
      50,   -34,   -18,   -16,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -14,   -65,    35,    37,    54,   -65,   -65,    56,    58,
      63,    71,   -65,   -65,    80,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   104,
      -1,   -65,   -65,   -65,   -65,   -65,    81,    82,    83,    84,
     -65,   -65,   -65,   -65,    17,   103,   105,   107,   105,   105,
     -27,    22,    51,   105,    -2,   -65,   100,   -65,   -65,    79,
      92,    94,    94,    86,    89,   -65,   116,    90,   116,    26,
     105,   110,    93,    91,   -65,   110,    95,   110,    96,    97,
     -65,   -65,    98,   -65,   110,    99,   110,   101,   113,   -65,
     117,   117,   -65,   -65,   -65,   -65,   -65,   -65,     5,   -65,
     -65,    77,   -65,   -65,   102,   -65,   -65,   106,   108,   -65,
     -65,   122,   111,   -65,   112,   -65,   -65,    67,   114,   -65,
     115,   -65,   -65,   -65,   118,   109,   -65,   119,   -65,   116,
     -65,   -65,   -65,   110,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   120,   -65,   -65,   -65,   117,
     -65,   -65,   -65,   -65,   -65
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -65,   -65,   -65,   123,   -65,    52,   -65,    24,   -65,    59,
     -65,     0,    19,   -64,   121,    27,   -65,   124,    29,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      66,    90,     2,     3,     4,     5,    53,    99,    99,    80,
      81,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    91,   112,    54,   113,    55,    67,
      56,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,     1,    73,     2,     3,     4,     5,   144,    80,    85,
     138,   139,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    78,    79,    80,    87,    57,
      89,    58,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,   147,   148,    65,   149,   150,   115,    59,   122,
      60,   124,    61,    86,    88,    80,    94,    62,   128,   151,
     130,    95,    97,   104,   105,    63,   106,   107,    80,    96,
      80,    98,   140,   139,    64,    69,    70,    71,    72,    74,
      93,   102,    75,    77,   103,   110,   116,   121,   120,   132,
     123,   125,   126,   133,   129,   127,   131,   141,    80,   164,
     137,   142,   162,    68,   143,   159,   145,   146,   161,   156,
     157,     0,     0,   158,   160,   163,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   101,     0,     0,     0,     0,     0,     0,
       0,     0,   111
};

static const yytype_int16 yycheck[] =
{
       1,     3,     3,     4,     5,     6,    40,    71,    72,    36,
      37,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    36,     9,    54,    11,    54,    40,
      54,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,     1,    35,     3,     4,     5,     6,   121,    36,    37,
      55,    56,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    58,    59,    36,    37,    54,
      63,    54,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    35,    36,     0,    38,    39,    80,    54,    85,
      54,    87,    54,    61,    62,    36,    37,    54,    94,    52,
      96,    69,    70,     7,     8,    54,    10,    11,    36,    37,
      36,    37,    55,    56,    54,    54,    54,    54,    54,    36,
      40,    55,    37,    36,    55,    55,    36,    56,    55,    36,
      55,    55,    55,    36,    55,    57,    55,    55,    36,   159,
     101,    55,   143,    40,    56,    56,    55,    55,   139,    55,
      55,    -1,    -1,    55,    55,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    78
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     6,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    59,
      60,    61,    62,    74,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    40,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,     0,     1,    40,    61,    54,
      54,    54,    54,    35,    36,    37,    73,    36,    73,    73,
      36,    37,    63,    64,    71,    37,    63,    37,    63,    73,
       3,    36,    87,    40,    37,    63,    37,    63,    37,    71,
      72,    72,    55,    55,     7,     8,    10,    11,    75,    76,
      55,    75,     9,    11,    77,    73,    36,    65,    66,    70,
      55,    56,    65,    55,    65,    55,    55,    57,    65,    55,
      65,    55,    36,    36,    67,    68,    69,    67,    55,    56,
      55,    55,    55,    56,    71,    55,    55,    35,    36,    38,
      39,    52,    88,    89,    90,    91,    55,    55,    55,    56,
      55,    76,    70,    55,    69
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
      yyerror (thd, scanner, ret, YY_("syntax error: cannot back up")); \
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
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, scanner)
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
		  Type, Value, thd, scanner, ret); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, class THD *thd, class Hint_scanner *scanner, class PT_hint_list **ret)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, thd, scanner, ret)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    class THD *thd;
    class Hint_scanner *scanner;
    class PT_hint_list **ret;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (thd);
  YYUSE (scanner);
  YYUSE (ret);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, class THD *thd, class Hint_scanner *scanner, class PT_hint_list **ret)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, thd, scanner, ret)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    class THD *thd;
    class Hint_scanner *scanner;
    class PT_hint_list **ret;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, thd, scanner, ret);
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, class THD *thd, class Hint_scanner *scanner, class PT_hint_list **ret)
#else
static void
yy_reduce_print (yyvsp, yyrule, thd, scanner, ret)
    YYSTYPE *yyvsp;
    int yyrule;
    class THD *thd;
    class Hint_scanner *scanner;
    class PT_hint_list **ret;
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
		       		       , thd, scanner, ret);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule, thd, scanner, ret); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, class THD *thd, class Hint_scanner *scanner, class PT_hint_list **ret)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, thd, scanner, ret)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    class THD *thd;
    class Hint_scanner *scanner;
    class PT_hint_list **ret;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (thd);
  YYUSE (scanner);
  YYUSE (ret);

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
int yyparse (class THD *thd, class Hint_scanner *scanner, class PT_hint_list **ret);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */





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
yyparse (class THD *thd, class Hint_scanner *scanner, class PT_hint_list **ret)
#else
int
yyparse (thd, scanner, ret)
    class THD *thd;
    class Hint_scanner *scanner;
    class PT_hint_list **ret;
#endif
#endif
{
/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

    /* Number of syntax errors so far.  */
    int yynerrs;

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
#line 207 ".\\sql_hints.yy"
    { *ret= (yyvsp[(1) - (2)].hint_list); }
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 209 ".\\sql_hints.yy"
    { *ret= (yyvsp[(1) - (3)].hint_list); }
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 211 ".\\sql_hints.yy"
    { *ret= NULL; }
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 216 ".\\sql_hints.yy"
    {
            (yyval.hint_list)= NEW_PTN PT_hint_list(thd->mem_root);
            if ((yyval.hint_list) == NULL || (yyval.hint_list)->push_back((yyvsp[(1) - (1)].hint)))
              YYABORT; // OOM
          }
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 222 ".\\sql_hints.yy"
    {
            (yyvsp[(1) - (2)].hint_list)->push_back((yyvsp[(2) - (2)].hint));
            (yyval.hint_list)= (yyvsp[(1) - (2)].hint_list);
          }
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 241 ".\\sql_hints.yy"
    {
            longlong n;
            if (parse_int(&n, (yyvsp[(3) - (4)].lexer.hint_string).str, (yyvsp[(3) - (4)].lexer.hint_string).length) || n > UINT_MAX32)
            {
              scanner->syntax_warning(ER_THD(thd,
                                             ER_WARN_BAD_MAX_EXECUTION_TIME));
              (yyval.hint)= NULL;
            }
            else
            {
              (yyval.hint)= NEW_PTN PT_hint_max_execution_time(n);
              if ((yyval.hint) == NULL)
                YYABORT; // OOM
            }
          }
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 260 ".\\sql_hints.yy"
    { (yyval.hint_param_table_list).init(thd->mem_root); }
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 266 ".\\sql_hints.yy"
    {
            (yyval.hint_param_table_list).init(thd->mem_root);
            if ((yyval.hint_param_table_list).push_back((yyvsp[(1) - (1)].hint_param_table)))
              YYABORT; // OOM
          }
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 272 ".\\sql_hints.yy"
    {
            if ((yyvsp[(1) - (3)].hint_param_table_list).push_back((yyvsp[(3) - (3)].hint_param_table)))
              YYABORT; // OOM
            (yyval.hint_param_table_list)= (yyvsp[(1) - (3)].hint_param_table_list);
          }
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 280 ".\\sql_hints.yy"
    { (yyval.hint_param_table_list).init(thd->mem_root); }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 286 ".\\sql_hints.yy"
    {
            (yyval.hint_param_table_list).init(thd->mem_root);
            if ((yyval.hint_param_table_list).push_back((yyvsp[(1) - (1)].hint_param_table)))
              YYABORT; // OOM
          }
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 292 ".\\sql_hints.yy"
    {
            if ((yyvsp[(1) - (3)].hint_param_table_list).push_back((yyvsp[(3) - (3)].hint_param_table)))
              YYABORT; // OOM
            (yyval.hint_param_table_list)= (yyvsp[(1) - (3)].hint_param_table_list);
          }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 300 ".\\sql_hints.yy"
    { (yyval.hint_param_index_list).init(thd->mem_root); }
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 306 ".\\sql_hints.yy"
    {
            (yyval.hint_param_index_list).init(thd->mem_root);
            if ((yyval.hint_param_index_list).push_back((yyvsp[(1) - (1)].lexer.hint_string)))
              YYABORT; // OOM
          }
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 312 ".\\sql_hints.yy"
    {
            if ((yyvsp[(1) - (3)].hint_param_index_list).push_back((yyvsp[(3) - (3)].lexer.hint_string)))
              YYABORT; // OOM
            (yyval.hint_param_index_list)= (yyvsp[(1) - (3)].hint_param_index_list);
          }
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 325 ".\\sql_hints.yy"
    {
            (yyval.hint_param_table).table= (yyvsp[(1) - (1)].lexer.hint_string);
            (yyval.hint_param_table).opt_query_block= NULL_CSTR;
          }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 333 ".\\sql_hints.yy"
    {
            (yyval.hint_param_table).table= (yyvsp[(1) - (2)].lexer.hint_string);
            (yyval.hint_param_table).opt_query_block= (yyvsp[(2) - (2)].lexer.hint_string);
          }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 342 ".\\sql_hints.yy"
    {
            (yyval.hint_param_table).table= (yyvsp[(2) - (2)].lexer.hint_string);
            (yyval.hint_param_table).opt_query_block= (yyvsp[(1) - (2)].lexer.hint_string);
          }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 349 ".\\sql_hints.yy"
    { (yyval.lexer.hint_string)= NULL_CSTR; }
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 355 ".\\sql_hints.yy"
    {
            (yyval.hint)= NEW_PTN PT_qb_level_hint((yyvsp[(3) - (5)].lexer.hint_string), true, SEMIJOIN_HINT_ENUM, (yyvsp[(4) - (5)].ulong_num));
            if ((yyval.hint) == NULL)
              YYABORT; // OOM
          }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 362 ".\\sql_hints.yy"
    {
            (yyval.hint)= NEW_PTN PT_qb_level_hint((yyvsp[(3) - (5)].lexer.hint_string), false, SEMIJOIN_HINT_ENUM, (yyvsp[(4) - (5)].ulong_num));
            if ((yyval.hint) == NULL)
              YYABORT; // OOM
          }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 369 ".\\sql_hints.yy"
    {
            (yyval.hint)= NEW_PTN PT_qb_level_hint((yyvsp[(3) - (5)].lexer.hint_string), true, SUBQUERY_HINT_ENUM, (yyvsp[(4) - (5)].ulong_num));
            if ((yyval.hint) == NULL)
              YYABORT; // OOM
          }
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 376 ".\\sql_hints.yy"
    {
            (yyval.hint)= NEW_PTN PT_qb_level_hint(NULL_CSTR, true, JOIN_PREFIX_HINT_ENUM, (yyvsp[(3) - (4)].hint_param_table_list));
            if ((yyval.hint) == NULL)
              YYABORT; // OOM
          }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 383 ".\\sql_hints.yy"
    {
            (yyval.hint)= NEW_PTN PT_qb_level_hint((yyvsp[(3) - (5)].lexer.hint_string), true, JOIN_PREFIX_HINT_ENUM, (yyvsp[(4) - (5)].hint_param_table_list));
            if ((yyval.hint) == NULL)
              YYABORT; // OOM
          }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 390 ".\\sql_hints.yy"
    {
            (yyval.hint)= NEW_PTN PT_qb_level_hint(NULL_CSTR, true, JOIN_SUFFIX_HINT_ENUM, (yyvsp[(3) - (4)].hint_param_table_list));
            if ((yyval.hint) == NULL)
              YYABORT; // OOM
          }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 397 ".\\sql_hints.yy"
    {
            (yyval.hint)= NEW_PTN PT_qb_level_hint((yyvsp[(3) - (5)].lexer.hint_string), true, JOIN_SUFFIX_HINT_ENUM, (yyvsp[(4) - (5)].hint_param_table_list));
            if ((yyval.hint) == NULL)
              YYABORT; // OOM
          }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 404 ".\\sql_hints.yy"
    {
            (yyval.hint)= NEW_PTN PT_qb_level_hint(NULL_CSTR, true, JOIN_ORDER_HINT_ENUM, (yyvsp[(3) - (4)].hint_param_table_list));
            if ((yyval.hint) == NULL)
              YYABORT; // OOM
          }
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 411 ".\\sql_hints.yy"
    {
            (yyval.hint)= NEW_PTN PT_qb_level_hint((yyvsp[(3) - (5)].lexer.hint_string), true, JOIN_ORDER_HINT_ENUM, (yyvsp[(4) - (5)].hint_param_table_list));
            if ((yyval.hint) == NULL)
              YYABORT; // OOM
          }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 418 ".\\sql_hints.yy"
    {
            (yyval.hint)= NEW_PTN PT_qb_level_hint((yyvsp[(3) - (4)].lexer.hint_string), true, JOIN_FIXED_ORDER_HINT_ENUM, 0);
            if ((yyval.hint) == NULL)
              YYABORT; // OOM
          }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 426 ".\\sql_hints.yy"
    { (yyval.ulong_num)= 0; }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 428 ".\\sql_hints.yy"
    {
            (yyval.ulong_num)= (yyvsp[(1) - (1)].ulong_num);
          }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 432 ".\\sql_hints.yy"
    {
            (yyval.ulong_num)= (yyvsp[(1) - (3)].ulong_num) | (yyvsp[(3) - (3)].ulong_num);
          }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 438 ".\\sql_hints.yy"
    { (yyval.ulong_num)= OPTIMIZER_SWITCH_FIRSTMATCH; }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 439 ".\\sql_hints.yy"
    { (yyval.ulong_num)= OPTIMIZER_SWITCH_LOOSE_SCAN; }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 440 ".\\sql_hints.yy"
    { (yyval.ulong_num)= OPTIMIZER_SWITCH_MATERIALIZATION; }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 441 ".\\sql_hints.yy"
    { (yyval.ulong_num)= OPTIMIZER_SWITCH_DUPSWEEDOUT; }
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 445 ".\\sql_hints.yy"
    { (yyval.ulong_num)=
                                   static_cast<long>(Subquery_strategy::SUBQ_MATERIALIZATION); }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 447 ".\\sql_hints.yy"
    { (yyval.ulong_num)= static_cast<long>(Subquery_strategy::SUBQ_EXISTS); }
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 453 ".\\sql_hints.yy"
    {
            (yyval.hint)= NEW_PTN PT_table_level_hint(NULL_CSTR, (yyvsp[(3) - (4)].hint_param_table_list), true, (yyvsp[(1) - (4)].hint_type));
            if ((yyval.hint) == NULL)
              YYABORT; // OOM
          }
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 460 ".\\sql_hints.yy"
    {
            (yyval.hint)= NEW_PTN PT_table_level_hint((yyvsp[(3) - (5)].lexer.hint_string), (yyvsp[(4) - (5)].hint_param_table_list), true, (yyvsp[(1) - (5)].hint_type));
            if ((yyval.hint) == NULL)
              YYABORT; // OOM
          }
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 466 ".\\sql_hints.yy"
    {
            (yyval.hint)= NEW_PTN PT_table_level_hint(NULL_CSTR, (yyvsp[(3) - (4)].hint_param_table_list), false, (yyvsp[(1) - (4)].hint_type));
            if ((yyval.hint) == NULL)
              YYABORT; // OOM
          }
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 473 ".\\sql_hints.yy"
    {
            (yyval.hint)= NEW_PTN PT_table_level_hint((yyvsp[(3) - (5)].lexer.hint_string), (yyvsp[(4) - (5)].hint_param_table_list), false, (yyvsp[(1) - (5)].hint_type));
            if ((yyval.hint) == NULL)
              YYABORT; // OOM
          }
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 483 ".\\sql_hints.yy"
    {
            (yyval.hint)= NEW_PTN PT_key_level_hint((yyvsp[(3) - (5)].hint_param_table), (yyvsp[(4) - (5)].hint_param_index_list), true, (yyvsp[(1) - (5)].hint_type));
            if ((yyval.hint) == NULL)
              YYABORT; // OOM
          }
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 490 ".\\sql_hints.yy"
    {
            (yyval.hint)= NEW_PTN PT_key_level_hint((yyvsp[(3) - (5)].hint_param_table), (yyvsp[(4) - (5)].hint_param_index_list), false, (yyvsp[(1) - (5)].hint_type));
            if ((yyval.hint) == NULL)
              YYABORT; // OOM
          }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 499 ".\\sql_hints.yy"
    {
            (yyval.hint_type)= BKA_HINT_ENUM;
          }
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 503 ".\\sql_hints.yy"
    {
            (yyval.hint_type)= BNL_HINT_ENUM;
          }
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 507 ".\\sql_hints.yy"
    {
            (yyval.hint_type)= HASH_JOIN_HINT_ENUM;
          }
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 511 ".\\sql_hints.yy"
    {
            (yyval.hint_type)= DERIVED_MERGE_HINT_ENUM;
          }
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 515 ".\\sql_hints.yy"
    {
            (yyval.hint_type)= DERIVED_CONDITION_PUSHDOWN_HINT_ENUM;
          }
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 522 ".\\sql_hints.yy"
    {
            (yyval.hint_type)= BKA_HINT_ENUM;
          }
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 526 ".\\sql_hints.yy"
    {
            (yyval.hint_type)= BNL_HINT_ENUM;
          }
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 530 ".\\sql_hints.yy"
    {
            (yyval.hint_type)= HASH_JOIN_HINT_ENUM;
          }
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 534 ".\\sql_hints.yy"
    {
            (yyval.hint_type)= DERIVED_MERGE_HINT_ENUM;
          }
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 538 ".\\sql_hints.yy"
    {
            (yyval.hint_type)= DERIVED_CONDITION_PUSHDOWN_HINT_ENUM;
          }
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 545 ".\\sql_hints.yy"
    {
            (yyval.hint_type)= MRR_HINT_ENUM;
          }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 549 ".\\sql_hints.yy"
    {
            (yyval.hint_type)= NO_RANGE_HINT_ENUM;
          }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 553 ".\\sql_hints.yy"
    {
            (yyval.hint_type)= INDEX_MERGE_HINT_ENUM;
          }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 557 ".\\sql_hints.yy"
    {
            (yyval.hint_type)= SKIP_SCAN_HINT_ENUM;
          }
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 561 ".\\sql_hints.yy"
    {
            (yyval.hint_type)= INDEX_HINT_ENUM;
          }
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 565 ".\\sql_hints.yy"
    {
            (yyval.hint_type)= JOIN_INDEX_HINT_ENUM;
          }
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 569 ".\\sql_hints.yy"
    {
            (yyval.hint_type)= GROUP_INDEX_HINT_ENUM;
          }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 573 ".\\sql_hints.yy"
    {
            (yyval.hint_type)= ORDER_INDEX_HINT_ENUM;
          }
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 580 ".\\sql_hints.yy"
    {
            (yyval.hint_type)= ICP_HINT_ENUM;
          }
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 584 ".\\sql_hints.yy"
    {
            (yyval.hint_type)= MRR_HINT_ENUM;
          }
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 588 ".\\sql_hints.yy"
    {
            (yyval.hint_type)= INDEX_MERGE_HINT_ENUM;
          }
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 592 ".\\sql_hints.yy"
    {
            (yyval.hint_type)= SKIP_SCAN_HINT_ENUM;
          }
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 596 ".\\sql_hints.yy"
    {
            (yyval.hint_type)= INDEX_HINT_ENUM;
          }
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 600 ".\\sql_hints.yy"
    {
            (yyval.hint_type)= JOIN_INDEX_HINT_ENUM;
          }
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 604 ".\\sql_hints.yy"
    {
            (yyval.hint_type)= GROUP_INDEX_HINT_ENUM;
          }
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 608 ".\\sql_hints.yy"
    {
            (yyval.hint_type)= ORDER_INDEX_HINT_ENUM;
          }
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 615 ".\\sql_hints.yy"
    {
            (yyval.hint)= NEW_PTN PT_hint_qb_name((yyvsp[(3) - (4)].lexer.hint_string));
            if ((yyval.hint) == NULL)
              YYABORT; // OOM
          }
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 624 ".\\sql_hints.yy"
    {
            (yyval.hint)= NEW_PTN PT_hint_sys_var((yyvsp[(3) - (6)].lexer.hint_string), (yyvsp[(5) - (6)].item));
            if ((yyval.hint) == NULL)
              YYABORT; // OOM
          }
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 633 ".\\sql_hints.yy"
    {
           if (check_resource_group_name_len((yyvsp[(3) - (4)].lexer.hint_string), Sql_condition::SL_WARNING))
             YYERROR;

           (yyval.hint)= NEW_PTN PT_hint_resource_group((yyvsp[(3) - (4)].lexer.hint_string));
           if ((yyval.hint) == nullptr)
              YYABORT; // OOM
         }
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 650 ".\\sql_hints.yy"
    {
            longlong n;
            if (parse_int(&n, (yyvsp[(1) - (1)].lexer.hint_string).str, (yyvsp[(1) - (1)].lexer.hint_string).length))
            {
              scanner->syntax_warning(ER_THD(thd, ER_WRONG_SIZE_NUMBER));
              (yyval.item)= NULL;
            }
            else
            {
              (yyval.item)= NEW_PTN Item_int((ulonglong)n);
              if ((yyval.item) == NULL)
                YYABORT; // OOM
            }
          }
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 665 ".\\sql_hints.yy"
    {
            (yyval.item)= NEW_PTN Item_float((yyvsp[(1) - (1)].lexer.hint_string).str, (yyvsp[(1) - (1)].lexer.hint_string).length);
          }
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 669 ".\\sql_hints.yy"
    {
            longlong n;
            if (parse_int(&n, (yyvsp[(1) - (1)].lexer.hint_string).str, (yyvsp[(1) - (1)].lexer.hint_string).length - 1))
            {
              scanner->syntax_warning(ER_THD(thd, ER_WRONG_SIZE_NUMBER));
              (yyval.item)= NULL;
            }
            else
            {
              int multiplier;
              switch ((yyvsp[(1) - (1)].lexer.hint_string).str[(yyvsp[(1) - (1)].lexer.hint_string).length - 1]) {
              case 'K': multiplier= 1024; break;
              case 'M': multiplier= 1024 * 1024; break;
              case 'G': multiplier= 1024 * 1024 * 1024; break;
              default:
                assert(0); // should not happen
                YYABORT;        // for sure
              }
              if (1.0L * n * multiplier > LLONG_MAX_DOUBLE)
              {
                scanner->syntax_warning(ER_THD(thd, ER_WRONG_SIZE_NUMBER));
                (yyval.item)= NULL;
              }
              else
              {
                (yyval.item)= NEW_PTN Item_int((ulonglong)n * multiplier);
                if ((yyval.item) == NULL)
                  YYABORT; // OOM
              }
            }
          }
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 709 ".\\sql_hints.yy"
    {
          (yyval.item)= NEW_PTN Item_string((yyvsp[(1) - (1)].lexer.hint_string).str, (yyvsp[(1) - (1)].lexer.hint_string).length, thd->charset());
          if ((yyval.item) == NULL)
            YYABORT; // OOM
        }
    break;



/* Line 1455 of yacc.c  */
#line 2511 "y.tab.c"
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
      yyerror (thd, scanner, ret, YY_("syntax error"));
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
	    yyerror (thd, scanner, ret, yymsg);
	  }
	else
	  {
	    yyerror (thd, scanner, ret, YY_("syntax error"));
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
		      yytoken, &yylval, thd, scanner, ret);
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
		  yystos[yystate], yyvsp, thd, scanner, ret);
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
  yyerror (thd, scanner, ret, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, thd, scanner, ret);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, thd, scanner, ret);
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



