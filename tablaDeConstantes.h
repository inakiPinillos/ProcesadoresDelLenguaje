#ifndef FFF_TABLA_DE_CONSTANTES_H
#define FFF_TABLA_DE_CONSTANTES_H

#include <stdbool.h>
#include "literal.h"

typedef struct celda {
	char * nombre;
	LiteralT valor;
	struct celda * sig;	
} Celda;

typedef Celda * TablaDeConstantes;

TablaDeConstantes nuevaTablaDeConstantes(void);
bool insertaConstante(TablaDeConstantes *, char *, LiteralT);
void imprimeTablaDeConstantes(TablaDeConstantes);

#endif

