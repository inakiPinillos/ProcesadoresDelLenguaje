#ifndef FFF_TABLADESIMBOLOS_H
#define FFF_TABLADESIMBOLOS_H

#include "nombresDeTipos.h"


typedef struct infoVariable{
	char * nombre;
	NombreDeTipoT tipo;
} infoVariable;
	
extern infoVariable tablaDeSimbolos[]; 
extern int pos; 

void agregarVariable(char *, NombreDeTipoT);
void imprimirTabla();

#endif
