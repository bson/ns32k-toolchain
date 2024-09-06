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
#line 34 "c-parse.y"

#include "config.h"
#include "system.h"
#include "tree.h"
#include "input.h"
#include "cpplib.h"
#include "intl.h"
#include "timevar.h"
#include "c-lex.h"
#include "c-tree.h"
#include "c-pragma.h"
#include "flags.h"
#include "output.h"
#include "toplev.h"
#include "ggc.h"
  
#ifdef MULTIBYTE_CHARS
#include <locale.h>
#endif


/* Like YYERROR but do call yyerror.  */
#define YYERROR1 { yyerror ("syntax error"); YYERROR; }

/* Cause the "yydebug" variable to be defined.  */
#define YYDEBUG 1

/* Rename the "yyparse" function so that we can override it elsewhere.  */
#define yyparse yyparse_1

#ifndef YYLEX
#define YYLEX yylex()
#endif

#line 105 "c-p11531.c"

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
    IDENTIFIER = 258,
    TYPENAME = 259,
    SCSPEC = 260,
    TYPESPEC = 261,
    TYPE_QUAL = 262,
    CONSTANT = 263,
    STRING = 264,
    ELLIPSIS = 265,
    SIZEOF = 266,
    ENUM = 267,
    STRUCT = 268,
    UNION = 269,
    IF = 270,
    ELSE = 271,
    WHILE = 272,
    DO = 273,
    FOR = 274,
    SWITCH = 275,
    CASE = 276,
    DEFAULT = 277,
    BREAK = 278,
    CONTINUE = 279,
    RETURN = 280,
    GOTO = 281,
    ASM_KEYWORD = 282,
    TYPEOF = 283,
    ALIGNOF = 284,
    ATTRIBUTE = 285,
    EXTENSION = 286,
    LABEL = 287,
    REALPART = 288,
    IMAGPART = 289,
    VA_ARG = 290,
    CHOOSE_EXPR = 291,
    TYPES_COMPATIBLE_P = 292,
    PTR_VALUE = 293,
    PTR_BASE = 294,
    PTR_EXTENT = 295,
    STRING_FUNC_NAME = 296,
    VAR_FUNC_NAME = 297,
    ASSIGN = 298,
    OROR = 299,
    ANDAND = 300,
    EQCOMPARE = 301,
    ARITHCOMPARE = 302,
    LSHIFT = 303,
    RSHIFT = 304,
    UNARY = 305,
    PLUSPLUS = 306,
    MINUSMINUS = 307,
    HYPERUNARY = 308,
    POINTSAT = 309,
    INTERFACE = 310,
    IMPLEMENTATION = 311,
    END = 312,
    SELECTOR = 313,
    DEFS = 314,
    ENCODE = 315,
    CLASSNAME = 316,
    PUBLIC = 317,
    PRIVATE = 318,
    PROTECTED = 319,
    PROTOCOL = 320,
    OBJECTNAME = 321,
    CLASS = 322,
    ALIAS = 323
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 71 "c-parse.y"
long itype; tree ttype; enum tree_code code;
	const char *filename; int lineno; 

#line 227 "c-p11531.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Second part of user prologue.  */
#line 204 "c-parse.y"

/* Number of statements (loosely speaking) and compound statements 
   seen so far.  */
static int stmt_count;
static int compstmt_count;
  
/* Input file and line number of the end of the body of last simple_if;
   used by the stmt-rule immediately after simple_if returns.  */
static const char *if_stmt_file;
static int if_stmt_line;

/* List of types and structure classes of the current declaration.  */
static tree current_declspecs = NULL_TREE;
static tree prefix_attributes = NULL_TREE;

/* List of all the attributes applying to the identifier currently being
   declared; includes prefix_attributes and possibly some more attributes
   just after a comma.  */
static tree all_prefix_attributes = NULL_TREE;

/* Stack of saved values of current_declspecs, prefix_attributes and
   all_prefix_attributes.  */
static tree declspec_stack;

/* PUSH_DECLSPEC_STACK is called from setspecs; POP_DECLSPEC_STACK
   should be called from the productions making use of setspecs.  */
#define PUSH_DECLSPEC_STACK						 \
  do {									 \
    declspec_stack = tree_cons (build_tree_list (prefix_attributes,	 \
						 all_prefix_attributes), \
				current_declspecs,			 \
				declspec_stack);			 \
  } while (0)

#define POP_DECLSPEC_STACK						\
  do {									\
    current_declspecs = TREE_VALUE (declspec_stack);			\
    prefix_attributes = TREE_PURPOSE (TREE_PURPOSE (declspec_stack));	\
    all_prefix_attributes = TREE_VALUE (TREE_PURPOSE (declspec_stack));	\
    declspec_stack = TREE_CHAIN (declspec_stack);			\
  } while (0)

/* For __extension__, save/restore the warning flags which are
   controlled by __extension__.  */
#define SAVE_WARN_FLAGS()			\
	size_int (pedantic			\
		  | (warn_pointer_arith << 1)	\
		  | (warn_traditional << 2))

#define RESTORE_WARN_FLAGS(tval)		\
  do {						\
    int val = tree_low_cst (tval, 0);		\
    pedantic = val & 1;				\
    warn_pointer_arith = (val >> 1) & 1;	\
    warn_traditional = (val >> 2) & 1;		\
  } while (0)


#define OBJC_NEED_RAW_IDENTIFIER(VAL)	/* nothing */

/* Tell yyparse how to print a token's value, if yydebug is set.  */

#define YYPRINT(FILE,YYCHAR,YYLVAL) yyprint(FILE,YYCHAR,YYLVAL)

static void yyprint	  PARAMS ((FILE *, int, YYSTYPE));
static void yyerror	  PARAMS ((const char *));
static int yylexname	  PARAMS ((void));
static inline int _yylex  PARAMS ((void));
static int  yylex	  PARAMS ((void));
static void init_reswords PARAMS ((void));

/* Add GC roots for variables local to this file.  */
void
c_parse_init ()
{
  init_reswords ();

  ggc_add_tree_root (&declspec_stack, 1);
  ggc_add_tree_root (&current_declspecs, 1);
  ggc_add_tree_root (&prefix_attributes, 1);
  ggc_add_tree_root (&all_prefix_attributes, 1);
}


#line 328 "c-p11531.c"


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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3175

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  91
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  200
/* YYNRULES -- Number of rules.  */
#define YYNRULES  561
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  901

#define YYUNDEFTOK  2
#define YYMAXUTOK   323


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
       2,     2,     2,    87,     2,     2,     2,    60,    51,     2,
      67,    83,    58,    56,    88,    57,    66,    59,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    46,    84,
       2,    44,     2,    45,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    68,     2,    90,    50,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    89,    49,    85,    86,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    47,
      48,    52,    53,    54,    55,    61,    62,    63,    64,    65,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   291,   291,   295,   311,   311,   312,   312,   316,   317,
     318,   326,   331,   338,   340,   342,   344,   345,   346,   353,
     358,   352,   364,   367,   372,   366,   378,   381,   386,   380,
     392,   397,   398,   401,   403,   405,   410,   412,   414,   416,
     420,   426,   427,   431,   433,   438,   439,   442,   445,   449,
     466,   472,   475,   478,   481,   483,   488,   492,   496,   500,
     501,   506,   507,   509,   511,   513,   515,   517,   519,   521,
     523,   525,   527,   529,   532,   531,   538,   537,   544,   547,
     543,   553,   552,   562,   569,   580,   586,   587,   589,   592,
     591,   604,   609,   611,   627,   634,   636,   639,   649,   659,
     661,   665,   671,   673,   679,   680,   697,   699,   700,   711,
     716,   717,   718,   719,   727,   729,   731,   734,   743,   752,
     762,   767,   769,   771,   773,   775,   777,   834,   837,   840,
     846,   852,   855,   861,   864,   870,   873,   876,   879,   882,
     885,   888,   894,   897,   900,   903,   906,   909,   915,   918,
     921,   924,   927,   930,   936,   939,   942,   945,   948,   954,
     957,   960,   963,   969,   975,   981,   990,   996,   999,  1002,
    1008,  1014,  1020,  1029,  1035,  1038,  1041,  1044,  1047,  1050,
    1053,  1059,  1065,  1071,  1080,  1083,  1086,  1089,  1092,  1098,
    1101,  1104,  1107,  1110,  1113,  1116,  1122,  1128,  1134,  1143,
    1146,  1149,  1152,  1155,  1162,  1163,  1164,  1165,  1166,  1167,
    1168,  1169,  1173,  1174,  1175,  1176,  1177,  1178,  1179,  1180,
    1184,  1185,  1186,  1187,  1191,  1192,  1193,  1194,  1198,  1199,
    1200,  1201,  1205,  1206,  1207,  1208,  1212,  1213,  1214,  1215,
    1216,  1217,  1218,  1219,  1223,  1224,  1225,  1226,  1227,  1228,
    1229,  1230,  1231,  1232,  1233,  1234,  1235,  1236,  1237,  1238,
    1244,  1245,  1271,  1272,  1276,  1280,  1282,  1286,  1290,  1294,
    1296,  1303,  1304,  1308,  1309,  1314,  1315,  1323,  1322,  1330,
    1339,  1338,  1346,  1355,  1356,  1361,  1363,  1368,  1373,  1375,
    1381,  1382,  1384,  1386,  1388,  1396,  1397,  1398,  1399,  1405,
    1407,  1406,  1410,  1417,  1419,  1423,  1424,  1430,  1433,  1437,
    1436,  1442,  1447,  1446,  1450,  1452,  1456,  1457,  1461,  1466,
    1470,  1476,  1488,  1475,  1506,  1518,  1505,  1538,  1539,  1545,
    1547,  1552,  1554,  1556,  1564,  1565,  1569,  1574,  1576,  1580,
    1585,  1587,  1589,  1591,  1599,  1604,  1606,  1608,  1610,  1614,
    1616,  1621,  1623,  1628,  1630,  1642,  1641,  1647,  1652,  1651,
    1655,  1660,  1659,  1665,  1664,  1672,  1674,  1676,  1684,  1686,
    1689,  1691,  1697,  1699,  1705,  1706,  1708,  1714,  1717,  1727,
    1730,  1735,  1737,  1743,  1744,  1749,  1750,  1755,  1758,  1762,
    1768,  1771,  1775,  1786,  1787,  1792,  1798,  1800,  1806,  1805,
    1814,  1815,  1820,  1823,  1827,  1834,  1835,  1839,  1840,  1845,
    1847,  1852,  1854,  1856,  1858,  1860,  1867,  1869,  1871,  1873,
    1875,  1877,  1879,  1883,  1887,  1900,  1901,  1902,  1906,  1910,
    1911,  1912,  1913,  1914,  1918,  1919,  1922,  1923,  1927,  1928,
    1929,  1930,  1931,  1935,  1936,  1940,  1941,  1942,  1943,  1946,
    1950,  1957,  1962,  1978,  1992,  1994,  2000,  2001,  2005,  2019,
    2021,  2024,  2028,  2030,  2038,  2039,  2043,  2060,  2068,  2073,
    2086,  2085,  2100,  2099,  2119,  2125,  2131,  2132,  2137,  2143,
    2157,  2167,  2166,  2174,  2186,  2197,  2200,  2196,  2206,  2209,
    2212,  2216,  2219,  2222,  2211,  2226,  2225,  2233,  2235,  2241,
    2243,  2246,  2250,  2253,  2256,  2259,  2262,  2266,  2270,  2275,
    2279,  2291,  2297,  2305,  2308,  2311,  2314,  2331,  2333,  2339,
    2340,  2346,  2347,  2351,  2352,  2357,  2359,  2364,  2366,  2377,
    2376,  2387,  2389,  2397,  2388,  2401,  2408,  2409,  2419,  2421,
    2426,  2428,  2435,  2440,  2445,  2448,  2454,  2462,  2467,  2472,
    2475,  2481,  2487,  2497,  2496,  2507,  2508,  2526,  2528,  2534,
    2536,  2541
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "TYPENAME", "SCSPEC",
  "TYPESPEC", "TYPE_QUAL", "CONSTANT", "STRING", "ELLIPSIS", "SIZEOF",
  "ENUM", "STRUCT", "UNION", "IF", "ELSE", "WHILE", "DO", "FOR", "SWITCH",
  "CASE", "DEFAULT", "BREAK", "CONTINUE", "RETURN", "GOTO", "ASM_KEYWORD",
  "TYPEOF", "ALIGNOF", "ATTRIBUTE", "EXTENSION", "LABEL", "REALPART",
  "IMAGPART", "VA_ARG", "CHOOSE_EXPR", "TYPES_COMPATIBLE_P", "PTR_VALUE",
  "PTR_BASE", "PTR_EXTENT", "STRING_FUNC_NAME", "VAR_FUNC_NAME", "ASSIGN",
  "'='", "'?'", "':'", "OROR", "ANDAND", "'|'", "'^'", "'&'", "EQCOMPARE",
  "ARITHCOMPARE", "LSHIFT", "RSHIFT", "'+'", "'-'", "'*'", "'/'", "'%'",
  "UNARY", "PLUSPLUS", "MINUSMINUS", "HYPERUNARY", "POINTSAT", "'.'",
  "'('", "'['", "INTERFACE", "IMPLEMENTATION", "END", "SELECTOR", "DEFS",
  "ENCODE", "CLASSNAME", "PUBLIC", "PRIVATE", "PROTECTED", "PROTOCOL",
  "OBJECTNAME", "CLASS", "ALIAS", "')'", "';'", "'}'", "'~'", "'!'", "','",
  "'{'", "']'", "$accept", "program", "extdefs", "@1", "@2", "extdef",
  "datadef", "fndef", "$@3", "$@4", "$@5", "$@6", "$@7", "$@8",
  "identifier", "unop", "expr", "exprlist", "nonnull_exprlist",
  "unary_expr", "sizeof", "alignof", "typeof", "cast_expr",
  "expr_no_commas", "$@9", "$@10", "$@11", "$@12", "$@13", "primary",
  "$@14", "string", "old_style_parm_decls", "lineno_datadecl", "datadecls",
  "datadecl", "lineno_decl", "setspecs", "maybe_resetattrs", "decl",
  "declspecs_nosc_nots_nosa_noea", "declspecs_nosc_nots_nosa_ea",
  "declspecs_nosc_nots_sa_noea", "declspecs_nosc_nots_sa_ea",
  "declspecs_nosc_ts_nosa_noea", "declspecs_nosc_ts_nosa_ea",
  "declspecs_nosc_ts_sa_noea", "declspecs_nosc_ts_sa_ea",
  "declspecs_sc_nots_nosa_noea", "declspecs_sc_nots_nosa_ea",
  "declspecs_sc_nots_sa_noea", "declspecs_sc_nots_sa_ea",
  "declspecs_sc_ts_nosa_noea", "declspecs_sc_ts_nosa_ea",
  "declspecs_sc_ts_sa_noea", "declspecs_sc_ts_sa_ea", "declspecs_ts",
  "declspecs_nots", "declspecs_ts_nosa", "declspecs_nots_nosa",
  "declspecs_nosc_ts", "declspecs_nosc_nots", "declspecs_nosc",
  "declspecs", "maybe_type_quals_attrs", "typespec_nonattr",
  "typespec_attr", "typespec_reserved_nonattr", "typespec_reserved_attr",
  "typespec_nonreserved_nonattr", "initdecls", "notype_initdecls",
  "maybeasm", "initdcl", "@15", "notype_initdcl", "@16", "maybe_attribute",
  "attributes", "attribute", "attribute_list", "attrib", "any_word",
  "init", "$@17", "initlist_maybe_comma", "initlist1", "initelt", "$@18",
  "initval", "$@19", "designator_list", "designator", "nested_function",
  "$@20", "$@21", "notype_nested_function", "$@22", "$@23", "declarator",
  "after_type_declarator", "parm_declarator",
  "parm_declarator_starttypename", "parm_declarator_nostarttypename",
  "notype_declarator", "struct_head", "union_head", "enum_head",
  "structsp_attr", "@24", "@25", "@26", "@27", "structsp_nonattr",
  "maybecomma", "maybecomma_warn", "component_decl_list",
  "component_decl_list2", "component_decl", "components",
  "components_notype", "component_declarator",
  "component_notype_declarator", "enumlist", "enumerator", "typename",
  "@28", "absdcl", "absdcl_maybe_attribute", "absdcl1", "absdcl1_noea",
  "absdcl1_ea", "direct_absdcl1", "array_declarator", "stmts_and_decls",
  "lineno_stmt_decl_or_labels_ending_stmt",
  "lineno_stmt_decl_or_labels_ending_decl",
  "lineno_stmt_decl_or_labels_ending_label",
  "lineno_stmt_decl_or_labels_ending_error", "lineno_stmt_decl_or_labels",
  "errstmt", "pushlevel", "poplevel", "c99_block_start", "c99_block_end",
  "maybe_label_decls", "label_decls", "label_decl", "compstmt_or_error",
  "compstmt_start", "compstmt_nostart", "compstmt_contents_nonempty",
  "compstmt_primary_start", "compstmt", "simple_if", "if_prefix", "@29",
  "do_stmt_start", "@30", "save_filename", "save_lineno",
  "lineno_labeled_stmt", "c99_block_lineno_labeled_stmt", "lineno_stmt",
  "lineno_label", "select_or_iter_stmt", "$@31", "@32", "@33", "@34",
  "$@35", "$@36", "$@37", "@38", "for_init_stmt", "stmt", "label",
  "maybe_type_qual", "xexpr", "asm_operands", "nonnull_asm_operands",
  "asm_operand", "asm_clobbers", "parmlist", "$@39", "parmlist_1", "$@40",
  "$@41", "parmlist_2", "parms", "parm", "firstparm", "setspecs_fp",
  "parmlist_or_identifiers", "$@42", "parmlist_or_identifiers_1",
  "identifiers", "identifiers_or_typenames", "extension", YY_NULLPTR
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
     295,   296,   297,   298,    61,    63,    58,   299,   300,   124,
      94,    38,   301,   302,   303,   304,    43,    45,    42,    47,
      37,   305,   306,   307,   308,   309,    46,    40,    91,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,    41,    59,   125,   126,    33,    44,   123,
      93
};
# endif

#define YYPACT_NINF (-736)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-537)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      91,   128,   136,  1462,  -736,  1462,   292,  -736,  -736,  -736,
    -736,   140,   140,   140,   117,  -736,   120,  -736,  -736,  -736,
    -736,  -736,   134,   283,   447,   985,   521,  1466,   401,   458,
     751,   885,  1600,  1495,  2304,  2062,   796,  1041,   938,  1141,
    -736,  -736,   138,  -736,  -736,  -736,  -736,  -736,   140,  -736,
     127,   170,   176,  -736,  -736,  1462,  -736,  -736,  -736,   140,
     140,   140,  2603,   162,  2521,  -736,   239,   140,   222,  -736,
     935,  -736,  -736,  -736,  -736,   140,  -736,  -736,  -736,  -736,
    -736,  -736,  -736,  -736,   140,  -736,  -736,  -736,  -736,  -736,
    -736,  -736,  -736,   140,  -736,  -736,  -736,  -736,  -736,  -736,
    -736,  -736,   140,  -736,  -736,  -736,  -736,  -736,  -736,  -736,
    -736,   140,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,
     140,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,   140,
    -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,   140,  -736,
    -736,  -736,  -736,   376,   283,  -736,  -736,  -736,  -736,  -736,
     147,  -736,   156,  -736,   174,  -736,  -736,  -736,  -736,  -736,
    -736,  2603,  2603,   209,   226,   254,  -736,   426,  -736,  -736,
    -736,  2603,  -736,  -736,  1688,  -736,  -736,  2603,   208,   240,
    -736,  2644,  2685,  -736,  3086,   754,   294,  1082,  2603,  1358,
     247,   849,  1491,  2999,  3082,   499,   771,   853,   960,  -736,
     262,   268,   330,   327,   352,  -736,   283,   283,   140,  -736,
     140,  -736,   337,   140,  2050,   697,   140,  -736,  -736,   239,
     140,   395,  -736,  2021,   433,   453,   403,  1187,   382,   722,
    -736,   389,  -736,   393,  -736,  -736,  -736,  2603,  2603,  3024,
    -736,  -736,   359,  -736,   425,   454,  -736,   392,  2603,  1688,
    -736,  1688,  -736,  2603,  2603,   440,  -736,  -736,  2603,  2603,
    2603,  2603,  2603,  2603,  2603,  2603,  2603,  2603,  2603,  2603,
    -736,  -736,   426,   426,  2603,  2603,  -736,   463,  -736,   522,
     473,  -736,  -736,  -736,  -736,  -736,   236,  -736,   502,  -736,
     250,  -736,   453,   221,   283,  -736,   577,  -736,  -736,  2521,
    2153,  -736,   485,  2091,   446,  -736,   357,    88,  -736,  -736,
     545,   376,   376,  -736,   140,  -736,   697,   140,   140,  -736,
    -736,  -736,   697,   140,  -736,  -736,   849,  1491,  2999,  3082,
     499,   771,   853,   960,  -736,   498,   509,  1318,  -736,   140,
    -736,  -736,   555,   514,  -736,   393,  2833,  2859,   523,  -736,
    -736,  2394,  -736,  3086,   512,   530,  3086,  3086,  2603,   576,
    2603,  2603,  2356,  2749,   901,  1022,  1427,  1390,  1390,   661,
     661,  -736,  -736,  -736,  -736,  -736,   553,   240,   548,  -736,
     426,  1373,   522,  -736,  -736,   560,  1358,  2726,   239,   140,
    -736,  -736,  -736,  -736,   551,  -736,  -736,  -736,   215,    99,
    1169,   557,  2603,  -736,  -736,  2603,  2194,  -736,   559,  -736,
    -736,  -736,  -736,  -736,  2373,  -736,   433,   316,   376,  -736,
     601,  -736,  -736,  -736,  -736,  -736,  -736,  -736,   568,  -736,
     570,  2603,   426,   572,   514,  3024,  2603,  3024,  -736,  -736,
     562,   562,   613,  2603,  3115,  2116,  -736,  -736,  -736,   409,
     446,  -736,  -736,    73,    78,    96,   106,   660,  -736,   590,
    -736,  -736,  -736,  -736,  -736,  -736,   285,   599,   250,   250,
    -736,   140,  -736,  -736,   602,  -736,  -736,  1244,  3028,  1603,
     827,  1967,  3053,  1663,   914,  -736,  -736,  -736,   610,   414,
    -736,  -736,   315,  -736,   609,   632,  -736,  -736,  -736,  -736,
     643,   653,  1231,  -736,  -736,   715,  -736,  -736,  -736,   655,
    -736,  -736,   658,  -736,  -736,   140,   140,  3086,  -736,   140,
     669,   678,  2879,   679,  1753,  -736,  3102,  -736,   426,  -736,
    -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,
    -736,  -736,  -736,  2264,  -736,  2603,  -736,  -736,  -736,   683,
    1413,  -736,  -736,  -736,  -736,   142,   298,  -736,  -736,  1766,
    -736,   764,  -736,  -736,    65,  -736,   376,  -736,   283,  -736,
    -736,  3086,  -736,  -736,  1231,  -736,   140,   492,   140,   507,
    -736,  -736,  -736,   140,  -736,  2603,  -736,  -736,   733,   426,
    2603,  -736,   734,  3086,   705,   694,  -736,  -736,   224,  1889,
    2603,  -736,  2333,  -736,   742,  2603,   747,   710,   712,  2562,
     258,   790,  -736,  -736,  -736,   714,  -736,  -736,  -736,   716,
    1226,   719,  -736,  -736,  -736,  2459,   349,  -736,  -736,  -736,
     239,   140,   140,   561,   566,   319,  -736,  -736,   140,   239,
     140,   319,  -736,   140,  -736,  1244,  3028,  2472,  3057,  1603,
     827,  1728,  1206,  1967,  3053,  2995,  3070,  1663,   914,  1793,
    1299,  -736,  -736,  -736,  -736,   723,  -736,  -736,   431,   448,
    1753,    65,  -736,    65,  -736,  2603,   137,  -736,  2603,   342,
    -736,  2901,  -736,  2771,  1753,  -736,  -736,  1821,  -736,  1957,
    -736,  -736,  3102,  2789,  -736,  -736,  -736,  -736,   721,  2603,
     729,  -736,   756,  -736,  -736,   376,   283,  -736,  -736,  -736,
    -736,  -736,   760,   813,  1536,    72,  -736,  -736,  -736,  -736,
     142,   333,  -736,   140,  -736,   140,  -736,  -736,   140,   298,
     298,  -736,  -736,   142,   298,  -736,  -736,  -736,   745,  -736,
    -736,  -736,  -736,  2938,  2603,  -736,  -736,  2938,  2603,  -736,
    -736,  2603,  -736,   757,  1957,  -736,  -736,  2603,  -736,  -736,
     759,  -736,  2603,   798,   455,  -736,   159,   484,  -736,   703,
     782,   785,  -736,   797,  2603,  1623,  -736,  -736,  -736,  -736,
    2603,  -736,   561,   566,   350,  -736,  -736,  1413,   140,   319,
    -736,   319,  -736,  -736,   492,  -736,  2938,  -736,  2938,  2815,
    -736,  -736,  3068,  -736,   107,   140,  -736,   697,  -736,   697,
    2603,  2603,   851,  2459,   786,  -736,  -736,  -736,  -736,  -736,
     787,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,
      75,   792,  -736,  -736,  -736,   795,   799,  -736,  -736,  -736,
    -736,   802,  -736,  -736,  -736,  -736,   803,   814,   426,   149,
     801,  -736,  -736,  -736,  -736,  -736,  -736,  2603,  -736,  -736,
    -736,  2603,   805,    75,   816,    75,  -736,  -736,  -736,   817,
    -736,   819,   894,   165,  -736,  -736,   723,   723,  -736,  -736,
    -736,   850,   577,   832,  -736,  -736,  2603,  2603,   294,   362,
    -736,   835,   839,   847,   577,  -736,  -736,  -736,   294,  -736,
    -736
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       4,     0,     6,     0,     1,     0,     0,   268,   159,   265,
     127,   353,   349,   351,     0,    58,     0,   561,    18,     5,
       9,     8,     0,     0,   212,   213,   214,   215,   204,   205,
     206,   207,   216,   217,   218,   219,   208,   209,   210,   211,
     119,   119,     0,   135,   142,   262,   264,   263,   133,   285,
       0,     0,     0,   267,   266,     0,     7,    16,    17,   354,
     350,   352,     0,     0,     0,   348,   260,   283,     0,   273,
       0,   162,   128,   140,   146,   130,   163,   129,   141,   147,
     169,   131,   152,   157,   134,   170,   132,   153,   158,   180,
     136,   138,   144,   143,   181,   137,   139,   145,   195,   148,
     150,   155,   154,   196,   149,   151,   156,   164,   160,   178,
     187,   166,   165,   161,   179,   188,   171,   167,   193,   202,
     173,   172,   168,   194,   203,   182,   174,   176,   185,   184,
     183,   175,   177,   186,   197,   189,   191,   200,   199,   198,
     190,   192,   201,     0,     0,    15,   286,    31,    32,   374,
     365,   374,   366,   363,   367,    11,    85,    86,   104,    56,
      57,     0,     0,     0,     0,     0,    88,     0,    33,    35,
      34,     0,    36,    37,     0,    38,    39,     0,     0,    40,
      59,     0,     0,    61,    43,    45,    87,     0,     0,   290,
       0,   240,   241,   242,   243,   236,   237,   238,   239,   398,
       0,   232,   233,   234,   235,   261,     0,     0,   284,    12,
     283,    30,     0,   283,     0,     0,   283,   347,   333,   260,
     283,     0,   271,     0,   327,   328,     0,     0,     0,     0,
     355,     0,   358,     0,   361,    54,    55,     0,     0,     0,
      49,    46,     0,   466,     0,     0,    48,     0,     0,     0,
      50,     0,    52,     0,     0,    78,    76,    74,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     102,   103,     0,     0,    41,     0,   105,     0,   462,   454,
       0,    47,   296,   297,   298,   295,     0,   288,   291,   269,
     400,   270,   346,     0,     0,   120,     0,   553,   344,     0,
       0,   418,     0,     0,     0,    28,     0,   474,   111,   475,
     282,     0,     0,    14,   283,    22,     0,   283,   283,   331,
      13,    26,     0,   283,   381,   376,   232,   233,   234,   235,
     228,   229,   230,   231,   119,   119,   373,     0,   374,   283,
     374,   395,   396,   370,   393,     0,     0,     0,     0,    92,
      91,     0,    10,    44,     0,     0,    84,    83,     0,     0,
       0,     0,    72,    73,    71,    70,    69,    67,    68,    62,
      63,    64,    65,    66,   101,   100,     0,    42,     0,    94,
       0,     0,   455,   456,    93,     0,   290,    41,   260,   283,
     399,   401,   406,   405,   407,   415,   345,   274,   275,     0,
       0,     0,     0,   420,   416,     0,     0,   419,     0,   449,
     474,   113,   108,   112,     0,   280,   332,     0,     0,    20,
     279,   330,    24,   357,   474,   474,   375,   382,     0,   360,
       0,     0,   371,     0,   370,     0,     0,     0,    89,    60,
      51,    53,     0,     0,    77,    75,    95,    99,   559,     0,
     465,   434,   464,   474,   474,   474,   474,     0,   443,     0,
     475,   429,   438,   457,   287,   289,    85,     0,   409,   529,
     414,   283,   413,   276,     0,   557,   537,   224,   225,   220,
     221,   226,   227,   222,   223,   119,   119,   555,     0,   538,
     540,   554,     0,   422,     0,     0,   421,   417,   475,   109,
     119,   119,     0,   329,   272,   275,   474,   277,   474,   377,
     383,   475,   379,   385,   475,   283,   283,   397,   394,   283,
       0,     0,     0,     0,     0,    79,    82,   458,     0,   435,
     430,   439,   436,   431,   440,   475,   432,   441,   437,   433,
     442,   444,   451,   452,   292,     0,   294,   408,   410,     0,
       0,   529,   412,   535,   552,   402,   402,   531,   532,     0,
     556,     0,   423,   424,     0,   116,     0,   117,     0,   302,
     300,   299,   281,   475,     0,   475,   283,   378,   283,     0,
     356,   359,   364,   283,    96,     0,    98,   315,    85,     0,
       0,   312,     0,   314,     0,   368,   305,   311,     0,     0,
       0,   560,   452,   463,   268,     0,     0,     0,     0,     0,
       0,   517,   512,   461,   474,     0,   118,   119,   119,     0,
       0,   450,   499,   479,   480,     0,     0,   411,   530,   338,
     260,   283,   283,   334,   335,   283,   549,   403,   406,   260,
     283,   283,   551,   283,   539,   212,   213,   214,   215,   204,
     205,   206,   207,   216,   217,   218,   219,   208,   209,   210,
     211,   119,   119,   541,   558,     0,    29,   459,     0,     0,
       0,     0,   278,     0,   474,     0,   283,   474,     0,   283,
     362,     0,   318,     0,     0,   309,    90,     0,   304,     0,
     317,   308,    80,     0,   515,   502,   503,   504,     0,     0,
       0,   518,     0,   475,   500,     0,     0,   125,   470,   485,
     472,   490,     0,   483,     0,     0,   453,   467,   126,   293,
     409,   529,   547,   283,   337,   283,   340,   548,   404,   409,
     529,   550,   533,   402,   402,   460,   114,   115,     0,    21,
      25,   384,   475,   283,     0,   387,   386,   283,     0,   390,
      97,     0,   320,     0,     0,   306,   307,     0,   513,   505,
       0,   510,     0,     0,     0,   123,   321,     0,   124,   324,
       0,     0,   452,     0,     0,     0,   469,   474,   468,   489,
       0,   501,   341,   342,     0,   336,   339,     0,   283,   283,
     544,   283,   546,   301,     0,   389,   283,   392,   283,     0,
     313,   310,     0,   511,     0,   283,   121,     0,   122,     0,
       0,     0,     0,   519,     0,   484,   452,   453,   476,   474,
       0,   343,   534,   542,   543,   545,   388,   391,   319,   514,
     521,     0,   516,   322,   325,     0,     0,   473,   520,   498,
     491,     0,   495,   482,   478,   477,     0,     0,     0,     0,
     522,   523,   506,   474,   474,   471,   486,   519,   497,   452,
     488,     0,     0,   521,     0,     0,   475,   475,   452,     0,
     496,     0,     0,     0,   507,   524,     0,     0,   487,   492,
     525,     0,     0,     0,   323,   326,   519,     0,   527,     0,
     508,     0,     0,     0,     0,   493,   526,   509,   528,   452,
     494
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -736,  -736,  -736,  -736,  -736,    54,  -736,  -736,  -736,  -736,
    -736,  -736,  -736,  -736,    82,  -736,   -62,   536,  -250,   483,
    -736,  -736,  -736,  -107,   767,  -736,  -736,  -736,  -736,  -736,
    -736,  -736,  -270,  -300,   628,  -736,  -736,   -33,    77,  -269,
    -587,     2,     5,    37,    38,    41,    44,    -2,    45,  -331,
    -299,   387,   405,  -295,  -265,   411,   412,  -481,  -453,   563,
     571,  -736,  -171,  -178,  -511,  -191,   582,   654,   677,   876,
    -736,  -536,  -133,  -208,   575,  -736,   681,  -736,   253,     1,
      27,  -736,   598,  -736,   420,  -736,  -543,  -736,   308,  -736,
    -547,  -736,  -736,   408,  -736,  -736,  -736,  -736,  -736,  -736,
    -120,   379,   278,   281,   -24,    11,  -736,  -736,  -736,  -736,
    -736,  -736,  -736,  -736,  -736,  -736,   578,  -132,  -736,   680,
    -736,  -736,   340,   339,   673,   605,   -89,  -736,  -736,  -480,
    -281,  -230,  -448,  -736,   204,  -736,  -736,  -736,  -736,  -736,
    -736,  -224,  -736,  -736,  -431,   223,  -736,  -736,   656,  -459,
    -736,   418,  -736,  -736,  -525,  -736,  -736,  -736,  -736,  -736,
    -330,  -350,   231,  -700,  -176,  -142,  -736,  -736,  -736,  -736,
    -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -735,
     180,  -736,   187,  -736,   574,  -736,  -529,  -736,  -736,  -736,
    -736,  -736,  -736,   579,  -301,  -736,  -736,  -736,  -736,    58
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     3,     5,    19,    20,    21,   316,   506,
     322,   508,   215,   410,   592,   177,   244,   376,   179,   180,
     181,   182,    22,   183,   184,   361,   360,   358,   600,   359,
     185,   524,   186,   305,   306,   307,   499,   451,    23,   294,
     616,   191,   192,   193,   194,   195,   196,   197,   198,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,   485,
     486,   334,   205,   199,    42,   206,    43,    44,    45,    46,
      47,   221,    68,   216,   222,   574,    69,   502,   295,   208,
      49,   286,   287,   288,   572,   670,   594,   595,   596,   754,
     597,   684,   598,   599,   765,   807,   853,   768,   809,   854,
     505,   224,   632,   633,   634,   225,    50,    51,    52,    53,
     338,   340,   345,   233,    54,   688,   433,   228,   229,   336,
     509,   512,   510,   513,   343,   344,   200,   290,   390,   636,
     637,   392,   393,   394,   217,   452,   453,   454,   455,   456,
     457,   308,   279,   603,   777,   781,   381,   382,   383,   666,
     621,   280,   459,   187,   667,   713,   714,   770,   715,   772,
     309,   414,   817,   778,   818,   819,   716,   816,   771,   868,
     773,   857,   886,   899,   859,   840,   623,   624,   702,   841,
     849,   850,   851,   889,   470,   550,   487,   643,   787,   488,
     489,   663,   490,   555,   298,   400,   491,   492,   449,   188
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     178,    30,   190,    30,    48,    24,    48,    24,    25,   391,
      25,   226,    59,    60,    61,   317,   419,   421,   622,   231,
     548,   628,   422,   223,   377,    75,   399,    84,   311,    93,
     668,   102,   619,   111,    70,   120,   303,   129,   718,   138,
      26,    27,    26,    27,    28,   418,    28,    29,    31,    29,
      31,   460,   691,    30,   235,   236,    48,    24,   335,    56,
      25,    55,   617,    55,   241,    48,   665,    48,   201,   481,
     246,   202,   812,   779,  -445,   146,   642,   622,   661,  -446,
     498,   281,   411,   481,   847,   245,   146,   146,   146,  -107,
     618,    -2,    26,    27,   511,   514,    28,  -447,   412,    29,
      31,   482,   146,   203,   204,   483,   662,  -448,   276,   155,
     543,   146,   620,    55,   619,   482,   843,   143,   144,   483,
     146,   402,   869,   460,   460,   535,   460,   738,     4,   146,
     147,   148,   150,   152,   154,   484,    -3,   377,   146,   780,
     735,   753,   756,   848,   617,    65,   629,   146,   564,   484,
     348,   891,   302,   830,   613,   227,   146,   458,  -425,   870,
     354,   577,   355,  -426,   579,   146,   335,    16,   878,   764,
      16,   620,   618,   147,   148,    48,   573,  -107,   575,   147,
     148,  -427,   473,   744,    62,   602,   212,    63,   549,  -275,
     831,  -428,    75,   241,    84,   863,    93,   468,   102,   900,
     630,    64,    75,  -275,    84,   461,   428,   801,   430,   631,
     214,   882,   739,   378,   740,    48,   149,   292,   293,   481,
      48,   201,   145,   671,   202,   673,   839,   332,   653,   189,
      48,   326,   864,   541,   327,   146,   230,   401,   547,   462,
      48,   408,   212,  -275,   439,   232,    10,  -275,   883,   240,
      48,   482,    48,   790,   792,   483,   203,   204,   822,   151,
     654,   147,   148,   234,   657,   153,   328,   329,   689,    16,
     330,   285,   548,   331,   333,    72,   237,   530,   533,   536,
     539,   548,   213,   214,   703,   484,    65,   337,   213,   214,
     589,   247,   590,   238,   658,   626,   442,   317,    16,   241,
      48,    65,   619,   276,   396,   398,   209,   674,   388,   677,
     210,   531,   534,   537,   540,   342,   699,   389,   214,   385,
     207,   239,   292,   293,   386,   638,   638,    75,   248,    84,
     289,    93,   617,   102,    81,   332,    65,    77,    48,   326,
     494,    66,   327,   495,   742,   291,   521,   514,   523,    16,
      67,   884,   885,   763,   374,   375,   639,    16,   304,    86,
     618,  -110,  -110,  -110,  -110,   640,   214,  -110,   544,  -110,
    -110,  -110,    16,   545,   328,   329,    57,    58,   330,    65,
     218,   331,   333,   318,   214,  -110,   213,   214,   748,    48,
     201,   630,   794,   202,   341,   337,   147,   148,   560,   503,
     631,   214,   477,   561,   296,   478,    89,     9,    90,   213,
     214,   424,   425,    11,    12,    13,   477,   725,   214,   478,
     529,   532,   785,   538,   786,   203,   204,   342,   319,   147,
     148,    16,   719,   821,   219,   669,    48,   248,    48,   720,
     549,   479,   349,   220,   480,   893,  -110,   535,   729,   549,
     894,     7,    71,     9,    72,   479,   481,   676,   480,    11,
      12,    13,   448,    94,     9,    95,   297,   323,   285,   310,
      11,    12,    13,   312,   339,    15,   352,    16,    75,   313,
      93,   615,   111,   314,   129,  -248,   -81,   320,   482,   535,
     547,   210,   483,   527,   395,    65,   218,   528,   558,   547,
     318,   214,   559,   638,   638,     9,    90,   833,   350,   834,
      65,    11,    12,    13,   342,   736,   876,   877,   281,   314,
     213,   214,   484,   866,   867,     7,    80,     9,    81,    16,
     409,  -244,   737,    11,    12,    13,   210,   351,   675,   806,
     615,    30,  -249,   314,    48,    24,   379,   698,    25,    15,
     219,    16,   477,   678,   380,   478,   384,   651,   317,   220,
      48,   645,   554,   554,   646,    66,   635,   641,   808,   387,
     420,   297,   210,   767,    67,   404,   423,   566,   568,   398,
      26,    27,  -380,  -380,    28,   766,   158,    29,    31,   415,
     679,   479,   429,   426,   480,   440,   647,   648,   472,   431,
     649,   625,   432,   650,   652,  -246,    73,    78,    82,    87,
     601,   437,   888,   441,   109,   114,   118,   123,   471,   214,
     319,   319,   443,    30,   898,   614,    48,    24,   723,   214,
      25,    48,   201,   725,   214,   202,   446,   760,   447,   728,
      48,   201,   469,   464,   202,   507,    75,   493,    84,   497,
      93,   438,   102,   515,   111,   516,   120,   519,   129,   525,
     138,   304,    26,    27,   250,   252,    28,   203,   204,    29,
      31,   682,   395,   395,   676,   542,   203,   204,    74,    79,
      83,    88,   546,   625,   614,   553,   110,   115,   119,   124,
     416,   417,   700,   557,   705,   706,   783,   784,   304,   562,
     804,  -474,  -474,  -474,  -474,    91,    96,   100,   105,  -474,
    -474,  -474,   814,   127,   132,   136,   141,   769,   820,   267,
     268,   269,   563,   324,   551,  -474,     7,   565,     9,    10,
     212,   292,   293,  -275,    11,    12,    13,   567,   733,   734,
     292,   293,   212,   576,   789,   791,   578,  -275,   835,   836,
      15,   838,    16,    17,   583,   146,    98,     9,    99,   395,
     395,   584,   586,    11,    12,    13,   627,   664,   580,   581,
     213,   214,   582,    73,    78,    82,    87,     9,    95,   -31,
     685,    16,   687,    11,    12,    13,  -106,  -275,   -32,   477,
     686,  -275,   478,   694,   695,   838,   696,   701,   704,   871,
     707,   125,     9,   126,   278,   759,   325,  -372,    11,    12,
      13,    30,   613,   761,    48,    24,   270,   271,    25,   272,
     273,   274,   275,   762,   838,   892,    16,   774,   479,   775,
     793,   480,    94,     9,    95,  -250,   680,   724,   726,    11,
      12,    13,   800,   803,   805,    74,    79,    83,    88,   810,
      26,    27,   811,     7,    28,     9,    72,    29,    31,     9,
      99,    11,    12,    13,   813,    11,    12,    13,   837,   842,
     846,   625,    91,    96,   100,   105,   852,    15,   855,    16,
    -256,   861,   856,    16,   721,   722,   858,   860,   727,   865,
     103,     9,   104,   730,   731,   872,   732,    11,    12,    13,
     874,   879,   880,   881,    92,    97,   101,   106,    73,    78,
      82,    87,   128,   133,   137,   142,   890,   887,   895,   130,
       9,   131,   896,   467,   395,   395,    11,    12,    13,   745,
     862,   897,   749,   395,   395,   413,   211,   395,   395,   -27,
     -27,   -27,   -27,   134,     9,   135,   655,   -27,   -27,   -27,
      11,    12,    13,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   212,   -27,   656,  -275,     9,   104,    16,  -251,
     659,   660,    11,    12,    13,   397,   297,   500,   297,  -275,
      74,    79,    83,    88,   465,   501,   724,   726,   726,     7,
      76,     9,    77,   504,   672,   755,   795,    11,    12,    13,
     797,   782,   213,   214,   346,   347,   690,    91,    96,   100,
     105,   788,   520,    15,   741,   353,   746,   427,   434,  -275,
     356,   357,  -258,  -275,   -27,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   518,   463,   717,
     844,   823,   824,   873,   825,   552,   130,     9,   131,   826,
     845,   827,   875,    11,    12,    13,     0,     0,   832,    73,
      78,     0,     0,   109,   114,   556,     0,     0,     0,  -245,
       0,    92,    97,   101,   106,   262,   263,   264,   265,   266,
     267,   268,   269,   277,     0,  -450,  -450,  -450,  -450,  -450,
    -450,  -450,     0,  -450,  -450,  -450,  -450,  -450,     0,  -450,
    -450,  -450,  -450,  -450,  -450,  -450,  -450,  -450,  -450,  -450,
    -450,  -450,  -450,  -450,  -450,  -450,  -450,  -450,  -450,  -450,
       0,     0,     0,     0,  -450,  -257,     0,   444,   445,     0,
    -450,    74,    79,  -450,     0,   110,   115,     0,  -450,  -450,
    -450,     0,     0,     0,  -450,  -450,   139,     9,   140,  -450,
       0,     0,     0,    11,    12,    13,    91,    96,     0,     0,
     127,   132,     0,     0,     0,     0,  -450,   278,  -450,  -450,
     474,  -450,   475,     7,     8,     9,    10,     0,     0,   476,
       0,    11,    12,    13,     0,     0,     0,     0,   321,     0,
       0,   -23,   -23,   -23,   -23,     0,     0,    15,   517,   -23,
     -23,   -23,     0,   522,     0,     0,    92,    97,   101,   106,
     526,   103,     9,   104,   212,   -23,     0,  -275,    11,    12,
      13,     0,     0,     0,     0,  -259,     0,    73,    78,    82,
      87,  -275,   569,     0,   156,   109,   114,   118,   123,   157,
     158,   708,   159,   709,   710,   711,   712,     0,     7,    71,
       9,    72,  -536,     0,   213,   214,    11,    12,    13,     0,
     160,     0,    17,     0,   161,   162,   163,   164,   165,   571,
       0,  -275,    15,   166,    16,  -275,   -23,     0,     0,   167,
       0,     0,   168,     0,     0,     0,     0,   169,   170,   171,
       0,   593,     0,   172,   173,     0,     0,     0,   174,    74,
      79,    83,    88,     0,   139,     9,   140,   110,   115,   119,
     124,    11,    12,    13,     0,     0,     0,   175,   176,   324,
     570,     0,     7,     0,     9,    10,    91,    96,   100,   105,
      11,    12,    13,     0,   127,   132,   136,   141,     0,     0,
       0,   571,     0,     0,     0,     0,    15,     0,    16,    17,
       0,     0,   681,     0,     0,    92,    97,   683,     0,   128,
     133,   147,   148,   282,   283,   284,   593,   692,     0,     0,
       0,     0,   693,     0,   450,     0,  -474,  -474,  -474,  -474,
    -474,  -474,  -474,     0,  -474,  -474,  -474,  -474,  -474,     0,
    -474,  -474,  -474,  -474,  -474,  -474,  -474,  -474,  -474,  -474,
    -474,  -474,  -474,  -474,  -474,     0,  -474,  -474,  -474,  -474,
    -474,     0,     0,     0,   474,  -474,     0,     7,     8,     9,
      10,  -474,     0,   476,  -474,    11,    12,    13,     0,  -474,
    -474,  -474,     0,     0,     0,  -474,  -474,   593,     0,     0,
    -474,    15,   743,     0,     0,   747,   265,   266,   267,   268,
     269,   593,     0,     0,   593,     0,   593,  -474,     0,  -474,
    -474,     0,  -474,     6,     0,  -119,     7,     8,     9,    10,
       7,    85,     9,    86,    11,    12,    13,     0,    11,    12,
      13,   263,   264,   265,   266,   267,   268,   269,     0,    14,
      15,     0,    16,    17,    15,     7,  -536,     9,    77,     7,
     112,     9,   113,    11,    12,    13,     0,    11,    12,    13,
       0,   796,     0,     0,     0,   798,     0,     0,   799,    15,
    -119,   593,     0,    15,   802,    92,    97,   101,   106,  -119,
       0,     0,     0,   128,   133,   137,   142,   776,     0,  -452,
    -452,     0,     0,     0,  -452,  -452,    18,  -452,     0,     0,
    -247,  -452,     0,  -452,  -452,  -452,  -452,  -452,  -452,  -452,
    -452,  -452,  -452,  -452,     0,  -452,     0,  -452,     0,  -452,
    -452,  -452,  -452,  -452,     0,     0,     0,     0,  -452,  -253,
       0,     0,     0,     0,  -452,     0,     0,  -452,     0,     0,
       0,     0,  -452,  -452,  -452,     0,     0,     0,  -452,  -452,
       0,     0,     0,  -452,     7,   107,     9,   108,    89,     9,
      90,     0,    11,    12,    13,    11,    12,    13,     0,     0,
    -452,     0,  -452,  -452,   815,  -452,  -481,  -481,    15,     0,
      16,  -481,  -481,    16,  -481,     0,     0,     0,  -481,     0,
    -481,  -481,  -481,  -481,  -481,  -481,  -481,  -481,  -481,  -481,
    -481,     0,  -481,     0,  -481,     0,  -481,  -481,  -481,  -481,
    -481,     0,     0,     0,     0,  -481,     0,     0,   125,     9,
     126,  -481,     0,     0,  -481,    11,    12,    13,     0,  -481,
    -481,  -481,     0,     0,  -252,  -481,  -481,     0,     0,   242,
    -481,   156,     7,    16,     9,    10,   157,   158,     0,   159,
      11,    12,    13,     0,     0,     0,     0,  -481,     0,  -481,
    -481,     0,  -481,     0,     0,     0,    15,   160,    16,    17,
       0,   161,   162,   163,   164,   165,     0,     0,     0,     0,
     166,     0,     0,    98,     9,    99,   167,     0,     0,   168,
      11,    12,    13,     0,   169,   170,   171,     0,     0,     0,
     172,   173,     0,     0,   587,   174,   588,   148,    16,     0,
       0,   157,   158,     0,   159,     0,     0,     0,     0,     0,
       7,     8,     9,    10,   175,   176,   644,   243,    11,    12,
      13,     0,   160,     0,    17,     0,   161,   162,   163,   164,
     165,     0,     0,     0,    15,   166,    16,     0,   134,     9,
     135,   167,     0,     0,   168,    11,    12,    13,     0,   169,
     170,   171,     0,     0,     0,   172,   173,     0,     0,   589,
     174,   590,   587,    16,   588,   148,     0,     0,     0,   157,
     158,     0,   159,     0,     0,     0,     0,     0,  -303,   175,
     176,     0,   591,     0,     0,     0,     0,     0,     0,     0,
     160,     0,    17,     0,   161,   162,   163,   164,   165,     0,
       0,     0,     0,   166,     0,     0,     0,     0,     0,   167,
       0,     0,   168,     0,     0,     0,     0,   169,   170,   171,
       0,     0,     0,   172,   173,     0,     0,   589,   174,   590,
     587,     0,   156,     0,     0,     0,     0,   157,   158,     0,
     159,     0,     0,     0,     0,     0,  -369,   175,   176,     0,
     591,     0,     0,     0,     0,     0,     0,     0,   160,     0,
      17,     0,   161,   162,   163,   164,   165,     0,     0,     0,
       0,   166,     0,  -316,     0,     0,     0,   167,     0,     0,
     168,     0,     0,     0,     0,   169,   170,   171,     0,     0,
       0,   172,   173,     0,     0,  -316,   174,  -316,   587,     0,
     156,     0,     0,     0,     0,   157,   158,     0,   159,     0,
       0,     7,   107,     9,   108,   175,   176,     0,   591,    11,
      12,    13,     0,     0,     0,     0,   160,     0,    17,     0,
     161,   162,   163,   164,   165,    15,     0,    16,     0,   166,
       0,     0,     0,     0,     0,   167,     0,     0,   168,     0,
       0,     0,     0,   169,   170,   171,     0,     0,     0,   172,
     173,     0,   315,     0,   174,   -19,   -19,   -19,   -19,     0,
       0,     0,     0,   -19,   -19,   -19,     0,     0,     0,     0,
       0,     0,     0,   175,   176,     0,   591,     0,   212,   -19,
       0,  -275,     0,   156,     7,   299,     9,    10,   157,   158,
       0,   159,    11,    12,    13,  -275,     7,   121,     9,   122,
       0,     0,     0,     0,    11,    12,    13,     0,    15,   160,
      16,    17,     0,   161,   162,   163,   164,   165,     0,     0,
      15,     0,   166,     0,   156,     0,   405,     0,   167,   157,
     158,   168,   159,     0,     0,  -275,   169,   170,   300,  -275,
     -19,     0,   172,   173,     0,     0,     0,   174,     0,     0,
     160,     0,    17,     0,   161,   162,   163,   164,   165,     0,
       0,     0,     0,   166,     0,     0,   175,   176,     0,   167,
     301,     0,   168,     0,     0,     0,  -255,   169,   170,   406,
       0,     0,     0,   172,   173,     0,   156,     0,   174,     0,
       0,   157,   158,     0,   159,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   175,   176,     0,
       0,   407,   160,     0,    17,     0,   161,   162,   163,   164,
     165,     0,     0,     0,     0,   166,     0,   156,     0,     0,
       0,   167,   157,   158,   168,   159,     0,     0,     0,   169,
     170,   171,     0,     0,     0,   172,   173,     0,     0,     0,
     174,     0,     0,   160,     0,    17,     0,   161,   162,   163,
     164,   165,     0,     0,     0,     0,   166,     0,     0,   175,
     176,     0,   167,   403,     0,   168,     0,     0,     0,     0,
     169,   170,   171,     0,     0,     0,   172,   173,     0,     0,
       0,   174,     0,     0,     0,     0,     0,   588,   604,     8,
       9,    10,   157,   158,     0,   159,    11,    12,    13,     0,
     175,   176,     0,     0,   496,   605,   606,   607,   608,   609,
     610,   611,    15,   160,    16,    17,     0,   161,   162,   163,
     164,   165,     0,     0,     0,     0,   166,     0,     7,   116,
       9,   117,   167,     0,     0,   168,    11,    12,    13,     0,
     169,   170,   171,     0,     0,     0,   172,   173,     0,     0,
       0,   174,    15,     0,    16,     0,   588,   148,     0,     0,
       0,   157,   158,     0,   159,     0,     0,     0,   612,     0,
     175,   176,     0,   613,   605,   606,   607,   608,   609,   610,
     611,     0,   160,     0,    17,     0,   161,   162,   163,   164,
     165,     0,     0,     0,     0,   166,     0,     7,     8,     9,
      10,   167,     0,     0,   168,    11,    12,    13,  -254,   169,
     170,   171,     0,     0,     0,   172,   173,   156,     0,     0,
     174,    15,   157,   158,     0,   159,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   612,     0,   175,
     176,     0,   613,   160,     0,    17,     0,   161,   162,   163,
     164,   165,     0,     0,     0,     0,   166,     0,     0,     0,
       0,     0,   167,     0,     0,   168,     0,     0,     0,     0,
     169,   170,   171,     0,     0,     0,   172,   173,     0,     0,
       0,   174,   156,     7,     8,     9,    10,   157,   158,     0,
     159,    11,    12,    13,     0,     0,     7,    80,     9,    81,
     175,   176,     0,   438,    11,    12,    13,    15,   160,    16,
      17,     0,   161,   162,   163,   164,   165,     0,     0,     0,
      15,   166,    16,     0,     0,     0,     0,   167,     0,     0,
     168,     0,     0,     0,     0,   169,   170,   171,     0,     0,
       0,   172,   173,     0,   156,     7,   174,     9,    10,   157,
     158,     0,   159,    11,    12,    13,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   175,   176,     0,     0,    15,
     160,    16,    17,     0,   161,   162,   163,   164,   165,     0,
       0,     0,     0,   166,     0,   156,     0,     0,     0,   167,
     157,   158,   168,   159,     0,     0,     0,   169,   170,   171,
       0,     0,     0,   172,   173,     0,     0,     0,   174,     0,
       0,   160,     0,    17,     0,   161,   162,   163,   164,   165,
       0,     0,     0,     0,   166,     0,   156,   175,   176,     0,
     167,   157,   158,   168,   159,     0,     0,     0,   169,   170,
     171,     0,     0,     0,   172,   173,     0,     0,     0,   174,
       0,     0,   160,     0,    17,     0,   161,   162,   163,   164,
     165,     0,     0,     0,     0,   166,   697,   156,   175,   176,
       0,   167,   157,   158,   168,   159,     0,     0,     0,   169,
     170,   171,     0,     0,     0,   172,   173,     0,     0,     0,
     174,     0,     0,   160,     0,    17,     0,   161,   162,   163,
     164,   165,     0,     0,     0,     0,   166,     0,   156,   175,
     176,     0,   167,   157,   158,   168,   159,     0,     0,     0,
     169,   170,   171,     0,     0,     0,   172,   173,     0,     0,
       0,   249,     0,     0,   160,     0,    17,     0,   161,   162,
     163,   164,   165,     0,     0,     0,     0,   166,     0,   466,
     175,   176,     0,   167,   157,   158,   168,   159,     0,     0,
       0,   169,   170,   171,     0,     0,     0,   172,   173,     0,
       0,     0,   251,     0,     0,   160,     0,    17,     0,   161,
     162,   163,   164,   165,     0,     0,     0,     0,   166,     0,
       0,   175,   176,     0,   167,     0,     0,   168,     0,     0,
       0,   751,   169,   170,   171,     0,     0,     0,   172,   173,
       0,     0,     0,   174,     0,     0,     0,     0,     0,   757,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
       0,     0,   175,   176,   253,   254,   255,     0,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   253,   254,   255,   758,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
       0,     0,     0,     0,     0,     0,     0,     0,   253,   254,
     255,   752,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   253,   254,   255,     0,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,     0,     0,     0,     0,     0,     0,
       0,     0,   253,   254,   255,   828,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
       0,   435,   253,   254,   255,     0,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
       0,     0,     0,     0,   253,   254,   255,   436,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,     0,     0,     0,     0,     0,   585,    16,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   253,   254,   255,   750,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,     7,
     116,     9,   117,     7,     0,     9,    81,    11,    12,    13,
       0,    11,    12,    13,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    15,     0,    16,     0,    15,     7,    16,
       9,    10,     7,    76,     9,    77,    11,    12,    13,     0,
      11,    12,    13,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    15,     0,    16,     0,    15,     7,   112,     9,
     113,     7,    85,     9,    86,    11,    12,    13,     0,    11,
      12,    13,     0,     0,     7,   121,     9,   122,     0,     0,
       0,    15,    11,    12,    13,    15,     7,     0,     9,    86,
       0,     0,     0,     0,    11,    12,    13,     0,    15,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      15,   253,   254,   255,   829,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   253,
     254,   255,     0,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   255,     0,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269
};

static const yytype_int16 yycheck[] =
{
      62,     3,    64,     5,     3,     3,     5,     5,     3,   290,
       5,   144,    11,    12,    13,   223,   316,   318,   543,   151,
     468,   550,   322,   143,   274,    24,   296,    26,   219,    28,
     566,    30,   543,    32,    23,    34,   214,    36,   625,    38,
       3,     3,     5,     5,     3,   314,     5,     3,     3,     5,
       5,   381,   599,    55,   161,   162,    55,    55,   229,     5,
      55,     3,   543,     5,   171,    64,     1,    66,    66,   400,
     177,    66,   772,     1,     1,    48,   556,   602,   559,     1,
     410,   188,   306,   414,     9,   174,    59,    60,    61,     1,
     543,     0,    55,    55,   424,   425,    55,     1,    10,    55,
      55,   400,    75,    66,    66,   400,   559,     1,     9,    55,
     460,    84,   543,    55,   625,   414,   816,    40,    41,   414,
      93,   299,   857,   453,   454,   455,   456,   670,     0,   102,
       3,     4,    50,    51,    52,   400,     0,   387,   111,    67,
     665,   684,   689,    68,   625,     3,     4,   120,   498,   414,
     239,   886,   214,    46,    89,   144,   129,   381,    85,   859,
     249,   511,   251,    85,   514,   138,   337,    30,   868,   705,
      30,   602,   625,     3,     4,   174,   506,    89,   508,     3,
       4,    85,    83,    46,    67,   535,    27,    67,   469,    30,
      83,    85,   191,   300,   193,    46,   195,   388,   197,   899,
      58,    67,   201,    44,   203,   381,   338,   754,   340,    67,
      68,    46,   671,   275,   673,   214,    89,   206,   207,   550,
     219,   219,    84,   573,   219,   575,   813,   229,   559,    67,
     229,   229,    83,   457,   229,   208,    89,   299,   468,   381,
     239,   303,    27,    84,   351,    89,     7,    88,    83,   167,
     249,   550,   251,   733,   734,   550,   219,   219,   787,    89,
     559,     3,     4,    89,   559,    89,   229,   229,    44,    30,
     229,   189,   720,   229,   229,     7,    67,   453,   454,   455,
     456,   729,    67,    68,   614,   550,     3,   229,    67,    68,
      66,    83,    68,    67,   559,   545,   358,   505,    30,   406,
     299,     3,   813,     9,    83,   294,    84,   576,    58,   578,
      88,   453,   454,   455,   456,   233,    58,    67,    68,    83,
      67,    67,   311,   312,    88,   555,   556,   326,    88,   328,
      83,   330,   813,   332,     7,   337,     3,     7,   337,   337,
     402,    58,   337,   405,   674,    83,   435,   677,   437,    30,
      67,   876,   877,   703,   272,   273,    58,    30,     1,     7,
     813,     4,     5,     6,     7,    67,    68,    10,    83,    12,
      13,    14,    30,    88,   337,   337,    84,    85,   337,     3,
       4,   337,   337,    67,    68,    28,    67,    68,    46,   388,
     388,    58,   742,   388,     1,   337,     3,     4,    83,    83,
      67,    68,   400,    88,    67,   400,     5,     6,     7,    67,
      68,   334,   335,    12,    13,    14,   414,    67,    68,   414,
     453,   454,   723,   456,   725,   388,   388,   345,   224,     3,
       4,    30,    83,    83,    58,   568,   435,    88,   437,   630,
     721,   400,    83,    67,   400,    83,    89,   777,   639,   730,
      88,     4,     5,     6,     7,   414,   787,   577,   414,    12,
      13,    14,   380,     5,     6,     7,   213,    85,   386,   216,
      12,    13,    14,   220,    85,    28,    84,    30,   477,    84,
     479,   543,   481,    88,   483,    84,    46,    84,   787,   819,
     720,    88,   787,    84,   290,     3,     4,    88,    84,   729,
      67,    68,    88,   733,   734,     6,     7,   807,    83,   809,
       3,    12,    13,    14,   432,    84,   866,   867,   625,    88,
      67,    68,   787,   853,   854,     4,     5,     6,     7,    30,
      84,    84,    84,    12,    13,    14,    88,    83,    46,    84,
     602,   543,    84,    88,   543,   543,    83,   609,   543,    28,
      58,    30,   550,    46,    32,   550,    83,   559,   766,    67,
     559,   559,   485,   486,   559,    58,   555,   556,    84,    67,
     317,   318,    88,   706,    67,    90,   323,   500,   501,   568,
     543,   543,    84,    85,   543,   705,     9,   543,   543,    44,
     579,   550,   339,    84,   550,    83,   559,   559,   394,    44,
     559,   543,    88,   559,   559,    84,    24,    25,    26,    27,
     528,    88,   882,    83,    32,    33,    34,    35,    67,    68,
     416,   417,    46,   625,   894,   543,   625,   625,    67,    68,
     625,   630,   630,    67,    68,   630,    83,   699,    90,   638,
     639,   639,   389,    83,   639,    44,   645,    90,   647,    90,
     649,    89,   651,    85,   653,    85,   655,    85,   657,    46,
     659,     1,   625,   625,   181,   182,   625,   630,   630,   625,
     625,   589,   468,   469,   794,    85,   639,   639,    24,    25,
      26,    27,    83,   625,   602,    83,    32,    33,    34,    35,
     311,   312,   610,    83,   617,   618,   720,   721,     1,    90,
     762,     4,     5,     6,     7,    28,    29,    30,    31,    12,
      13,    14,   774,    36,    37,    38,    39,   706,   780,    58,
      59,    60,    90,     1,   471,    28,     4,    84,     6,     7,
      27,   720,   721,    30,    12,    13,    14,    84,   661,   662,
     729,   730,    27,    88,   733,   734,    88,    44,   810,   811,
      28,   813,    30,    31,    85,   728,     5,     6,     7,   555,
     556,    83,    83,    12,    13,    14,    83,     3,   515,   516,
      67,    68,   519,   191,   192,   193,   194,     6,     7,    46,
      46,    30,    88,    12,    13,    14,    89,    84,    46,   787,
      85,    88,   787,    46,    84,   857,    84,     7,    84,   861,
      84,     5,     6,     7,    85,    84,    84,    85,    12,    13,
      14,   813,    89,    84,   813,   813,    62,    63,   813,    65,
      66,    67,    68,    67,   886,   887,    30,    67,   787,    16,
      85,   787,     5,     6,     7,    84,   583,   633,   634,    12,
      13,    14,    85,    84,    46,   191,   192,   193,   194,    67,
     813,   813,    67,     4,   813,     6,     7,   813,   813,     6,
       7,    12,    13,    14,    67,    12,    13,    14,    17,    83,
      83,   813,   195,   196,   197,   198,    84,    28,    83,    30,
      84,    67,    83,    30,   631,   632,    84,    84,   635,    88,
       5,     6,     7,   640,   641,    90,   643,    12,    13,    14,
      84,    84,    83,     9,    28,    29,    30,    31,   326,   327,
     328,   329,    36,    37,    38,    39,    84,    67,    83,     5,
       6,     7,    83,   387,   720,   721,    12,    13,    14,   676,
     848,    84,   679,   729,   730,   307,     1,   733,   734,     4,
       5,     6,     7,     5,     6,     7,   559,    12,    13,    14,
      12,    13,    14,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    27,    28,   559,    30,     6,     7,    30,    84,
     559,   559,    12,    13,    14,   294,   723,   414,   725,    44,
     326,   327,   328,   329,   386,   414,   782,   783,   784,     4,
       5,     6,     7,   418,   574,   687,   743,    12,    13,    14,
     747,   720,    67,    68,   237,   238,   598,   330,   331,   332,
     333,   733,   434,    28,   674,   248,   677,   337,   345,    84,
     253,   254,    84,    88,    89,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   432,   382,   621,
     817,   788,   789,   863,   791,   471,     5,     6,     7,   796,
     819,   798,   865,    12,    13,    14,    -1,    -1,   805,   477,
     478,    -1,    -1,   481,   482,   486,    -1,    -1,    -1,    84,
      -1,   195,   196,   197,   198,    53,    54,    55,    56,    57,
      58,    59,    60,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,    13,    14,    15,    -1,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    -1,    42,    84,    -1,   360,   361,    -1,
      48,   477,   478,    51,    -1,   481,   482,    -1,    56,    57,
      58,    -1,    -1,    -1,    62,    63,     5,     6,     7,    67,
      -1,    -1,    -1,    12,    13,    14,   479,   480,    -1,    -1,
     483,   484,    -1,    -1,    -1,    -1,    84,    85,    86,    87,
       1,    89,     3,     4,     5,     6,     7,    -1,    -1,    10,
      -1,    12,    13,    14,    -1,    -1,    -1,    -1,     1,    -1,
      -1,     4,     5,     6,     7,    -1,    -1,    28,   431,    12,
      13,    14,    -1,   436,    -1,    -1,   330,   331,   332,   333,
     443,     5,     6,     7,    27,    28,    -1,    30,    12,    13,
      14,    -1,    -1,    -1,    -1,    84,    -1,   645,   646,   647,
     648,    44,     1,    -1,     3,   653,   654,   655,   656,     8,
       9,    15,    11,    17,    18,    19,    20,    -1,     4,     5,
       6,     7,    83,    -1,    67,    68,    12,    13,    14,    -1,
      29,    -1,    31,    -1,    33,    34,    35,    36,    37,   502,
      -1,    84,    28,    42,    30,    88,    89,    -1,    -1,    48,
      -1,    -1,    51,    -1,    -1,    -1,    -1,    56,    57,    58,
      -1,   524,    -1,    62,    63,    -1,    -1,    -1,    67,   645,
     646,   647,   648,    -1,     5,     6,     7,   653,   654,   655,
     656,    12,    13,    14,    -1,    -1,    -1,    86,    87,     1,
      89,    -1,     4,    -1,     6,     7,   649,   650,   651,   652,
      12,    13,    14,    -1,   657,   658,   659,   660,    -1,    -1,
      -1,   574,    -1,    -1,    -1,    -1,    28,    -1,    30,    31,
      -1,    -1,   585,    -1,    -1,   479,   480,   590,    -1,   483,
     484,     3,     4,     5,     6,     7,   599,   600,    -1,    -1,
      -1,    -1,   605,    -1,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    13,    14,    15,    -1,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    33,    34,    35,    36,
      37,    -1,    -1,    -1,     1,    42,    -1,     4,     5,     6,
       7,    48,    -1,    10,    51,    12,    13,    14,    -1,    56,
      57,    58,    -1,    -1,    -1,    62,    63,   670,    -1,    -1,
      67,    28,   675,    -1,    -1,   678,    56,    57,    58,    59,
      60,   684,    -1,    -1,   687,    -1,   689,    84,    -1,    86,
      87,    -1,    89,     1,    -1,     3,     4,     5,     6,     7,
       4,     5,     6,     7,    12,    13,    14,    -1,    12,    13,
      14,    54,    55,    56,    57,    58,    59,    60,    -1,    27,
      28,    -1,    30,    31,    28,     4,    83,     6,     7,     4,
       5,     6,     7,    12,    13,    14,    -1,    12,    13,    14,
      -1,   744,    -1,    -1,    -1,   748,    -1,    -1,   751,    28,
      58,   754,    -1,    28,   757,   649,   650,   651,   652,    67,
      -1,    -1,    -1,   657,   658,   659,   660,     1,    -1,     3,
       4,    -1,    -1,    -1,     8,     9,    84,    11,    -1,    -1,
      84,    15,    -1,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    -1,    29,    -1,    31,    -1,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    -1,    42,    84,
      -1,    -1,    -1,    -1,    48,    -1,    -1,    51,    -1,    -1,
      -1,    -1,    56,    57,    58,    -1,    -1,    -1,    62,    63,
      -1,    -1,    -1,    67,     4,     5,     6,     7,     5,     6,
       7,    -1,    12,    13,    14,    12,    13,    14,    -1,    -1,
      84,    -1,    86,    87,     1,    89,     3,     4,    28,    -1,
      30,     8,     9,    30,    11,    -1,    -1,    -1,    15,    -1,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    -1,    29,    -1,    31,    -1,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,    42,    -1,    -1,     5,     6,
       7,    48,    -1,    -1,    51,    12,    13,    14,    -1,    56,
      57,    58,    -1,    -1,    84,    62,    63,    -1,    -1,     1,
      67,     3,     4,    30,     6,     7,     8,     9,    -1,    11,
      12,    13,    14,    -1,    -1,    -1,    -1,    84,    -1,    86,
      87,    -1,    89,    -1,    -1,    -1,    28,    29,    30,    31,
      -1,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
      42,    -1,    -1,     5,     6,     7,    48,    -1,    -1,    51,
      12,    13,    14,    -1,    56,    57,    58,    -1,    -1,    -1,
      62,    63,    -1,    -1,     1,    67,     3,     4,    30,    -1,
      -1,     8,     9,    -1,    11,    -1,    -1,    -1,    -1,    -1,
       4,     5,     6,     7,    86,    87,    10,    89,    12,    13,
      14,    -1,    29,    -1,    31,    -1,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    28,    42,    30,    -1,     5,     6,
       7,    48,    -1,    -1,    51,    12,    13,    14,    -1,    56,
      57,    58,    -1,    -1,    -1,    62,    63,    -1,    -1,    66,
      67,    68,     1,    30,     3,     4,    -1,    -1,    -1,     8,
       9,    -1,    11,    -1,    -1,    -1,    -1,    -1,    85,    86,
      87,    -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    -1,    31,    -1,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    48,
      -1,    -1,    51,    -1,    -1,    -1,    -1,    56,    57,    58,
      -1,    -1,    -1,    62,    63,    -1,    -1,    66,    67,    68,
       1,    -1,     3,    -1,    -1,    -1,    -1,     8,     9,    -1,
      11,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    -1,
      89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,
      31,    -1,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,    42,    -1,    44,    -1,    -1,    -1,    48,    -1,    -1,
      51,    -1,    -1,    -1,    -1,    56,    57,    58,    -1,    -1,
      -1,    62,    63,    -1,    -1,    66,    67,    68,     1,    -1,
       3,    -1,    -1,    -1,    -1,     8,     9,    -1,    11,    -1,
      -1,     4,     5,     6,     7,    86,    87,    -1,    89,    12,
      13,    14,    -1,    -1,    -1,    -1,    29,    -1,    31,    -1,
      33,    34,    35,    36,    37,    28,    -1,    30,    -1,    42,
      -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    51,    -1,
      -1,    -1,    -1,    56,    57,    58,    -1,    -1,    -1,    62,
      63,    -1,     1,    -1,    67,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    13,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    87,    -1,    89,    -1,    27,    28,
      -1,    30,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,    13,    14,    44,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    13,    14,    -1,    28,    29,
      30,    31,    -1,    33,    34,    35,    36,    37,    -1,    -1,
      28,    -1,    42,    -1,     3,    -1,     5,    -1,    48,     8,
       9,    51,    11,    -1,    -1,    84,    56,    57,    58,    88,
      89,    -1,    62,    63,    -1,    -1,    -1,    67,    -1,    -1,
      29,    -1,    31,    -1,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    86,    87,    -1,    48,
      90,    -1,    51,    -1,    -1,    -1,    84,    56,    57,    58,
      -1,    -1,    -1,    62,    63,    -1,     3,    -1,    67,    -1,
      -1,     8,     9,    -1,    11,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    86,    87,    -1,
      -1,    90,    29,    -1,    31,    -1,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,    42,    -1,     3,    -1,    -1,
      -1,    48,     8,     9,    51,    11,    -1,    -1,    -1,    56,
      57,    58,    -1,    -1,    -1,    62,    63,    -1,    -1,    -1,
      67,    -1,    -1,    29,    -1,    31,    -1,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    -1,    42,    -1,    -1,    86,
      87,    -1,    48,    90,    -1,    51,    -1,    -1,    -1,    -1,
      56,    57,    58,    -1,    -1,    -1,    62,    63,    -1,    -1,
      -1,    67,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    13,    14,    -1,
      86,    87,    -1,    -1,    90,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    -1,    42,    -1,     4,     5,
       6,     7,    48,    -1,    -1,    51,    12,    13,    14,    -1,
      56,    57,    58,    -1,    -1,    -1,    62,    63,    -1,    -1,
      -1,    67,    28,    -1,    30,    -1,     3,     4,    -1,    -1,
      -1,     8,     9,    -1,    11,    -1,    -1,    -1,    84,    -1,
      86,    87,    -1,    89,    21,    22,    23,    24,    25,    26,
      27,    -1,    29,    -1,    31,    -1,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,    42,    -1,     4,     5,     6,
       7,    48,    -1,    -1,    51,    12,    13,    14,    84,    56,
      57,    58,    -1,    -1,    -1,    62,    63,     3,    -1,    -1,
      67,    28,     8,     9,    -1,    11,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    84,    -1,    86,
      87,    -1,    89,    29,    -1,    31,    -1,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    48,    -1,    -1,    51,    -1,    -1,    -1,    -1,
      56,    57,    58,    -1,    -1,    -1,    62,    63,    -1,    -1,
      -1,    67,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    13,    14,    -1,    -1,     4,     5,     6,     7,
      86,    87,    -1,    89,    12,    13,    14,    28,    29,    30,
      31,    -1,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      28,    42,    30,    -1,    -1,    -1,    -1,    48,    -1,    -1,
      51,    -1,    -1,    -1,    -1,    56,    57,    58,    -1,    -1,
      -1,    62,    63,    -1,     3,     4,    67,     6,     7,     8,
       9,    -1,    11,    12,    13,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    87,    -1,    -1,    28,
      29,    30,    31,    -1,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,    42,    -1,     3,    -1,    -1,    -1,    48,
       8,     9,    51,    11,    -1,    -1,    -1,    56,    57,    58,
      -1,    -1,    -1,    62,    63,    -1,    -1,    -1,    67,    -1,
      -1,    29,    -1,    31,    -1,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    -1,    42,    -1,     3,    86,    87,    -1,
      48,     8,     9,    51,    11,    -1,    -1,    -1,    56,    57,
      58,    -1,    -1,    -1,    62,    63,    -1,    -1,    -1,    67,
      -1,    -1,    29,    -1,    31,    -1,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,    42,    84,     3,    86,    87,
      -1,    48,     8,     9,    51,    11,    -1,    -1,    -1,    56,
      57,    58,    -1,    -1,    -1,    62,    63,    -1,    -1,    -1,
      67,    -1,    -1,    29,    -1,    31,    -1,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    -1,    42,    -1,     3,    86,
      87,    -1,    48,     8,     9,    51,    11,    -1,    -1,    -1,
      56,    57,    58,    -1,    -1,    -1,    62,    63,    -1,    -1,
      -1,    67,    -1,    -1,    29,    -1,    31,    -1,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    42,    -1,     3,
      86,    87,    -1,    48,     8,     9,    51,    11,    -1,    -1,
      -1,    56,    57,    58,    -1,    -1,    -1,    62,    63,    -1,
      -1,    -1,    67,    -1,    -1,    29,    -1,    31,    -1,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    -1,    42,    -1,
      -1,    86,    87,    -1,    48,    -1,    -1,    51,    -1,    -1,
      -1,    10,    56,    57,    58,    -1,    -1,    -1,    62,    63,
      -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    10,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    -1,    86,    87,    43,    44,    45,    -1,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,
      45,    90,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    43,    44,    45,    -1,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    44,    45,    90,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    88,    43,    44,    45,    -1,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    -1,    -1,    -1,    43,    44,    45,    88,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    -1,    -1,    -1,    -1,    88,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    44,    45,    83,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,     4,
       5,     6,     7,     4,    -1,     6,     7,    12,    13,    14,
      -1,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    28,    -1,    30,    -1,    28,     4,    30,
       6,     7,     4,     5,     6,     7,    12,    13,    14,    -1,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    30,    -1,    28,     4,     5,     6,
       7,     4,     5,     6,     7,    12,    13,    14,    -1,    12,
      13,    14,    -1,    -1,     4,     5,     6,     7,    -1,    -1,
      -1,    28,    12,    13,    14,    28,     4,    -1,     6,     7,
      -1,    -1,    -1,    -1,    12,    13,    14,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    43,
      44,    45,    -1,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    45,    -1,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,    92,    93,    94,     0,    95,     1,     4,     5,     6,
       7,    12,    13,    14,    27,    28,    30,    31,    84,    96,
      97,    98,   113,   129,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   155,   157,   158,   159,   160,   161,   170,   171,
     197,   198,   199,   200,   205,   290,    96,    84,    85,   170,
     170,   170,    67,    67,    67,     3,    58,    67,   163,   167,
     196,     5,     7,   157,   158,   170,     5,     7,   157,   158,
       5,     7,   157,   158,   170,     5,     7,   157,   158,     5,
       7,   159,   160,   170,     5,     7,   159,   160,     5,     7,
     159,   160,   170,     5,     7,   159,   160,     5,     7,   157,
     158,   170,     5,     7,   157,   158,     5,     7,   157,   158,
     170,     5,     7,   157,   158,     5,     7,   159,   160,   170,
       5,     7,   159,   160,     5,     7,   159,   160,   170,     5,
       7,   159,   160,   129,   129,    84,   171,     3,     4,    89,
     105,    89,   105,    89,   105,    96,     3,     8,     9,    11,
      29,    33,    34,    35,    36,    37,    42,    48,    51,    56,
      57,    58,    62,    63,    67,    86,    87,   106,   107,   109,
     110,   111,   112,   114,   115,   121,   123,   244,   290,    67,
     107,   132,   133,   134,   135,   136,   137,   138,   139,   154,
     217,   132,   133,   134,   135,   153,   156,   169,   170,    84,
      88,     1,    27,    67,    68,   103,   164,   225,     4,    58,
      67,   162,   165,   191,   192,   196,   163,   196,   208,   209,
      89,   208,    89,   204,    89,   114,   114,    67,    67,    67,
     105,   114,     1,    89,   107,   217,   114,    83,    88,    67,
     110,    67,   110,    43,    44,    45,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      62,    63,    65,    66,    67,    68,     9,     1,    85,   233,
     242,   114,     5,     6,     7,   105,   172,   173,   174,    83,
     218,    83,   196,   196,   130,   169,    67,   169,   285,     5,
      58,    90,   107,   154,     1,   124,   125,   126,   232,   251,
     169,   156,   169,    84,    88,     1,    99,   164,    67,   225,
      84,     1,   101,    85,     1,    84,   132,   133,   134,   135,
     136,   137,   138,   139,   152,   153,   210,   290,   201,    85,
     202,     1,   105,   215,   216,   203,   115,   115,   217,    83,
      83,    83,    84,   115,   217,   217,   115,   115,   118,   120,
     117,   116,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   105,   105,   108,   109,   107,    83,
      32,   237,   238,   239,    83,    83,    88,    67,    58,    67,
     219,   221,   222,   223,   224,   225,    83,   167,   196,   123,
     286,   107,   154,    90,    90,     5,    58,    90,   107,    84,
     104,   232,    10,   125,   252,    44,   192,   192,   130,   124,
     169,   285,   124,   169,   129,   129,    84,   210,   208,   169,
     208,    44,    88,   207,   215,    88,    88,    88,    89,   114,
      83,    83,   107,    46,   115,   115,    83,    90,   105,   289,
       1,   128,   226,   227,   228,   229,   230,   231,   232,   243,
     251,   255,   256,   239,    83,   173,     3,   108,   156,   169,
     275,    67,   225,    83,     1,     3,    10,   132,   133,   136,
     137,   140,   141,   144,   145,   150,   151,   277,   280,   281,
     283,   287,   288,    90,   107,   107,    90,    90,   251,   127,
     150,   151,   168,    83,   165,   191,   100,    44,   102,   211,
     213,   251,   212,   214,   251,    85,    85,   115,   216,    85,
     207,   217,   115,   217,   122,    46,   115,    84,    88,   128,
     255,   256,   128,   255,   256,   251,   255,   256,   128,   255,
     256,   232,    85,   252,    83,    88,    83,   222,   223,   221,
     276,   169,   275,    83,   129,   284,   284,    83,    84,    88,
      83,    88,    90,    90,   252,    84,   129,    84,   129,     1,
      89,   115,   175,   251,   166,   251,    88,   252,    88,   252,
     169,   169,   169,    85,    83,    88,    83,     1,     3,    66,
      68,    89,   105,   115,   177,   178,   179,   181,   183,   184,
     119,   105,   252,   234,     4,    21,    22,    23,    24,    25,
      26,    27,    84,    89,   105,   107,   131,   148,   149,   155,
     235,   241,   245,   267,   268,   290,   109,    83,   277,     4,
      58,    67,   193,   194,   195,   196,   220,   221,   222,    58,
      67,   196,   220,   278,    10,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   282,     3,     1,   240,   245,   162,   163,
     176,   252,   175,   252,   130,    46,   191,   130,    46,   196,
     169,   115,   105,   115,   182,    46,    85,    88,   206,    44,
     184,   181,   115,   115,    46,    84,    84,    84,   107,    58,
     105,     7,   269,   251,    84,   129,   129,    84,    15,    17,
      18,    19,    20,   246,   247,   249,   257,   242,   131,    83,
     156,   169,   169,    67,   225,    67,   225,   169,   170,   156,
     169,   169,   169,   129,   129,   245,    84,    84,   177,   240,
     240,   213,   251,   115,    46,   169,   214,   115,    46,   169,
      83,    10,    90,   177,   180,   179,   181,    10,    46,    84,
     107,    84,    67,   252,   162,   185,   191,   163,   188,   196,
     248,   259,   250,   261,    67,    16,     1,   235,   254,     1,
      67,   236,   194,   195,   195,   285,   285,   279,   193,   196,
     220,   196,   220,    85,   252,   169,   115,   169,   115,   115,
      85,   181,   115,    84,   107,    46,    84,   186,    84,   189,
      67,    67,   254,    67,   107,     1,   258,   253,   255,   256,
     107,    83,   277,   169,   169,   169,   169,   169,    90,    46,
      46,    83,   169,   124,   124,   107,   107,    17,   107,   131,
     266,   270,    83,   254,   236,   253,    83,     9,    68,   271,
     272,   273,    84,   187,   190,    83,    83,   262,    84,   265,
      84,    67,   105,    46,    83,    88,   251,   251,   260,   270,
     254,   107,    90,   271,    84,   273,   252,   252,   254,    84,
      83,     9,    46,    83,   245,   245,   263,    67,   123,   274,
      84,   270,   107,    83,    88,    83,    83,    84,   123,   264,
     254
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,    91,    92,    92,    94,    93,    95,    93,    96,    96,
      96,    96,    97,    97,    97,    97,    97,    97,    97,    99,
     100,    98,    98,   101,   102,    98,    98,   103,   104,    98,
      98,   105,   105,   106,   106,   106,   106,   106,   106,   106,
     107,   108,   108,   109,   109,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   111,   112,   113,   114,
     114,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   116,   115,   117,   115,   118,   119,
     115,   120,   115,   115,   115,   121,   121,   121,   121,   122,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   123,   123,   124,   124,   124,   125,
     126,   126,   126,   126,   127,   127,   127,   127,   128,   129,
     130,   131,   131,   131,   131,   131,   131,   132,   132,   132,
     133,   134,   134,   135,   135,   136,   136,   136,   136,   136,
     136,   136,   137,   137,   137,   137,   137,   137,   138,   138,
     138,   138,   138,   138,   139,   139,   139,   139,   139,   140,
     140,   140,   140,   140,   140,   140,   141,   142,   142,   142,
     142,   142,   142,   143,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   145,   145,   145,   145,   145,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   147,
     147,   147,   147,   147,   148,   148,   148,   148,   148,   148,
     148,   148,   149,   149,   149,   149,   149,   149,   149,   149,
     150,   150,   150,   150,   151,   151,   151,   151,   152,   152,
     152,   152,   153,   153,   153,   153,   154,   154,   154,   154,
     154,   154,   154,   154,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     156,   156,   157,   157,   158,   159,   159,   160,   161,   161,
     161,   162,   162,   163,   163,   164,   164,   166,   165,   165,
     168,   167,   167,   169,   169,   170,   170,   171,   172,   172,
     173,   173,   173,   173,   173,   174,   174,   174,   174,   175,
     176,   175,   175,   177,   177,   178,   178,   179,   179,   180,
     179,   179,   182,   181,   181,   181,   183,   183,   184,   184,
     184,   186,   187,   185,   189,   190,   188,   191,   191,   192,
     192,   192,   192,   192,   193,   193,   194,   194,   194,   195,
     195,   195,   195,   195,   196,   196,   196,   196,   196,   197,
     197,   198,   198,   199,   199,   201,   200,   200,   202,   200,
     200,   203,   200,   204,   200,   205,   205,   205,   206,   206,
     207,   207,   208,   208,   209,   209,   209,   210,   210,   210,
     210,   210,   210,   211,   211,   212,   212,   213,   213,   213,
     214,   214,   214,   215,   215,   215,   216,   216,   218,   217,
     219,   219,   220,   220,   220,   221,   221,   222,   222,   223,
     223,   224,   224,   224,   224,   224,   225,   225,   225,   225,
     225,   225,   225,   225,   225,   226,   226,   226,   226,   227,
     227,   227,   227,   227,   228,   228,   228,   228,   229,   229,
     229,   229,   229,   230,   230,   231,   231,   231,   231,   232,
     233,   234,   235,   236,   237,   237,   238,   238,   239,   240,
     240,   241,   242,   242,   243,   243,   244,   245,   246,   246,
     248,   247,   250,   249,   251,   252,   253,   253,   254,   255,
     256,   258,   257,   257,   257,   259,   260,   257,   257,   257,
     261,   262,   263,   264,   257,   265,   257,   266,   266,   267,
     267,   267,   267,   267,   267,   267,   267,   267,   267,   267,
     267,   267,   267,   268,   268,   268,   268,   269,   269,   270,
     270,   271,   271,   272,   272,   273,   273,   274,   274,   276,
     275,   277,   278,   279,   277,   277,   280,   280,   280,   280,
     281,   281,   282,   282,   282,   282,   282,   283,   283,   283,
     283,   283,   284,   286,   285,   287,   287,   288,   288,   289,
     289,   290
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     1,     0,     2,     0,     3,     1,     1,
       5,     2,     3,     4,     4,     2,     2,     2,     1,     0,
       0,     9,     4,     0,     0,     9,     4,     0,     0,     8,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     1,     1,     3,     1,     2,     2,     2,     2,
       2,     4,     2,     4,     2,     2,     1,     1,     1,     1,
       4,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     0,     4,     0,     4,     0,     0,
       7,     0,     5,     3,     3,     1,     1,     1,     1,     0,
       7,     3,     3,     3,     3,     4,     6,     8,     6,     4,
       3,     3,     2,     2,     1,     2,     0,     1,     2,     3,
       1,     1,     2,     2,     4,     4,     2,     2,     3,     0,
       1,     4,     4,     3,     3,     2,     2,     1,     2,     2,
       2,     2,     2,     1,     2,     1,     2,     2,     2,     2,
       2,     2,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     1,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       4,     1,     4,     1,     4,     0,     4,     0,     6,     3,
       0,     6,     3,     0,     1,     1,     2,     6,     1,     3,
       0,     1,     4,     6,     4,     1,     1,     1,     1,     1,
       0,     4,     1,     0,     2,     1,     3,     3,     2,     0,
       4,     1,     0,     4,     1,     1,     1,     2,     2,     5,
       3,     0,     0,     7,     0,     0,     7,     1,     1,     4,
       3,     2,     3,     1,     1,     1,     3,     2,     1,     3,
       2,     3,     3,     4,     3,     4,     3,     2,     1,     1,
       2,     1,     2,     1,     2,     0,     7,     5,     0,     7,
       5,     0,     8,     0,     7,     2,     2,     2,     0,     1,
       0,     1,     1,     2,     0,     3,     2,     3,     4,     3,
       1,     1,     2,     1,     4,     1,     4,     4,     6,     5,
       4,     6,     5,     1,     3,     1,     1,     3,     0,     3,
       0,     1,     0,     1,     2,     1,     1,     1,     3,     2,
       3,     4,     3,     2,     2,     1,     3,     4,     2,     3,
       3,     4,     4,     5,     5,     1,     1,     1,     1,     1,
       2,     2,     2,     2,     1,     2,     2,     2,     1,     2,
       2,     2,     2,     1,     2,     1,     1,     1,     1,     2,
       0,     0,     0,     0,     0,     1,     1,     2,     3,     1,
       2,     1,     1,     5,     1,     1,     2,     2,     2,     2,
       0,     5,     0,     4,     0,     0,     1,     2,     3,     3,
       3,     0,     4,     1,     3,     0,     0,     7,     5,     2,
       0,     0,     0,     0,    12,     0,     6,     2,     1,     1,
       2,     3,     2,     2,     2,     3,     6,     8,    10,    12,
       3,     4,     1,     3,     5,     2,     5,     0,     1,     0,
       1,     0,     1,     1,     3,     4,     7,     1,     3,     0,
       3,     2,     0,     0,     6,     2,     0,     1,     1,     3,
       1,     3,     4,     4,     3,     4,     3,     4,     4,     3,
       4,     3,     1,     0,     3,     1,     2,     1,     3,     1,
       3,     1
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
#line 291 "c-parse.y"
                { if (pedantic)
		    pedwarn ("ISO C forbids an empty source file");
		  finish_file ();
		}
#line 2668 "c-p11531.c"
    break;

  case 3:
#line 296 "c-parse.y"
                {
		  /* In case there were missing closebraces,
		     get us back to the global binding level.  */
		  while (! global_bindings_p ())
		    poplevel (0, 0, 0);
		  finish_fname_decls ();
                  finish_file ();
		}
#line 2681 "c-p11531.c"
    break;

  case 4:
#line 311 "c-parse.y"
        {(yyval.ttype) = NULL_TREE; }
#line 2687 "c-p11531.c"
    break;

  case 6:
#line 312 "c-parse.y"
                  {(yyval.ttype) = NULL_TREE; ggc_collect(); }
#line 2693 "c-p11531.c"
    break;

  case 10:
#line 319 "c-parse.y"
                { STRIP_NOPS ((yyvsp[-2].ttype));
		  if ((TREE_CODE ((yyvsp[-2].ttype)) == ADDR_EXPR
		       && TREE_CODE (TREE_OPERAND ((yyvsp[-2].ttype), 0)) == STRING_CST)
		      || TREE_CODE ((yyvsp[-2].ttype)) == STRING_CST)
		    assemble_asm ((yyvsp[-2].ttype));
		  else
		    error ("argument of `asm' is not a constant string"); }
#line 2705 "c-p11531.c"
    break;

  case 11:
#line 327 "c-parse.y"
                { RESTORE_WARN_FLAGS ((yyvsp[-1].ttype)); }
#line 2711 "c-p11531.c"
    break;

  case 12:
#line 332 "c-parse.y"
                { if (pedantic)
		    error ("ISO C forbids data definition with no type or storage class");
		  else if (!flag_traditional)
		    warning ("data definition has no type or storage class"); 

		  POP_DECLSPEC_STACK; }
#line 2722 "c-p11531.c"
    break;

  case 13:
#line 339 "c-parse.y"
                { POP_DECLSPEC_STACK; }
#line 2728 "c-p11531.c"
    break;

  case 14:
#line 341 "c-parse.y"
                { POP_DECLSPEC_STACK; }
#line 2734 "c-p11531.c"
    break;

  case 15:
#line 343 "c-parse.y"
          { shadow_tag ((yyvsp[-1].ttype)); }
#line 2740 "c-p11531.c"
    break;

  case 18:
#line 347 "c-parse.y"
                { if (pedantic)
		    pedwarn ("ISO C does not allow extra `;' outside of a function"); }
#line 2747 "c-p11531.c"
    break;

  case 19:
#line 353 "c-parse.y"
                { if (! start_function (current_declspecs, (yyvsp[0].ttype),
					all_prefix_attributes))
		    YYERROR1;
		}
#line 2756 "c-p11531.c"
    break;

  case 20:
#line 358 "c-parse.y"
                { store_parm_decls (); }
#line 2762 "c-p11531.c"
    break;

  case 21:
#line 360 "c-parse.y"
                { DECL_SOURCE_FILE (current_function_decl) = (yyvsp[-2].filename);
		  DECL_SOURCE_LINE (current_function_decl) = (yyvsp[-1].lineno);
		  finish_function (0, 1); 
		  POP_DECLSPEC_STACK; }
#line 2771 "c-p11531.c"
    break;

  case 22:
#line 365 "c-parse.y"
                { POP_DECLSPEC_STACK; }
#line 2777 "c-p11531.c"
    break;

  case 23:
#line 367 "c-parse.y"
                { if (! start_function (current_declspecs, (yyvsp[0].ttype),
					all_prefix_attributes))
		    YYERROR1;
		}
#line 2786 "c-p11531.c"
    break;

  case 24:
#line 372 "c-parse.y"
                { store_parm_decls (); }
#line 2792 "c-p11531.c"
    break;

  case 25:
#line 374 "c-parse.y"
                { DECL_SOURCE_FILE (current_function_decl) = (yyvsp[-2].filename);
		  DECL_SOURCE_LINE (current_function_decl) = (yyvsp[-1].lineno);
		  finish_function (0, 1); 
		  POP_DECLSPEC_STACK; }
#line 2801 "c-p11531.c"
    break;

  case 26:
#line 379 "c-parse.y"
                { POP_DECLSPEC_STACK; }
#line 2807 "c-p11531.c"
    break;

  case 27:
#line 381 "c-parse.y"
                { if (! start_function (NULL_TREE, (yyvsp[0].ttype),
					all_prefix_attributes))
		    YYERROR1;
		}
#line 2816 "c-p11531.c"
    break;

  case 28:
#line 386 "c-parse.y"
                { store_parm_decls (); }
#line 2822 "c-p11531.c"
    break;

  case 29:
#line 388 "c-parse.y"
                { DECL_SOURCE_FILE (current_function_decl) = (yyvsp[-2].filename);
		  DECL_SOURCE_LINE (current_function_decl) = (yyvsp[-1].lineno);
		  finish_function (0, 1); 
		  POP_DECLSPEC_STACK; }
#line 2831 "c-p11531.c"
    break;

  case 30:
#line 393 "c-parse.y"
                { POP_DECLSPEC_STACK; }
#line 2837 "c-p11531.c"
    break;

  case 33:
#line 402 "c-parse.y"
                { (yyval.code) = ADDR_EXPR; }
#line 2843 "c-p11531.c"
    break;

  case 34:
#line 404 "c-parse.y"
                { (yyval.code) = NEGATE_EXPR; }
#line 2849 "c-p11531.c"
    break;

  case 35:
#line 406 "c-parse.y"
                { (yyval.code) = CONVERT_EXPR;
  if (warn_traditional && !in_system_header)
    warning ("traditional C rejects the unary plus operator");
		}
#line 2858 "c-p11531.c"
    break;

  case 36:
#line 411 "c-parse.y"
                { (yyval.code) = PREINCREMENT_EXPR; }
#line 2864 "c-p11531.c"
    break;

  case 37:
#line 413 "c-parse.y"
                { (yyval.code) = PREDECREMENT_EXPR; }
#line 2870 "c-p11531.c"
    break;

  case 38:
#line 415 "c-parse.y"
                { (yyval.code) = BIT_NOT_EXPR; }
#line 2876 "c-p11531.c"
    break;

  case 39:
#line 417 "c-parse.y"
                { (yyval.code) = TRUTH_NOT_EXPR; }
#line 2882 "c-p11531.c"
    break;

  case 40:
#line 421 "c-parse.y"
                { (yyval.ttype) = build_compound_expr ((yyvsp[0].ttype)); }
#line 2888 "c-p11531.c"
    break;

  case 41:
#line 426 "c-parse.y"
                { (yyval.ttype) = NULL_TREE; }
#line 2894 "c-p11531.c"
    break;

  case 43:
#line 432 "c-parse.y"
                { (yyval.ttype) = build_tree_list (NULL_TREE, (yyvsp[0].ttype)); }
#line 2900 "c-p11531.c"
    break;

  case 44:
#line 434 "c-parse.y"
                { chainon ((yyvsp[-2].ttype), build_tree_list (NULL_TREE, (yyvsp[0].ttype))); }
#line 2906 "c-p11531.c"
    break;

  case 46:
#line 440 "c-parse.y"
                { (yyval.ttype) = build_indirect_ref ((yyvsp[0].ttype), "unary *"); }
#line 2912 "c-p11531.c"
    break;

  case 47:
#line 443 "c-parse.y"
                { (yyval.ttype) = (yyvsp[0].ttype);
		  RESTORE_WARN_FLAGS ((yyvsp[-1].ttype)); }
#line 2919 "c-p11531.c"
    break;

  case 48:
#line 446 "c-parse.y"
                { (yyval.ttype) = build_unary_op ((yyvsp[-1].code), (yyvsp[0].ttype), 0);
		  overflow_warning ((yyval.ttype)); }
#line 2926 "c-p11531.c"
    break;

  case 49:
#line 450 "c-parse.y"
                { (yyval.ttype) = finish_label_address_expr ((yyvsp[0].ttype)); }
#line 2932 "c-p11531.c"
    break;

  case 50:
#line 467 "c-parse.y"
                { skip_evaluation--;
		  if (TREE_CODE ((yyvsp[0].ttype)) == COMPONENT_REF
		      && DECL_C_BIT_FIELD (TREE_OPERAND ((yyvsp[0].ttype), 1)))
		    error ("`sizeof' applied to a bit-field");
		  (yyval.ttype) = c_sizeof (TREE_TYPE ((yyvsp[0].ttype))); }
#line 2942 "c-p11531.c"
    break;

  case 51:
#line 473 "c-parse.y"
                { skip_evaluation--;
		  (yyval.ttype) = c_sizeof (groktypename ((yyvsp[-1].ttype))); }
#line 2949 "c-p11531.c"
    break;

  case 52:
#line 476 "c-parse.y"
                { skip_evaluation--;
		  (yyval.ttype) = c_alignof_expr ((yyvsp[0].ttype)); }
#line 2956 "c-p11531.c"
    break;

  case 53:
#line 479 "c-parse.y"
                { skip_evaluation--;
		  (yyval.ttype) = c_alignof (groktypename ((yyvsp[-1].ttype))); }
#line 2963 "c-p11531.c"
    break;

  case 54:
#line 482 "c-parse.y"
                { (yyval.ttype) = build_unary_op (REALPART_EXPR, (yyvsp[0].ttype), 0); }
#line 2969 "c-p11531.c"
    break;

  case 55:
#line 484 "c-parse.y"
                { (yyval.ttype) = build_unary_op (IMAGPART_EXPR, (yyvsp[0].ttype), 0); }
#line 2975 "c-p11531.c"
    break;

  case 56:
#line 488 "c-parse.y"
               { skip_evaluation++; }
#line 2981 "c-p11531.c"
    break;

  case 57:
#line 492 "c-parse.y"
                { skip_evaluation++; }
#line 2987 "c-p11531.c"
    break;

  case 58:
#line 496 "c-parse.y"
               { skip_evaluation++; }
#line 2993 "c-p11531.c"
    break;

  case 60:
#line 502 "c-parse.y"
                { (yyval.ttype) = c_cast_expr ((yyvsp[-2].ttype), (yyvsp[0].ttype)); }
#line 2999 "c-p11531.c"
    break;

  case 62:
#line 508 "c-parse.y"
                { (yyval.ttype) = parser_build_binary_op ((yyvsp[-1].code), (yyvsp[-2].ttype), (yyvsp[0].ttype)); }
#line 3005 "c-p11531.c"
    break;

  case 63:
#line 510 "c-parse.y"
                { (yyval.ttype) = parser_build_binary_op ((yyvsp[-1].code), (yyvsp[-2].ttype), (yyvsp[0].ttype)); }
#line 3011 "c-p11531.c"
    break;

  case 64:
#line 512 "c-parse.y"
                { (yyval.ttype) = parser_build_binary_op ((yyvsp[-1].code), (yyvsp[-2].ttype), (yyvsp[0].ttype)); }
#line 3017 "c-p11531.c"
    break;

  case 65:
#line 514 "c-parse.y"
                { (yyval.ttype) = parser_build_binary_op ((yyvsp[-1].code), (yyvsp[-2].ttype), (yyvsp[0].ttype)); }
#line 3023 "c-p11531.c"
    break;

  case 66:
#line 516 "c-parse.y"
                { (yyval.ttype) = parser_build_binary_op ((yyvsp[-1].code), (yyvsp[-2].ttype), (yyvsp[0].ttype)); }
#line 3029 "c-p11531.c"
    break;

  case 67:
#line 518 "c-parse.y"
                { (yyval.ttype) = parser_build_binary_op ((yyvsp[-1].code), (yyvsp[-2].ttype), (yyvsp[0].ttype)); }
#line 3035 "c-p11531.c"
    break;

  case 68:
#line 520 "c-parse.y"
                { (yyval.ttype) = parser_build_binary_op ((yyvsp[-1].code), (yyvsp[-2].ttype), (yyvsp[0].ttype)); }
#line 3041 "c-p11531.c"
    break;

  case 69:
#line 522 "c-parse.y"
                { (yyval.ttype) = parser_build_binary_op ((yyvsp[-1].code), (yyvsp[-2].ttype), (yyvsp[0].ttype)); }
#line 3047 "c-p11531.c"
    break;

  case 70:
#line 524 "c-parse.y"
                { (yyval.ttype) = parser_build_binary_op ((yyvsp[-1].code), (yyvsp[-2].ttype), (yyvsp[0].ttype)); }
#line 3053 "c-p11531.c"
    break;

  case 71:
#line 526 "c-parse.y"
                { (yyval.ttype) = parser_build_binary_op ((yyvsp[-1].code), (yyvsp[-2].ttype), (yyvsp[0].ttype)); }
#line 3059 "c-p11531.c"
    break;

  case 72:
#line 528 "c-parse.y"
                { (yyval.ttype) = parser_build_binary_op ((yyvsp[-1].code), (yyvsp[-2].ttype), (yyvsp[0].ttype)); }
#line 3065 "c-p11531.c"
    break;

  case 73:
#line 530 "c-parse.y"
                { (yyval.ttype) = parser_build_binary_op ((yyvsp[-1].code), (yyvsp[-2].ttype), (yyvsp[0].ttype)); }
#line 3071 "c-p11531.c"
    break;

  case 74:
#line 532 "c-parse.y"
                { (yyvsp[-1].ttype) = truthvalue_conversion (default_conversion ((yyvsp[-1].ttype)));
		  skip_evaluation += (yyvsp[-1].ttype) == boolean_false_node; }
#line 3078 "c-p11531.c"
    break;

  case 75:
#line 535 "c-parse.y"
                { skip_evaluation -= (yyvsp[-3].ttype) == boolean_false_node;
		  (yyval.ttype) = parser_build_binary_op (TRUTH_ANDIF_EXPR, (yyvsp[-3].ttype), (yyvsp[0].ttype)); }
#line 3085 "c-p11531.c"
    break;

  case 76:
#line 538 "c-parse.y"
                { (yyvsp[-1].ttype) = truthvalue_conversion (default_conversion ((yyvsp[-1].ttype)));
		  skip_evaluation += (yyvsp[-1].ttype) == boolean_true_node; }
#line 3092 "c-p11531.c"
    break;

  case 77:
#line 541 "c-parse.y"
                { skip_evaluation -= (yyvsp[-3].ttype) == boolean_true_node;
		  (yyval.ttype) = parser_build_binary_op (TRUTH_ORIF_EXPR, (yyvsp[-3].ttype), (yyvsp[0].ttype)); }
#line 3099 "c-p11531.c"
    break;

  case 78:
#line 544 "c-parse.y"
                { (yyvsp[-1].ttype) = truthvalue_conversion (default_conversion ((yyvsp[-1].ttype)));
		  skip_evaluation += (yyvsp[-1].ttype) == boolean_false_node; }
#line 3106 "c-p11531.c"
    break;

  case 79:
#line 547 "c-parse.y"
                { skip_evaluation += (((yyvsp[-4].ttype) == boolean_true_node)
				      - ((yyvsp[-4].ttype) == boolean_false_node)); }
#line 3113 "c-p11531.c"
    break;

  case 80:
#line 550 "c-parse.y"
                { skip_evaluation -= (yyvsp[-6].ttype) == boolean_true_node;
		  (yyval.ttype) = build_conditional_expr ((yyvsp[-6].ttype), (yyvsp[-3].ttype), (yyvsp[0].ttype)); }
#line 3120 "c-p11531.c"
    break;

  case 81:
#line 553 "c-parse.y"
                { if (pedantic)
		    pedwarn ("ISO C forbids omitting the middle term of a ?: expression");
		  /* Make sure first operand is calculated only once.  */
		  (yyvsp[0].ttype) = save_expr ((yyvsp[-1].ttype));
		  (yyvsp[-1].ttype) = truthvalue_conversion (default_conversion ((yyvsp[0].ttype)));
		  skip_evaluation += (yyvsp[-1].ttype) == boolean_true_node; }
#line 3131 "c-p11531.c"
    break;

  case 82:
#line 560 "c-parse.y"
                { skip_evaluation -= (yyvsp[-4].ttype) == boolean_true_node;
		  (yyval.ttype) = build_conditional_expr ((yyvsp[-4].ttype), (yyvsp[-3].ttype), (yyvsp[0].ttype)); }
#line 3138 "c-p11531.c"
    break;

  case 83:
#line 563 "c-parse.y"
                { char class;
		  (yyval.ttype) = build_modify_expr ((yyvsp[-2].ttype), NOP_EXPR, (yyvsp[0].ttype));
		  class = TREE_CODE_CLASS (TREE_CODE ((yyval.ttype)));
		  if (IS_EXPR_CODE_CLASS (class))
		    C_SET_EXP_ORIGINAL_CODE ((yyval.ttype), MODIFY_EXPR);
		}
#line 3149 "c-p11531.c"
    break;

  case 84:
#line 570 "c-parse.y"
                { char class;
		  (yyval.ttype) = build_modify_expr ((yyvsp[-2].ttype), (yyvsp[-1].code), (yyvsp[0].ttype));
		  /* This inhibits warnings in truthvalue_conversion.  */
		  class = TREE_CODE_CLASS (TREE_CODE ((yyval.ttype)));
		  if (IS_EXPR_CODE_CLASS (class))
		    C_SET_EXP_ORIGINAL_CODE ((yyval.ttype), ERROR_MARK);
		}
#line 3161 "c-p11531.c"
    break;

  case 85:
#line 581 "c-parse.y"
                {
		  if (yychar == YYEMPTY)
		    yychar = YYLEX;
		  (yyval.ttype) = build_external_ref ((yyvsp[0].ttype), yychar == '(');
		}
#line 3171 "c-p11531.c"
    break;

  case 87:
#line 588 "c-parse.y"
                { (yyval.ttype) = combine_strings ((yyvsp[0].ttype)); }
#line 3177 "c-p11531.c"
    break;

  case 88:
#line 590 "c-parse.y"
                { (yyval.ttype) = fname_decl (C_RID_CODE ((yyval.ttype)), (yyval.ttype)); }
#line 3183 "c-p11531.c"
    break;

  case 89:
#line 592 "c-parse.y"
                { start_init (NULL_TREE, NULL, 0);
		  (yyvsp[-2].ttype) = groktypename ((yyvsp[-2].ttype));
		  really_start_incremental_init ((yyvsp[-2].ttype)); }
#line 3191 "c-p11531.c"
    break;

  case 90:
#line 596 "c-parse.y"
                { tree constructor = pop_init_level (0);
		  tree type = (yyvsp[-5].ttype);
		  finish_init ();

		  if (pedantic && ! flag_isoc99)
		    pedwarn ("ISO C89 forbids compound literals");
		  (yyval.ttype) = build_compound_literal (type, constructor);
		}
#line 3204 "c-p11531.c"
    break;

  case 91:
#line 605 "c-parse.y"
                { char class = TREE_CODE_CLASS (TREE_CODE ((yyvsp[-1].ttype)));
		  if (IS_EXPR_CODE_CLASS (class))
		    C_SET_EXP_ORIGINAL_CODE ((yyvsp[-1].ttype), ERROR_MARK);
		  (yyval.ttype) = (yyvsp[-1].ttype); }
#line 3213 "c-p11531.c"
    break;

  case 92:
#line 610 "c-parse.y"
                { (yyval.ttype) = error_mark_node; }
#line 3219 "c-p11531.c"
    break;

  case 93:
#line 612 "c-parse.y"
                 { tree saved_last_tree;

		   if (pedantic)
		     pedwarn ("ISO C forbids braced-groups within expressions");
		  pop_label_level ();

		  saved_last_tree = COMPOUND_BODY ((yyvsp[-2].ttype));
		  RECHAIN_STMTS ((yyvsp[-2].ttype), COMPOUND_BODY ((yyvsp[-2].ttype)));
		  last_tree = saved_last_tree;
		  TREE_CHAIN (last_tree) = NULL_TREE;
		  if (!last_expr_type)
		    last_expr_type = void_type_node;
		  (yyval.ttype) = build1 (STMT_EXPR, last_expr_type, (yyvsp[-2].ttype));
		  TREE_SIDE_EFFECTS ((yyval.ttype)) = 1;
		}
#line 3239 "c-p11531.c"
    break;

  case 94:
#line 628 "c-parse.y"
                {
		  pop_label_level ();
		  last_tree = COMPOUND_BODY ((yyvsp[-2].ttype));
		  TREE_CHAIN (last_tree) = NULL_TREE;
		  (yyval.ttype) = error_mark_node;
		}
#line 3250 "c-p11531.c"
    break;

  case 95:
#line 635 "c-parse.y"
                { (yyval.ttype) = build_function_call ((yyvsp[-3].ttype), (yyvsp[-1].ttype)); }
#line 3256 "c-p11531.c"
    break;

  case 96:
#line 637 "c-parse.y"
                { (yyval.ttype) = build_va_arg ((yyvsp[-3].ttype), groktypename ((yyvsp[-1].ttype))); }
#line 3262 "c-p11531.c"
    break;

  case 97:
#line 640 "c-parse.y"
                {
                  tree c;

                  c = fold ((yyvsp[-5].ttype));
                  STRIP_NOPS (c);
                  if (TREE_CODE (c) != INTEGER_CST)
                    error ("first argument to __builtin_choose_expr not a constant");
                  (yyval.ttype) = integer_zerop (c) ? (yyvsp[-1].ttype) : (yyvsp[-3].ttype);
		}
#line 3276 "c-p11531.c"
    break;

  case 98:
#line 650 "c-parse.y"
                {
		  tree e1, e2;

		  e1 = TYPE_MAIN_VARIANT (groktypename ((yyvsp[-3].ttype)));
		  e2 = TYPE_MAIN_VARIANT (groktypename ((yyvsp[-1].ttype)));

		  (yyval.ttype) = comptypes (e1, e2)
		    ? build_int_2 (1, 0) : build_int_2 (0, 0);
		}
#line 3290 "c-p11531.c"
    break;

  case 99:
#line 660 "c-parse.y"
                { (yyval.ttype) = build_array_ref ((yyvsp[-3].ttype), (yyvsp[-1].ttype)); }
#line 3296 "c-p11531.c"
    break;

  case 100:
#line 662 "c-parse.y"
                {
		      (yyval.ttype) = build_component_ref ((yyvsp[-2].ttype), (yyvsp[0].ttype));
		}
#line 3304 "c-p11531.c"
    break;

  case 101:
#line 666 "c-parse.y"
                {
                  tree expr = build_indirect_ref ((yyvsp[-2].ttype), "->");

			(yyval.ttype) = build_component_ref (expr, (yyvsp[0].ttype));
		}
#line 3314 "c-p11531.c"
    break;

  case 102:
#line 672 "c-parse.y"
                { (yyval.ttype) = build_unary_op (POSTINCREMENT_EXPR, (yyvsp[-1].ttype), 0); }
#line 3320 "c-p11531.c"
    break;

  case 103:
#line 674 "c-parse.y"
                { (yyval.ttype) = build_unary_op (POSTDECREMENT_EXPR, (yyvsp[-1].ttype), 0); }
#line 3326 "c-p11531.c"
    break;

  case 105:
#line 681 "c-parse.y"
                {
                  static int last_lineno = 0;
                  static const char *last_input_filename = 0;
                  (yyval.ttype) = chainon ((yyvsp[-1].ttype), (yyvsp[0].ttype));
		  if (warn_traditional && !in_system_header
		      && (lineno != last_lineno || !last_input_filename ||
			  strcmp (last_input_filename, input_filename)))
		    {
		      warning ("traditional C rejects string concatenation");
		      last_lineno = lineno;
		      last_input_filename = input_filename;
		    }
		}
#line 3344 "c-p11531.c"
    break;

  case 108:
#line 702 "c-parse.y"
                { c_mark_varargs ();
		  if (pedantic)
		    pedwarn ("ISO C does not permit use of `varargs.h'"); }
#line 3352 "c-p11531.c"
    break;

  case 109:
#line 712 "c-parse.y"
                { }
#line 3358 "c-p11531.c"
    break;

  case 114:
#line 728 "c-parse.y"
                { POP_DECLSPEC_STACK; }
#line 3364 "c-p11531.c"
    break;

  case 115:
#line 730 "c-parse.y"
                { POP_DECLSPEC_STACK; }
#line 3370 "c-p11531.c"
    break;

  case 116:
#line 732 "c-parse.y"
                { shadow_tag_warned ((yyvsp[-1].ttype), 1);
		  pedwarn ("empty declaration"); }
#line 3377 "c-p11531.c"
    break;

  case 117:
#line 735 "c-parse.y"
                { pedwarn ("empty declaration"); }
#line 3383 "c-p11531.c"
    break;

  case 118:
#line 744 "c-parse.y"
                { }
#line 3389 "c-p11531.c"
    break;

  case 119:
#line 752 "c-parse.y"
                { pending_xref_error ();
		  PUSH_DECLSPEC_STACK;
		  split_specs_attrs ((yyvsp[0].ttype),
				     &current_declspecs, &prefix_attributes);
		  all_prefix_attributes = prefix_attributes; }
#line 3399 "c-p11531.c"
    break;

  case 120:
#line 763 "c-parse.y"
                { all_prefix_attributes = chainon ((yyvsp[0].ttype), prefix_attributes); }
#line 3405 "c-p11531.c"
    break;

  case 121:
#line 768 "c-parse.y"
                { POP_DECLSPEC_STACK; }
#line 3411 "c-p11531.c"
    break;

  case 122:
#line 770 "c-parse.y"
                { POP_DECLSPEC_STACK; }
#line 3417 "c-p11531.c"
    break;

  case 123:
#line 772 "c-parse.y"
                { POP_DECLSPEC_STACK; }
#line 3423 "c-p11531.c"
    break;

  case 124:
#line 774 "c-parse.y"
                { POP_DECLSPEC_STACK; }
#line 3429 "c-p11531.c"
    break;

  case 125:
#line 776 "c-parse.y"
                { shadow_tag ((yyvsp[-1].ttype)); }
#line 3435 "c-p11531.c"
    break;

  case 126:
#line 778 "c-parse.y"
                { RESTORE_WARN_FLAGS ((yyvsp[-1].ttype)); }
#line 3441 "c-p11531.c"
    break;

  case 127:
#line 835 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), NULL_TREE);
		  TREE_STATIC ((yyval.ttype)) = 1; }
#line 3448 "c-p11531.c"
    break;

  case 128:
#line 838 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = 1; }
#line 3455 "c-p11531.c"
    break;

  case 129:
#line 841 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = 1; }
#line 3462 "c-p11531.c"
    break;

  case 130:
#line 847 "c-parse.y"
                { (yyval.ttype) = tree_cons ((yyvsp[0].ttype), NULL_TREE, (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = TREE_STATIC ((yyvsp[-1].ttype)); }
#line 3469 "c-p11531.c"
    break;

  case 131:
#line 853 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = 1; }
#line 3476 "c-p11531.c"
    break;

  case 132:
#line 856 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = 1; }
#line 3483 "c-p11531.c"
    break;

  case 133:
#line 862 "c-parse.y"
                { (yyval.ttype) = tree_cons ((yyvsp[0].ttype), NULL_TREE, NULL_TREE);
		  TREE_STATIC ((yyval.ttype)) = 0; }
#line 3490 "c-p11531.c"
    break;

  case 134:
#line 865 "c-parse.y"
                { (yyval.ttype) = tree_cons ((yyvsp[0].ttype), NULL_TREE, (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = TREE_STATIC ((yyvsp[-1].ttype)); }
#line 3497 "c-p11531.c"
    break;

  case 135:
#line 871 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), NULL_TREE);
		  TREE_STATIC ((yyval.ttype)) = 1; }
#line 3504 "c-p11531.c"
    break;

  case 136:
#line 874 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = 1; }
#line 3511 "c-p11531.c"
    break;

  case 137:
#line 877 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = 1; }
#line 3518 "c-p11531.c"
    break;

  case 138:
#line 880 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = 1; }
#line 3525 "c-p11531.c"
    break;

  case 139:
#line 883 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = 1; }
#line 3532 "c-p11531.c"
    break;

  case 140:
#line 886 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = 1; }
#line 3539 "c-p11531.c"
    break;

  case 141:
#line 889 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = 1; }
#line 3546 "c-p11531.c"
    break;

  case 142:
#line 895 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), NULL_TREE);
		  TREE_STATIC ((yyval.ttype)) = 1; }
#line 3553 "c-p11531.c"
    break;

  case 143:
#line 898 "c-parse.y"
                { (yyval.ttype) = tree_cons ((yyvsp[0].ttype), NULL_TREE, (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = TREE_STATIC ((yyvsp[-1].ttype)); }
#line 3560 "c-p11531.c"
    break;

  case 144:
#line 901 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = 1; }
#line 3567 "c-p11531.c"
    break;

  case 145:
#line 904 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = 1; }
#line 3574 "c-p11531.c"
    break;

  case 146:
#line 907 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = 1; }
#line 3581 "c-p11531.c"
    break;

  case 147:
#line 910 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = 1; }
#line 3588 "c-p11531.c"
    break;

  case 148:
#line 916 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = 1; }
#line 3595 "c-p11531.c"
    break;

  case 149:
#line 919 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = 1; }
#line 3602 "c-p11531.c"
    break;

  case 150:
#line 922 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = 1; }
#line 3609 "c-p11531.c"
    break;

  case 151:
#line 925 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = 1; }
#line 3616 "c-p11531.c"
    break;

  case 152:
#line 928 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = 1; }
#line 3623 "c-p11531.c"
    break;

  case 153:
#line 931 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = 1; }
#line 3630 "c-p11531.c"
    break;

  case 154:
#line 937 "c-parse.y"
                { (yyval.ttype) = tree_cons ((yyvsp[0].ttype), NULL_TREE, (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = TREE_STATIC ((yyvsp[-1].ttype)); }
#line 3637 "c-p11531.c"
    break;

  case 155:
#line 940 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = 1; }
#line 3644 "c-p11531.c"
    break;

  case 156:
#line 943 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = 1; }
#line 3651 "c-p11531.c"
    break;

  case 157:
#line 946 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = 1; }
#line 3658 "c-p11531.c"
    break;

  case 158:
#line 949 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = 1; }
#line 3665 "c-p11531.c"
    break;

  case 159:
#line 955 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), NULL_TREE);
		  TREE_STATIC ((yyval.ttype)) = 0; }
#line 3672 "c-p11531.c"
    break;

  case 160:
#line 958 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = 1; }
#line 3679 "c-p11531.c"
    break;

  case 161:
#line 961 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = 1; }
#line 3686 "c-p11531.c"
    break;

  case 162:
#line 964 "c-parse.y"
                { if (extra_warnings && TREE_STATIC ((yyvsp[-1].ttype)))
		    warning ("`%s' is not at beginning of declaration",
			     IDENTIFIER_POINTER ((yyvsp[0].ttype)));
		  (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = TREE_STATIC ((yyvsp[-1].ttype)); }
#line 3696 "c-p11531.c"
    break;

  case 163:
#line 970 "c-parse.y"
                { if (extra_warnings && TREE_STATIC ((yyvsp[-1].ttype)))
		    warning ("`%s' is not at beginning of declaration",
			     IDENTIFIER_POINTER ((yyvsp[0].ttype)));
		  (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = TREE_STATIC ((yyvsp[-1].ttype)); }
#line 3706 "c-p11531.c"
    break;

  case 164:
#line 976 "c-parse.y"
                { if (extra_warnings && TREE_STATIC ((yyvsp[-1].ttype)))
		    warning ("`%s' is not at beginning of declaration",
			     IDENTIFIER_POINTER ((yyvsp[0].ttype)));
		  (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = TREE_STATIC ((yyvsp[-1].ttype)); }
#line 3716 "c-p11531.c"
    break;

  case 165:
#line 982 "c-parse.y"
                { if (extra_warnings && TREE_STATIC ((yyvsp[-1].ttype)))
		    warning ("`%s' is not at beginning of declaration",
			     IDENTIFIER_POINTER ((yyvsp[0].ttype)));
		  (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = TREE_STATIC ((yyvsp[-1].ttype)); }
#line 3726 "c-p11531.c"
    break;

  case 166:
#line 991 "c-parse.y"
                { (yyval.ttype) = tree_cons ((yyvsp[0].ttype), NULL_TREE, (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = TREE_STATIC ((yyvsp[-1].ttype)); }
#line 3733 "c-p11531.c"
    break;

  case 167:
#line 997 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = 1; }
#line 3740 "c-p11531.c"
    break;

  case 168:
#line 1000 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = 1; }
#line 3747 "c-p11531.c"
    break;

  case 169:
#line 1003 "c-parse.y"
                { if (extra_warnings && TREE_STATIC ((yyvsp[-1].ttype)))
		    warning ("`%s' is not at beginning of declaration",
			     IDENTIFIER_POINTER ((yyvsp[0].ttype)));
		  (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = TREE_STATIC ((yyvsp[-1].ttype)); }
#line 3757 "c-p11531.c"
    break;

  case 170:
#line 1009 "c-parse.y"
                { if (extra_warnings && TREE_STATIC ((yyvsp[-1].ttype)))
		    warning ("`%s' is not at beginning of declaration",
			     IDENTIFIER_POINTER ((yyvsp[0].ttype)));
		  (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = TREE_STATIC ((yyvsp[-1].ttype)); }
#line 3767 "c-p11531.c"
    break;

  case 171:
#line 1015 "c-parse.y"
                { if (extra_warnings && TREE_STATIC ((yyvsp[-1].ttype)))
		    warning ("`%s' is not at beginning of declaration",
			     IDENTIFIER_POINTER ((yyvsp[0].ttype)));
		  (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = TREE_STATIC ((yyvsp[-1].ttype)); }
#line 3777 "c-p11531.c"
    break;

  case 172:
#line 1021 "c-parse.y"
                { if (extra_warnings && TREE_STATIC ((yyvsp[-1].ttype)))
		    warning ("`%s' is not at beginning of declaration",
			     IDENTIFIER_POINTER ((yyvsp[0].ttype)));
		  (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = TREE_STATIC ((yyvsp[-1].ttype)); }
#line 3787 "c-p11531.c"
    break;

  case 173:
#line 1030 "c-parse.y"
                { (yyval.ttype) = tree_cons ((yyvsp[0].ttype), NULL_TREE, (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = TREE_STATIC ((yyvsp[-1].ttype)); }
#line 3794 "c-p11531.c"
    break;

  case 174:
#line 1036 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = 1; }
#line 3801 "c-p11531.c"
    break;

  case 175:
#line 1039 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = 1; }
#line 3808 "c-p11531.c"
    break;

  case 176:
#line 1042 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = 1; }
#line 3815 "c-p11531.c"
    break;

  case 177:
#line 1045 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = 1; }
#line 3822 "c-p11531.c"
    break;

  case 178:
#line 1048 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = 1; }
#line 3829 "c-p11531.c"
    break;

  case 179:
#line 1051 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = 1; }
#line 3836 "c-p11531.c"
    break;

  case 180:
#line 1054 "c-parse.y"
                { if (extra_warnings && TREE_STATIC ((yyvsp[-1].ttype)))
		    warning ("`%s' is not at beginning of declaration",
			     IDENTIFIER_POINTER ((yyvsp[0].ttype)));
		  (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = TREE_STATIC ((yyvsp[-1].ttype)); }
#line 3846 "c-p11531.c"
    break;

  case 181:
#line 1060 "c-parse.y"
                { if (extra_warnings && TREE_STATIC ((yyvsp[-1].ttype)))
		    warning ("`%s' is not at beginning of declaration",
			     IDENTIFIER_POINTER ((yyvsp[0].ttype)));
		  (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = TREE_STATIC ((yyvsp[-1].ttype)); }
#line 3856 "c-p11531.c"
    break;

  case 182:
#line 1066 "c-parse.y"
                { if (extra_warnings && TREE_STATIC ((yyvsp[-1].ttype)))
		    warning ("`%s' is not at beginning of declaration",
			     IDENTIFIER_POINTER ((yyvsp[0].ttype)));
		  (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = TREE_STATIC ((yyvsp[-1].ttype)); }
#line 3866 "c-p11531.c"
    break;

  case 183:
#line 1072 "c-parse.y"
                { if (extra_warnings && TREE_STATIC ((yyvsp[-1].ttype)))
		    warning ("`%s' is not at beginning of declaration",
			     IDENTIFIER_POINTER ((yyvsp[0].ttype)));
		  (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = TREE_STATIC ((yyvsp[-1].ttype)); }
#line 3876 "c-p11531.c"
    break;

  case 184:
#line 1081 "c-parse.y"
                { (yyval.ttype) = tree_cons ((yyvsp[0].ttype), NULL_TREE, (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = TREE_STATIC ((yyvsp[-1].ttype)); }
#line 3883 "c-p11531.c"
    break;

  case 185:
#line 1084 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = 1; }
#line 3890 "c-p11531.c"
    break;

  case 186:
#line 1087 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = 1; }
#line 3897 "c-p11531.c"
    break;

  case 187:
#line 1090 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = 1; }
#line 3904 "c-p11531.c"
    break;

  case 188:
#line 1093 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = 1; }
#line 3911 "c-p11531.c"
    break;

  case 189:
#line 1099 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = 1; }
#line 3918 "c-p11531.c"
    break;

  case 190:
#line 1102 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = 1; }
#line 3925 "c-p11531.c"
    break;

  case 191:
#line 1105 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = 1; }
#line 3932 "c-p11531.c"
    break;

  case 192:
#line 1108 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = 1; }
#line 3939 "c-p11531.c"
    break;

  case 193:
#line 1111 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = 1; }
#line 3946 "c-p11531.c"
    break;

  case 194:
#line 1114 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = 1; }
#line 3953 "c-p11531.c"
    break;

  case 195:
#line 1117 "c-parse.y"
                { if (extra_warnings && TREE_STATIC ((yyvsp[-1].ttype)))
		    warning ("`%s' is not at beginning of declaration",
			     IDENTIFIER_POINTER ((yyvsp[0].ttype)));
		  (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = TREE_STATIC ((yyvsp[-1].ttype)); }
#line 3963 "c-p11531.c"
    break;

  case 196:
#line 1123 "c-parse.y"
                { if (extra_warnings && TREE_STATIC ((yyvsp[-1].ttype)))
		    warning ("`%s' is not at beginning of declaration",
			     IDENTIFIER_POINTER ((yyvsp[0].ttype)));
		  (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = TREE_STATIC ((yyvsp[-1].ttype)); }
#line 3973 "c-p11531.c"
    break;

  case 197:
#line 1129 "c-parse.y"
                { if (extra_warnings && TREE_STATIC ((yyvsp[-1].ttype)))
		    warning ("`%s' is not at beginning of declaration",
			     IDENTIFIER_POINTER ((yyvsp[0].ttype)));
		  (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = TREE_STATIC ((yyvsp[-1].ttype)); }
#line 3983 "c-p11531.c"
    break;

  case 198:
#line 1135 "c-parse.y"
                { if (extra_warnings && TREE_STATIC ((yyvsp[-1].ttype)))
		    warning ("`%s' is not at beginning of declaration",
			     IDENTIFIER_POINTER ((yyvsp[0].ttype)));
		  (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = TREE_STATIC ((yyvsp[-1].ttype)); }
#line 3993 "c-p11531.c"
    break;

  case 199:
#line 1144 "c-parse.y"
                { (yyval.ttype) = tree_cons ((yyvsp[0].ttype), NULL_TREE, (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = TREE_STATIC ((yyvsp[-1].ttype)); }
#line 4000 "c-p11531.c"
    break;

  case 200:
#line 1147 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = 1; }
#line 4007 "c-p11531.c"
    break;

  case 201:
#line 1150 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = 1; }
#line 4014 "c-p11531.c"
    break;

  case 202:
#line 1153 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = 1; }
#line 4021 "c-p11531.c"
    break;

  case 203:
#line 1156 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, (yyvsp[0].ttype), (yyvsp[-1].ttype));
		  TREE_STATIC ((yyval.ttype)) = 1; }
#line 4028 "c-p11531.c"
    break;

  case 260:
#line 1244 "c-parse.y"
                { (yyval.ttype) = NULL_TREE; }
#line 4034 "c-p11531.c"
    break;

  case 261:
#line 1246 "c-parse.y"
                { (yyval.ttype) = (yyvsp[0].ttype); }
#line 4040 "c-p11531.c"
    break;

  case 265:
#line 1281 "c-parse.y"
                { OBJC_NEED_RAW_IDENTIFIER (1);	}
#line 4046 "c-p11531.c"
    break;

  case 268:
#line 1291 "c-parse.y"
                { /* For a typedef name, record the meaning, not the name.
		     In case of `foo foo, bar;'.  */
		  (yyval.ttype) = lookup_name ((yyvsp[0].ttype)); }
#line 4054 "c-p11531.c"
    break;

  case 269:
#line 1295 "c-parse.y"
                { skip_evaluation--; (yyval.ttype) = TREE_TYPE ((yyvsp[-1].ttype)); }
#line 4060 "c-p11531.c"
    break;

  case 270:
#line 1297 "c-parse.y"
                { skip_evaluation--; (yyval.ttype) = groktypename ((yyvsp[-1].ttype)); }
#line 4066 "c-p11531.c"
    break;

  case 275:
#line 1314 "c-parse.y"
                { (yyval.ttype) = NULL_TREE; }
#line 4072 "c-p11531.c"
    break;

  case 276:
#line 1316 "c-parse.y"
                { if (TREE_CHAIN ((yyvsp[-1].ttype))) (yyvsp[-1].ttype) = combine_strings ((yyvsp[-1].ttype));
		  (yyval.ttype) = (yyvsp[-1].ttype);
		}
#line 4080 "c-p11531.c"
    break;

  case 277:
#line 1323 "c-parse.y"
                { (yyval.ttype) = start_decl ((yyvsp[-3].ttype), current_declspecs, 1,
					  chainon ((yyvsp[-1].ttype), all_prefix_attributes));
		  start_init ((yyval.ttype), (yyvsp[-2].ttype), global_bindings_p ()); }
#line 4088 "c-p11531.c"
    break;

  case 278:
#line 1328 "c-parse.y"
                { finish_init ();
		  finish_decl ((yyvsp[-1].ttype), (yyvsp[0].ttype), (yyvsp[-4].ttype)); }
#line 4095 "c-p11531.c"
    break;

  case 279:
#line 1331 "c-parse.y"
                { tree d = start_decl ((yyvsp[-2].ttype), current_declspecs, 0,
				       chainon ((yyvsp[0].ttype), all_prefix_attributes));
		  finish_decl (d, NULL_TREE, (yyvsp[-1].ttype)); 
                }
#line 4104 "c-p11531.c"
    break;

  case 280:
#line 1339 "c-parse.y"
                { (yyval.ttype) = start_decl ((yyvsp[-3].ttype), current_declspecs, 1,
					  chainon ((yyvsp[-1].ttype), all_prefix_attributes));
		  start_init ((yyval.ttype), (yyvsp[-2].ttype), global_bindings_p ()); }
#line 4112 "c-p11531.c"
    break;

  case 281:
#line 1344 "c-parse.y"
                { finish_init ();
		  finish_decl ((yyvsp[-1].ttype), (yyvsp[0].ttype), (yyvsp[-4].ttype)); }
#line 4119 "c-p11531.c"
    break;

  case 282:
#line 1347 "c-parse.y"
                { tree d = start_decl ((yyvsp[-2].ttype), current_declspecs, 0,
				       chainon ((yyvsp[0].ttype), all_prefix_attributes));
		  finish_decl (d, NULL_TREE, (yyvsp[-1].ttype)); }
#line 4127 "c-p11531.c"
    break;

  case 283:
#line 1355 "c-parse.y"
                { (yyval.ttype) = NULL_TREE; }
#line 4133 "c-p11531.c"
    break;

  case 284:
#line 1357 "c-parse.y"
                { (yyval.ttype) = (yyvsp[0].ttype); }
#line 4139 "c-p11531.c"
    break;

  case 285:
#line 1362 "c-parse.y"
                { (yyval.ttype) = (yyvsp[0].ttype); }
#line 4145 "c-p11531.c"
    break;

  case 286:
#line 1364 "c-parse.y"
                { (yyval.ttype) = chainon ((yyvsp[-1].ttype), (yyvsp[0].ttype)); }
#line 4151 "c-p11531.c"
    break;

  case 287:
#line 1369 "c-parse.y"
                { (yyval.ttype) = (yyvsp[-2].ttype); }
#line 4157 "c-p11531.c"
    break;

  case 288:
#line 1374 "c-parse.y"
                { (yyval.ttype) = (yyvsp[0].ttype); }
#line 4163 "c-p11531.c"
    break;

  case 289:
#line 1376 "c-parse.y"
                { (yyval.ttype) = chainon ((yyvsp[-2].ttype), (yyvsp[0].ttype)); }
#line 4169 "c-p11531.c"
    break;

  case 290:
#line 1381 "c-parse.y"
                { (yyval.ttype) = NULL_TREE; }
#line 4175 "c-p11531.c"
    break;

  case 291:
#line 1383 "c-parse.y"
                { (yyval.ttype) = build_tree_list ((yyvsp[0].ttype), NULL_TREE); }
#line 4181 "c-p11531.c"
    break;

  case 292:
#line 1385 "c-parse.y"
                { (yyval.ttype) = build_tree_list ((yyvsp[-3].ttype), build_tree_list (NULL_TREE, (yyvsp[-1].ttype))); }
#line 4187 "c-p11531.c"
    break;

  case 293:
#line 1387 "c-parse.y"
                { (yyval.ttype) = build_tree_list ((yyvsp[-5].ttype), tree_cons (NULL_TREE, (yyvsp[-3].ttype), (yyvsp[-1].ttype))); }
#line 4193 "c-p11531.c"
    break;

  case 294:
#line 1389 "c-parse.y"
                { (yyval.ttype) = build_tree_list ((yyvsp[-3].ttype), (yyvsp[-1].ttype)); }
#line 4199 "c-p11531.c"
    break;

  case 300:
#line 1407 "c-parse.y"
                { really_start_incremental_init (NULL_TREE); }
#line 4205 "c-p11531.c"
    break;

  case 301:
#line 1409 "c-parse.y"
                { (yyval.ttype) = pop_init_level (0); }
#line 4211 "c-p11531.c"
    break;

  case 302:
#line 1411 "c-parse.y"
                { (yyval.ttype) = error_mark_node; }
#line 4217 "c-p11531.c"
    break;

  case 303:
#line 1417 "c-parse.y"
                { if (pedantic)
		    pedwarn ("ISO C forbids empty initializer braces"); }
#line 4224 "c-p11531.c"
    break;

  case 307:
#line 1431 "c-parse.y"
                { if (pedantic && ! flag_isoc99)
		    pedwarn ("ISO C89 forbids specifying subobject to initialize"); }
#line 4231 "c-p11531.c"
    break;

  case 308:
#line 1434 "c-parse.y"
                { if (pedantic)
		    pedwarn ("obsolete use of designated initializer without `='"); }
#line 4238 "c-p11531.c"
    break;

  case 309:
#line 1437 "c-parse.y"
                { set_init_label ((yyvsp[-1].ttype));
		  if (pedantic)
		    pedwarn ("obsolete use of designated initializer with `:'"); }
#line 4246 "c-p11531.c"
    break;

  case 310:
#line 1441 "c-parse.y"
                {}
#line 4252 "c-p11531.c"
    break;

  case 312:
#line 1447 "c-parse.y"
                { push_init_level (0); }
#line 4258 "c-p11531.c"
    break;

  case 313:
#line 1449 "c-parse.y"
                { process_init_element (pop_init_level (0)); }
#line 4264 "c-p11531.c"
    break;

  case 314:
#line 1451 "c-parse.y"
                { process_init_element ((yyvsp[0].ttype)); }
#line 4270 "c-p11531.c"
    break;

  case 318:
#line 1462 "c-parse.y"
                { set_init_label ((yyvsp[0].ttype)); }
#line 4276 "c-p11531.c"
    break;

  case 319:
#line 1467 "c-parse.y"
                { set_init_index ((yyvsp[-3].ttype), (yyvsp[-1].ttype));
		  if (pedantic)
		    pedwarn ("ISO C forbids specifying range of elements to initialize"); }
#line 4284 "c-p11531.c"
    break;

  case 320:
#line 1471 "c-parse.y"
                { set_init_index ((yyvsp[-1].ttype), NULL_TREE); }
#line 4290 "c-p11531.c"
    break;

  case 321:
#line 1476 "c-parse.y"
                { if (pedantic)
		    pedwarn ("ISO C forbids nested functions");

		  push_function_context ();
		  if (! start_function (current_declspecs, (yyvsp[0].ttype),
					all_prefix_attributes))
		    {
		      pop_function_context ();
		      YYERROR1;
		    }
		}
#line 4306 "c-p11531.c"
    break;

  case 322:
#line 1488 "c-parse.y"
                { store_parm_decls (); }
#line 4312 "c-p11531.c"
    break;

  case 323:
#line 1496 "c-parse.y"
                { tree decl = current_function_decl;
		  DECL_SOURCE_FILE (decl) = (yyvsp[-2].filename);
		  DECL_SOURCE_LINE (decl) = (yyvsp[-1].lineno);
		  finish_function (1, 1);
		  pop_function_context (); 
		  add_decl_stmt (decl); }
#line 4323 "c-p11531.c"
    break;

  case 324:
#line 1506 "c-parse.y"
                { if (pedantic)
		    pedwarn ("ISO C forbids nested functions");

		  push_function_context ();
		  if (! start_function (current_declspecs, (yyvsp[0].ttype),
					all_prefix_attributes))
		    {
		      pop_function_context ();
		      YYERROR1;
		    }
		}
#line 4339 "c-p11531.c"
    break;

  case 325:
#line 1518 "c-parse.y"
                { store_parm_decls (); }
#line 4345 "c-p11531.c"
    break;

  case 326:
#line 1526 "c-parse.y"
                { tree decl = current_function_decl;
		  DECL_SOURCE_FILE (decl) = (yyvsp[-2].filename);
		  DECL_SOURCE_LINE (decl) = (yyvsp[-1].lineno);
		  finish_function (1, 1);
		  pop_function_context (); 
		  add_decl_stmt (decl); }
#line 4356 "c-p11531.c"
    break;

  case 329:
#line 1546 "c-parse.y"
                { (yyval.ttype) = (yyvsp[-2].ttype) ? tree_cons ((yyvsp[-2].ttype), (yyvsp[-1].ttype), NULL_TREE) : (yyvsp[-1].ttype); }
#line 4362 "c-p11531.c"
    break;

  case 330:
#line 1548 "c-parse.y"
                { (yyval.ttype) = build_nt (CALL_EXPR, (yyvsp[-2].ttype), (yyvsp[0].ttype), NULL_TREE); }
#line 4368 "c-p11531.c"
    break;

  case 331:
#line 1553 "c-parse.y"
                { (yyval.ttype) = set_array_declarator_type ((yyvsp[0].ttype), (yyvsp[-1].ttype), 0); }
#line 4374 "c-p11531.c"
    break;

  case 332:
#line 1555 "c-parse.y"
                { (yyval.ttype) = make_pointer_declarator ((yyvsp[-1].ttype), (yyvsp[0].ttype)); }
#line 4380 "c-p11531.c"
    break;

  case 336:
#line 1570 "c-parse.y"
                { (yyval.ttype) = build_nt (CALL_EXPR, (yyvsp[-2].ttype), (yyvsp[0].ttype), NULL_TREE); }
#line 4386 "c-p11531.c"
    break;

  case 337:
#line 1575 "c-parse.y"
                { (yyval.ttype) = set_array_declarator_type ((yyvsp[0].ttype), (yyvsp[-1].ttype), 0); }
#line 4392 "c-p11531.c"
    break;

  case 339:
#line 1581 "c-parse.y"
                { (yyval.ttype) = build_nt (CALL_EXPR, (yyvsp[-2].ttype), (yyvsp[0].ttype), NULL_TREE); }
#line 4398 "c-p11531.c"
    break;

  case 340:
#line 1586 "c-parse.y"
                { (yyval.ttype) = set_array_declarator_type ((yyvsp[0].ttype), (yyvsp[-1].ttype), 0); }
#line 4404 "c-p11531.c"
    break;

  case 341:
#line 1588 "c-parse.y"
                { (yyval.ttype) = make_pointer_declarator ((yyvsp[-1].ttype), (yyvsp[0].ttype)); }
#line 4410 "c-p11531.c"
    break;

  case 342:
#line 1590 "c-parse.y"
                { (yyval.ttype) = make_pointer_declarator ((yyvsp[-1].ttype), (yyvsp[0].ttype)); }
#line 4416 "c-p11531.c"
    break;

  case 343:
#line 1592 "c-parse.y"
                { (yyval.ttype) = (yyvsp[-2].ttype) ? tree_cons ((yyvsp[-2].ttype), (yyvsp[-1].ttype), NULL_TREE) : (yyvsp[-1].ttype); }
#line 4422 "c-p11531.c"
    break;

  case 344:
#line 1600 "c-parse.y"
                { (yyval.ttype) = build_nt (CALL_EXPR, (yyvsp[-2].ttype), (yyvsp[0].ttype), NULL_TREE); }
#line 4428 "c-p11531.c"
    break;

  case 345:
#line 1605 "c-parse.y"
                { (yyval.ttype) = (yyvsp[-2].ttype) ? tree_cons ((yyvsp[-2].ttype), (yyvsp[-1].ttype), NULL_TREE) : (yyvsp[-1].ttype); }
#line 4434 "c-p11531.c"
    break;

  case 346:
#line 1607 "c-parse.y"
                { (yyval.ttype) = make_pointer_declarator ((yyvsp[-1].ttype), (yyvsp[0].ttype)); }
#line 4440 "c-p11531.c"
    break;

  case 347:
#line 1609 "c-parse.y"
                { (yyval.ttype) = set_array_declarator_type ((yyvsp[0].ttype), (yyvsp[-1].ttype), 0); }
#line 4446 "c-p11531.c"
    break;

  case 349:
#line 1615 "c-parse.y"
                { (yyval.ttype) = NULL_TREE; }
#line 4452 "c-p11531.c"
    break;

  case 350:
#line 1617 "c-parse.y"
                { (yyval.ttype) = (yyvsp[0].ttype); }
#line 4458 "c-p11531.c"
    break;

  case 351:
#line 1622 "c-parse.y"
                { (yyval.ttype) = NULL_TREE; }
#line 4464 "c-p11531.c"
    break;

  case 352:
#line 1624 "c-parse.y"
                { (yyval.ttype) = (yyvsp[0].ttype); }
#line 4470 "c-p11531.c"
    break;

  case 353:
#line 1629 "c-parse.y"
                { (yyval.ttype) = NULL_TREE; }
#line 4476 "c-p11531.c"
    break;

  case 354:
#line 1631 "c-parse.y"
                { (yyval.ttype) = (yyvsp[0].ttype); }
#line 4482 "c-p11531.c"
    break;

  case 355:
#line 1642 "c-parse.y"
                { (yyval.ttype) = start_struct (RECORD_TYPE, (yyvsp[-1].ttype));
		  /* Start scope of tag before parsing components.  */
		}
#line 4490 "c-p11531.c"
    break;

  case 356:
#line 1646 "c-parse.y"
                { (yyval.ttype) = finish_struct ((yyvsp[-3].ttype), (yyvsp[-2].ttype), chainon ((yyvsp[-6].ttype), (yyvsp[0].ttype))); }
#line 4496 "c-p11531.c"
    break;

  case 357:
#line 1648 "c-parse.y"
                { (yyval.ttype) = finish_struct (start_struct (RECORD_TYPE, NULL_TREE),
				      (yyvsp[-2].ttype), chainon ((yyvsp[-4].ttype), (yyvsp[0].ttype)));
		}
#line 4504 "c-p11531.c"
    break;

  case 358:
#line 1652 "c-parse.y"
                { (yyval.ttype) = start_struct (UNION_TYPE, (yyvsp[-1].ttype)); }
#line 4510 "c-p11531.c"
    break;

  case 359:
#line 1654 "c-parse.y"
                { (yyval.ttype) = finish_struct ((yyvsp[-3].ttype), (yyvsp[-2].ttype), chainon ((yyvsp[-6].ttype), (yyvsp[0].ttype))); }
#line 4516 "c-p11531.c"
    break;

  case 360:
#line 1656 "c-parse.y"
                { (yyval.ttype) = finish_struct (start_struct (UNION_TYPE, NULL_TREE),
				      (yyvsp[-2].ttype), chainon ((yyvsp[-4].ttype), (yyvsp[0].ttype)));
		}
#line 4524 "c-p11531.c"
    break;

  case 361:
#line 1660 "c-parse.y"
                { (yyval.ttype) = start_enum ((yyvsp[-1].ttype)); }
#line 4530 "c-p11531.c"
    break;

  case 362:
#line 1662 "c-parse.y"
                { (yyval.ttype) = finish_enum ((yyvsp[-4].ttype), nreverse ((yyvsp[-3].ttype)),
				    chainon ((yyvsp[-7].ttype), (yyvsp[0].ttype))); }
#line 4537 "c-p11531.c"
    break;

  case 363:
#line 1665 "c-parse.y"
                { (yyval.ttype) = start_enum (NULL_TREE); }
#line 4543 "c-p11531.c"
    break;

  case 364:
#line 1667 "c-parse.y"
                { (yyval.ttype) = finish_enum ((yyvsp[-4].ttype), nreverse ((yyvsp[-3].ttype)),
				    chainon ((yyvsp[-6].ttype), (yyvsp[0].ttype))); }
#line 4550 "c-p11531.c"
    break;

  case 365:
#line 1673 "c-parse.y"
                { (yyval.ttype) = xref_tag (RECORD_TYPE, (yyvsp[0].ttype)); }
#line 4556 "c-p11531.c"
    break;

  case 366:
#line 1675 "c-parse.y"
                { (yyval.ttype) = xref_tag (UNION_TYPE, (yyvsp[0].ttype)); }
#line 4562 "c-p11531.c"
    break;

  case 367:
#line 1677 "c-parse.y"
                { (yyval.ttype) = xref_tag (ENUMERAL_TYPE, (yyvsp[0].ttype));
		  /* In ISO C, enumerated types can be referred to
		     only if already defined.  */
		  if (pedantic && !COMPLETE_TYPE_P ((yyval.ttype)))
		    pedwarn ("ISO C forbids forward references to `enum' types"); }
#line 4572 "c-p11531.c"
    break;

  case 371:
#line 1692 "c-parse.y"
                { if (pedantic && ! flag_isoc99)
		    pedwarn ("comma at end of enumerator list"); }
#line 4579 "c-p11531.c"
    break;

  case 372:
#line 1698 "c-parse.y"
                { (yyval.ttype) = (yyvsp[0].ttype); }
#line 4585 "c-p11531.c"
    break;

  case 373:
#line 1700 "c-parse.y"
                { (yyval.ttype) = chainon ((yyvsp[-1].ttype), (yyvsp[0].ttype));
		  pedwarn ("no semicolon at end of struct or union"); }
#line 4592 "c-p11531.c"
    break;

  case 374:
#line 1705 "c-parse.y"
                { (yyval.ttype) = NULL_TREE; }
#line 4598 "c-p11531.c"
    break;

  case 375:
#line 1707 "c-parse.y"
                { (yyval.ttype) = chainon ((yyvsp[-2].ttype), (yyvsp[-1].ttype)); }
#line 4604 "c-p11531.c"
    break;

  case 376:
#line 1709 "c-parse.y"
                { if (pedantic)
		    pedwarn ("extra semicolon in struct or union specified"); }
#line 4611 "c-p11531.c"
    break;

  case 377:
#line 1715 "c-parse.y"
                { (yyval.ttype) = (yyvsp[0].ttype);
		  POP_DECLSPEC_STACK; }
#line 4618 "c-p11531.c"
    break;

  case 378:
#line 1718 "c-parse.y"
                {
		  /* Support for unnamed structs or unions as members of 
		     structs or unions (which is [a] useful and [b] supports 
		     MS P-SDK).  */
		  if (pedantic)
		    pedwarn ("ISO C doesn't support unnamed structs/unions");

		  (yyval.ttype) = grokfield((yyvsp[-1].filename), (yyvsp[0].lineno), NULL, current_declspecs, NULL_TREE);
		  POP_DECLSPEC_STACK; }
#line 4632 "c-p11531.c"
    break;

  case 379:
#line 1728 "c-parse.y"
                { (yyval.ttype) = (yyvsp[0].ttype);
		  POP_DECLSPEC_STACK; }
#line 4639 "c-p11531.c"
    break;

  case 380:
#line 1731 "c-parse.y"
                { if (pedantic)
		    pedwarn ("ISO C forbids member declarations with no members");
		  shadow_tag((yyvsp[0].ttype));
		  (yyval.ttype) = NULL_TREE; }
#line 4648 "c-p11531.c"
    break;

  case 381:
#line 1736 "c-parse.y"
                { (yyval.ttype) = NULL_TREE; }
#line 4654 "c-p11531.c"
    break;

  case 382:
#line 1738 "c-parse.y"
                { (yyval.ttype) = (yyvsp[0].ttype);
		  RESTORE_WARN_FLAGS ((yyvsp[-1].ttype)); }
#line 4661 "c-p11531.c"
    break;

  case 384:
#line 1745 "c-parse.y"
                { (yyval.ttype) = chainon ((yyvsp[-3].ttype), (yyvsp[0].ttype)); }
#line 4667 "c-p11531.c"
    break;

  case 386:
#line 1751 "c-parse.y"
                { (yyval.ttype) = chainon ((yyvsp[-3].ttype), (yyvsp[0].ttype)); }
#line 4673 "c-p11531.c"
    break;

  case 387:
#line 1756 "c-parse.y"
                { (yyval.ttype) = grokfield ((yyvsp[-3].filename), (yyvsp[-2].lineno), (yyvsp[-1].ttype), current_declspecs, NULL_TREE);
		  decl_attributes (&(yyval.ttype), chainon ((yyvsp[0].ttype), all_prefix_attributes), 0); }
#line 4680 "c-p11531.c"
    break;

  case 388:
#line 1760 "c-parse.y"
                { (yyval.ttype) = grokfield ((yyvsp[-5].filename), (yyvsp[-4].lineno), (yyvsp[-3].ttype), current_declspecs, (yyvsp[-1].ttype));
		  decl_attributes (&(yyval.ttype), chainon ((yyvsp[0].ttype), all_prefix_attributes), 0); }
#line 4687 "c-p11531.c"
    break;

  case 389:
#line 1763 "c-parse.y"
                { (yyval.ttype) = grokfield ((yyvsp[-4].filename), (yyvsp[-3].lineno), NULL_TREE, current_declspecs, (yyvsp[-1].ttype));
		  decl_attributes (&(yyval.ttype), chainon ((yyvsp[0].ttype), all_prefix_attributes), 0); }
#line 4694 "c-p11531.c"
    break;

  case 390:
#line 1769 "c-parse.y"
                { (yyval.ttype) = grokfield ((yyvsp[-3].filename), (yyvsp[-2].lineno), (yyvsp[-1].ttype), current_declspecs, NULL_TREE);
		  decl_attributes (&(yyval.ttype), chainon ((yyvsp[0].ttype), all_prefix_attributes), 0); }
#line 4701 "c-p11531.c"
    break;

  case 391:
#line 1773 "c-parse.y"
                { (yyval.ttype) = grokfield ((yyvsp[-5].filename), (yyvsp[-4].lineno), (yyvsp[-3].ttype), current_declspecs, (yyvsp[-1].ttype));
		  decl_attributes (&(yyval.ttype), chainon ((yyvsp[0].ttype), all_prefix_attributes), 0); }
#line 4708 "c-p11531.c"
    break;

  case 392:
#line 1776 "c-parse.y"
                { (yyval.ttype) = grokfield ((yyvsp[-4].filename), (yyvsp[-3].lineno), NULL_TREE, current_declspecs, (yyvsp[-1].ttype));
		  decl_attributes (&(yyval.ttype), chainon ((yyvsp[0].ttype), all_prefix_attributes), 0); }
#line 4715 "c-p11531.c"
    break;

  case 394:
#line 1788 "c-parse.y"
                { if ((yyvsp[-2].ttype) == error_mark_node)
		    (yyval.ttype) = (yyvsp[-2].ttype);
		  else
		    (yyval.ttype) = chainon ((yyvsp[0].ttype), (yyvsp[-2].ttype)); }
#line 4724 "c-p11531.c"
    break;

  case 395:
#line 1793 "c-parse.y"
                { (yyval.ttype) = error_mark_node; }
#line 4730 "c-p11531.c"
    break;

  case 396:
#line 1799 "c-parse.y"
                { (yyval.ttype) = build_enumerator ((yyvsp[0].ttype), NULL_TREE); }
#line 4736 "c-p11531.c"
    break;

  case 397:
#line 1801 "c-parse.y"
                { (yyval.ttype) = build_enumerator ((yyvsp[-2].ttype), (yyvsp[0].ttype)); }
#line 4742 "c-p11531.c"
    break;

  case 398:
#line 1806 "c-parse.y"
                { pending_xref_error ();
		  (yyval.ttype) = (yyvsp[0].ttype); }
#line 4749 "c-p11531.c"
    break;

  case 399:
#line 1809 "c-parse.y"
                { (yyval.ttype) = build_tree_list ((yyvsp[-1].ttype), (yyvsp[0].ttype)); }
#line 4755 "c-p11531.c"
    break;

  case 400:
#line 1814 "c-parse.y"
                { (yyval.ttype) = NULL_TREE; }
#line 4761 "c-p11531.c"
    break;

  case 402:
#line 1820 "c-parse.y"
                { (yyval.ttype) = build_tree_list (build_tree_list (current_declspecs,
							 NULL_TREE),
					all_prefix_attributes); }
#line 4769 "c-p11531.c"
    break;

  case 403:
#line 1824 "c-parse.y"
                { (yyval.ttype) = build_tree_list (build_tree_list (current_declspecs,
							 (yyvsp[0].ttype)),
					all_prefix_attributes); }
#line 4777 "c-p11531.c"
    break;

  case 404:
#line 1828 "c-parse.y"
                { (yyval.ttype) = build_tree_list (build_tree_list (current_declspecs,
							 (yyvsp[-1].ttype)),
					chainon ((yyvsp[0].ttype), all_prefix_attributes)); }
#line 4785 "c-p11531.c"
    break;

  case 408:
#line 1841 "c-parse.y"
                { (yyval.ttype) = make_pointer_declarator ((yyvsp[-1].ttype), (yyvsp[0].ttype)); }
#line 4791 "c-p11531.c"
    break;

  case 409:
#line 1846 "c-parse.y"
                { (yyval.ttype) = make_pointer_declarator ((yyvsp[0].ttype), NULL_TREE); }
#line 4797 "c-p11531.c"
    break;

  case 410:
#line 1848 "c-parse.y"
                { (yyval.ttype) = make_pointer_declarator ((yyvsp[-1].ttype), (yyvsp[0].ttype)); }
#line 4803 "c-p11531.c"
    break;

  case 411:
#line 1853 "c-parse.y"
                { (yyval.ttype) = (yyvsp[-2].ttype) ? tree_cons ((yyvsp[-2].ttype), (yyvsp[-1].ttype), NULL_TREE) : (yyvsp[-1].ttype); }
#line 4809 "c-p11531.c"
    break;

  case 412:
#line 1855 "c-parse.y"
                { (yyval.ttype) = build_nt (CALL_EXPR, (yyvsp[-2].ttype), (yyvsp[0].ttype), NULL_TREE); }
#line 4815 "c-p11531.c"
    break;

  case 413:
#line 1857 "c-parse.y"
                { (yyval.ttype) = set_array_declarator_type ((yyvsp[0].ttype), (yyvsp[-1].ttype), 1); }
#line 4821 "c-p11531.c"
    break;

  case 414:
#line 1859 "c-parse.y"
                { (yyval.ttype) = build_nt (CALL_EXPR, NULL_TREE, (yyvsp[0].ttype), NULL_TREE); }
#line 4827 "c-p11531.c"
    break;

  case 415:
#line 1861 "c-parse.y"
                { (yyval.ttype) = set_array_declarator_type ((yyvsp[0].ttype), NULL_TREE, 1); }
#line 4833 "c-p11531.c"
    break;

  case 416:
#line 1868 "c-parse.y"
                { (yyval.ttype) = build_array_declarator ((yyvsp[-1].ttype), NULL_TREE, 0, 0); }
#line 4839 "c-p11531.c"
    break;

  case 417:
#line 1870 "c-parse.y"
                { (yyval.ttype) = build_array_declarator ((yyvsp[-1].ttype), (yyvsp[-2].ttype), 0, 0); }
#line 4845 "c-p11531.c"
    break;

  case 418:
#line 1872 "c-parse.y"
                { (yyval.ttype) = build_array_declarator (NULL_TREE, NULL_TREE, 0, 0); }
#line 4851 "c-p11531.c"
    break;

  case 419:
#line 1874 "c-parse.y"
                { (yyval.ttype) = build_array_declarator (NULL_TREE, (yyvsp[-1].ttype), 0, 0); }
#line 4857 "c-p11531.c"
    break;

  case 420:
#line 1876 "c-parse.y"
                { (yyval.ttype) = build_array_declarator (NULL_TREE, NULL_TREE, 0, 1); }
#line 4863 "c-p11531.c"
    break;

  case 421:
#line 1878 "c-parse.y"
                { (yyval.ttype) = build_array_declarator (NULL_TREE, (yyvsp[-2].ttype), 0, 1); }
#line 4869 "c-p11531.c"
    break;

  case 422:
#line 1880 "c-parse.y"
                { if (C_RID_CODE ((yyvsp[-2].ttype)) != RID_STATIC)
		    error ("storage class specifier in array declarator");
		  (yyval.ttype) = build_array_declarator ((yyvsp[-1].ttype), NULL_TREE, 1, 0); }
#line 4877 "c-p11531.c"
    break;

  case 423:
#line 1884 "c-parse.y"
                { if (C_RID_CODE ((yyvsp[-3].ttype)) != RID_STATIC)
		    error ("storage class specifier in array declarator");
		  (yyval.ttype) = build_array_declarator ((yyvsp[-1].ttype), (yyvsp[-2].ttype), 1, 0); }
#line 4885 "c-p11531.c"
    break;

  case 424:
#line 1888 "c-parse.y"
                { if (C_RID_CODE ((yyvsp[-2].ttype)) != RID_STATIC)
		    error ("storage class specifier in array declarator");
		  (yyval.ttype) = build_array_declarator ((yyvsp[-1].ttype), (yyvsp[-3].ttype), 1, 0); }
#line 4893 "c-p11531.c"
    break;

  case 427:
#line 1903 "c-parse.y"
                {
		  pedwarn ("deprecated use of label at end of compound statement");
		}
#line 4901 "c-p11531.c"
    break;

  case 435:
#line 1920 "c-parse.y"
                { if (pedantic && !flag_isoc99)
		    pedwarn ("ISO C89 forbids mixed declarations and code"); }
#line 4908 "c-p11531.c"
    break;

  case 450:
#line 1950 "c-parse.y"
                { pushlevel (0);
		  clear_last_expr ();
		  add_scope_stmt (/*begin_p=*/1, /*partial_p=*/0);
		}
#line 4917 "c-p11531.c"
    break;

  case 451:
#line 1957 "c-parse.y"
                { (yyval.ttype) = add_scope_stmt (/*begin_p=*/0, /*partial_p=*/0); }
#line 4923 "c-p11531.c"
    break;

  case 452:
#line 1962 "c-parse.y"
                { if (flag_isoc99)
		    {
		      (yyval.ttype) = c_begin_compound_stmt ();
		      pushlevel (0);
		      clear_last_expr ();
		      add_scope_stmt (/*begin_p=*/1, /*partial_p=*/0);
		    }
		  else
		    (yyval.ttype) = NULL_TREE;
		}
#line 4938 "c-p11531.c"
    break;

  case 453:
#line 1978 "c-parse.y"
                { if (flag_isoc99)
		    {
		      tree scope_stmt = add_scope_stmt (/*begin_p=*/0, /*partial_p=*/0);
		      (yyval.ttype) = poplevel (kept_level_p (), 0, 0); 
		      SCOPE_STMT_BLOCK (TREE_PURPOSE (scope_stmt)) 
			= SCOPE_STMT_BLOCK (TREE_VALUE (scope_stmt))
			= (yyval.ttype);
		    }
		  else
		    (yyval.ttype) = NULL_TREE; }
#line 4953 "c-p11531.c"
    break;

  case 455:
#line 1995 "c-parse.y"
                { if (pedantic)
		    pedwarn ("ISO C forbids label declarations"); }
#line 4960 "c-p11531.c"
    break;

  case 458:
#line 2006 "c-parse.y"
                { tree link;
		  for (link = (yyvsp[-1].ttype); link; link = TREE_CHAIN (link))
		    {
		      tree label = shadow_label (TREE_VALUE (link));
		      C_DECLARED_LABEL_FLAG (label) = 1;
		      add_decl_stmt (label);
		    }
		}
#line 4973 "c-p11531.c"
    break;

  case 459:
#line 2020 "c-parse.y"
                {}
#line 4979 "c-p11531.c"
    break;

  case 461:
#line 2024 "c-parse.y"
                    { compstmt_count++;
                      (yyval.ttype) = c_begin_compound_stmt (); }
#line 4986 "c-p11531.c"
    break;

  case 462:
#line 2029 "c-parse.y"
                { (yyval.ttype) = convert (void_type_node, integer_zero_node); }
#line 4992 "c-p11531.c"
    break;

  case 463:
#line 2031 "c-parse.y"
                { (yyval.ttype) = poplevel (kept_level_p (), 1, 0); 
		  SCOPE_STMT_BLOCK (TREE_PURPOSE ((yyvsp[0].ttype))) 
		    = SCOPE_STMT_BLOCK (TREE_VALUE ((yyvsp[0].ttype)))
		    = (yyval.ttype); }
#line 5001 "c-p11531.c"
    break;

  case 466:
#line 2044 "c-parse.y"
                { if (current_function_decl == 0)
		    {
		      error ("braced-group within expression allowed only inside a function");
		      YYERROR;
		    }
		  /* We must force a BLOCK for this level
		     so that, if it is not expanded later,
		     there is a way to turn off the entire subtree of blocks
		     that are contained in it.  */
		  keep_next_level ();
		  push_label_level ();
		  compstmt_count++;
		  (yyval.ttype) = add_stmt (build_stmt (COMPOUND_STMT, last_tree));
		}
#line 5020 "c-p11531.c"
    break;

  case 467:
#line 2061 "c-parse.y"
                { RECHAIN_STMTS ((yyvsp[-1].ttype), COMPOUND_BODY ((yyvsp[-1].ttype))); 
		  last_expr_type = NULL_TREE;
                  (yyval.ttype) = (yyvsp[-1].ttype); }
#line 5028 "c-p11531.c"
    break;

  case 468:
#line 2069 "c-parse.y"
                { c_finish_then (); }
#line 5034 "c-p11531.c"
    break;

  case 470:
#line 2086 "c-parse.y"
                { (yyval.ttype) = c_begin_if_stmt (); }
#line 5040 "c-p11531.c"
    break;

  case 471:
#line 2088 "c-parse.y"
                { c_expand_start_cond (truthvalue_conversion ((yyvsp[-1].ttype)), 
				       compstmt_count,(yyvsp[-3].ttype));
		  (yyval.itype) = stmt_count;
		  if_stmt_file = (yyvsp[(-2) - (5)].filename);
		  if_stmt_line = (yyvsp[(-1) - (5)].lineno); }
#line 5050 "c-p11531.c"
    break;

  case 472:
#line 2100 "c-parse.y"
                { stmt_count++;
		  compstmt_count++;
		  (yyval.ttype) 
		    = add_stmt (build_stmt (DO_STMT, NULL_TREE,
					    NULL_TREE));
		  /* In the event that a parse error prevents
		     parsing the complete do-statement, set the
		     condition now.  Otherwise, we can get crashes at
		     RTL-generation time.  */
		  DO_COND ((yyval.ttype)) = error_mark_node; }
#line 5065 "c-p11531.c"
    break;

  case 473:
#line 2111 "c-parse.y"
                { (yyval.ttype) = (yyvsp[-2].ttype);
		  RECHAIN_STMTS ((yyval.ttype), DO_BODY ((yyval.ttype))); }
#line 5072 "c-p11531.c"
    break;

  case 474:
#line 2119 "c-parse.y"
                { if (yychar == YYEMPTY)
		    yychar = YYLEX;
		  (yyval.filename) = input_filename; }
#line 5080 "c-p11531.c"
    break;

  case 475:
#line 2125 "c-parse.y"
                { if (yychar == YYEMPTY)
		    yychar = YYLEX;
		  (yyval.lineno) = lineno; }
#line 5088 "c-p11531.c"
    break;

  case 478:
#line 2138 "c-parse.y"
                { if (flag_isoc99)
		    RECHAIN_STMTS ((yyvsp[-2].ttype), COMPOUND_BODY ((yyvsp[-2].ttype))); }
#line 5095 "c-p11531.c"
    break;

  case 479:
#line 2144 "c-parse.y"
                { if ((yyvsp[0].ttype))
		    {
		      STMT_LINENO ((yyvsp[0].ttype)) = (yyvsp[-1].lineno);
		      /* ??? We currently have no way of recording
			 the filename for a statement.  This probably
			 matters little in practice at the moment,
			 but I suspect that problems will occur when
			 doing inlining at the tree level.  */
		    }
		}
#line 5110 "c-p11531.c"
    break;

  case 480:
#line 2158 "c-parse.y"
                { if ((yyvsp[0].ttype))
		    {
		      STMT_LINENO ((yyvsp[0].ttype)) = (yyvsp[-1].lineno);
		    }
		}
#line 5120 "c-p11531.c"
    break;

  case 481:
#line 2167 "c-parse.y"
                { c_expand_start_else ();
		  (yyvsp[-1].itype) = stmt_count; }
#line 5127 "c-p11531.c"
    break;

  case 482:
#line 2170 "c-parse.y"
                { c_finish_else ();
		  c_expand_end_cond ();
		  if (extra_warnings && stmt_count == (yyvsp[-3].itype))
		    warning ("empty body in an else-statement"); }
#line 5136 "c-p11531.c"
    break;

  case 483:
#line 2175 "c-parse.y"
                { c_expand_end_cond ();
		  /* This warning is here instead of in simple_if, because we
		     do not want a warning if an empty if is followed by an
		     else statement.  Increment stmt_count so we don't
		     give a second error if this is a nested `if'.  */
		  if (extra_warnings && stmt_count++ == (yyvsp[0].itype))
		    warning_with_file_and_line (if_stmt_file, if_stmt_line,
						"empty body in an if-statement"); }
#line 5149 "c-p11531.c"
    break;

  case 484:
#line 2187 "c-parse.y"
                { c_expand_end_cond (); }
#line 5155 "c-p11531.c"
    break;

  case 485:
#line 2197 "c-parse.y"
                { stmt_count++; 
		  (yyval.ttype) = c_begin_while_stmt (); }
#line 5162 "c-p11531.c"
    break;

  case 486:
#line 2200 "c-parse.y"
                { (yyvsp[-1].ttype) = truthvalue_conversion ((yyvsp[-1].ttype));
		  c_finish_while_stmt_cond (truthvalue_conversion ((yyvsp[-1].ttype)),
					    (yyvsp[-3].ttype));
		  (yyval.ttype) = add_stmt ((yyvsp[-3].ttype)); }
#line 5171 "c-p11531.c"
    break;

  case 487:
#line 2205 "c-parse.y"
                { RECHAIN_STMTS ((yyvsp[-1].ttype), WHILE_BODY ((yyvsp[-1].ttype))); }
#line 5177 "c-p11531.c"
    break;

  case 488:
#line 2208 "c-parse.y"
                { DO_COND ((yyvsp[-4].ttype)) = truthvalue_conversion ((yyvsp[-2].ttype)); }
#line 5183 "c-p11531.c"
    break;

  case 489:
#line 2210 "c-parse.y"
                { }
#line 5189 "c-p11531.c"
    break;

  case 490:
#line 2212 "c-parse.y"
                { (yyval.ttype) = build_stmt (FOR_STMT, NULL_TREE, NULL_TREE,
					  NULL_TREE, NULL_TREE);
		  add_stmt ((yyval.ttype)); }
#line 5197 "c-p11531.c"
    break;

  case 491:
#line 2216 "c-parse.y"
                { stmt_count++;
		  RECHAIN_STMTS ((yyvsp[-2].ttype), FOR_INIT_STMT ((yyvsp[-2].ttype))); }
#line 5204 "c-p11531.c"
    break;

  case 492:
#line 2219 "c-parse.y"
                { if ((yyvsp[-1].ttype)) 
		    FOR_COND ((yyvsp[-5].ttype)) = truthvalue_conversion ((yyvsp[-1].ttype)); }
#line 5211 "c-p11531.c"
    break;

  case 493:
#line 2222 "c-parse.y"
                { FOR_EXPR ((yyvsp[-8].ttype)) = (yyvsp[-1].ttype); }
#line 5217 "c-p11531.c"
    break;

  case 494:
#line 2224 "c-parse.y"
                { RECHAIN_STMTS ((yyvsp[-10].ttype), FOR_BODY ((yyvsp[-10].ttype))); }
#line 5223 "c-p11531.c"
    break;

  case 495:
#line 2226 "c-parse.y"
                { stmt_count++;
		  (yyval.ttype) = c_start_case ((yyvsp[-1].ttype)); }
#line 5230 "c-p11531.c"
    break;

  case 496:
#line 2229 "c-parse.y"
                { c_finish_case (); }
#line 5236 "c-p11531.c"
    break;

  case 497:
#line 2234 "c-parse.y"
                { add_stmt (build_stmt (EXPR_STMT, (yyvsp[-1].ttype))); }
#line 5242 "c-p11531.c"
    break;

  case 498:
#line 2236 "c-parse.y"
                { check_for_loop_decls (); }
#line 5248 "c-p11531.c"
    break;

  case 499:
#line 2242 "c-parse.y"
                { stmt_count++; (yyval.ttype) = (yyvsp[0].ttype); }
#line 5254 "c-p11531.c"
    break;

  case 500:
#line 2244 "c-parse.y"
                { stmt_count++;
		  (yyval.ttype) = c_expand_expr_stmt ((yyvsp[-1].ttype)); }
#line 5261 "c-p11531.c"
    break;

  case 501:
#line 2247 "c-parse.y"
                { if (flag_isoc99)
		    RECHAIN_STMTS ((yyvsp[-2].ttype), COMPOUND_BODY ((yyvsp[-2].ttype)));
		  (yyval.ttype) = NULL_TREE; }
#line 5269 "c-p11531.c"
    break;

  case 502:
#line 2251 "c-parse.y"
                { stmt_count++;
		  (yyval.ttype) = add_stmt (build_break_stmt ()); }
#line 5276 "c-p11531.c"
    break;

  case 503:
#line 2254 "c-parse.y"
                { stmt_count++;
		  (yyval.ttype) = add_stmt (build_continue_stmt ()); }
#line 5283 "c-p11531.c"
    break;

  case 504:
#line 2257 "c-parse.y"
                { stmt_count++;
		  (yyval.ttype) = c_expand_return (NULL_TREE); }
#line 5290 "c-p11531.c"
    break;

  case 505:
#line 2260 "c-parse.y"
                { stmt_count++;
		  (yyval.ttype) = c_expand_return ((yyvsp[-1].ttype)); }
#line 5297 "c-p11531.c"
    break;

  case 506:
#line 2263 "c-parse.y"
                { stmt_count++;
		  (yyval.ttype) = simple_asm_stmt ((yyvsp[-2].ttype)); }
#line 5304 "c-p11531.c"
    break;

  case 507:
#line 2267 "c-parse.y"
                { stmt_count++;
		  (yyval.ttype) = build_asm_stmt ((yyvsp[-6].ttype), (yyvsp[-4].ttype), (yyvsp[-2].ttype), NULL_TREE, NULL_TREE); }
#line 5311 "c-p11531.c"
    break;

  case 508:
#line 2272 "c-parse.y"
                { stmt_count++;
		  (yyval.ttype) = build_asm_stmt ((yyvsp[-8].ttype), (yyvsp[-6].ttype), (yyvsp[-4].ttype), (yyvsp[-2].ttype), NULL_TREE); }
#line 5318 "c-p11531.c"
    break;

  case 509:
#line 2277 "c-parse.y"
                { stmt_count++;
		  (yyval.ttype) = build_asm_stmt ((yyvsp[-10].ttype), (yyvsp[-8].ttype), (yyvsp[-6].ttype), (yyvsp[-4].ttype), (yyvsp[-2].ttype)); }
#line 5325 "c-p11531.c"
    break;

  case 510:
#line 2280 "c-parse.y"
                { tree decl;
		  stmt_count++;
		  decl = lookup_label ((yyvsp[-1].ttype));
		  if (decl != 0)
		    {
		      TREE_USED (decl) = 1;
		      (yyval.ttype) = add_stmt (build_stmt (GOTO_STMT, decl));
		    }
		  else
		    (yyval.ttype) = NULL_TREE;
		}
#line 5341 "c-p11531.c"
    break;

  case 511:
#line 2292 "c-parse.y"
                { if (pedantic)
		    pedwarn ("ISO C forbids `goto *expr;'");
		  stmt_count++;
		  (yyvsp[-1].ttype) = convert (ptr_type_node, (yyvsp[-1].ttype));
		  (yyval.ttype) = add_stmt (build_stmt (GOTO_STMT, (yyvsp[-1].ttype))); }
#line 5351 "c-p11531.c"
    break;

  case 512:
#line 2298 "c-parse.y"
                { (yyval.ttype) = NULL_TREE; }
#line 5357 "c-p11531.c"
    break;

  case 513:
#line 2306 "c-parse.y"
                { stmt_count++;
		  (yyval.ttype) = do_case ((yyvsp[-1].ttype), NULL_TREE); }
#line 5364 "c-p11531.c"
    break;

  case 514:
#line 2309 "c-parse.y"
                { stmt_count++;
		  (yyval.ttype) = do_case ((yyvsp[-3].ttype), (yyvsp[-1].ttype)); }
#line 5371 "c-p11531.c"
    break;

  case 515:
#line 2312 "c-parse.y"
                { stmt_count++;
		  (yyval.ttype) = do_case (NULL_TREE, NULL_TREE); }
#line 5378 "c-p11531.c"
    break;

  case 516:
#line 2315 "c-parse.y"
                { tree label = define_label ((yyvsp[-3].filename), (yyvsp[-2].lineno), (yyvsp[-4].ttype));
		  stmt_count++;
		  if (label)
		    {
		      decl_attributes (&label, (yyvsp[0].ttype), 0);
		      (yyval.ttype) = add_stmt (build_stmt (LABEL_STMT, label));
		    }
		  else
		    (yyval.ttype) = NULL_TREE;
		}
#line 5393 "c-p11531.c"
    break;

  case 517:
#line 2331 "c-parse.y"
                { emit_line_note (input_filename, lineno);
		  (yyval.ttype) = NULL_TREE; }
#line 5400 "c-p11531.c"
    break;

  case 518:
#line 2334 "c-parse.y"
                { emit_line_note (input_filename, lineno); }
#line 5406 "c-p11531.c"
    break;

  case 519:
#line 2339 "c-parse.y"
                { (yyval.ttype) = NULL_TREE; }
#line 5412 "c-p11531.c"
    break;

  case 521:
#line 2346 "c-parse.y"
                { (yyval.ttype) = NULL_TREE; }
#line 5418 "c-p11531.c"
    break;

  case 524:
#line 2353 "c-parse.y"
                { (yyval.ttype) = chainon ((yyvsp[-2].ttype), (yyvsp[0].ttype)); }
#line 5424 "c-p11531.c"
    break;

  case 525:
#line 2358 "c-parse.y"
                { (yyval.ttype) = build_tree_list (build_tree_list (NULL_TREE, (yyvsp[-3].ttype)), (yyvsp[-1].ttype)); }
#line 5430 "c-p11531.c"
    break;

  case 526:
#line 2360 "c-parse.y"
                { (yyval.ttype) = build_tree_list (build_tree_list ((yyvsp[-5].ttype), (yyvsp[-3].ttype)), (yyvsp[-1].ttype)); }
#line 5436 "c-p11531.c"
    break;

  case 527:
#line 2365 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, combine_strings ((yyvsp[0].ttype)), NULL_TREE); }
#line 5442 "c-p11531.c"
    break;

  case 528:
#line 2367 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, combine_strings ((yyvsp[0].ttype)), (yyvsp[-2].ttype)); }
#line 5448 "c-p11531.c"
    break;

  case 529:
#line 2377 "c-parse.y"
                { pushlevel (0);
		  clear_parm_order ();
		  declare_parm_level (0); }
#line 5456 "c-p11531.c"
    break;

  case 530:
#line 2381 "c-parse.y"
                { (yyval.ttype) = (yyvsp[0].ttype);
		  parmlist_tags_warning ();
		  poplevel (0, 0, 0); }
#line 5464 "c-p11531.c"
    break;

  case 532:
#line 2389 "c-parse.y"
                { tree parm;
		  if (pedantic)
		    pedwarn ("ISO C forbids forward parameter declarations");
		  /* Mark the forward decls as such.  */
		  for (parm = getdecls (); parm; parm = TREE_CHAIN (parm))
		    TREE_ASM_WRITTEN (parm) = 1;
		  clear_parm_order (); }
#line 5476 "c-p11531.c"
    break;

  case 533:
#line 2397 "c-parse.y"
                { /* Dummy action so attributes are in known place
		     on parser stack.  */ }
#line 5483 "c-p11531.c"
    break;

  case 534:
#line 2400 "c-parse.y"
                { (yyval.ttype) = (yyvsp[0].ttype); }
#line 5489 "c-p11531.c"
    break;

  case 535:
#line 2402 "c-parse.y"
                { (yyval.ttype) = tree_cons (NULL_TREE, NULL_TREE, NULL_TREE); }
#line 5495 "c-p11531.c"
    break;

  case 536:
#line 2408 "c-parse.y"
                { (yyval.ttype) = get_parm_info (0); }
#line 5501 "c-p11531.c"
    break;

  case 537:
#line 2410 "c-parse.y"
                { (yyval.ttype) = get_parm_info (0);
		  /* Gcc used to allow this as an extension.  However, it does
		     not work for all targets, and thus has been disabled.
		     Also, since func (...) and func () are indistinguishable,
		     it caused problems with the code in expand_builtin which
		     tries to verify that BUILT_IN_NEXT_ARG is being used
		     correctly.  */
		  error ("ISO C requires a named argument before `...'");
		}
#line 5515 "c-p11531.c"
    break;

  case 538:
#line 2420 "c-parse.y"
                { (yyval.ttype) = get_parm_info (1); }
#line 5521 "c-p11531.c"
    break;

  case 539:
#line 2422 "c-parse.y"
                { (yyval.ttype) = get_parm_info (0); }
#line 5527 "c-p11531.c"
    break;

  case 540:
#line 2427 "c-parse.y"
                { push_parm_decl ((yyvsp[0].ttype)); }
#line 5533 "c-p11531.c"
    break;

  case 541:
#line 2429 "c-parse.y"
                { push_parm_decl ((yyvsp[0].ttype)); }
#line 5539 "c-p11531.c"
    break;

  case 542:
#line 2436 "c-parse.y"
                { (yyval.ttype) = build_tree_list (build_tree_list (current_declspecs,
							 (yyvsp[-1].ttype)),
					chainon ((yyvsp[0].ttype), all_prefix_attributes));
		  POP_DECLSPEC_STACK; }
#line 5548 "c-p11531.c"
    break;

  case 543:
#line 2441 "c-parse.y"
                { (yyval.ttype) = build_tree_list (build_tree_list (current_declspecs,
							 (yyvsp[-1].ttype)),
					chainon ((yyvsp[0].ttype), all_prefix_attributes)); 
		  POP_DECLSPEC_STACK; }
#line 5557 "c-p11531.c"
    break;

  case 544:
#line 2446 "c-parse.y"
                { (yyval.ttype) = (yyvsp[0].ttype);
		  POP_DECLSPEC_STACK; }
#line 5564 "c-p11531.c"
    break;

  case 545:
#line 2449 "c-parse.y"
                { (yyval.ttype) = build_tree_list (build_tree_list (current_declspecs,
							 (yyvsp[-1].ttype)),
					chainon ((yyvsp[0].ttype), all_prefix_attributes));
		  POP_DECLSPEC_STACK; }
#line 5573 "c-p11531.c"
    break;

  case 546:
#line 2455 "c-parse.y"
                { (yyval.ttype) = (yyvsp[0].ttype);
		  POP_DECLSPEC_STACK; }
#line 5580 "c-p11531.c"
    break;

  case 547:
#line 2463 "c-parse.y"
                { (yyval.ttype) = build_tree_list (build_tree_list (current_declspecs,
							 (yyvsp[-1].ttype)),
					chainon ((yyvsp[0].ttype), all_prefix_attributes));
		  POP_DECLSPEC_STACK; }
#line 5589 "c-p11531.c"
    break;

  case 548:
#line 2468 "c-parse.y"
                { (yyval.ttype) = build_tree_list (build_tree_list (current_declspecs,
							 (yyvsp[-1].ttype)),
					chainon ((yyvsp[0].ttype), all_prefix_attributes)); 
		  POP_DECLSPEC_STACK; }
#line 5598 "c-p11531.c"
    break;

  case 549:
#line 2473 "c-parse.y"
                { (yyval.ttype) = (yyvsp[0].ttype);
		  POP_DECLSPEC_STACK; }
#line 5605 "c-p11531.c"
    break;

  case 550:
#line 2476 "c-parse.y"
                { (yyval.ttype) = build_tree_list (build_tree_list (current_declspecs,
							 (yyvsp[-1].ttype)),
					chainon ((yyvsp[0].ttype), all_prefix_attributes));
		  POP_DECLSPEC_STACK; }
#line 5614 "c-p11531.c"
    break;

  case 551:
#line 2482 "c-parse.y"
                { (yyval.ttype) = (yyvsp[0].ttype);
		  POP_DECLSPEC_STACK; }
#line 5621 "c-p11531.c"
    break;

  case 552:
#line 2488 "c-parse.y"
                { prefix_attributes = chainon (prefix_attributes, (yyvsp[(-2) - (1)].ttype));
		  all_prefix_attributes = prefix_attributes; }
#line 5628 "c-p11531.c"
    break;

  case 553:
#line 2497 "c-parse.y"
                { pushlevel (0);
		  clear_parm_order ();
		  declare_parm_level (1); }
#line 5636 "c-p11531.c"
    break;

  case 554:
#line 2501 "c-parse.y"
                { (yyval.ttype) = (yyvsp[0].ttype);
		  parmlist_tags_warning ();
		  poplevel (0, 0, 0); }
#line 5644 "c-p11531.c"
    break;

  case 556:
#line 2509 "c-parse.y"
                { tree t;
		  for (t = (yyvsp[-1].ttype); t; t = TREE_CHAIN (t))
		    if (TREE_VALUE (t) == NULL_TREE)
		      error ("`...' in old-style identifier list");
		  (yyval.ttype) = tree_cons (NULL_TREE, NULL_TREE, (yyvsp[-1].ttype));

		  /* Make sure we have a parmlist after attributes.  */
		  if ((yyvsp[(-1) - (2)].ttype) != 0
		      && (TREE_CODE ((yyval.ttype)) != TREE_LIST
			  || TREE_PURPOSE ((yyval.ttype)) == 0
			  || TREE_CODE (TREE_PURPOSE ((yyval.ttype))) != PARM_DECL))
		    YYERROR1;
		}
#line 5662 "c-p11531.c"
    break;

  case 557:
#line 2527 "c-parse.y"
                { (yyval.ttype) = build_tree_list (NULL_TREE, (yyvsp[0].ttype)); }
#line 5668 "c-p11531.c"
    break;

  case 558:
#line 2529 "c-parse.y"
                { (yyval.ttype) = chainon ((yyvsp[-2].ttype), build_tree_list (NULL_TREE, (yyvsp[0].ttype))); }
#line 5674 "c-p11531.c"
    break;

  case 559:
#line 2535 "c-parse.y"
                { (yyval.ttype) = build_tree_list (NULL_TREE, (yyvsp[0].ttype)); }
#line 5680 "c-p11531.c"
    break;

  case 560:
#line 2537 "c-parse.y"
                { (yyval.ttype) = chainon ((yyvsp[-2].ttype), build_tree_list (NULL_TREE, (yyvsp[0].ttype))); }
#line 5686 "c-p11531.c"
    break;

  case 561:
#line 2542 "c-parse.y"
                { (yyval.ttype) = SAVE_WARN_FLAGS();
		  pedantic = 0;
		  warn_pointer_arith = 0;
		  warn_traditional = 0; }
#line 5695 "c-p11531.c"
    break;


#line 5699 "c-p11531.c"

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
#line 2548 "c-parse.y"


/* yylex() is a thin wrapper around c_lex(), all it does is translate
   cpplib.h's token codes into yacc's token codes.  */

static enum cpp_ttype last_token;

/* The reserved keyword table.  */
struct resword
{
  const char *word;
  ENUM_BITFIELD(rid) rid : 16;
  unsigned int disable   : 16;
};

/* Disable mask.  Keywords are disabled if (reswords[i].disable & mask) is
   _true_.  */
#define D_TRAD	0x01	/* not in traditional C */
#define D_C89	0x02	/* not in C89 */
#define D_EXT	0x04	/* GCC extension */
#define D_EXT89	0x08	/* GCC extension incorporated in C99 */
#define D_OBJC	0x10	/* Objective C only */

static const struct resword reswords[] =
{
  { "_Bool",		RID_BOOL,	0 },
  { "_Complex",		RID_COMPLEX,	0 },
  { "__FUNCTION__",	RID_FUNCTION_NAME, 0 },
  { "__PRETTY_FUNCTION__", RID_PRETTY_FUNCTION_NAME, 0 },
  { "__alignof",	RID_ALIGNOF,	0 },
  { "__alignof__",	RID_ALIGNOF,	0 },
  { "__asm",		RID_ASM,	0 },
  { "__asm__",		RID_ASM,	0 },
  { "__attribute",	RID_ATTRIBUTE,	0 },
  { "__attribute__",	RID_ATTRIBUTE,	0 },
  { "__bounded",	RID_BOUNDED,	0 },
  { "__bounded__",	RID_BOUNDED,	0 },
  { "__builtin_choose_expr", RID_CHOOSE_EXPR, 0 },
  { "__builtin_types_compatible_p", RID_TYPES_COMPATIBLE_P, 0 },
  { "__builtin_va_arg",	RID_VA_ARG,	0 },
  { "__complex",	RID_COMPLEX,	0 },
  { "__complex__",	RID_COMPLEX,	0 },
  { "__const",		RID_CONST,	0 },
  { "__const__",	RID_CONST,	0 },
  { "__extension__",	RID_EXTENSION,	0 },
  { "__func__",		RID_C99_FUNCTION_NAME, 0 },
  { "__imag",		RID_IMAGPART,	0 },
  { "__imag__",		RID_IMAGPART,	0 },
  { "__inline",		RID_INLINE,	0 },
  { "__inline__",	RID_INLINE,	0 },
  { "__label__",	RID_LABEL,	0 },
  { "__ptrbase",	RID_PTRBASE,	0 },
  { "__ptrbase__",	RID_PTRBASE,	0 },
  { "__ptrextent",	RID_PTREXTENT,	0 },
  { "__ptrextent__",	RID_PTREXTENT,	0 },
  { "__ptrvalue",	RID_PTRVALUE,	0 },
  { "__ptrvalue__",	RID_PTRVALUE,	0 },
  { "__real",		RID_REALPART,	0 },
  { "__real__",		RID_REALPART,	0 },
  { "__restrict",	RID_RESTRICT,	0 },
  { "__restrict__",	RID_RESTRICT,	0 },
  { "__signed",		RID_SIGNED,	0 },
  { "__signed__",	RID_SIGNED,	0 },
  { "__typeof",		RID_TYPEOF,	0 },
  { "__typeof__",	RID_TYPEOF,	0 },
  { "__unbounded",	RID_UNBOUNDED,	0 },
  { "__unbounded__",	RID_UNBOUNDED,	0 },
  { "__volatile",	RID_VOLATILE,	0 },
  { "__volatile__",	RID_VOLATILE,	0 },
  { "asm",		RID_ASM,	D_EXT },
  { "auto",		RID_AUTO,	0 },
  { "break",		RID_BREAK,	0 },
  { "case",		RID_CASE,	0 },
  { "char",		RID_CHAR,	0 },
  { "const",		RID_CONST,	D_TRAD },
  { "continue",		RID_CONTINUE,	0 },
  { "default",		RID_DEFAULT,	0 },
  { "do",		RID_DO,		0 },
  { "double",		RID_DOUBLE,	0 },
  { "else",		RID_ELSE,	0 },
  { "enum",		RID_ENUM,	0 },
  { "extern",		RID_EXTERN,	0 },
  { "float",		RID_FLOAT,	0 },
  { "for",		RID_FOR,	0 },
  { "goto",		RID_GOTO,	0 },
  { "if",		RID_IF,		0 },
  { "inline",		RID_INLINE,	D_TRAD|D_EXT89 },
  { "int",		RID_INT,	0 },
  { "long",		RID_LONG,	0 },
  { "register",		RID_REGISTER,	0 },
  { "restrict",		RID_RESTRICT,	D_TRAD|D_C89 },
  { "return",		RID_RETURN,	0 },
  { "short",		RID_SHORT,	0 },
  { "signed",		RID_SIGNED,	D_TRAD },
  { "sizeof",		RID_SIZEOF,	0 },
  { "static",		RID_STATIC,	0 },
  { "struct",		RID_STRUCT,	0 },
  { "switch",		RID_SWITCH,	0 },
  { "typedef",		RID_TYPEDEF,	0 },
  { "typeof",		RID_TYPEOF,	D_TRAD|D_EXT },
  { "union",		RID_UNION,	0 },
  { "unsigned",		RID_UNSIGNED,	0 },
  { "void",		RID_VOID,	0 },
  { "volatile",		RID_VOLATILE,	D_TRAD },
  { "while",		RID_WHILE,	0 },
};
#define N_reswords (sizeof reswords / sizeof (struct resword))

/* Table mapping from RID_* constants to yacc token numbers.
   Unfortunately we have to have entries for all the keywords in all
   three languages.  */
static const short rid_to_yy[RID_MAX] =
{
  /* RID_STATIC */	SCSPEC,
  /* RID_UNSIGNED */	TYPESPEC,
  /* RID_LONG */	TYPESPEC,
  /* RID_CONST */	TYPE_QUAL,
  /* RID_EXTERN */	SCSPEC,
  /* RID_REGISTER */	SCSPEC,
  /* RID_TYPEDEF */	SCSPEC,
  /* RID_SHORT */	TYPESPEC,
  /* RID_INLINE */	SCSPEC,
  /* RID_VOLATILE */	TYPE_QUAL,
  /* RID_SIGNED */	TYPESPEC,
  /* RID_AUTO */	SCSPEC,
  /* RID_RESTRICT */	TYPE_QUAL,

  /* C extensions */
  /* RID_BOUNDED */	TYPE_QUAL,
  /* RID_UNBOUNDED */	TYPE_QUAL,
  /* RID_COMPLEX */	TYPESPEC,

  /* C++ */
  /* RID_FRIEND */	0,
  /* RID_VIRTUAL */	0,
  /* RID_EXPLICIT */	0,
  /* RID_EXPORT */	0,
  /* RID_MUTABLE */	0,

  /* ObjC */
  /* RID_IN */		TYPE_QUAL,
  /* RID_OUT */		TYPE_QUAL,
  /* RID_INOUT */	TYPE_QUAL,
  /* RID_BYCOPY */	TYPE_QUAL,
  /* RID_BYREF */	TYPE_QUAL,
  /* RID_ONEWAY */	TYPE_QUAL,
  
  /* C */
  /* RID_INT */		TYPESPEC,
  /* RID_CHAR */	TYPESPEC,
  /* RID_FLOAT */	TYPESPEC,
  /* RID_DOUBLE */	TYPESPEC,
  /* RID_VOID */	TYPESPEC,
  /* RID_ENUM */	ENUM,
  /* RID_STRUCT */	STRUCT,
  /* RID_UNION */	UNION,
  /* RID_IF */		IF,
  /* RID_ELSE */	ELSE,
  /* RID_WHILE */	WHILE,
  /* RID_DO */		DO,
  /* RID_FOR */		FOR,
  /* RID_SWITCH */	SWITCH,
  /* RID_CASE */	CASE,
  /* RID_DEFAULT */	DEFAULT,
  /* RID_BREAK */	BREAK,
  /* RID_CONTINUE */	CONTINUE,
  /* RID_RETURN */	RETURN,
  /* RID_GOTO */	GOTO,
  /* RID_SIZEOF */	SIZEOF,

  /* C extensions */
  /* RID_ASM */		ASM_KEYWORD,
  /* RID_TYPEOF */	TYPEOF,
  /* RID_ALIGNOF */	ALIGNOF,
  /* RID_ATTRIBUTE */	ATTRIBUTE,
  /* RID_VA_ARG */	VA_ARG,
  /* RID_EXTENSION */	EXTENSION,
  /* RID_IMAGPART */	IMAGPART,
  /* RID_REALPART */	REALPART,
  /* RID_LABEL */	LABEL,
  /* RID_PTRBASE */	PTR_BASE,
  /* RID_PTREXTENT */	PTR_EXTENT,
  /* RID_PTRVALUE */	PTR_VALUE,

  /* RID_CHOOSE_EXPR */			CHOOSE_EXPR,
  /* RID_TYPES_COMPATIBLE_P */		TYPES_COMPATIBLE_P,

  /* RID_FUNCTION_NAME */		STRING_FUNC_NAME,
  /* RID_PRETTY_FUNCTION_NAME */	STRING_FUNC_NAME,
  /* RID_C99_FUNCTION_NAME */		VAR_FUNC_NAME,

  /* C++ */
  /* RID_BOOL */	TYPESPEC,
  /* RID_WCHAR */	0,
  /* RID_CLASS */	0,
  /* RID_PUBLIC */	0,
  /* RID_PRIVATE */	0,
  /* RID_PROTECTED */	0,
  /* RID_TEMPLATE */	0,
  /* RID_NULL */	0,
  /* RID_CATCH */	0,
  /* RID_DELETE */	0,
  /* RID_FALSE */	0,
  /* RID_NAMESPACE */	0,
  /* RID_NEW */		0,
  /* RID_OPERATOR */	0,
  /* RID_THIS */	0,
  /* RID_THROW */	0,
  /* RID_TRUE */	0,
  /* RID_TRY */		0,
  /* RID_TYPENAME */	0,
  /* RID_TYPEID */	0,
  /* RID_USING */	0,

  /* casts */
  /* RID_CONSTCAST */	0,
  /* RID_DYNCAST */	0,
  /* RID_REINTCAST */	0,
  /* RID_STATCAST */	0,

  /* alternate spellings */
  /* RID_AND */		0,
  /* RID_AND_EQ */	0,
  /* RID_NOT */		0,
  /* RID_NOT_EQ */	0,
  /* RID_OR */		0,
  /* RID_OR_EQ */	0,
  /* RID_XOR */		0,
  /* RID_XOR_EQ */	0,
  /* RID_BITAND */	0,
  /* RID_BITOR */	0,
  /* RID_COMPL */	0,
  
  /* Objective C */
  /* RID_ID */			OBJECTNAME,
  /* RID_AT_ENCODE */		ENCODE,
  /* RID_AT_END */		END,
  /* RID_AT_CLASS */		CLASS,
  /* RID_AT_ALIAS */		ALIAS,
  /* RID_AT_DEFS */		DEFS,
  /* RID_AT_PRIVATE */		PRIVATE,
  /* RID_AT_PROTECTED */	PROTECTED,
  /* RID_AT_PUBLIC */		PUBLIC,
  /* RID_AT_PROTOCOL */		PROTOCOL,
  /* RID_AT_SELECTOR */		SELECTOR,
  /* RID_AT_INTERFACE */	INTERFACE,
  /* RID_AT_IMPLEMENTATION */	IMPLEMENTATION
};

static void
init_reswords ()
{
  unsigned int i;
  tree id;
  int mask = (flag_isoc99 ? 0 : D_C89)
	      | (flag_traditional ? D_TRAD : 0)
	      | (flag_no_asm ? (flag_isoc99 ? D_EXT : D_EXT|D_EXT89) : 0);

  if (c_language != clk_objective_c)
     mask |= D_OBJC;

  /* It is not necessary to register ridpointers as a GC root, because
     all the trees it points to are permanently interned in the
     get_identifier hash anyway.  */
  ridpointers = (tree *) xcalloc ((int) RID_MAX, sizeof (tree));
  for (i = 0; i < N_reswords; i++)
    {
      /* If a keyword is disabled, do not enter it into the table
	 and so create a canonical spelling that isn't a keyword.  */
      if (reswords[i].disable & mask)
	continue;

      id = get_identifier (reswords[i].word);
      C_RID_CODE (id) = reswords[i].rid;
      C_IS_RESERVED_WORD (id) = 1;
      ridpointers [(int) reswords[i].rid] = id;
    }
}

#define NAME(type) cpp_type2name (type)

static void
yyerror (msgid)
     const char *msgid;
{
  const char *string = _(msgid);

  if (last_token == CPP_EOF)
    error ("%s at end of input", string);
  else if (last_token == CPP_CHAR || last_token == CPP_WCHAR)
    {
      unsigned int val = TREE_INT_CST_LOW (yylval.ttype);
      const char *const ell = (last_token == CPP_CHAR) ? "" : "L";
      if (val <= UCHAR_MAX && ISGRAPH (val))
	error ("%s before %s'%c'", string, ell, val);
      else
	error ("%s before %s'\\x%x'", string, ell, val);
    }
  else if (last_token == CPP_STRING
	   || last_token == CPP_WSTRING)
    error ("%s before string constant", string);
  else if (last_token == CPP_NUMBER)
    error ("%s before numeric constant", string);
  else if (last_token == CPP_NAME)
    error ("%s before \"%s\"", string, IDENTIFIER_POINTER (yylval.ttype));
  else
    error ("%s before '%s' token", string, NAME(last_token));
}

static int
yylexname ()
{
  tree decl;
  
  
  if (C_IS_RESERVED_WORD (yylval.ttype))
    {
      enum rid rid_code = C_RID_CODE (yylval.ttype);

      {
	int yycode = rid_to_yy[(int) rid_code];
	if (yycode == STRING_FUNC_NAME)
	  {
	    /* __FUNCTION__ and __PRETTY_FUNCTION__ get converted
	       to string constants.  */
	    const char *name = fname_string (rid_code);
	  
	    yylval.ttype = build_string (strlen (name) + 1, name);
	    C_ARTIFICIAL_STRING_P (yylval.ttype) = 1;
	    last_token = CPP_STRING;  /* so yyerror won't choke */
	    return STRING;
	  }
      
	/* Return the canonical spelling for this keyword.  */
	yylval.ttype = ridpointers[(int) rid_code];
	return yycode;
      }
    }

  decl = lookup_name (yylval.ttype);
  if (decl)
    {
      if (TREE_CODE (decl) == TYPE_DECL)
	return TYPENAME;
    }

  return IDENTIFIER;
}


static inline int
_yylex ()
{
 get_next:
  last_token = c_lex (&yylval.ttype);
  switch (last_token)
    {
    case CPP_EQ:					return '=';
    case CPP_NOT:					return '!';
    case CPP_GREATER:	yylval.code = GT_EXPR;		return ARITHCOMPARE;
    case CPP_LESS:	yylval.code = LT_EXPR;		return ARITHCOMPARE;
    case CPP_PLUS:	yylval.code = PLUS_EXPR;	return '+';
    case CPP_MINUS:	yylval.code = MINUS_EXPR;	return '-';
    case CPP_MULT:	yylval.code = MULT_EXPR;	return '*';
    case CPP_DIV:	yylval.code = TRUNC_DIV_EXPR;	return '/';
    case CPP_MOD:	yylval.code = TRUNC_MOD_EXPR;	return '%';
    case CPP_AND:	yylval.code = BIT_AND_EXPR;	return '&';
    case CPP_OR:	yylval.code = BIT_IOR_EXPR;	return '|';
    case CPP_XOR:	yylval.code = BIT_XOR_EXPR;	return '^';
    case CPP_RSHIFT:	yylval.code = RSHIFT_EXPR;	return RSHIFT;
    case CPP_LSHIFT:	yylval.code = LSHIFT_EXPR;	return LSHIFT;

    case CPP_COMPL:					return '~';
    case CPP_AND_AND:					return ANDAND;
    case CPP_OR_OR:					return OROR;
    case CPP_QUERY:					return '?';
    case CPP_OPEN_PAREN:				return '(';
    case CPP_EQ_EQ:	yylval.code = EQ_EXPR;		return EQCOMPARE;
    case CPP_NOT_EQ:	yylval.code = NE_EXPR;		return EQCOMPARE;
    case CPP_GREATER_EQ:yylval.code = GE_EXPR;		return ARITHCOMPARE;
    case CPP_LESS_EQ:	yylval.code = LE_EXPR;		return ARITHCOMPARE;

    case CPP_PLUS_EQ:	yylval.code = PLUS_EXPR;	return ASSIGN;
    case CPP_MINUS_EQ:	yylval.code = MINUS_EXPR;	return ASSIGN;
    case CPP_MULT_EQ:	yylval.code = MULT_EXPR;	return ASSIGN;
    case CPP_DIV_EQ:	yylval.code = TRUNC_DIV_EXPR;	return ASSIGN;
    case CPP_MOD_EQ:	yylval.code = TRUNC_MOD_EXPR;	return ASSIGN;
    case CPP_AND_EQ:	yylval.code = BIT_AND_EXPR;	return ASSIGN;
    case CPP_OR_EQ:	yylval.code = BIT_IOR_EXPR;	return ASSIGN;
    case CPP_XOR_EQ:	yylval.code = BIT_XOR_EXPR;	return ASSIGN;
    case CPP_RSHIFT_EQ:	yylval.code = RSHIFT_EXPR;	return ASSIGN;
    case CPP_LSHIFT_EQ:	yylval.code = LSHIFT_EXPR;	return ASSIGN;

    case CPP_OPEN_SQUARE:				return '[';
    case CPP_CLOSE_SQUARE:				return ']';
    case CPP_OPEN_BRACE:				return '{';
    case CPP_CLOSE_BRACE:				return '}';
    case CPP_ELLIPSIS:					return ELLIPSIS;

    case CPP_PLUS_PLUS:					return PLUSPLUS;
    case CPP_MINUS_MINUS:				return MINUSMINUS;
    case CPP_DEREF:					return POINTSAT;
    case CPP_DOT:					return '.';

      /* The following tokens may affect the interpretation of any
	 identifiers following, if doing Objective-C.  */
    case CPP_COLON:		OBJC_NEED_RAW_IDENTIFIER (0);	return ':';
    case CPP_COMMA:		OBJC_NEED_RAW_IDENTIFIER (0);	return ',';
    case CPP_CLOSE_PAREN:	OBJC_NEED_RAW_IDENTIFIER (0);	return ')';
    case CPP_SEMICOLON:		OBJC_NEED_RAW_IDENTIFIER (0);	return ';';

    case CPP_EOF:
      return 0;

    case CPP_NAME:
      return yylexname ();

    case CPP_NUMBER:
    case CPP_CHAR:
    case CPP_WCHAR:
      return CONSTANT;

    case CPP_STRING:
    case CPP_WSTRING:
      return STRING;
      
      /* This token is Objective-C specific.  It gives the next token
	 special significance.  */
    case CPP_ATSIGN:

      /* These tokens are C++ specific (and will not be generated
         in C mode, but let's be cautious).  */
    case CPP_SCOPE:
    case CPP_DEREF_STAR:
    case CPP_DOT_STAR:
    case CPP_MIN_EQ:
    case CPP_MAX_EQ:
    case CPP_MIN:
    case CPP_MAX:
      /* These tokens should not survive translation phase 4.  */
    case CPP_HASH:
    case CPP_PASTE:
      error ("syntax error at '%s' token", NAME(last_token));
      goto get_next;

    default:
      abort ();
    }
  /* NOTREACHED */
}

static int
yylex()
{
  int r;
  timevar_push (TV_LEX);
  r = _yylex();
  timevar_pop (TV_LEX);
  return r;
}

/* Sets the value of the 'yydebug' variable to VALUE.
   This is a function so we don't have to have YYDEBUG defined
   in order to build the compiler.  */

void
c_set_yydebug (value)
     int value;
{
#if YYDEBUG != 0
  yydebug = value;
#else
  warning ("YYDEBUG not defined");
#endif
}

/* Function used when yydebug is set, to print a token in more detail.  */

static void
yyprint (file, yychar, yyl)
     FILE *file;
     int yychar;
     YYSTYPE yyl;
{
  tree t = yyl.ttype;

  fprintf (file, " [%s]", NAME(last_token));
  
  switch (yychar)
    {
    case IDENTIFIER:
    case TYPENAME:
    case OBJECTNAME:
    case TYPESPEC:
    case TYPE_QUAL:
    case SCSPEC:
      if (IDENTIFIER_POINTER (t))
	fprintf (file, " `%s'", IDENTIFIER_POINTER (t));
      break;

    case CONSTANT:
      fprintf (file, " %s", GET_MODE_NAME (TYPE_MODE (TREE_TYPE (t))));
      if (TREE_CODE (t) == INTEGER_CST)
	fprintf (file,
#if HOST_BITS_PER_WIDE_INT == 64
#if HOST_BITS_PER_WIDE_INT == HOST_BITS_PER_INT
		 " 0x%x%016x",
#else
#if HOST_BITS_PER_WIDE_INT == HOST_BITS_PER_LONG
		 " 0x%lx%016lx",
#else
		 " 0x%llx%016llx",
#endif
#endif
#else
#if HOST_BITS_PER_WIDE_INT != HOST_BITS_PER_INT
		 " 0x%lx%08lx",
#else
		 " 0x%x%08x",
#endif
#endif
		 TREE_INT_CST_HIGH (t), TREE_INT_CST_LOW (t));
      break;
    }
}

/* This is not the ideal place to put these, but we have to get them out
   of c-lex.c because cp/lex.c has its own versions.  */

/* Return something to represent absolute declarators containing a *.
   TARGET is the absolute declarator that the * contains.
   TYPE_QUALS_ATTRS is a list of modifiers such as const or volatile
   to apply to the pointer type, represented as identifiers, possible mixed
   with attributes.

   We return an INDIRECT_REF whose "contents" are TARGET (inside a TREE_LIST,
   if attributes are present) and whose type is the modifier list.  */

tree
make_pointer_declarator (type_quals_attrs, target)
     tree type_quals_attrs, target;
{
  tree quals, attrs;
  tree itarget = target;
  split_specs_attrs (type_quals_attrs, &quals, &attrs);
  if (attrs != NULL_TREE)
    itarget = tree_cons (attrs, target, NULL_TREE);
  return build1 (INDIRECT_REF, quals, itarget);
}
