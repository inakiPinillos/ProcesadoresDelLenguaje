/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 127 "parser.y"

	#include "tablaDeCuadruplas.h"
	typedef struct listadoIds{ 
		char* nombres[100]; 
		int longitud;  
	}  listadoIds;
	

#line 58 "parser.tab.h"

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    cadenaTK = 258,                /* cadenaTK  */
    caracterTK = 259,              /* caracterTK  */
    booleanoTK = 260,              /* booleanoTK  */
    realTK = 261,                  /* realTK  */
    enteroTK = 262,                /* enteroTK  */
    accionTK = 263,                /* accionTK  */
    algoritmoTK = 264,             /* algoritmoTK  */
    funcionTK = 265,               /* funcionTK  */
    tipoTK = 266,                  /* tipoTK  */
    varTK = 267,                   /* varTK  */
    tuplaTK = 268,                 /* tuplaTK  */
    constTK = 269,                 /* constTK  */
    refTK = 270,                   /* refTK  */
    tablaTK = 271,                 /* tablaTK  */
    deTK = 272,                    /* deTK  */
    finAccionTK = 273,             /* finAccionTK  */
    finAlgoritmoTK = 274,          /* finAlgoritmoTK  */
    finFuncionTK = 275,            /* finFuncionTK  */
    finTipoTK = 276,               /* finTipoTK  */
    finVarTK = 277,                /* finVarTK  */
    finTuplaTK = 278,              /* finTuplaTK  */
    finConstTK = 279,              /* finConstTK  */
    mientrasTK = 280,              /* mientrasTK  */
    siTK = 281,                    /* siTK  */
    paraTK = 282,                  /* paraTK  */
    hacerTK = 283,                 /* hacerTK  */
    hastaTK = 284,                 /* hastaTK  */
    continuarTK = 285,             /* continuarTK  */
    finMientrasTK = 286,           /* finMientrasTK  */
    finSiTK = 287,                 /* finSiTK  */
    finParaTK = 288,               /* finParaTK  */
    entradaTK = 289,               /* entradaTK  */
    entradaSalidaTK = 290,         /* entradaSalidaTK  */
    salidaTK = 291,                /* salidaTK  */
    devuelveTK = 292,              /* devuelveTK  */
    operadoresMultiplicacionODivisionTK = 293, /* operadoresMultiplicacionODivisionTK  */
    noTK = 294,                    /* noTK  */
    operadoresBooleanosTK = 295,   /* operadoresBooleanosTK  */
    operadoresSumaORestaTK = 296,  /* operadoresSumaORestaTK  */
    parentesisAperturaTK = 297,    /* parentesisAperturaTK  */
    parentesisCierreTK = 298,      /* parentesisCierreTK  */
    operadoresComparacionTK = 299, /* operadoresComparacionTK  */
    signoIgualTK = 300,            /* signoIgualTK  */
    igualAsignacionTK = 301,       /* igualAsignacionTK  */
    puntoYComaTK = 302,            /* puntoYComaTK  */
    separadorTK = 303,             /* separadorTK  */
    subrangoTK = 304,              /* subrangoTK  */
    definicionTipoVariableTK = 305, /* definicionTipoVariableTK  */
    entoncesTK = 306,              /* entoncesTK  */
    siNoSiTK = 307,                /* siNoSiTK  */
    literalTK = 308,               /* literalTK  */
    inicioArrayTK = 309,           /* inicioArrayTK  */
    finalArrayTK = 310,            /* finalArrayTK  */
    literalBooleanoTK = 311,       /* literalBooleanoTK  */
    literalCadenaTK = 312,         /* literalCadenaTK  */
    identificadorTK = 313,         /* identificadorTK  */
    literalCaracterTK = 314,       /* literalCaracterTK  */
    literalEnteroTK = 315,         /* literalEnteroTK  */
    precondicionTK = 316,          /* precondicionTK  */
    postCondicionTK = 317,         /* postCondicionTK  */
    comentarioTK = 318,            /* comentarioTK  */
    literalRealTK = 319,           /* literalRealTK  */
    nombreConstanteTK = 320,       /* nombreConstanteTK  */
    identificadorBooleanoTK = 321, /* identificadorBooleanoTK  */
    puntoTK = 322,                 /* puntoTK  */
    UPLUSMINUS = 323               /* UPLUSMINUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 136 "parser.y"

	char* cadena;
	char* operador;
	LiteralT literal;
	int entero;
	NombreDeTipoT tipo;
	listadoIds paraListaId;
	tipoOperando paraOperando;

#line 153 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
