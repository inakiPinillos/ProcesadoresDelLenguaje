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


#line 97 "parser.tab.c"

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
#define YYLAST   249

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  98
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  232

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
       0,   155,   155,   159,   163,   167,   170,   173,   177,   180,
     183,   186,   191,   194,   197,   200,   206,   211,   216,   223,
     226,   229,   232,   235,   238,   241,   244,   247,   250,   253,
     256,   261,   264,   269,   272,   277,   280,   283,   286,   289,
     292,   297,   302,   305,   313,   320,   323,   326,   331,   336,
     342,   345,   348,   353,   367,   370,   373,   376,   379,   382,
     387,   390,   393,   396,   399,   402,   408,   412,   415,   418,
     424,   430,   433,   438,   441,   444,   447,   450,   455,   460,
     465,   468,   471,   474,   479,   484,   490,   495,   500,   505,
     510,   513,   516,   519,   522,   528,   533,   538,   541
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

#define YYPACT_NINF (-125)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-52)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      29,   -30,    44,     8,  -125,    12,     5,    14,    66,   143,
      12,    12,    70,    67,    75,   110,    87,   127,    94,    -5,
      66,    66,    66,   112,   117,    62,   143,   143,  -125,  -125,
      43,   135,    57,   136,   137,   162,   138,   120,  -125,   113,
     113,   128,  -125,   147,    37,  -125,   144,  -125,  -125,  -125,
    -125,  -125,  -125,  -125,  -125,  -125,   148,    66,   150,    66,
      87,    87,   132,   158,  -125,  -125,  -125,  -125,  -125,  -125,
    -125,  -125,   139,    43,   141,   113,    48,   113,  -125,    63,
    -125,  -125,  -125,  -125,   149,   151,   155,    13,   161,     3,
    -125,  -125,  -125,   156,   159,   160,   163,   164,  -125,    87,
     165,    43,  -125,   166,   -11,   -17,   152,   113,  -125,   113,
     113,   157,    -5,    88,   184,    87,   172,  -125,  -125,  -125,
    -125,   167,   190,  -125,   108,   155,   170,    48,  -125,  -125,
      92,    21,   113,     5,   108,   113,    48,    48,   113,    14,
      14,    14,    14,    14,  -125,  -125,   169,    -5,    -5,   113,
      -3,   175,   155,   -25,  -125,  -125,    87,    87,    87,   176,
     173,  -125,   178,   113,    43,  -125,   174,    92,  -125,  -125,
     179,  -125,  -125,   180,  -125,   187,   170,  -125,  -125,  -125,
    -125,  -125,    87,   195,   177,   -13,   113,  -125,  -125,   181,
     182,   183,   188,    88,   191,    -9,   189,   108,  -125,  -125,
    -125,   113,   198,   113,  -125,    43,    43,    43,  -125,  -125,
      43,  -125,   139,   185,   -15,  -125,    -4,  -125,  -125,  -125,
     192,  -125,   210,    -5,    -5,  -125,    43,   177,   201,  -125,
    -125,  -125
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
       0,     0,    73,    66,     0,    11,    72,    74,    75,    76,
      83,    82,    77,    12,    13,    14,     0,    15,     0,    15,
      42,    42,     0,    45,    47,     8,     9,    29,    30,    27,
      28,    26,    34,     0,     0,     0,     0,     0,    63,    66,
      32,    58,    57,    70,     0,     0,    31,    50,    51,    56,
      62,    52,    16,     0,     0,     0,     0,     0,    17,     0,
       0,     0,     2,    66,     0,     0,     0,     0,    69,     0,
       0,     0,     0,    91,     0,    42,     0,    48,    49,     3,
      46,     0,     0,    25,     0,     0,    61,     0,    66,    59,
      50,    51,     0,    20,     0,     0,     0,     0,     0,    40,
      40,    40,    40,    40,    43,    18,     0,     0,     0,     0,
      98,     0,    78,     0,    67,    71,     0,     0,     0,     0,
       0,    86,     0,     0,     0,    21,     0,     0,    55,    65,
       0,    19,    24,    64,    54,    53,    60,    39,    36,    35,
      37,    38,    42,     0,    81,     0,     0,    95,    68,     0,
       0,     0,     0,    91,     0,     0,     0,     0,    96,    41,
      84,     0,     0,     0,    97,     0,     0,     0,    88,    90,
       0,    87,    34,     0,     0,    79,     0,    92,    94,    93,
       0,    33,     0,     0,     0,    89,     0,    81,     0,    22,
      80,    85
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -125,  -125,  -125,  -125,   129,   154,   119,   122,    76,   121,
    -125,   104,   -69,  -121,    26,    19,   -55,   -90,  -125,  -125,
     186,   -38,   -62,   -65,   -19,  -125,  -105,  -125,  -125,  -125,
      15,  -125,  -125,  -125,  -125,  -125,  -125,  -125,    50,  -125,
    -125,  -125,  -124
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     8,    17,     9,    25,    18,    19,    20,    21,
      22,    13,    84,    85,   122,    15,    35,    36,    62,    63,
      64,    86,    87,    88,    89,    90,    45,    46,    47,    48,
     202,    49,    50,    51,    26,    27,    57,    59,   159,   160,
      52,    91,   151
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      44,   104,   105,   166,   123,   117,   118,   155,   170,   144,
     126,   211,   131,   172,   129,   130,   203,   147,   108,   135,
      39,    40,    41,     6,   224,    42,     7,   135,     3,   135,
     188,   135,   146,   135,   148,   135,   223,   125,     1,   125,
     135,   135,   183,   184,     4,   186,    67,    68,    69,    70,
      71,   136,   108,    43,   137,     5,    72,   110,    73,    74,
     162,   138,   204,    12,   169,   167,   189,   190,   191,   150,
     111,   152,   153,   176,   174,   175,   213,     6,    16,    14,
       7,    10,    75,   109,    76,    77,    10,    10,    31,    76,
     127,   110,   154,    44,   150,   196,    60,   173,    61,    78,
     125,    79,    80,    81,   111,   132,   128,    82,    81,    83,
     -23,   185,    82,    93,    94,    30,    95,    96,   227,   228,
      32,    97,   156,   157,   158,   195,    11,   199,    44,    44,
     136,    11,    11,   137,    33,   168,   217,   218,   219,    28,
      29,   220,    53,    54,    55,    34,    37,    75,   150,    76,
      77,    23,    75,    24,    76,    77,    38,   229,   177,   178,
     179,   180,   181,   214,    78,   216,   103,    80,    81,    78,
      56,   103,    82,    81,    83,    58,   114,    82,   116,    83,
      65,    66,    92,    98,   100,    99,   106,   102,   101,   107,
     113,   112,   115,   119,    61,   124,   133,   121,   149,   135,
     134,   138,   161,   139,    44,    44,   140,   141,   132,   163,
     142,   143,   145,   165,   -51,   128,   182,   164,   187,   192,
     193,   194,   198,   197,   -52,   136,   200,   226,   210,   201,
     215,   205,   206,   207,   231,   208,   212,   171,   221,   225,
     222,     0,   230,   209,     0,     0,     0,     0,     0,   120
};

static const yytype_int16 yycheck[] =
{
      19,    39,    40,   124,    73,    60,    61,   112,   132,    99,
      75,    20,    77,   134,    76,    77,    29,    28,    15,    44,
      25,    26,    27,    11,    28,    30,    14,    44,    58,    44,
      55,    44,   101,    44,    51,    44,    51,    75,     9,    77,
      44,    44,   147,   148,     0,    48,     3,     4,     5,     6,
       7,    38,    15,    58,    41,    47,    13,    54,    15,    16,
     115,    40,   186,    58,    43,   127,   156,   157,   158,   107,
      67,   109,   110,   138,   136,   137,   197,    11,    12,    65,
      14,     5,    39,    46,    41,    42,    10,    11,    21,    41,
      42,    54,   111,   112,   132,   164,    34,   135,    36,    56,
     138,    58,    59,    60,    67,    42,    58,    64,    60,    66,
      47,   149,    64,    56,    57,    45,    59,    60,   223,   224,
      45,    64,    34,    35,    36,   163,     5,   182,   147,   148,
      38,    10,    11,    41,    24,    43,   205,   206,   207,    10,
      11,   210,    20,    21,    22,    58,    19,    39,   186,    41,
      42,     8,    39,    10,    41,    42,    62,   226,   139,   140,
     141,   142,   143,   201,    56,   203,    58,    59,    60,    56,
      58,    58,    64,    60,    66,    58,    57,    64,    59,    66,
      26,    27,    47,    47,    22,    48,    58,    67,    50,    42,
      42,    47,    42,    61,    36,    54,    47,    58,    46,    44,
      49,    40,    18,    47,   223,   224,    47,    47,    42,    37,
      47,    47,    47,    23,    44,    58,    47,    50,    43,    43,
      47,    43,    43,    49,    44,    38,    31,    17,    37,    52,
      32,    50,    50,    50,    33,    47,    47,   133,   212,    47,
      55,    -1,   227,   193,    -1,    -1,    -1,    -1,    -1,    63
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     9,    70,    58,     0,    47,    11,    14,    71,    73,
      77,    78,    58,    80,    65,    84,    12,    72,    75,    76,
      77,    78,    79,     8,    10,    74,   103,   104,    73,    73,
      45,    21,    45,    24,    58,    85,    86,    19,    62,    25,
      26,    27,    30,    58,    93,    95,    96,    97,    98,   100,
     101,   102,   109,    76,    76,    76,    58,   105,    58,   106,
      34,    36,    87,    88,    89,    74,    74,     3,     4,     5,
       6,     7,    13,    15,    16,    39,    41,    42,    56,    58,
      59,    60,    64,    66,    81,    82,    90,    91,    92,    93,
      94,   110,    47,    56,    57,    59,    60,    64,    47,    48,
      22,    50,    67,    58,    90,    90,    58,    42,    15,    46,
      54,    67,    47,    42,    75,    42,    75,    85,    85,    61,
      89,    58,    83,    81,    54,    90,    92,    42,    58,    91,
      91,    92,    42,    47,    49,    44,    38,    41,    40,    47,
      47,    47,    47,    47,    86,    47,    81,    28,    51,    46,
      90,   111,    90,    90,    93,    95,    34,    35,    36,   107,
     108,    18,    85,    37,    50,    23,    82,    91,    43,    43,
     111,    80,    82,    90,    91,    91,    92,    84,    84,    84,
      84,    84,    47,    95,    95,    90,    48,    43,    55,    86,
      86,    86,    43,    47,    43,    90,    81,    49,    43,    85,
      31,    52,    99,    29,   111,    50,    50,    50,    47,   107,
      37,    20,    47,    82,    90,    32,    90,    81,    81,    81,
      81,    83,    55,    51,    28,    47,    17,    95,    95,    81,
      99,    33
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
      94,    95,    95,    96,    96,    96,    96,    96,    97,    98,
      99,    99,   100,   100,   101,   102,   103,   104,   105,   106,
     107,   107,   108,   108,   108,   109,   110,   111,   111
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
       1,     3,     1,     1,     1,     1,     1,     1,     3,     6,
       5,     0,     1,     1,     5,     9,     4,     6,     5,     7,
       3,     0,     4,     4,     4,     4,     4,     3,     1
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
#line 155 "parser.y"
                                                                                               {
	}
#line 1365 "parser.tab.c"
    break;

  case 3: /* cabecera_alg: decl_globales decl_a_f decl_ent_sal precondicionTK  */
#line 159 "parser.y"
                                                          {
	}
#line 1372 "parser.tab.c"
    break;

  case 4: /* bloque_alg: bloque postCondicionTK  */
#line 163 "parser.y"
                              {
	}
#line 1379 "parser.tab.c"
    break;

  case 5: /* decl_globales: declaracion_tipo decl_globales  */
#line 167 "parser.y"
                                       {

	}
#line 1387 "parser.tab.c"
    break;

  case 6: /* decl_globales: declaracion_const decl_globales  */
#line 170 "parser.y"
                                          {

	}
#line 1395 "parser.tab.c"
    break;

  case 8: /* decl_a_f: accion_d decl_a_f  */
#line 177 "parser.y"
                          {

	}
#line 1403 "parser.tab.c"
    break;

  case 9: /* decl_a_f: funcion_d decl_a_f  */
#line 180 "parser.y"
                             {

	}
#line 1411 "parser.tab.c"
    break;

  case 11: /* bloque: declaraciones instrucciones  */
#line 186 "parser.y"
                                    {

	}
#line 1419 "parser.tab.c"
    break;

  case 12: /* declaraciones: declaracion_tipo declaraciones  */
#line 191 "parser.y"
                                       {

	}
#line 1427 "parser.tab.c"
    break;

  case 13: /* declaraciones: declaracion_const declaraciones  */
#line 194 "parser.y"
                                          {

	}
#line 1435 "parser.tab.c"
    break;

  case 14: /* declaraciones: declaracion_var declaraciones  */
#line 197 "parser.y"
                                        {

	}
#line 1443 "parser.tab.c"
    break;

  case 16: /* declaracion_tipo: tipoTK lista_d_tipo finTipoTK puntoYComaTK  */
#line 206 "parser.y"
                                                   {

	}
#line 1451 "parser.tab.c"
    break;

  case 17: /* declaracion_const: constTK lista_d_cte finConstTK puntoYComaTK  */
#line 211 "parser.y"
                                                    {

	}
#line 1459 "parser.tab.c"
    break;

  case 18: /* declaracion_var: varTK lista_d_var finVarTK puntoYComaTK  */
#line 216 "parser.y"
                                                {
			
	}
#line 1467 "parser.tab.c"
    break;

  case 19: /* lista_d_tipo: identificadorTK signoIgualTK d_tipo puntoYComaTK lista_d_tipo  */
#line 223 "parser.y"
                                                                      {

	}
#line 1475 "parser.tab.c"
    break;

  case 21: /* d_tipo: tuplaTK lista_campos finTuplaTK  */
#line 229 "parser.y"
                                        {

	}
#line 1483 "parser.tab.c"
    break;

  case 22: /* d_tipo: tablaTK inicioArrayTK expresion_t subrangoTK expresion_t finalArrayTK deTK d_tipo  */
#line 232 "parser.y"
                                                                                            {

	}
#line 1491 "parser.tab.c"
    break;

  case 23: /* d_tipo: identificadorTK  */
#line 235 "parser.y"
                          {

	}
#line 1499 "parser.tab.c"
    break;

  case 24: /* d_tipo: expresion_t subrangoTK expresion_t  */
#line 238 "parser.y"
                                             {

	}
#line 1507 "parser.tab.c"
    break;

  case 25: /* d_tipo: refTK d_tipo  */
#line 241 "parser.y"
                       {

	}
#line 1515 "parser.tab.c"
    break;

  case 26: /* d_tipo: enteroTK  */
#line 244 "parser.y"
                   {
		(yyval.tipo) = ENTERO;
	}
#line 1523 "parser.tab.c"
    break;

  case 27: /* d_tipo: booleanoTK  */
#line 247 "parser.y"
                     {
		(yyval.tipo) = BOOLEANO;
	}
#line 1531 "parser.tab.c"
    break;

  case 28: /* d_tipo: realTK  */
#line 250 "parser.y"
                 {
		(yyval.tipo) = REAL;
	}
#line 1539 "parser.tab.c"
    break;

  case 29: /* d_tipo: cadenaTK  */
#line 253 "parser.y"
                   {
		(yyval.tipo) = CADENA;
	}
#line 1547 "parser.tab.c"
    break;

  case 30: /* d_tipo: caracterTK  */
#line 256 "parser.y"
                     {
		(yyval.tipo) = CARACTER;
	}
#line 1555 "parser.tab.c"
    break;

  case 31: /* expresion_t: expresion  */
#line 261 "parser.y"
                  {

	}
#line 1563 "parser.tab.c"
    break;

  case 32: /* expresion_t: literalCaracterTK  */
#line 264 "parser.y"
                            {

	}
#line 1571 "parser.tab.c"
    break;

  case 33: /* lista_campos: identificadorTK definicionTipoVariableTK d_tipo puntoYComaTK lista_campos  */
#line 269 "parser.y"
                                                                                  {

	}
#line 1579 "parser.tab.c"
    break;

  case 35: /* lista_d_cte: nombreConstanteTK signoIgualTK literalCaracterTK puntoYComaTK lista_d_cte  */
#line 277 "parser.y"
                                                                                  {

	}
#line 1587 "parser.tab.c"
    break;

  case 36: /* lista_d_cte: nombreConstanteTK signoIgualTK literalCadenaTK puntoYComaTK lista_d_cte  */
#line 280 "parser.y"
                                                                                  {

	}
#line 1595 "parser.tab.c"
    break;

  case 37: /* lista_d_cte: nombreConstanteTK signoIgualTK literalEnteroTK puntoYComaTK lista_d_cte  */
#line 283 "parser.y"
                                                                                  {

	}
#line 1603 "parser.tab.c"
    break;

  case 38: /* lista_d_cte: nombreConstanteTK signoIgualTK literalRealTK puntoYComaTK lista_d_cte  */
#line 286 "parser.y"
                                                                                {

	}
#line 1611 "parser.tab.c"
    break;

  case 39: /* lista_d_cte: nombreConstanteTK signoIgualTK literalBooleanoTK puntoYComaTK lista_d_cte  */
#line 289 "parser.y"
                                                                                    {

	}
#line 1619 "parser.tab.c"
    break;

  case 40: /* lista_d_cte: %empty  */
#line 292 "parser.y"
          {

	}
#line 1627 "parser.tab.c"
    break;

  case 41: /* lista_d_var: lista_id definicionTipoVariableTK d_tipo puntoYComaTK lista_d_var  */
#line 297 "parser.y"
                                                                          {
		for (int i = 0; i < (yyvsp[-4].paraListaId).longitud; i++) {
			agregarVariable((yyvsp[-4].paraListaId).nombres[i], (yyvsp[-2].tipo));
		}
	}
#line 1637 "parser.tab.c"
    break;

  case 43: /* lista_id: identificadorTK separadorTK lista_id  */
#line 305 "parser.y"
                                             {
		for (int i = 0; i < (yyvsp[0].paraListaId).longitud; i++) {
			(yyval.paraListaId).nombres[i] = (yyvsp[0].paraListaId).nombres[i];  
		} 
		(yyval.paraListaId).nombres[(yyvsp[0].paraListaId).longitud] = (yyvsp[-2].cadena); 
		(yyval.paraListaId).longitud = (yyvsp[0].paraListaId).longitud + 1;
    }
#line 1649 "parser.tab.c"
    break;

  case 44: /* lista_id: identificadorTK  */
#line 313 "parser.y"
                        {
        (yyval.paraListaId).nombres[0] = (yyvsp[0].cadena);  
        (yyval.paraListaId).longitud = 1; 
	}
#line 1658 "parser.tab.c"
    break;

  case 45: /* decl_ent_sal: decl_ent  */
#line 320 "parser.y"
                 {

	}
#line 1666 "parser.tab.c"
    break;

  case 46: /* decl_ent_sal: decl_ent decl_sal  */
#line 323 "parser.y"
                            {

	}
#line 1674 "parser.tab.c"
    break;

  case 47: /* decl_ent_sal: decl_sal  */
#line 326 "parser.y"
                   {

	}
#line 1682 "parser.tab.c"
    break;

  case 48: /* decl_ent: entradaTK lista_d_var  */
#line 331 "parser.y"
                              {

	}
#line 1690 "parser.tab.c"
    break;

  case 49: /* decl_sal: salidaTK lista_d_var  */
#line 336 "parser.y"
                             {

	}
#line 1698 "parser.tab.c"
    break;

  case 50: /* expresion: exp_a  */
#line 342 "parser.y"
              {

	}
#line 1706 "parser.tab.c"
    break;

  case 51: /* expresion: exp_b  */
#line 345 "parser.y"
                {

	}
#line 1714 "parser.tab.c"
    break;

  case 52: /* expresion: funcion_ll  */
#line 348 "parser.y"
                     {

	}
#line 1722 "parser.tab.c"
    break;

  case 53: /* exp_a: exp_a operadoresSumaORestaTK exp_a  */
#line 353 "parser.y"
                                           {
		infoVariable T = agregarTemporal();
		(yyval.paraOperando).place = obtenerPos(T.nombre);
		if((yyvsp[-1].operador) == '+')
		{
			if ((yyvsp[-2].paraOperando).type == ENTERO && (yyvsp[0].paraOperando).type == ENTERO) {
				actualizarTipoTemporal(T, ENTERO);
				gen((yyvsp[-2].paraOperando), (yyvsp[0].paraOperando), SUMA_ENTERO, T);
				(yyval.paraOperando).type = ENTERO;
			}
		}else{
		}

	}
#line 1741 "parser.tab.c"
    break;

  case 54: /* exp_a: exp_a operadoresMultiplicacionODivisionTK exp_a  */
#line 367 "parser.y"
                                                          {

	}
#line 1749 "parser.tab.c"
    break;

  case 55: /* exp_a: parentesisAperturaTK exp_a parentesisCierreTK  */
#line 370 "parser.y"
                                                        {

	}
#line 1757 "parser.tab.c"
    break;

  case 56: /* exp_a: operando  */
#line 373 "parser.y"
                   {
		(yyval.paraOperando) = (yyvsp[0].paraOperando);
	}
#line 1765 "parser.tab.c"
    break;

  case 57: /* exp_a: literalRealTK  */
#line 376 "parser.y"
                        {

	}
#line 1773 "parser.tab.c"
    break;

  case 58: /* exp_a: literalEnteroTK  */
#line 379 "parser.y"
                          {

	}
#line 1781 "parser.tab.c"
    break;

  case 59: /* exp_a: operadoresSumaORestaTK exp_a  */
#line 382 "parser.y"
                                                       {

	}
#line 1789 "parser.tab.c"
    break;

  case 60: /* exp_b: exp_b operadoresBooleanosTK exp_b  */
#line 387 "parser.y"
                                          {

	}
#line 1797 "parser.tab.c"
    break;

  case 61: /* exp_b: noTK exp_b  */
#line 390 "parser.y"
                     {

	}
#line 1805 "parser.tab.c"
    break;

  case 62: /* exp_b: operando_b  */
#line 393 "parser.y"
                     {

	}
#line 1813 "parser.tab.c"
    break;

  case 63: /* exp_b: literalBooleanoTK  */
#line 396 "parser.y"
                            {

	}
#line 1821 "parser.tab.c"
    break;

  case 64: /* exp_b: expresion operadoresComparacionTK expresion  */
#line 399 "parser.y"
                                                      {

	}
#line 1829 "parser.tab.c"
    break;

  case 65: /* exp_b: parentesisAperturaTK exp_b parentesisCierreTK  */
#line 402 "parser.y"
                                                        {

	}
#line 1837 "parser.tab.c"
    break;

  case 66: /* operando: identificadorTK  */
#line 408 "parser.y"
                        {
		(yyval.paraOperando).place = obtenerPos((yyvsp[0].cadena));
		(yyval.paraOperando).type = obtenerTipo((yyvsp[0].cadena));
	}
#line 1846 "parser.tab.c"
    break;

  case 67: /* operando: operando puntoTK operando  */
#line 412 "parser.y"
                                    {

	}
#line 1854 "parser.tab.c"
    break;

  case 68: /* operando: operando inicioArrayTK expresion finalArrayTK  */
#line 415 "parser.y"
                                                        {

	}
#line 1862 "parser.tab.c"
    break;

  case 69: /* operando: operando refTK  */
#line 418 "parser.y"
                         {

	}
#line 1870 "parser.tab.c"
    break;

  case 70: /* operando_b: identificadorBooleanoTK  */
#line 424 "parser.y"
                                {

	}
#line 1878 "parser.tab.c"
    break;

  case 71: /* instrucciones: instruccion puntoYComaTK instrucciones  */
#line 430 "parser.y"
                                               {

	}
#line 1886 "parser.tab.c"
    break;

  case 72: /* instrucciones: instruccion  */
#line 433 "parser.y"
                      {

	}
#line 1894 "parser.tab.c"
    break;

  case 73: /* instruccion: continuarTK  */
#line 438 "parser.y"
                    {

	}
#line 1902 "parser.tab.c"
    break;

  case 74: /* instruccion: asignacion  */
#line 441 "parser.y"
                     {

	}
#line 1910 "parser.tab.c"
    break;

  case 75: /* instruccion: alternativa  */
#line 444 "parser.y"
                      {

	}
#line 1918 "parser.tab.c"
    break;

  case 76: /* instruccion: iteracion  */
#line 447 "parser.y"
                    {

	}
#line 1926 "parser.tab.c"
    break;

  case 77: /* instruccion: accion_ll  */
#line 450 "parser.y"
                    {

	}
#line 1934 "parser.tab.c"
    break;

  case 78: /* asignacion: operando igualAsignacionTK expresion  */
#line 455 "parser.y"
                                             {

	}
#line 1942 "parser.tab.c"
    break;

  case 79: /* alternativa: siTK expresion entoncesTK instrucciones lista_opciones finSiTK  */
#line 460 "parser.y"
                                                                       {

	}
#line 1950 "parser.tab.c"
    break;

  case 80: /* lista_opciones: siNoSiTK expresion entoncesTK instrucciones lista_opciones  */
#line 465 "parser.y"
                                                                   {

	}
#line 1958 "parser.tab.c"
    break;

  case 82: /* iteracion: it_cota_fija  */
#line 471 "parser.y"
                     {

	}
#line 1966 "parser.tab.c"
    break;

  case 83: /* iteracion: it_cota_exp  */
#line 474 "parser.y"
                      {

	}
#line 1974 "parser.tab.c"
    break;

  case 84: /* it_cota_exp: mientrasTK expresion hacerTK instrucciones finMientrasTK  */
#line 479 "parser.y"
                                                                 {

	}
#line 1982 "parser.tab.c"
    break;

  case 85: /* it_cota_fija: paraTK identificadorTK igualAsignacionTK expresion hastaTK expresion hacerTK instrucciones finParaTK  */
#line 484 "parser.y"
                                                                                                             {

	}
#line 1990 "parser.tab.c"
    break;

  case 86: /* accion_d: accionTK a_cabecera bloque finAccionTK  */
#line 490 "parser.y"
                                               {

	}
#line 1998 "parser.tab.c"
    break;

  case 87: /* funcion_d: funcionTK f_cabecera bloque devuelveTK expresion finFuncionTK  */
#line 495 "parser.y"
                                                                      {

	}
#line 2006 "parser.tab.c"
    break;

  case 88: /* a_cabecera: identificadorTK parentesisAperturaTK d_par_form parentesisCierreTK puntoYComaTK  */
#line 500 "parser.y"
                                                                                        {

	}
#line 2014 "parser.tab.c"
    break;

  case 89: /* f_cabecera: identificadorTK parentesisAperturaTK lista_d_var parentesisCierreTK devuelveTK d_tipo puntoYComaTK  */
#line 505 "parser.y"
                                                                                                           {

	}
#line 2022 "parser.tab.c"
    break;

  case 90: /* d_par_form: d_p_form puntoYComaTK d_par_form  */
#line 510 "parser.y"
                                         {

	}
#line 2030 "parser.tab.c"
    break;

  case 92: /* d_p_form: entradaTK lista_id definicionTipoVariableTK d_tipo  */
#line 516 "parser.y"
                                                           {

	}
#line 2038 "parser.tab.c"
    break;

  case 93: /* d_p_form: salidaTK lista_id definicionTipoVariableTK d_tipo  */
#line 519 "parser.y"
                                                            {

	}
#line 2046 "parser.tab.c"
    break;

  case 94: /* d_p_form: entradaSalidaTK lista_id definicionTipoVariableTK d_tipo  */
#line 522 "parser.y"
                                                                   {

	}
#line 2054 "parser.tab.c"
    break;

  case 95: /* accion_ll: identificadorTK parentesisAperturaTK l_ll parentesisCierreTK  */
#line 528 "parser.y"
                                                                     {

	}
#line 2062 "parser.tab.c"
    break;

  case 96: /* funcion_ll: identificadorTK parentesisAperturaTK l_ll parentesisCierreTK  */
#line 533 "parser.y"
                                                                     {

	}
#line 2070 "parser.tab.c"
    break;

  case 97: /* l_ll: expresion separadorTK l_ll  */
#line 538 "parser.y"
                                   {

	}
#line 2078 "parser.tab.c"
    break;

  case 98: /* l_ll: expresion  */
#line 541 "parser.y"
                    {

	}
#line 2086 "parser.tab.c"
    break;


#line 2090 "parser.tab.c"

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

#line 546 "parser.y"

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

