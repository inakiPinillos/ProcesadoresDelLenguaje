#include "nombresDeTipos.h" 
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


const char* nombreDeTipoToString(NombreDeTipoT tipo) {
    switch (tipo) {
        case BOOLEANO: return "Booleano";
        case CADENA: return "Cadena";
        case CARACTER: return "Caracter";
        case ENTERO: return "Entero";
        case REAL: return "Real";
        case TIPO_NULO: return "Nulo";
    }
}