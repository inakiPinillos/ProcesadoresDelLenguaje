#ifndef FFF_TABLA_DE_CUADRUPLAS_H
#define FFF_TABLA_DE_CUADRUPLAS_H
#include "tablaDeSimbolos.h"
typedef enum nombreDeOperador {
	SUMA_ENTERO,
	SUMA_REAL,
	RESTA_ENTERO,
	RESTA_REAL,
	MULT_ENTERO,
    MULT_REAL,
    DIV_ENTERO,
    DIV_REAL,
    ENTERO_TO_REAL,
    REAL_TO_ENTERO
} NombreDeOperador;

typedef struct tipoOperando{
    int place;
    NombreDeOperador type;
} tipoOperando;

typedef struct cuadrupla {
    tipoOperando operando1;
    tipoOperando operando2;
    NombreDeOperador operador;
    infoVariable resultado;
} cuadrupla;


extern cuadrupla tablaDeCuadruplas[]; 
extern int posCuadruplas; 

void gen(tipoOperando, tipoOperando, NombreDeOperador, infoVariable);
void imprimirTablaCuadruplas();
#endif
