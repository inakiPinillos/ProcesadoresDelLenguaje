#include "tablaDeSimbolos.h" 
#include "nombresDeTipos.h" 
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


void agregarVariable(char *nombreVariable, NombreDeTipoT tipoVariable) {
    for (int i = 0; i < pos; i++){
        if (strcmp(nombreVariable, tablaDeSimbolos[i].nombre) == 0){
            printf("ERROR: Nombre de variable %s ya insertado anteriormente\n", nombreVariable);
            return;
        } 
    } 
    tablaDeSimbolos[pos].nombre = nombreVariable;
    tablaDeSimbolos[pos].tipo = tipoVariable;
    pos++;
}

const char* nombreDeTipoToString(NombreDeTipoT tipo) {
    switch (tipo) {
        case BOOLEANO: return "Booleano";
        case CADENA: return "Cadena";
        case CARACTER: return "Caracter";
        case ENTERO: return "Entero";
        case REAL: return "Real";
    }
}

void imprimirTabla(){
    printf("////////TABLA////////\n");
    for (int i = 0; i < pos; i++){
        printf("Nombre: %s, tipo: %s\n", tablaDeSimbolos[i].nombre, nombreDeTipoToString(tablaDeSimbolos[i].tipo));
    }
}
