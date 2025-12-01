#ifndef FFF_TABLA_DE_CUADRUPLAS_H
#define FFF_TABLA_DE_CUADRUPLAS_H
#include "tablaDeSimbolos.h"
#include "nombresDeTipos.h"
#include "nombreDeTiposCuadruplas.h"

typedef struct tipoOperando{
    int place;
    NombreDeTipoT type;
} tipoOperando;

typedef struct cuadrupla {
    tipoOperando operando1;
    tipoOperando operando2;
    NombreDeOperador operador;
    infoVariable resultado;
} cuadrupla;


extern cuadrupla tablaDeCuadruplas[]; 
extern int nextquad; 

void gen(tipoOperando, tipoOperando, NombreDeOperador, infoVariable);
void imprimirTablaCuadruplas();
void imprimirTablaCuadruplasBonito();
#endif
