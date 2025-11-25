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
infoVariable agregarTemporal();
void actualizarTipoTemporal(infoVariable, NombreDeTipoT);
NombreDeTipoT obtenerTipo(char *);
int obtenerPos(char *);
void imprimirTabla();

#endif
