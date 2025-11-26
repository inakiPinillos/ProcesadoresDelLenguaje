#ifndef FFF_NOMBRESDETIPOS_H
#define FFF_NOMBRESDETIPOS_H

typedef enum nombreDeTipoT {
	BOOLEANO,
	CADENA,
	CARACTER,
	ENTERO,
	REAL,
	TIPO_NULO
} NombreDeTipoT;

const char* nombreDeTipoToString(NombreDeTipoT);
#endif
