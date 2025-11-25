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

infoVariable agregarTemporal() {
    tablaDeSimbolos[pos].nombre = (char*)malloc(5 * sizeof(char));
    sprintf(tablaDeSimbolos[pos].nombre, "T%d", pos);
    pos++;
    return tablaDeSimbolos[pos - 1];
}

void actualizarTipoTemporal(infoVariable variable, NombreDeTipoT tipo) {
    int posicion = obtenerPos(variable.nombre);
    if (posicion == -1) {
        printf("ERROR: No existe la variable");
    } else {
        tablaDeSimbolos[posicion].tipo = tipo;
    }     
} 

NombreDeTipoT obtenerTipo(char *nombre) {
    int posicion = obtenerPos(nombre);
    if (posicion == -1) {
        printf("ERROR: No existe la variable");
    } else {
        return tablaDeSimbolos[posicion].tipo;
    }
}

int obtenerPos(char *nombre) {
    for (int i = 0; i < pos; i++){
        if (strcmp(nombre, tablaDeSimbolos[i].nombre) == 0){
            return i;
        } 
    }
    printf("ERROR: No existe la variable");
    return -1;
}

void imprimirTabla(){
    printf("////////TABLA////////\n");
    for (int i = 0; i < pos; i++){
        printf("Nombre: %s, tipo: %s\n", tablaDeSimbolos[i].nombre, nombreDeTipoToString(tablaDeSimbolos[i].tipo));
    }
}
