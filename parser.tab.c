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

	int posCuadruplas = 0; 
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
#define YYLAST   261

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  99
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  235

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
       0,   157,   157,   161,   165,   169,   172,   175,   179,   182,
     185,   188,   193,   196,   199,   202,   208,   213,   218,   225,
     228,   231,   234,   237,   240,   243,   246,   249,   252,   255,
     258,   263,   266,   271,   274,   279,   282,   285,   288,   291,
     294,   299,   304,   307,   315,   322,   325,   328,   333,   338,
     344,   347,   350,   355,   420,   517,   521,   524,   527,   530,
     535,   538,   541,   544,   547,   550,   556,   560,   563,   566,
     572,   578,   581,   586,   589,   592,   595,   598,   603,   612,
     617,   622,   625,   628,   631,   636,   641,   647,   652,   657,
     662,   667,   670,   673,   676,   679,   685,   690,   695,   698
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

#define YYPACT_NINF (-124)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-52)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      30,     8,    94,    52,  -124,    73,   102,    64,   106,    19,
      73,    73,    95,   143,   121,   144,   115,   160,   119,    -2,
     106,   106,   106,   124,   125,    87,    19,    19,  -124,  -124,
      85,   138,    47,   145,   146,   171,   147,   128,  -124,   120,
     120,   140,  -124,   154,  -124,    -4,   153,  -124,   155,  -124,
    -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,   158,   106,
     159,   106,   115,   115,   142,   168,  -124,  -124,  -124,  -124,
    -124,  -124,  -124,  -124,   148,    85,   151,   120,   -20,   120,
    -124,    20,  -124,  -124,  -124,   164,   163,   169,    71,   174,
       5,  -124,  -124,  -124,   170,   172,   173,   175,   176,  -124,
     115,   177,    85,  -124,   179,   -10,     7,   180,   120,  -124,
     120,   120,   157,   120,    -2,   112,   198,   115,   181,  -124,
    -124,  -124,  -124,   178,   202,  -124,   111,   169,   183,   -20,
    -124,  -124,    14,    82,   120,   102,   111,   120,   -20,   -20,
     120,    64,    64,    64,    64,    64,  -124,  -124,   182,    -2,
      -2,   120,   -18,   187,   169,   -12,  -124,     9,  -124,   115,
     115,   115,   188,   185,  -124,   190,   120,    85,  -124,   186,
      14,  -124,  -124,   191,  -124,  -124,   192,  -124,   199,   183,
    -124,  -124,  -124,  -124,  -124,   115,   207,   189,     4,   120,
    -124,  -124,   193,   194,   195,   200,   112,   203,    -3,   201,
     111,  -124,  -124,  -124,   120,   210,   120,  -124,    85,    85,
      85,  -124,  -124,    85,  -124,   148,   184,    10,  -124,    -9,
    -124,  -124,  -124,   204,  -124,   229,    -2,    -2,  -124,    85,
     189,   216,  -124,  -124,  -124
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,     7,    20,    40,    15,    10,
       7,     7,     0,     0,     0,     0,    42,     0,     0,     0,
      15,    15,    15,     0,     0,     0,    10,    10,     5,     6,
       0,     0,     0,     0,    44,     0,     0,     0,     4,     0,
       0,     0,    73,    66,    70,     0,     0,    11,    72,    74,
      75,    76,    84,    83,    77,    12,    13,    14,     0,    15,
       0,    15,    42,    42,     0,    45,    47,     8,     9,    29,
      30,    27,    28,    26,    34,     0,     0,     0,     0,     0,
      63,    66,    32,    58,    57,     0,     0,    31,    50,    51,
      56,    62,    52,    16,     0,     0,     0,     0,     0,    17,
       0,     0,     0,     2,    66,     0,     0,     0,     0,    69,
       0,     0,     0,     0,     0,    92,     0,    42,     0,    48,
      49,     3,    46,     0,     0,    25,     0,     0,    61,     0,
      66,    59,    50,    51,     0,    20,     0,     0,     0,     0,
       0,    40,    40,    40,    40,    40,    43,    18,     0,     0,
       0,     0,    99,     0,    78,     0,    67,    79,    71,     0,
       0,     0,     0,     0,    87,     0,     0,     0,    21,     0,
       0,    55,    65,     0,    19,    24,    64,    54,    53,    60,
      39,    36,    35,    37,    38,    42,     0,    82,     0,     0,
      96,    68,     0,     0,     0,     0,    92,     0,     0,     0,
       0,    97,    41,    85,     0,     0,     0,    98,     0,     0,
       0,    89,    91,     0,    88,    34,     0,     0,    80,     0,
      93,    95,    94,     0,    33,     0,     0,     0,    90,     0,
      82,     0,    22,    81,    86
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -124,  -124,  -124,  -124,    72,   109,   104,   134,    75,   105,
    -124,   117,   -71,  -123,    35,    46,   -57,   -91,  -124,  -124,
     196,   -32,   -64,   -67,   -19,   -17,  -113,  -124,  -124,  -124,
      23,  -124,  -124,  -124,  -124,  -124,  -124,  -124,    58,  -124,
    -124,  -124,  -118
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     8,    17,     9,    25,    18,    19,    20,    21,
      22,    13,    85,    86,   124,    15,    35,    36,    64,    65,
      66,    87,    88,    89,    90,    91,    47,    48,    49,    50,
     205,    51,    52,    53,    26,    27,    59,    61,   162,   163,
      54,    92,   153
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      45,   158,    46,   169,   125,   119,   120,   105,   106,   146,
     128,   109,   133,   175,   131,   132,   173,   214,   149,   227,
     109,    78,   129,    39,    40,    41,   137,    23,    42,    24,
     189,   148,   137,   206,   137,   137,   186,   187,   130,     1,
      83,   137,   110,   191,    84,   127,   157,   127,   137,   140,
     111,   137,   138,   -51,   137,   139,    43,   171,   150,   111,
     165,   226,   134,   112,    44,   170,     3,   -23,   192,   193,
     194,   207,   112,   179,   177,   178,   152,   216,   154,   155,
      10,   127,    28,    29,     6,    10,    10,     7,    69,    70,
      71,    72,    73,   156,     4,    45,   199,    46,    74,     5,
      75,    76,   152,    94,    95,   176,    96,    97,   127,   138,
      11,    98,   139,   230,   231,    11,    11,     6,    16,   188,
       7,    62,   140,    63,    77,   172,    78,    79,   202,    14,
      45,    45,    46,    46,   198,    67,    68,   220,   221,   222,
      30,    80,   223,    81,    82,    83,   159,   160,   161,    84,
      77,    44,    78,    79,    55,    56,    57,   152,   232,    77,
      12,    78,    79,   116,    31,   118,    32,    80,    33,   104,
      82,    83,   217,    34,   219,    84,    80,    44,   104,    37,
      83,    38,    58,    60,    84,    93,    44,   180,   181,   182,
     183,   184,    99,   101,   100,   103,   108,   102,   107,   113,
     115,   117,   114,   121,    63,   126,   123,    45,    45,    46,
      46,   135,   136,   137,   140,   130,   164,   141,   166,   142,
     143,   134,   144,   145,   147,   168,   151,   -51,   167,   185,
     190,   195,   196,   197,   201,   200,   -52,   138,   203,   225,
     213,   204,   218,   208,   209,   210,   229,   211,   215,   234,
     224,   228,   174,   233,   212,     0,     0,     0,     0,     0,
       0,   122
};

static const yytype_int16 yycheck[] =
{
      19,   114,    19,   126,    75,    62,    63,    39,    40,   100,
      77,    15,    79,   136,    78,    79,   134,    20,    28,    28,
      15,    41,    42,    25,    26,    27,    44,     8,    30,    10,
      48,   102,    44,    29,    44,    44,   149,   150,    58,     9,
      60,    44,    46,    55,    64,    77,   113,    79,    44,    40,
      54,    44,    38,    44,    44,    41,    58,    43,    51,    54,
     117,    51,    42,    67,    66,   129,    58,    47,   159,   160,
     161,   189,    67,   140,   138,   139,   108,   200,   110,   111,
       5,   113,    10,    11,    11,    10,    11,    14,     3,     4,
       5,     6,     7,   112,     0,   114,   167,   114,    13,    47,
      15,    16,   134,    56,    57,   137,    59,    60,   140,    38,
       5,    64,    41,   226,   227,    10,    11,    11,    12,   151,
      14,    34,    40,    36,    39,    43,    41,    42,   185,    65,
     149,   150,   149,   150,   166,    26,    27,   208,   209,   210,
      45,    56,   213,    58,    59,    60,    34,    35,    36,    64,
      39,    66,    41,    42,    20,    21,    22,   189,   229,    39,
      58,    41,    42,    59,    21,    61,    45,    56,    24,    58,
      59,    60,   204,    58,   206,    64,    56,    66,    58,    19,
      60,    62,    58,    58,    64,    47,    66,   141,   142,   143,
     144,   145,    47,    22,    48,    67,    42,    50,    58,    46,
      42,    42,    47,    61,    36,    54,    58,   226,   227,   226,
     227,    47,    49,    44,    40,    58,    18,    47,    37,    47,
      47,    42,    47,    47,    47,    23,    46,    44,    50,    47,
      43,    43,    47,    43,    43,    49,    44,    38,    31,    55,
      37,    52,    32,    50,    50,    50,    17,    47,    47,    33,
     215,    47,   135,   230,   196,    -1,    -1,    -1,    -1,    -1,
      -1,    65
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     9,    70,    58,     0,    47,    11,    14,    71,    73,
      77,    78,    58,    80,    65,    84,    12,    72,    75,    76,
      77,    78,    79,     8,    10,    74,   103,   104,    73,    73,
      45,    21,    45,    24,    58,    85,    86,    19,    62,    25,
      26,    27,    30,    58,    66,    93,    94,    95,    96,    97,
      98,   100,   101,   102,   109,    76,    76,    76,    58,   105,
      58,   106,    34,    36,    87,    88,    89,    74,    74,     3,
       4,     5,     6,     7,    13,    15,    16,    39,    41,    42,
      56,    58,    59,    60,    64,    81,    82,    90,    91,    92,
      93,    94,   110,    47,    56,    57,    59,    60,    64,    47,
      48,    22,    50,    67,    58,    90,    90,    58,    42,    15,
      46,    54,    67,    46,    47,    42,    75,    42,    75,    85,
      85,    61,    89,    58,    83,    81,    54,    90,    92,    42,
      58,    91,    91,    92,    42,    47,    49,    44,    38,    41,
      40,    47,    47,    47,    47,    47,    86,    47,    81,    28,
      51,    46,    90,   111,    90,    90,    93,    92,    95,    34,
      35,    36,   107,   108,    18,    85,    37,    50,    23,    82,
      91,    43,    43,   111,    80,    82,    90,    91,    91,    92,
      84,    84,    84,    84,    84,    47,    95,    95,    90,    48,
      43,    55,    86,    86,    86,    43,    47,    43,    90,    81,
      49,    43,    85,    31,    52,    99,    29,   111,    50,    50,
      50,    47,   107,    37,    20,    47,    82,    90,    32,    90,
      81,    81,    81,    81,    83,    55,    51,    28,    47,    17,
      95,    95,    81,    99,    33
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    69,    70,    71,    72,    73,    73,    73,    74,    74,
      74,    75,    76,    76,    76,    76,    77,    78,    79,    80,
      80,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    82,    82,    83,    83,    84,    84,    84,    84,    84,
      84,    85,    85,    86,    86,    87,    87,    87,    88,    89,
      90,    90,    90,    91,    91,    91,    91,    91,    91,    91,
      92,    92,    92,    92,    92,    92,    93,    93,    93,    93,
      94,    95,    95,    96,    96,    96,    96,    96,    97,    97,
      98,    99,    99,   100,   100,   101,   102,   103,   104,   105,
     106,   107,   107,   108,   108,   108,   109,   110,   111,   111
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     7,     4,     2,     2,     2,     0,     2,     2,
       0,     2,     2,     2,     2,     0,     4,     4,     4,     5,
       0,     3,     8,     1,     3,     2,     1,     1,     1,     1,
       1,     1,     1,     5,     0,     5,     5,     5,     5,     5,
       0,     5,     0,     3,     1,     1,     2,     1,     2,     2,
       1,     1,     1,     3,     3,     3,     1,     1,     1,     2,
       3,     2,     1,     1,     3,     3,     1,     3,     4,     2,
       1,     3,     1,     1,     1,     1,     1,     1,     3,     3,
       6,     5,     0,     1,     1,     5,     9,     4,     6,     5,
       7,     3,     0,     4,     4,     4,     4,     4,     3,     1
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
#line 157 "parser.y"
                                                                                               {
	}
#line 1370 "parser.tab.c"
    break;

  case 3: /* cabecera_alg: decl_globales decl_a_f decl_ent_sal precondicionTK  */
#line 161 "parser.y"
                                                          {
	}
#line 1377 "parser.tab.c"
    break;

  case 4: /* bloque_alg: bloque postCondicionTK  */
#line 165 "parser.y"
                              {
	}
#line 1384 "parser.tab.c"
    break;

  case 5: /* decl_globales: declaracion_tipo decl_globales  */
#line 169 "parser.y"
                                       {

	}
#line 1392 "parser.tab.c"
    break;

  case 6: /* decl_globales: declaracion_const decl_globales  */
#line 172 "parser.y"
                                          {

	}
#line 1400 "parser.tab.c"
    break;

  case 8: /* decl_a_f: accion_d decl_a_f  */
#line 179 "parser.y"
                          {

	}
#line 1408 "parser.tab.c"
    break;

  case 9: /* decl_a_f: funcion_d decl_a_f  */
#line 182 "parser.y"
                             {

	}
#line 1416 "parser.tab.c"
    break;

  case 11: /* bloque: declaraciones instrucciones  */
#line 188 "parser.y"
                                    {

	}
#line 1424 "parser.tab.c"
    break;

  case 12: /* declaraciones: declaracion_tipo declaraciones  */
#line 193 "parser.y"
                                       {

	}
#line 1432 "parser.tab.c"
    break;

  case 13: /* declaraciones: declaracion_const declaraciones  */
#line 196 "parser.y"
                                          {

	}
#line 1440 "parser.tab.c"
    break;

  case 14: /* declaraciones: declaracion_var declaraciones  */
#line 199 "parser.y"
                                        {

	}
#line 1448 "parser.tab.c"
    break;

  case 16: /* declaracion_tipo: tipoTK lista_d_tipo finTipoTK puntoYComaTK  */
#line 208 "parser.y"
                                                   {

	}
#line 1456 "parser.tab.c"
    break;

  case 17: /* declaracion_const: constTK lista_d_cte finConstTK puntoYComaTK  */
#line 213 "parser.y"
                                                    {

	}
#line 1464 "parser.tab.c"
    break;

  case 18: /* declaracion_var: varTK lista_d_var finVarTK puntoYComaTK  */
#line 218 "parser.y"
                                                {
			
	}
#line 1472 "parser.tab.c"
    break;

  case 19: /* lista_d_tipo: identificadorTK signoIgualTK d_tipo puntoYComaTK lista_d_tipo  */
#line 225 "parser.y"
                                                                      {

	}
#line 1480 "parser.tab.c"
    break;

  case 21: /* d_tipo: tuplaTK lista_campos finTuplaTK  */
#line 231 "parser.y"
                                        {

	}
#line 1488 "parser.tab.c"
    break;

  case 22: /* d_tipo: tablaTK inicioArrayTK expresion_t subrangoTK expresion_t finalArrayTK deTK d_tipo  */
#line 234 "parser.y"
                                                                                            {

	}
#line 1496 "parser.tab.c"
    break;

  case 23: /* d_tipo: identificadorTK  */
#line 237 "parser.y"
                          {

	}
#line 1504 "parser.tab.c"
    break;

  case 24: /* d_tipo: expresion_t subrangoTK expresion_t  */
#line 240 "parser.y"
                                             {

	}
#line 1512 "parser.tab.c"
    break;

  case 25: /* d_tipo: refTK d_tipo  */
#line 243 "parser.y"
                       {

	}
#line 1520 "parser.tab.c"
    break;

  case 26: /* d_tipo: enteroTK  */
#line 246 "parser.y"
                   {
		(yyval.tipo) = ENTERO;
	}
#line 1528 "parser.tab.c"
    break;

  case 27: /* d_tipo: booleanoTK  */
#line 249 "parser.y"
                     {
		(yyval.tipo) = BOOLEANO;
	}
#line 1536 "parser.tab.c"
    break;

  case 28: /* d_tipo: realTK  */
#line 252 "parser.y"
                 {
		(yyval.tipo) = REAL;
	}
#line 1544 "parser.tab.c"
    break;

  case 29: /* d_tipo: cadenaTK  */
#line 255 "parser.y"
                   {
		(yyval.tipo) = CADENA;
	}
#line 1552 "parser.tab.c"
    break;

  case 30: /* d_tipo: caracterTK  */
#line 258 "parser.y"
                     {
		(yyval.tipo) = CARACTER;
	}
#line 1560 "parser.tab.c"
    break;

  case 31: /* expresion_t: expresion  */
#line 263 "parser.y"
                  {

	}
#line 1568 "parser.tab.c"
    break;

  case 32: /* expresion_t: literalCaracterTK  */
#line 266 "parser.y"
                            {

	}
#line 1576 "parser.tab.c"
    break;

  case 33: /* lista_campos: identificadorTK definicionTipoVariableTK d_tipo puntoYComaTK lista_campos  */
#line 271 "parser.y"
                                                                                  {

	}
#line 1584 "parser.tab.c"
    break;

  case 35: /* lista_d_cte: nombreConstanteTK signoIgualTK literalCaracterTK puntoYComaTK lista_d_cte  */
#line 279 "parser.y"
                                                                                  {

	}
#line 1592 "parser.tab.c"
    break;

  case 36: /* lista_d_cte: nombreConstanteTK signoIgualTK literalCadenaTK puntoYComaTK lista_d_cte  */
#line 282 "parser.y"
                                                                                  {

	}
#line 1600 "parser.tab.c"
    break;

  case 37: /* lista_d_cte: nombreConstanteTK signoIgualTK literalEnteroTK puntoYComaTK lista_d_cte  */
#line 285 "parser.y"
                                                                                  {

	}
#line 1608 "parser.tab.c"
    break;

  case 38: /* lista_d_cte: nombreConstanteTK signoIgualTK literalRealTK puntoYComaTK lista_d_cte  */
#line 288 "parser.y"
                                                                                {

	}
#line 1616 "parser.tab.c"
    break;

  case 39: /* lista_d_cte: nombreConstanteTK signoIgualTK literalBooleanoTK puntoYComaTK lista_d_cte  */
#line 291 "parser.y"
                                                                                    {

	}
#line 1624 "parser.tab.c"
    break;

  case 40: /* lista_d_cte: %empty  */
#line 294 "parser.y"
          {

	}
#line 1632 "parser.tab.c"
    break;

  case 41: /* lista_d_var: lista_id definicionTipoVariableTK d_tipo puntoYComaTK lista_d_var  */
#line 299 "parser.y"
                                                                          {
		for (int i = 0; i < (yyvsp[-4].paraListaId).longitud; i++) {
			agregarVariable((yyvsp[-4].paraListaId).nombres[i], (yyvsp[-2].tipo));
		}
	}
#line 1642 "parser.tab.c"
    break;

  case 43: /* lista_id: identificadorTK separadorTK lista_id  */
#line 307 "parser.y"
                                             {
		for (int i = 0; i < (yyvsp[0].paraListaId).longitud; i++) {
			(yyval.paraListaId).nombres[i] = (yyvsp[0].paraListaId).nombres[i];  
		} 
		(yyval.paraListaId).nombres[(yyvsp[0].paraListaId).longitud] = (yyvsp[-2].cadena); 
		(yyval.paraListaId).longitud = (yyvsp[0].paraListaId).longitud + 1;
    }
#line 1654 "parser.tab.c"
    break;

  case 44: /* lista_id: identificadorTK  */
#line 315 "parser.y"
                        {
        (yyval.paraListaId).nombres[0] = (yyvsp[0].cadena);  
        (yyval.paraListaId).longitud = 1; 
	}
#line 1663 "parser.tab.c"
    break;

  case 45: /* decl_ent_sal: decl_ent  */
#line 322 "parser.y"
                 {

	}
#line 1671 "parser.tab.c"
    break;

  case 46: /* decl_ent_sal: decl_ent decl_sal  */
#line 325 "parser.y"
                            {

	}
#line 1679 "parser.tab.c"
    break;

  case 47: /* decl_ent_sal: decl_sal  */
#line 328 "parser.y"
                   {

	}
#line 1687 "parser.tab.c"
    break;

  case 48: /* decl_ent: entradaTK lista_d_var  */
#line 333 "parser.y"
                              {

	}
#line 1695 "parser.tab.c"
    break;

  case 49: /* decl_sal: salidaTK lista_d_var  */
#line 338 "parser.y"
                             {

	}
#line 1703 "parser.tab.c"
    break;

  case 50: /* expresion: exp_a  */
#line 344 "parser.y"
              {
		(yyval.paraOperando) = (yyvsp[0].paraOperando);
	}
#line 1711 "parser.tab.c"
    break;

  case 51: /* expresion: exp_b  */
#line 347 "parser.y"
                {

	}
#line 1719 "parser.tab.c"
    break;

  case 52: /* expresion: funcion_ll  */
#line 350 "parser.y"
                     {

	}
#line 1727 "parser.tab.c"
    break;

  case 53: /* exp_a: exp_a operadoresSumaORestaTK exp_a  */
#line 355 "parser.y"
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
#line 1797 "parser.tab.c"
    break;

  case 54: /* exp_a: exp_a operadoresMultiplicacionODivisionTK exp_a  */
#line 420 "parser.y"
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
#line 1899 "parser.tab.c"
    break;

  case 55: /* exp_a: parentesisAperturaTK exp_a parentesisCierreTK  */
#line 517 "parser.y"
                                                        {
		(yyval.paraOperando).place = (yyvsp[-1].paraOperando).place;
		(yyval.paraOperando).type = (yyvsp[-1].paraOperando).type;
	}
#line 1908 "parser.tab.c"
    break;

  case 56: /* exp_a: operando  */
#line 521 "parser.y"
                   {
		(yyval.paraOperando) = (yyvsp[0].paraOperando);
	}
#line 1916 "parser.tab.c"
    break;

  case 57: /* exp_a: literalRealTK  */
#line 524 "parser.y"
                        {

	}
#line 1924 "parser.tab.c"
    break;

  case 58: /* exp_a: literalEnteroTK  */
#line 527 "parser.y"
                          {

	}
#line 1932 "parser.tab.c"
    break;

  case 59: /* exp_a: operadoresSumaORestaTK exp_a  */
#line 530 "parser.y"
                                                       {

	}
#line 1940 "parser.tab.c"
    break;

  case 60: /* exp_b: exp_b operadoresBooleanosTK exp_b  */
#line 535 "parser.y"
                                          {

	}
#line 1948 "parser.tab.c"
    break;

  case 61: /* exp_b: noTK exp_b  */
#line 538 "parser.y"
                     {

	}
#line 1956 "parser.tab.c"
    break;

  case 62: /* exp_b: operando_b  */
#line 541 "parser.y"
                     {

	}
#line 1964 "parser.tab.c"
    break;

  case 63: /* exp_b: literalBooleanoTK  */
#line 544 "parser.y"
                            {

	}
#line 1972 "parser.tab.c"
    break;

  case 64: /* exp_b: expresion operadoresComparacionTK expresion  */
#line 547 "parser.y"
                                                      {

	}
#line 1980 "parser.tab.c"
    break;

  case 65: /* exp_b: parentesisAperturaTK exp_b parentesisCierreTK  */
#line 550 "parser.y"
                                                        {

	}
#line 1988 "parser.tab.c"
    break;

  case 66: /* operando: identificadorTK  */
#line 556 "parser.y"
                        {
		(yyval.paraOperando).place = obtenerPos((yyvsp[0].cadena));
		(yyval.paraOperando).type = obtenerTipo((yyvsp[0].cadena));
	}
#line 1997 "parser.tab.c"
    break;

  case 67: /* operando: operando puntoTK operando  */
#line 560 "parser.y"
                                    {

	}
#line 2005 "parser.tab.c"
    break;

  case 68: /* operando: operando inicioArrayTK expresion finalArrayTK  */
#line 563 "parser.y"
                                                        {

	}
#line 2013 "parser.tab.c"
    break;

  case 69: /* operando: operando refTK  */
#line 566 "parser.y"
                         {

	}
#line 2021 "parser.tab.c"
    break;

  case 70: /* operando_b: identificadorBooleanoTK  */
#line 572 "parser.y"
                                {

	}
#line 2029 "parser.tab.c"
    break;

  case 71: /* instrucciones: instruccion puntoYComaTK instrucciones  */
#line 578 "parser.y"
                                               {

	}
#line 2037 "parser.tab.c"
    break;

  case 72: /* instrucciones: instruccion  */
#line 581 "parser.y"
                      {

	}
#line 2045 "parser.tab.c"
    break;

  case 73: /* instruccion: continuarTK  */
#line 586 "parser.y"
                    {

	}
#line 2053 "parser.tab.c"
    break;

  case 74: /* instruccion: asignacion  */
#line 589 "parser.y"
                     {

	}
#line 2061 "parser.tab.c"
    break;

  case 75: /* instruccion: alternativa  */
#line 592 "parser.y"
                      {

	}
#line 2069 "parser.tab.c"
    break;

  case 76: /* instruccion: iteracion  */
#line 595 "parser.y"
                    {

	}
#line 2077 "parser.tab.c"
    break;

  case 77: /* instruccion: accion_ll  */
#line 598 "parser.y"
                    {

	}
#line 2085 "parser.tab.c"
    break;

  case 78: /* asignacion: operando igualAsignacionTK expresion  */
#line 603 "parser.y"
                                             {
		if ((yyvsp[-2].paraOperando).type == (yyvsp[0].paraOperando).type) {
			tipoOperando opNulo = { .place = -1, .type = TIPO_NULO }; 
			tipoOperando operandoNuevo = { .place = obtenerPos((yyvsp[0].paraOperando).nombre), .type = (yyvsp[0].paraOperando).tipo }; 
			gen((yyvsp[-2].paraOperando), opNulo, ASIGNACION, operandoNuevo);
		} else if ((yyvsp[-2].paraOperando).type == REAL && (yyvsp[0].paraOperando).type == ENTERO) {

		}
	}
#line 2099 "parser.tab.c"
    break;

  case 79: /* asignacion: operando_b igualAsignacionTK exp_b  */
#line 612 "parser.y"
                                                   {

	}
#line 2107 "parser.tab.c"
    break;

  case 80: /* alternativa: siTK expresion entoncesTK instrucciones lista_opciones finSiTK  */
#line 617 "parser.y"
                                                                       {

	}
#line 2115 "parser.tab.c"
    break;

  case 81: /* lista_opciones: siNoSiTK expresion entoncesTK instrucciones lista_opciones  */
#line 622 "parser.y"
                                                                   {

	}
#line 2123 "parser.tab.c"
    break;

  case 83: /* iteracion: it_cota_fija  */
#line 628 "parser.y"
                     {

	}
#line 2131 "parser.tab.c"
    break;

  case 84: /* iteracion: it_cota_exp  */
#line 631 "parser.y"
                      {

	}
#line 2139 "parser.tab.c"
    break;

  case 85: /* it_cota_exp: mientrasTK expresion hacerTK instrucciones finMientrasTK  */
#line 636 "parser.y"
                                                                 {

	}
#line 2147 "parser.tab.c"
    break;

  case 86: /* it_cota_fija: paraTK identificadorTK igualAsignacionTK expresion hastaTK expresion hacerTK instrucciones finParaTK  */
#line 641 "parser.y"
                                                                                                             {

	}
#line 2155 "parser.tab.c"
    break;

  case 87: /* accion_d: accionTK a_cabecera bloque finAccionTK  */
#line 647 "parser.y"
                                               {

	}
#line 2163 "parser.tab.c"
    break;

  case 88: /* funcion_d: funcionTK f_cabecera bloque devuelveTK expresion finFuncionTK  */
#line 652 "parser.y"
                                                                      {

	}
#line 2171 "parser.tab.c"
    break;

  case 89: /* a_cabecera: identificadorTK parentesisAperturaTK d_par_form parentesisCierreTK puntoYComaTK  */
#line 657 "parser.y"
                                                                                        {

	}
#line 2179 "parser.tab.c"
    break;

  case 90: /* f_cabecera: identificadorTK parentesisAperturaTK lista_d_var parentesisCierreTK devuelveTK d_tipo puntoYComaTK  */
#line 662 "parser.y"
                                                                                                           {

	}
#line 2187 "parser.tab.c"
    break;

  case 91: /* d_par_form: d_p_form puntoYComaTK d_par_form  */
#line 667 "parser.y"
                                         {

	}
#line 2195 "parser.tab.c"
    break;

  case 93: /* d_p_form: entradaTK lista_id definicionTipoVariableTK d_tipo  */
#line 673 "parser.y"
                                                           {

	}
#line 2203 "parser.tab.c"
    break;

  case 94: /* d_p_form: salidaTK lista_id definicionTipoVariableTK d_tipo  */
#line 676 "parser.y"
                                                            {

	}
#line 2211 "parser.tab.c"
    break;

  case 95: /* d_p_form: entradaSalidaTK lista_id definicionTipoVariableTK d_tipo  */
#line 679 "parser.y"
                                                                   {

	}
#line 2219 "parser.tab.c"
    break;

  case 96: /* accion_ll: identificadorTK parentesisAperturaTK l_ll parentesisCierreTK  */
#line 685 "parser.y"
                                                                     {

	}
#line 2227 "parser.tab.c"
    break;

  case 97: /* funcion_ll: identificadorTK parentesisAperturaTK l_ll parentesisCierreTK  */
#line 690 "parser.y"
                                                                     {

	}
#line 2235 "parser.tab.c"
    break;

  case 98: /* l_ll: expresion separadorTK l_ll  */
#line 695 "parser.y"
                                   {

	}
#line 2243 "parser.tab.c"
    break;

  case 99: /* l_ll: expresion  */
#line 698 "parser.y"
                    {

	}
#line 2251 "parser.tab.c"
    break;


#line 2255 "parser.tab.c"

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

#line 703 "parser.y"

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

