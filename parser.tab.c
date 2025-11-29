/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 13 "parser.y"

	#include <stdio.h>
	#include <string.h>
	#include "nombresDeTipos.h"
	#include "nombreDeTiposCuadruplas.h"
	#include "literal.h"
	#include "tablaDeConstantes.h"
	#include "tablaDeSimbolos.h"
	#include "tablaDeCuadruplas.h"
	int yylex(); // Usamos la funcion que se crea gracias a flex
	void yyerror(char *); // Prototipo de una funcion necesaria
	extern FILE* yyin; // Usamos la varible de Flex en la que viene la entrada
	TablaDeConstantes tc; //Es donde guardaremos las constantes
	#define YYDEBUG 1 //Permite activar el modo Debugg de Bison

	#define MAX_CONSTANTES 100
	#define MAX_IDS 100
	#define MAX_CUADRUPLAS 1000

	int pos = 0; 
	infoVariable tablaDeSimbolos[MAX_IDS]; 

	int nextquad = 0; 
	cuadrupla tablaDeCuadruplas[MAX_CUADRUPLAS]; 


#line 98 "parser.tab.c"

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

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_cadenaTK = 3,                   /* cadenaTK  */
  YYSYMBOL_caracterTK = 4,                 /* caracterTK  */
  YYSYMBOL_booleanoTK = 5,                 /* booleanoTK  */
  YYSYMBOL_realTK = 6,                     /* realTK  */
  YYSYMBOL_enteroTK = 7,                   /* enteroTK  */
  YYSYMBOL_accionTK = 8,                   /* accionTK  */
  YYSYMBOL_algoritmoTK = 9,                /* algoritmoTK  */
  YYSYMBOL_funcionTK = 10,                 /* funcionTK  */
  YYSYMBOL_tipoTK = 11,                    /* tipoTK  */
  YYSYMBOL_varTK = 12,                     /* varTK  */
  YYSYMBOL_tuplaTK = 13,                   /* tuplaTK  */
  YYSYMBOL_constTK = 14,                   /* constTK  */
  YYSYMBOL_refTK = 15,                     /* refTK  */
  YYSYMBOL_tablaTK = 16,                   /* tablaTK  */
  YYSYMBOL_deTK = 17,                      /* deTK  */
  YYSYMBOL_finAccionTK = 18,               /* finAccionTK  */
  YYSYMBOL_finAlgoritmoTK = 19,            /* finAlgoritmoTK  */
  YYSYMBOL_finFuncionTK = 20,              /* finFuncionTK  */
  YYSYMBOL_finTipoTK = 21,                 /* finTipoTK  */
  YYSYMBOL_finVarTK = 22,                  /* finVarTK  */
  YYSYMBOL_finTuplaTK = 23,                /* finTuplaTK  */
  YYSYMBOL_finConstTK = 24,                /* finConstTK  */
  YYSYMBOL_mientrasTK = 25,                /* mientrasTK  */
  YYSYMBOL_siTK = 26,                      /* siTK  */
  YYSYMBOL_paraTK = 27,                    /* paraTK  */
  YYSYMBOL_hacerTK = 28,                   /* hacerTK  */
  YYSYMBOL_hastaTK = 29,                   /* hastaTK  */
  YYSYMBOL_continuarTK = 30,               /* continuarTK  */
  YYSYMBOL_finMientrasTK = 31,             /* finMientrasTK  */
  YYSYMBOL_finSiTK = 32,                   /* finSiTK  */
  YYSYMBOL_finParaTK = 33,                 /* finParaTK  */
  YYSYMBOL_entradaTK = 34,                 /* entradaTK  */
  YYSYMBOL_entradaSalidaTK = 35,           /* entradaSalidaTK  */
  YYSYMBOL_salidaTK = 36,                  /* salidaTK  */
  YYSYMBOL_devuelveTK = 37,                /* devuelveTK  */
  YYSYMBOL_operadoresMultiplicacionODivisionTK = 38, /* operadoresMultiplicacionODivisionTK  */
  YYSYMBOL_noTK = 39,                      /* noTK  */
  YYSYMBOL_operadoresBooleanosTK = 40,     /* operadoresBooleanosTK  */
  YYSYMBOL_operadoresSumaORestaTK = 41,    /* operadoresSumaORestaTK  */
  YYSYMBOL_parentesisAperturaTK = 42,      /* parentesisAperturaTK  */
  YYSYMBOL_parentesisCierreTK = 43,        /* parentesisCierreTK  */
  YYSYMBOL_operadoresComparacionTK = 44,   /* operadoresComparacionTK  */
  YYSYMBOL_signoIgualTK = 45,              /* signoIgualTK  */
  YYSYMBOL_igualAsignacionTK = 46,         /* igualAsignacionTK  */
  YYSYMBOL_puntoYComaTK = 47,              /* puntoYComaTK  */
  YYSYMBOL_separadorTK = 48,               /* separadorTK  */
  YYSYMBOL_subrangoTK = 49,                /* subrangoTK  */
  YYSYMBOL_definicionTipoVariableTK = 50,  /* definicionTipoVariableTK  */
  YYSYMBOL_entoncesTK = 51,                /* entoncesTK  */
  YYSYMBOL_siNoSiTK = 52,                  /* siNoSiTK  */
  YYSYMBOL_literalTK = 53,                 /* literalTK  */
  YYSYMBOL_inicioArrayTK = 54,             /* inicioArrayTK  */
  YYSYMBOL_finalArrayTK = 55,              /* finalArrayTK  */
  YYSYMBOL_literalBooleanoTK = 56,         /* literalBooleanoTK  */
  YYSYMBOL_literalCadenaTK = 57,           /* literalCadenaTK  */
  YYSYMBOL_identificadorTK = 58,           /* identificadorTK  */
  YYSYMBOL_literalCaracterTK = 59,         /* literalCaracterTK  */
  YYSYMBOL_literalEnteroTK = 60,           /* literalEnteroTK  */
  YYSYMBOL_precondicionTK = 61,            /* precondicionTK  */
  YYSYMBOL_postCondicionTK = 62,           /* postCondicionTK  */
  YYSYMBOL_comentarioTK = 63,              /* comentarioTK  */
  YYSYMBOL_literalRealTK = 64,             /* literalRealTK  */
  YYSYMBOL_nombreConstanteTK = 65,         /* nombreConstanteTK  */
  YYSYMBOL_identificadorBooleanoTK = 66,   /* identificadorBooleanoTK  */
  YYSYMBOL_puntoTK = 67,                   /* puntoTK  */
  YYSYMBOL_UPLUSMINUS = 68,                /* UPLUSMINUS  */
  YYSYMBOL_YYACCEPT = 69,                  /* $accept  */
  YYSYMBOL_desc_algoritmo = 70,            /* desc_algoritmo  */
  YYSYMBOL_cabecera_alg = 71,              /* cabecera_alg  */
  YYSYMBOL_bloque_alg = 72,                /* bloque_alg  */
  YYSYMBOL_decl_globales = 73,             /* decl_globales  */
  YYSYMBOL_decl_a_f = 74,                  /* decl_a_f  */
  YYSYMBOL_bloque = 75,                    /* bloque  */
  YYSYMBOL_declaraciones = 76,             /* declaraciones  */
  YYSYMBOL_declaracion_tipo = 77,          /* declaracion_tipo  */
  YYSYMBOL_declaracion_const = 78,         /* declaracion_const  */
  YYSYMBOL_declaracion_var = 79,           /* declaracion_var  */
  YYSYMBOL_lista_d_tipo = 80,              /* lista_d_tipo  */
  YYSYMBOL_d_tipo = 81,                    /* d_tipo  */
  YYSYMBOL_expresion_t = 82,               /* expresion_t  */
  YYSYMBOL_lista_campos = 83,              /* lista_campos  */
  YYSYMBOL_lista_d_cte = 84,               /* lista_d_cte  */
  YYSYMBOL_lista_d_var = 85,               /* lista_d_var  */
  YYSYMBOL_lista_id = 86,                  /* lista_id  */
  YYSYMBOL_decl_ent_sal = 87,              /* decl_ent_sal  */
  YYSYMBOL_decl_ent = 88,                  /* decl_ent  */
  YYSYMBOL_decl_sal = 89,                  /* decl_sal  */
  YYSYMBOL_expresion = 90,                 /* expresion  */
  YYSYMBOL_exp_a = 91,                     /* exp_a  */
  YYSYMBOL_exp_b = 92,                     /* exp_b  */
  YYSYMBOL_operando = 93,                  /* operando  */
  YYSYMBOL_operando_b = 94,                /* operando_b  */
  YYSYMBOL_instrucciones = 95,             /* instrucciones  */
  YYSYMBOL_instruccion = 96,               /* instruccion  */
  YYSYMBOL_asignacion = 97,                /* asignacion  */
  YYSYMBOL_alternativa = 98,               /* alternativa  */
  YYSYMBOL_lista_opciones = 99,            /* lista_opciones  */
  YYSYMBOL_iteracion = 100,                /* iteracion  */
  YYSYMBOL_it_cota_exp = 101,              /* it_cota_exp  */
  YYSYMBOL_it_cota_fija = 102,             /* it_cota_fija  */
  YYSYMBOL_accion_d = 103,                 /* accion_d  */
  YYSYMBOL_funcion_d = 104,                /* funcion_d  */
  YYSYMBOL_a_cabecera = 105,               /* a_cabecera  */
  YYSYMBOL_f_cabecera = 106,               /* f_cabecera  */
  YYSYMBOL_d_par_form = 107,               /* d_par_form  */
  YYSYMBOL_d_p_form = 108,                 /* d_p_form  */
  YYSYMBOL_accion_ll = 109,                /* accion_ll  */
  YYSYMBOL_funcion_ll = 110,               /* funcion_ll  */
  YYSYMBOL_l_ll = 111                      /* l_ll  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYLAST   271

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  101
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  238

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   323


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   159,   159,   163,   167,   171,   174,   177,   181,   184,
     187,   190,   195,   198,   201,   204,   210,   215,   220,   227,
     230,   233,   236,   239,   242,   245,   248,   251,   254,   257,
     260,   265,   268,   273,   276,   281,   284,   287,   290,   293,
     296,   301,   306,   309,   317,   322,   330,   337,   340,   343,
     348,   353,   359,   362,   365,   370,   435,   532,   536,   539,
     542,   545,   550,   563,   572,   575,   578,   595,   601,   605,
     608,   611,   617,   624,   627,   632,   635,   638,   641,   644,
     649,   682,   687,   692,   695,   698,   701,   706,   711,   717,
     722,   727,   732,   737,   740,   743,   746,   749,   755,   760,
     765,   768
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "cadenaTK",
  "caracterTK", "booleanoTK", "realTK", "enteroTK", "accionTK",
  "algoritmoTK", "funcionTK", "tipoTK", "varTK", "tuplaTK", "constTK",
  "refTK", "tablaTK", "deTK", "finAccionTK", "finAlgoritmoTK",
  "finFuncionTK", "finTipoTK", "finVarTK", "finTuplaTK", "finConstTK",
  "mientrasTK", "siTK", "paraTK", "hacerTK", "hastaTK", "continuarTK",
  "finMientrasTK", "finSiTK", "finParaTK", "entradaTK", "entradaSalidaTK",
  "salidaTK", "devuelveTK", "operadoresMultiplicacionODivisionTK", "noTK",
  "operadoresBooleanosTK", "operadoresSumaORestaTK",
  "parentesisAperturaTK", "parentesisCierreTK", "operadoresComparacionTK",
  "signoIgualTK", "igualAsignacionTK", "puntoYComaTK", "separadorTK",
  "subrangoTK", "definicionTipoVariableTK", "entoncesTK", "siNoSiTK",
  "literalTK", "inicioArrayTK", "finalArrayTK", "literalBooleanoTK",
  "literalCadenaTK", "identificadorTK", "literalCaracterTK",
  "literalEnteroTK", "precondicionTK", "postCondicionTK", "comentarioTK",
  "literalRealTK", "nombreConstanteTK", "identificadorBooleanoTK",
  "puntoTK", "UPLUSMINUS", "$accept", "desc_algoritmo", "cabecera_alg",
  "bloque_alg", "decl_globales", "decl_a_f", "bloque", "declaraciones",
  "declaracion_tipo", "declaracion_const", "declaracion_var",
  "lista_d_tipo", "d_tipo", "expresion_t", "lista_campos", "lista_d_cte",
  "lista_d_var", "lista_id", "decl_ent_sal", "decl_ent", "decl_sal",
  "expresion", "exp_a", "exp_b", "operando", "operando_b", "instrucciones",
  "instruccion", "asignacion", "alternativa", "lista_opciones",
  "iteracion", "it_cota_exp", "it_cota_fija", "accion_d", "funcion_d",
  "a_cabecera", "f_cabecera", "d_par_form", "d_p_form", "accion_ll",
  "funcion_ll", "l_ll", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-132)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-54)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      13,   -28,    69,    37,  -132,    40,    48,    47,   147,   144,
      40,    40,    71,   111,   112,   145,   -42,   157,   117,     6,
     147,   147,   147,   124,   132,   129,   144,   144,  -132,  -132,
     114,   140,    34,   148,   146,   149,   174,   150,   131,  -132,
       2,     2,   141,  -132,   159,  -132,    -4,   156,  -132,   158,
    -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,   161,
     147,   162,   147,   -42,   -42,   153,   170,  -132,  -132,  -132,
    -132,  -132,  -132,  -132,  -132,   151,   114,   154,     2,    45,
       2,  -132,    84,  -132,  -132,  -132,   160,   167,   171,    32,
     177,    -2,  -132,  -132,  -132,   172,   173,   175,   176,   178,
    -132,   -42,   -42,   179,   114,  -132,   182,    -9,     5,   181,
       2,  -132,     2,     2,   163,     2,     6,    89,   200,   -42,
     191,  -132,  -132,  -132,  -132,   180,   206,  -132,   125,   171,
     187,    45,  -132,  -132,    70,   128,     2,    48,   125,     2,
      45,    45,     2,    47,    47,    47,    47,    47,  -132,  -132,
    -132,   185,     6,     6,     2,     9,   190,   171,   -26,  -132,
      27,  -132,   -42,   -42,   -42,   192,   189,  -132,   194,     2,
     114,  -132,   193,    70,  -132,  -132,   195,  -132,  -132,   196,
    -132,   201,   187,  -132,  -132,  -132,  -132,  -132,   -42,   203,
     197,    11,     2,  -132,  -132,   198,   202,   204,   199,    89,
     207,     1,   208,   125,  -132,  -132,  -132,     2,   209,     2,
    -132,   114,   114,   114,  -132,  -132,   114,  -132,   151,   188,
      41,  -132,    -5,  -132,  -132,  -132,   210,  -132,   228,     6,
       6,  -132,   114,   197,   214,  -132,  -132,  -132
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,     7,    20,    40,    15,    10,
       7,     7,     0,     0,     0,     0,    42,     0,     0,     0,
      15,    15,    15,     0,     0,     0,    10,    10,     5,     6,
       0,     0,     0,     0,    44,    46,     0,     0,     0,     4,
       0,     0,     0,    75,    68,    72,     0,     0,    11,    74,
      76,    77,    78,    86,    85,    79,    12,    13,    14,     0,
      15,     0,    15,    42,    42,     0,    47,    49,     8,     9,
      29,    30,    27,    28,    26,    34,     0,     0,     0,     0,
       0,    65,    68,    32,    60,    59,     0,     0,    31,    52,
      53,    58,    64,    54,    16,     0,     0,     0,     0,     0,
      17,     0,     0,     0,     0,     2,    68,     0,     0,     0,
       0,    71,     0,     0,     0,     0,     0,    94,     0,    42,
       0,    50,    51,     3,    48,     0,     0,    25,     0,     0,
      63,     0,    68,    61,    52,    53,     0,    20,     0,     0,
       0,     0,     0,    40,    40,    40,    40,    40,    43,    45,
      18,     0,     0,     0,     0,   101,     0,    80,     0,    69,
      81,    73,     0,     0,     0,     0,     0,    89,     0,     0,
       0,    21,     0,     0,    57,    67,     0,    19,    24,    66,
      56,    55,    62,    39,    36,    35,    37,    38,    42,     0,
      84,     0,     0,    98,    70,     0,     0,     0,     0,    94,
       0,     0,     0,     0,    99,    41,    87,     0,     0,     0,
     100,     0,     0,     0,    91,    93,     0,    90,    34,     0,
       0,    82,     0,    95,    97,    96,     0,    33,     0,     0,
       0,    92,     0,    84,     0,    22,    83,    88
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -132,  -132,  -132,  -132,   134,   166,   126,   118,    15,    91,
    -132,   113,   -70,  -121,    33,     4,   -60,   -87,  -132,  -132,
     205,   -32,   -52,   -68,   -19,   -17,  -115,  -132,  -132,  -132,
      20,  -132,  -132,  -132,  -132,  -132,  -132,  -132,    57,  -132,
    -132,  -132,  -131
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     8,    17,     9,    25,    18,    19,    20,    21,
      22,    13,    86,    87,   126,    15,    36,    37,    65,    66,
      67,    88,    89,    90,    91,    92,    48,    49,    50,    51,
     208,    52,    53,    54,    26,    27,    60,    62,   165,   166,
      55,    93,   156
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      46,   161,    47,   121,   122,   176,   127,   172,   107,   108,
     130,   111,   135,   111,   148,   149,    34,   178,   139,   152,
      10,   217,     1,   230,    35,    10,    10,   133,   134,   194,
       3,    40,    41,    42,   151,   139,    43,   189,   190,   139,
     209,    78,   112,    79,    80,   139,   129,   160,   129,   139,
     113,     6,   113,   139,     7,   139,   153,   192,    81,   168,
     106,   210,    84,   114,    44,   114,    85,   142,    45,     4,
     140,   -53,    45,   141,   182,   195,   196,   197,   155,   173,
     157,   158,   219,   129,     5,   139,    79,   131,   180,   181,
      95,    96,   229,    97,    98,   159,    11,    46,    99,    47,
     202,    11,    11,   132,   155,    84,    12,   179,   140,    85,
     129,   141,    14,   174,   233,   234,    30,    70,    71,    72,
      73,    74,   191,   162,   163,   164,   136,    75,   205,    76,
      77,   -23,    31,    46,    46,    47,    47,   201,    56,    57,
      58,   223,   224,   225,    28,    29,   226,   183,   184,   185,
     186,   187,    23,    78,    24,    79,    80,    32,     6,    16,
     155,     7,   235,    63,    78,    64,    79,    80,   142,    33,
      81,   175,    82,    83,    84,   220,    38,   222,    85,    39,
      45,    81,    59,   106,    83,    84,   118,    94,   120,    85,
      61,    45,    68,    69,   101,   100,   103,   102,   105,   109,
     104,   110,   115,   117,   119,   116,    64,   137,   128,   125,
      46,    46,    47,    47,   123,   139,   138,   142,   167,   143,
     144,   132,   145,   146,   136,   147,   150,   154,   169,   171,
     170,   -53,   188,   193,   206,   198,   199,   200,   204,   140,
     -54,   221,   203,   228,   216,   232,   214,   237,   211,   207,
     177,   227,   212,   236,   213,   218,   215,   231,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   124
};

static const yytype_int16 yycheck[] =
{
      19,   116,    19,    63,    64,   136,    76,   128,    40,    41,
      78,    15,    80,    15,   101,   102,    58,   138,    44,    28,
       5,    20,     9,    28,    66,    10,    11,    79,    80,    55,
      58,    25,    26,    27,   104,    44,    30,   152,   153,    44,
      29,    39,    46,    41,    42,    44,    78,   115,    80,    44,
      54,    11,    54,    44,    14,    44,    51,    48,    56,   119,
      58,   192,    60,    67,    58,    67,    64,    40,    66,     0,
      38,    44,    66,    41,   142,   162,   163,   164,   110,   131,
     112,   113,   203,   115,    47,    44,    41,    42,   140,   141,
      56,    57,    51,    59,    60,   114,     5,   116,    64,   116,
     170,    10,    11,    58,   136,    60,    58,   139,    38,    64,
     142,    41,    65,    43,   229,   230,    45,     3,     4,     5,
       6,     7,   154,    34,    35,    36,    42,    13,   188,    15,
      16,    47,    21,   152,   153,   152,   153,   169,    20,    21,
      22,   211,   212,   213,    10,    11,   216,   143,   144,   145,
     146,   147,     8,    39,    10,    41,    42,    45,    11,    12,
     192,    14,   232,    34,    39,    36,    41,    42,    40,    24,
      56,    43,    58,    59,    60,   207,    19,   209,    64,    62,
      66,    56,    58,    58,    59,    60,    60,    47,    62,    64,
      58,    66,    26,    27,    48,    47,    22,    48,    67,    58,
      50,    42,    46,    42,    42,    47,    36,    47,    54,    58,
     229,   230,   229,   230,    61,    44,    49,    40,    18,    47,
      47,    58,    47,    47,    42,    47,    47,    46,    37,    23,
      50,    44,    47,    43,    31,    43,    47,    43,    43,    38,
      44,    32,    49,    55,    37,    17,    47,    33,    50,    52,
     137,   218,    50,   233,    50,    47,   199,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    66
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     9,    70,    58,     0,    47,    11,    14,    71,    73,
      77,    78,    58,    80,    65,    84,    12,    72,    75,    76,
      77,    78,    79,     8,    10,    74,   103,   104,    73,    73,
      45,    21,    45,    24,    58,    66,    85,    86,    19,    62,
      25,    26,    27,    30,    58,    66,    93,    94,    95,    96,
      97,    98,   100,   101,   102,   109,    76,    76,    76,    58,
     105,    58,   106,    34,    36,    87,    88,    89,    74,    74,
       3,     4,     5,     6,     7,    13,    15,    16,    39,    41,
      42,    56,    58,    59,    60,    64,    81,    82,    90,    91,
      92,    93,    94,   110,    47,    56,    57,    59,    60,    64,
      47,    48,    48,    22,    50,    67,    58,    90,    90,    58,
      42,    15,    46,    54,    67,    46,    47,    42,    75,    42,
      75,    85,    85,    61,    89,    58,    83,    81,    54,    90,
      92,    42,    58,    91,    91,    92,    42,    47,    49,    44,
      38,    41,    40,    47,    47,    47,    47,    47,    86,    86,
      47,    81,    28,    51,    46,    90,   111,    90,    90,    93,
      92,    95,    34,    35,    36,   107,   108,    18,    85,    37,
      50,    23,    82,    91,    43,    43,   111,    80,    82,    90,
      91,    91,    92,    84,    84,    84,    84,    84,    47,    95,
      95,    90,    48,    43,    55,    86,    86,    86,    43,    47,
      43,    90,    81,    49,    43,    85,    31,    52,    99,    29,
     111,    50,    50,    50,    47,   107,    37,    20,    47,    82,
      90,    32,    90,    81,    81,    81,    81,    83,    55,    51,
      28,    47,    17,    95,    95,    81,    99,    33
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    69,    70,    71,    72,    73,    73,    73,    74,    74,
      74,    75,    76,    76,    76,    76,    77,    78,    79,    80,
      80,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    82,    82,    83,    83,    84,    84,    84,    84,    84,
      84,    85,    85,    86,    86,    86,    86,    87,    87,    87,
      88,    89,    90,    90,    90,    91,    91,    91,    91,    91,
      91,    91,    92,    92,    92,    92,    92,    92,    93,    93,
      93,    93,    94,    95,    95,    96,    96,    96,    96,    96,
      97,    97,    98,    99,    99,   100,   100,   101,   102,   103,
     104,   105,   106,   107,   107,   108,   108,   108,   109,   110,
     111,   111
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     7,     4,     2,     2,     2,     0,     2,     2,
       0,     2,     2,     2,     2,     0,     4,     4,     4,     5,
       0,     3,     8,     1,     3,     2,     1,     1,     1,     1,
       1,     1,     1,     5,     0,     5,     5,     5,     5,     5,
       0,     5,     0,     3,     1,     3,     1,     1,     2,     1,
       2,     2,     1,     1,     1,     3,     3,     3,     1,     1,
       1,     2,     3,     2,     1,     1,     3,     3,     1,     3,
       4,     2,     1,     3,     1,     1,     1,     1,     1,     1,
       3,     3,     6,     5,     0,     1,     1,     5,     9,     4,
       6,     5,     7,     3,     0,     4,     4,     4,     4,     4,
       3,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  case 2: /* desc_algoritmo: algoritmoTK identificadorTK puntoYComaTK cabecera_alg bloque_alg finAlgoritmoTK puntoTK  */
#line 159 "parser.y"
                                                                                               {
	}
#line 1375 "parser.tab.c"
    break;

  case 3: /* cabecera_alg: decl_globales decl_a_f decl_ent_sal precondicionTK  */
#line 163 "parser.y"
                                                          {
	}
#line 1382 "parser.tab.c"
    break;

  case 4: /* bloque_alg: bloque postCondicionTK  */
#line 167 "parser.y"
                              {
	}
#line 1389 "parser.tab.c"
    break;

  case 5: /* decl_globales: declaracion_tipo decl_globales  */
#line 171 "parser.y"
                                       {

	}
#line 1397 "parser.tab.c"
    break;

  case 6: /* decl_globales: declaracion_const decl_globales  */
#line 174 "parser.y"
                                          {

	}
#line 1405 "parser.tab.c"
    break;

  case 8: /* decl_a_f: accion_d decl_a_f  */
#line 181 "parser.y"
                          {

	}
#line 1413 "parser.tab.c"
    break;

  case 9: /* decl_a_f: funcion_d decl_a_f  */
#line 184 "parser.y"
                             {

	}
#line 1421 "parser.tab.c"
    break;

  case 11: /* bloque: declaraciones instrucciones  */
#line 190 "parser.y"
                                    {

	}
#line 1429 "parser.tab.c"
    break;

  case 12: /* declaraciones: declaracion_tipo declaraciones  */
#line 195 "parser.y"
                                       {

	}
#line 1437 "parser.tab.c"
    break;

  case 13: /* declaraciones: declaracion_const declaraciones  */
#line 198 "parser.y"
                                          {

	}
#line 1445 "parser.tab.c"
    break;

  case 14: /* declaraciones: declaracion_var declaraciones  */
#line 201 "parser.y"
                                        {

	}
#line 1453 "parser.tab.c"
    break;

  case 16: /* declaracion_tipo: tipoTK lista_d_tipo finTipoTK puntoYComaTK  */
#line 210 "parser.y"
                                                   {

	}
#line 1461 "parser.tab.c"
    break;

  case 17: /* declaracion_const: constTK lista_d_cte finConstTK puntoYComaTK  */
#line 215 "parser.y"
                                                    {

	}
#line 1469 "parser.tab.c"
    break;

  case 18: /* declaracion_var: varTK lista_d_var finVarTK puntoYComaTK  */
#line 220 "parser.y"
                                                {
			
	}
#line 1477 "parser.tab.c"
    break;

  case 19: /* lista_d_tipo: identificadorTK signoIgualTK d_tipo puntoYComaTK lista_d_tipo  */
#line 227 "parser.y"
                                                                      {

	}
#line 1485 "parser.tab.c"
    break;

  case 21: /* d_tipo: tuplaTK lista_campos finTuplaTK  */
#line 233 "parser.y"
                                        {

	}
#line 1493 "parser.tab.c"
    break;

  case 22: /* d_tipo: tablaTK inicioArrayTK expresion_t subrangoTK expresion_t finalArrayTK deTK d_tipo  */
#line 236 "parser.y"
                                                                                            {

	}
#line 1501 "parser.tab.c"
    break;

  case 23: /* d_tipo: identificadorTK  */
#line 239 "parser.y"
                          {

	}
#line 1509 "parser.tab.c"
    break;

  case 24: /* d_tipo: expresion_t subrangoTK expresion_t  */
#line 242 "parser.y"
                                             {

	}
#line 1517 "parser.tab.c"
    break;

  case 25: /* d_tipo: refTK d_tipo  */
#line 245 "parser.y"
                       {

	}
#line 1525 "parser.tab.c"
    break;

  case 26: /* d_tipo: enteroTK  */
#line 248 "parser.y"
                   {
		(yyval.tipo) = ENTERO;
	}
#line 1533 "parser.tab.c"
    break;

  case 27: /* d_tipo: booleanoTK  */
#line 251 "parser.y"
                     {
		(yyval.tipo) = BOOLEANO;
	}
#line 1541 "parser.tab.c"
    break;

  case 28: /* d_tipo: realTK  */
#line 254 "parser.y"
                 {
		(yyval.tipo) = REAL;
	}
#line 1549 "parser.tab.c"
    break;

  case 29: /* d_tipo: cadenaTK  */
#line 257 "parser.y"
                   {
		(yyval.tipo) = CADENA;
	}
#line 1557 "parser.tab.c"
    break;

  case 30: /* d_tipo: caracterTK  */
#line 260 "parser.y"
                     {
		(yyval.tipo) = CARACTER;
	}
#line 1565 "parser.tab.c"
    break;

  case 31: /* expresion_t: expresion  */
#line 265 "parser.y"
                  {

	}
#line 1573 "parser.tab.c"
    break;

  case 32: /* expresion_t: literalCaracterTK  */
#line 268 "parser.y"
                            {

	}
#line 1581 "parser.tab.c"
    break;

  case 33: /* lista_campos: identificadorTK definicionTipoVariableTK d_tipo puntoYComaTK lista_campos  */
#line 273 "parser.y"
                                                                                  {

	}
#line 1589 "parser.tab.c"
    break;

  case 35: /* lista_d_cte: nombreConstanteTK signoIgualTK literalCaracterTK puntoYComaTK lista_d_cte  */
#line 281 "parser.y"
                                                                                  {

	}
#line 1597 "parser.tab.c"
    break;

  case 36: /* lista_d_cte: nombreConstanteTK signoIgualTK literalCadenaTK puntoYComaTK lista_d_cte  */
#line 284 "parser.y"
                                                                                  {

	}
#line 1605 "parser.tab.c"
    break;

  case 37: /* lista_d_cte: nombreConstanteTK signoIgualTK literalEnteroTK puntoYComaTK lista_d_cte  */
#line 287 "parser.y"
                                                                                  {

	}
#line 1613 "parser.tab.c"
    break;

  case 38: /* lista_d_cte: nombreConstanteTK signoIgualTK literalRealTK puntoYComaTK lista_d_cte  */
#line 290 "parser.y"
                                                                                {

	}
#line 1621 "parser.tab.c"
    break;

  case 39: /* lista_d_cte: nombreConstanteTK signoIgualTK literalBooleanoTK puntoYComaTK lista_d_cte  */
#line 293 "parser.y"
                                                                                    {

	}
#line 1629 "parser.tab.c"
    break;

  case 40: /* lista_d_cte: %empty  */
#line 296 "parser.y"
          {

	}
#line 1637 "parser.tab.c"
    break;

  case 41: /* lista_d_var: lista_id definicionTipoVariableTK d_tipo puntoYComaTK lista_d_var  */
#line 301 "parser.y"
                                                                          {
		for (int i = 0; i < (yyvsp[-4].paraListaId).longitud; i++) {
			agregarVariable((yyvsp[-4].paraListaId).nombres[i], (yyvsp[-2].tipo));
		}
	}
#line 1647 "parser.tab.c"
    break;

  case 43: /* lista_id: identificadorTK separadorTK lista_id  */
#line 309 "parser.y"
                                             {
		for (int i = 0; i < (yyvsp[0].paraListaId).longitud; i++) {
			(yyval.paraListaId).nombres[i] = (yyvsp[0].paraListaId).nombres[i];  
		} 
		(yyval.paraListaId).nombres[(yyvsp[0].paraListaId).longitud] = (yyvsp[-2].cadena); 
		(yyval.paraListaId).longitud = (yyvsp[0].paraListaId).longitud + 1;
    }
#line 1659 "parser.tab.c"
    break;

  case 44: /* lista_id: identificadorTK  */
#line 317 "parser.y"
                        {
        (yyval.paraListaId).nombres[0] = (yyvsp[0].cadena);  
        (yyval.paraListaId).longitud = 1; 
	}
#line 1668 "parser.tab.c"
    break;

  case 45: /* lista_id: identificadorBooleanoTK separadorTK lista_id  */
#line 322 "parser.y"
                                                     {
		for (int i = 0; i < (yyvsp[0].paraListaId).longitud; i++) {
			(yyval.paraListaId).nombres[i] = (yyvsp[0].paraListaId).nombres[i];  
		} 
		(yyval.paraListaId).nombres[(yyvsp[0].paraListaId).longitud] = (yyvsp[-2].cadena); 
		(yyval.paraListaId).longitud = (yyvsp[0].paraListaId).longitud + 1;
    }
#line 1680 "parser.tab.c"
    break;

  case 46: /* lista_id: identificadorBooleanoTK  */
#line 330 "parser.y"
                                {
        (yyval.paraListaId).nombres[0] = (yyvsp[0].cadena);  
        (yyval.paraListaId).longitud = 1; 
	}
#line 1689 "parser.tab.c"
    break;

  case 47: /* decl_ent_sal: decl_ent  */
#line 337 "parser.y"
                 {

	}
#line 1697 "parser.tab.c"
    break;

  case 48: /* decl_ent_sal: decl_ent decl_sal  */
#line 340 "parser.y"
                            {

	}
#line 1705 "parser.tab.c"
    break;

  case 49: /* decl_ent_sal: decl_sal  */
#line 343 "parser.y"
                   {

	}
#line 1713 "parser.tab.c"
    break;

  case 50: /* decl_ent: entradaTK lista_d_var  */
#line 348 "parser.y"
                              {

	}
#line 1721 "parser.tab.c"
    break;

  case 51: /* decl_sal: salidaTK lista_d_var  */
#line 353 "parser.y"
                             {

	}
#line 1729 "parser.tab.c"
    break;

  case 52: /* expresion: exp_a  */
#line 359 "parser.y"
              {
		(yyval.paraOperando) = (yyvsp[0].paraOperando);
	}
#line 1737 "parser.tab.c"
    break;

  case 53: /* expresion: exp_b  */
#line 362 "parser.y"
                {
		(yyval.paraOperando) = (yyvsp[0].paraOperando);
	}
#line 1745 "parser.tab.c"
    break;

  case 54: /* expresion: funcion_ll  */
#line 365 "parser.y"
                     {

	}
#line 1753 "parser.tab.c"
    break;

  case 55: /* exp_a: exp_a operadoresSumaORestaTK exp_a  */
#line 370 "parser.y"
                                           {
		infoVariable T = agregarTemporal();
		(yyval.paraOperando).place = obtenerPos(T.nombre);
		if ((yyvsp[-2].paraOperando).type == ENTERO && (yyvsp[0].paraOperando).type == ENTERO) {
			actualizarTipoTemporal(T, ENTERO);
			T.tipo = ENTERO;
			(yyval.paraOperando).type = ENTERO;
			if (strstr((yyvsp[-1].operador), "+") != NULL)
			{
				gen((yyvsp[-2].paraOperando), (yyvsp[0].paraOperando), SUMA_ENTERO, T);
			} else if (strstr((yyvsp[-1].operador), "-") != NULL) {
				gen((yyvsp[-2].paraOperando), (yyvsp[0].paraOperando), RESTA_ENTERO, T);
			}
		} else if ((yyvsp[-2].paraOperando).type == ENTERO && (yyvsp[0].paraOperando).type == REAL) {
			actualizarTipoTemporal(T, REAL);
			T.tipo = REAL;
			(yyval.paraOperando).type = REAL;

			infoVariable T2 = agregarTemporal();
			actualizarTipoTemporal(T2, REAL);
			T2.tipo = REAL;

			tipoOperando opNulo = { .place = -1, .type = TIPO_NULO }; 
			gen((yyvsp[-2].paraOperando), opNulo, ENTERO_TO_REAL, T2);

			tipoOperando operandoNuevo = { .place = obtenerPos(T2.nombre), .type = T2.tipo };

			if (strstr((yyvsp[-1].operador), "+") != NULL)
			{
				gen(operandoNuevo, (yyvsp[0].paraOperando), SUMA_REAL, T);
			} else if (strstr((yyvsp[-1].operador), "-") != NULL) {
				gen(operandoNuevo, (yyvsp[0].paraOperando), RESTA_REAL, T);
			}
		} else if ((yyvsp[-2].paraOperando).type == REAL && (yyvsp[0].paraOperando).type == ENTERO) {
			actualizarTipoTemporal(T, REAL);
			T.tipo = REAL;
			(yyval.paraOperando).type = REAL;

			infoVariable T2 = agregarTemporal();
			actualizarTipoTemporal(T2, REAL);
			T2.tipo = REAL;

			tipoOperando opNulo = { .place = -1, .type = TIPO_NULO }; 
			gen((yyvsp[0].paraOperando), opNulo, ENTERO_TO_REAL, T2);

			tipoOperando operandoNuevo = { .place = obtenerPos(T2.nombre), .type = T2.tipo };

			if (strstr((yyvsp[-1].operador), "+") != NULL)
			{
				gen((yyvsp[-2].paraOperando), operandoNuevo, SUMA_REAL, T);
			} else if (strstr((yyvsp[-1].operador), "-") != NULL) {
				gen((yyvsp[0].paraOperando), operandoNuevo, RESTA_REAL, T);
			}
		} else if ((yyvsp[-2].paraOperando).type == REAL && (yyvsp[0].paraOperando).type == REAL) {
			actualizarTipoTemporal(T, REAL);
			T.tipo = REAL;
			(yyval.paraOperando).type = REAL;
			if (strstr((yyvsp[-1].operador), "+") != NULL)
			{
				gen((yyvsp[-2].paraOperando), (yyvsp[0].paraOperando), SUMA_REAL, T);
			} else if (strstr((yyvsp[-1].operador), "-") != NULL) {
				gen((yyvsp[-2].paraOperando), (yyvsp[0].paraOperando), RESTA_REAL, T);
			}
		}
	}
#line 1823 "parser.tab.c"
    break;

  case 56: /* exp_a: exp_a operadoresMultiplicacionODivisionTK exp_a  */
#line 435 "parser.y"
                                                          {
		infoVariable T = agregarTemporal();
		(yyval.paraOperando).place = obtenerPos(T.nombre);
		if (strstr((yyvsp[-1].operador), "*") != NULL)
		{
			if ((yyvsp[-2].paraOperando).type == ENTERO && (yyvsp[0].paraOperando).type == ENTERO) {
				actualizarTipoTemporal(T, ENTERO);
				T.tipo = ENTERO;
				gen((yyvsp[-2].paraOperando), (yyvsp[0].paraOperando), MULT_ENTERO, T);
				(yyval.paraOperando).type = ENTERO;
			}
			else if((yyvsp[-2].paraOperando).type == ENTERO && (yyvsp[0].paraOperando).type == REAL){
				actualizarTipoTemporal(T, REAL);
				T.tipo = REAL;
				infoVariable T2 = agregarTemporal();
				actualizarTipoTemporal(T2, REAL);
				T2.tipo = REAL;
				tipoOperando opNulo = { .place = -1, .type = TIPO_NULO };
				gen((yyvsp[-2].paraOperando), opNulo, ENTERO_TO_REAL, T2);

				tipoOperando operandoNuevo = { .place = obtenerPos(T2.nombre), .type = T2.tipo };
				gen(operandoNuevo, (yyvsp[0].paraOperando), MULT_REAL, T);
				(yyval.paraOperando).type = REAL;

			}
			else if((yyvsp[-2].paraOperando).type == REAL && (yyvsp[0].paraOperando).type == ENTERO){
				actualizarTipoTemporal(T, ENTERO);
				T.tipo = ENTERO;
				infoVariable T3 = agregarTemporal();
				actualizarTipoTemporal(T3, ENTERO);
				T3.tipo = ENTERO;
				tipoOperando opNulo = { .place = -1, .type = TIPO_NULO };
				gen((yyvsp[-2].paraOperando), opNulo, REAL_TO_ENTERO, T3);

				tipoOperando operandoNuevo = { .place = obtenerPos(T3.nombre), .type = T3.tipo };
				gen(operandoNuevo, (yyvsp[0].paraOperando), REAL_TO_ENTERO, T);
				(yyval.paraOperando).type = ENTERO;

			}
			else if ((yyvsp[-2].paraOperando).type == REAL && (yyvsp[0].paraOperando).type == REAL) {
				actualizarTipoTemporal(T, REAL);
				T.tipo = REAL;
				gen((yyvsp[-2].paraOperando), (yyvsp[0].paraOperando), MULT_REAL, T);
				(yyval.paraOperando).type = REAL;
			}
		} else if (strstr((yyvsp[-1].operador), "/") != NULL) {
			actualizarTipoTemporal(T, REAL);
			T.tipo = REAL;
			(yyval.paraOperando).type = REAL;
			if ((yyvsp[-2].paraOperando).type == ENTERO && (yyvsp[0].paraOperando).type == ENTERO) {
				gen((yyvsp[-2].paraOperando), (yyvsp[0].paraOperando), DIV_REAL_ENTEROS, T);
			} else if ((yyvsp[-2].paraOperando).type == ENTERO && (yyvsp[0].paraOperando).type == REAL) {
				infoVariable T2 = agregarTemporal();
				actualizarTipoTemporal(T2, REAL);
				T2.tipo = REAL;

				tipoOperando opNulo = { .place = -1, .type = TIPO_NULO }; 
				gen((yyvsp[-2].paraOperando), opNulo, ENTERO_TO_REAL, T2);

				tipoOperando operandoNuevo = { .place = obtenerPos(T2.nombre), .type = T2.tipo };

				gen(operandoNuevo, (yyvsp[0].paraOperando), DIV_REAL_REALES, T);
			} else if ((yyvsp[-2].paraOperando).type == REAL && (yyvsp[0].paraOperando).type == ENTERO) {
				infoVariable T2 = agregarTemporal();
				actualizarTipoTemporal(T2, REAL);
				T2.tipo = REAL;

				tipoOperando opNulo = { .place = -1, .type = TIPO_NULO }; 
				gen((yyvsp[0].paraOperando), opNulo, ENTERO_TO_REAL, T2);

				tipoOperando operandoNuevo = { .place = obtenerPos(T2.nombre), .type = T2.tipo };

				gen((yyvsp[-2].paraOperando), operandoNuevo, DIV_REAL_REALES, T);

			} else if ((yyvsp[-2].paraOperando).type == REAL && (yyvsp[0].paraOperando).type == REAL) {
				gen((yyvsp[-2].paraOperando), (yyvsp[0].paraOperando), DIV_REAL_REALES, T);
			}
		} else if (strstr((yyvsp[-1].operador), "div") != NULL) {
			if ((yyvsp[-2].paraOperando).type == ENTERO && (yyvsp[0].paraOperando).type == ENTERO) {
				actualizarTipoTemporal(T, ENTERO);
				T.tipo = ENTERO;
				gen((yyvsp[-2].paraOperando), (yyvsp[0].paraOperando), DIV_ENTERA_ENTEROS, T);
				(yyval.paraOperando).type = ENTERO;
			} else {
				yyerror("En mod solo se pueden dividir enteros\n");
			}
		} else if (strstr((yyvsp[-1].operador), "mod") != NULL) {
			if ((yyvsp[-2].paraOperando).type == ENTERO && (yyvsp[0].paraOperando).type == ENTERO) {
				actualizarTipoTemporal(T, ENTERO);
				T.tipo = ENTERO;
				gen((yyvsp[-2].paraOperando), (yyvsp[0].paraOperando), MOD_ENTERO, T);
				(yyval.paraOperando).type = ENTERO;
			} else {
				yyerror("En mod solo se pueden dividir enteros\n");
			}
		}
	}
#line 1925 "parser.tab.c"
    break;

  case 57: /* exp_a: parentesisAperturaTK exp_a parentesisCierreTK  */
#line 532 "parser.y"
                                                        {
		(yyval.paraOperando).place = (yyvsp[-1].paraOperando).place;
		(yyval.paraOperando).type = (yyvsp[-1].paraOperando).type;
	}
#line 1934 "parser.tab.c"
    break;

  case 58: /* exp_a: operando  */
#line 536 "parser.y"
                   {
		(yyval.paraOperando) = (yyvsp[0].paraOperando);
	}
#line 1942 "parser.tab.c"
    break;

  case 59: /* exp_a: literalRealTK  */
#line 539 "parser.y"
                        {

	}
#line 1950 "parser.tab.c"
    break;

  case 60: /* exp_a: literalEnteroTK  */
#line 542 "parser.y"
                          {

	}
#line 1958 "parser.tab.c"
    break;

  case 61: /* exp_a: operadoresSumaORestaTK exp_a  */
#line 545 "parser.y"
                                                       {
		(yyval.paraOperando) = (yyvsp[0].paraOperando);
	}
#line 1966 "parser.tab.c"
    break;

  case 62: /* exp_b: exp_b operadoresBooleanosTK exp_b  */
#line 550 "parser.y"
                                          {
		infoVariable T = agregarTemporal();
		(yyval.paraOperando).place = obtenerPos(T.nombre);
		actualizarTipoTemporal(T, BOOLEANO);
		T.tipo = BOOLEANO;
		(yyval.paraOperando).type = BOOLEANO;
		printf("Valor: %s\n", (yyvsp[-1].operador));
		if (strstr((yyvsp[-1].operador), "y") != NULL) {
			gen((yyvsp[-2].paraOperando), (yyvsp[0].paraOperando), Y, T);
		} else if (strstr((yyvsp[-1].operador), "o") != NULL) {
			gen((yyvsp[-2].paraOperando), (yyvsp[0].paraOperando), O, T);
		}
	}
#line 1984 "parser.tab.c"
    break;

  case 63: /* exp_b: noTK exp_b  */
#line 563 "parser.y"
                     {
		infoVariable T = agregarTemporal();
		(yyval.paraOperando).place = obtenerPos(T.nombre);
		actualizarTipoTemporal(T, BOOLEANO);
		T.tipo = BOOLEANO;
		(yyval.paraOperando).type = BOOLEANO;
		tipoOperando opNulo = { .place = -1, .type = TIPO_NULO }; 
		gen((yyvsp[0].paraOperando), opNulo, NO, T);
	}
#line 1998 "parser.tab.c"
    break;

  case 64: /* exp_b: operando_b  */
#line 572 "parser.y"
                     {
		(yyval.paraOperando) = (yyvsp[0].paraOperando);
	}
#line 2006 "parser.tab.c"
    break;

  case 65: /* exp_b: literalBooleanoTK  */
#line 575 "parser.y"
                            {

	}
#line 2014 "parser.tab.c"
    break;

  case 66: /* exp_b: expresion operadoresComparacionTK expresion  */
#line 578 "parser.y"
                                                      {
		infoVariable T = agregarTemporal();
		(yyval.paraOperando).place = obtenerPos(T.nombre);
		actualizarTipoTemporal(T, BOOLEANO);
		T.tipo = BOOLEANO;
		(yyval.paraOperando).type = BOOLEANO;
		printf("Valor: %s\n", (yyvsp[-1].operador));
		if (strstr((yyvsp[-1].operador), "<") != NULL) {
			gen((yyvsp[-2].paraOperando), (yyvsp[0].paraOperando), MENOR, T);
		} else if (strstr((yyvsp[-1].operador), "<=") != NULL) {
			gen((yyvsp[-2].paraOperando), (yyvsp[0].paraOperando), MENOR_O_IGUAL, T);
		} else if (strstr((yyvsp[-1].operador), ">") != NULL) {
			gen((yyvsp[-2].paraOperando), (yyvsp[0].paraOperando), MAYOR, T);
		} else if (strstr((yyvsp[-1].operador), ">=") != NULL) {
			gen((yyvsp[-2].paraOperando), (yyvsp[0].paraOperando), MAYOR_O_IGUAL, T);
		}
	}
#line 2036 "parser.tab.c"
    break;

  case 67: /* exp_b: parentesisAperturaTK exp_b parentesisCierreTK  */
#line 595 "parser.y"
                                                        {
		(yyval.paraOperando) = (yyvsp[-1].paraOperando);
	}
#line 2044 "parser.tab.c"
    break;

  case 68: /* operando: identificadorTK  */
#line 601 "parser.y"
                        {
		(yyval.paraOperando).place = obtenerPos((yyvsp[0].cadena));
		(yyval.paraOperando).type = obtenerTipo((yyvsp[0].cadena));
	}
#line 2053 "parser.tab.c"
    break;

  case 69: /* operando: operando puntoTK operando  */
#line 605 "parser.y"
                                    {

	}
#line 2061 "parser.tab.c"
    break;

  case 70: /* operando: operando inicioArrayTK expresion finalArrayTK  */
#line 608 "parser.y"
                                                        {

	}
#line 2069 "parser.tab.c"
    break;

  case 71: /* operando: operando refTK  */
#line 611 "parser.y"
                         {

	}
#line 2077 "parser.tab.c"
    break;

  case 72: /* operando_b: identificadorBooleanoTK  */
#line 617 "parser.y"
                                {
		(yyval.paraOperando).place = obtenerPos((yyvsp[0].cadena));
		(yyval.paraOperando).type = obtenerTipo((yyvsp[0].cadena));
	}
#line 2086 "parser.tab.c"
    break;

  case 73: /* instrucciones: instruccion puntoYComaTK instrucciones  */
#line 624 "parser.y"
                                               {

	}
#line 2094 "parser.tab.c"
    break;

  case 74: /* instrucciones: instruccion  */
#line 627 "parser.y"
                      {

	}
#line 2102 "parser.tab.c"
    break;

  case 75: /* instruccion: continuarTK  */
#line 632 "parser.y"
                    {

	}
#line 2110 "parser.tab.c"
    break;

  case 76: /* instruccion: asignacion  */
#line 635 "parser.y"
                     {

	}
#line 2118 "parser.tab.c"
    break;

  case 77: /* instruccion: alternativa  */
#line 638 "parser.y"
                      {

	}
#line 2126 "parser.tab.c"
    break;

  case 78: /* instruccion: iteracion  */
#line 641 "parser.y"
                    {

	}
#line 2134 "parser.tab.c"
    break;

  case 79: /* instruccion: accion_ll  */
#line 644 "parser.y"
                    {

	}
#line 2142 "parser.tab.c"
    break;

  case 80: /* asignacion: operando igualAsignacionTK expresion  */
#line 649 "parser.y"
                                             {
		if ((yyvsp[-2].paraOperando).type == (yyvsp[0].paraOperando).type) {
			tipoOperando opNulo = { .place = -1, .type = TIPO_NULO }; 
			infoVariable operandoNuevo = { .nombre = tablaDeSimbolos[(yyvsp[-2].paraOperando).place].nombre, .tipo = (yyvsp[-2].paraOperando).type }; 
			gen((yyvsp[0].paraOperando), opNulo, ASIGNACION, operandoNuevo);
		} else if ((yyvsp[-2].paraOperando).type == REAL && (yyvsp[0].paraOperando).type == ENTERO) {
			tipoOperando opNulo = { .place = -1, .type = TIPO_NULO }; 

			infoVariable T2 = agregarTemporal();
			actualizarTipoTemporal(T2, REAL);
			T2.tipo = REAL;

			gen((yyvsp[0].paraOperando), opNulo, ENTERO_TO_REAL, T2);
			infoVariable operandoNuevo = { .nombre = tablaDeSimbolos[(yyvsp[-2].paraOperando).place].nombre, .tipo = (yyvsp[-2].paraOperando).type }; 

			tipoOperando operandoNuevo2 = { .place = obtenerPos(T2.nombre), .type = T2.tipo};

			gen(operandoNuevo2, opNulo, ASIGNACION, operandoNuevo);
		} else if ((yyvsp[-2].paraOperando).type == ENTERO && (yyvsp[0].paraOperando).type == REAL ) {
			tipoOperando opNulo = { .place = -1, .type = TIPO_NULO }; 

			infoVariable T2 = agregarTemporal();
			actualizarTipoTemporal(T2, ENTERO);
			T2.tipo = ENTERO;

			gen((yyvsp[0].paraOperando), opNulo, REAL_TO_ENTERO, T2);
			infoVariable operandoNuevo = { .nombre = tablaDeSimbolos[(yyvsp[-2].paraOperando).place].nombre, .tipo = (yyvsp[-2].paraOperando).type }; 

			tipoOperando operandoNuevo2 = { .place = obtenerPos(T2.nombre), .type = T2.tipo};

			gen(operandoNuevo2, opNulo, ASIGNACION, operandoNuevo);
		}
	}
#line 2180 "parser.tab.c"
    break;

  case 81: /* asignacion: operando_b igualAsignacionTK exp_b  */
#line 682 "parser.y"
                                                   {

	}
#line 2188 "parser.tab.c"
    break;

  case 82: /* alternativa: siTK expresion entoncesTK instrucciones lista_opciones finSiTK  */
#line 687 "parser.y"
                                                                       {

	}
#line 2196 "parser.tab.c"
    break;

  case 83: /* lista_opciones: siNoSiTK expresion entoncesTK instrucciones lista_opciones  */
#line 692 "parser.y"
                                                                   {

	}
#line 2204 "parser.tab.c"
    break;

  case 85: /* iteracion: it_cota_fija  */
#line 698 "parser.y"
                     {

	}
#line 2212 "parser.tab.c"
    break;

  case 86: /* iteracion: it_cota_exp  */
#line 701 "parser.y"
                      {

	}
#line 2220 "parser.tab.c"
    break;

  case 87: /* it_cota_exp: mientrasTK expresion hacerTK instrucciones finMientrasTK  */
#line 706 "parser.y"
                                                                 {

	}
#line 2228 "parser.tab.c"
    break;

  case 88: /* it_cota_fija: paraTK identificadorTK igualAsignacionTK expresion hastaTK expresion hacerTK instrucciones finParaTK  */
#line 711 "parser.y"
                                                                                                             {

	}
#line 2236 "parser.tab.c"
    break;

  case 89: /* accion_d: accionTK a_cabecera bloque finAccionTK  */
#line 717 "parser.y"
                                               {

	}
#line 2244 "parser.tab.c"
    break;

  case 90: /* funcion_d: funcionTK f_cabecera bloque devuelveTK expresion finFuncionTK  */
#line 722 "parser.y"
                                                                      {

	}
#line 2252 "parser.tab.c"
    break;

  case 91: /* a_cabecera: identificadorTK parentesisAperturaTK d_par_form parentesisCierreTK puntoYComaTK  */
#line 727 "parser.y"
                                                                                        {

	}
#line 2260 "parser.tab.c"
    break;

  case 92: /* f_cabecera: identificadorTK parentesisAperturaTK lista_d_var parentesisCierreTK devuelveTK d_tipo puntoYComaTK  */
#line 732 "parser.y"
                                                                                                           {

	}
#line 2268 "parser.tab.c"
    break;

  case 93: /* d_par_form: d_p_form puntoYComaTK d_par_form  */
#line 737 "parser.y"
                                         {

	}
#line 2276 "parser.tab.c"
    break;

  case 95: /* d_p_form: entradaTK lista_id definicionTipoVariableTK d_tipo  */
#line 743 "parser.y"
                                                           {

	}
#line 2284 "parser.tab.c"
    break;

  case 96: /* d_p_form: salidaTK lista_id definicionTipoVariableTK d_tipo  */
#line 746 "parser.y"
                                                            {

	}
#line 2292 "parser.tab.c"
    break;

  case 97: /* d_p_form: entradaSalidaTK lista_id definicionTipoVariableTK d_tipo  */
#line 749 "parser.y"
                                                                   {

	}
#line 2300 "parser.tab.c"
    break;

  case 98: /* accion_ll: identificadorTK parentesisAperturaTK l_ll parentesisCierreTK  */
#line 755 "parser.y"
                                                                     {

	}
#line 2308 "parser.tab.c"
    break;

  case 99: /* funcion_ll: identificadorTK parentesisAperturaTK l_ll parentesisCierreTK  */
#line 760 "parser.y"
                                                                     {

	}
#line 2316 "parser.tab.c"
    break;

  case 100: /* l_ll: expresion separadorTK l_ll  */
#line 765 "parser.y"
                                   {

	}
#line 2324 "parser.tab.c"
    break;

  case 101: /* l_ll: expresion  */
#line 768 "parser.y"
                    {

	}
#line 2332 "parser.tab.c"
    break;


#line 2336 "parser.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 773 "parser.y"

int main(int argc, char **argv){
	#if defined YYDEBUG
	yydebug=1;
	#endif
	++argv, --argc;
	if (argc > 0)
		yyin = fopen(argv[0], "r");
	else
		yyin = stdin;
	tc = nuevaTablaDeConstantes();
	yyparse();
	imprimeTablaDeConstantes(tc);
	imprimirTabla();
	imprimirTablaCuadruplas();
}


void yyerror(char * s){
	printf("\tBISON: ERROR, %s\n", s);
}

