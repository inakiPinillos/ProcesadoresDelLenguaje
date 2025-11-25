#include "tablaDeCuadruplas.h" 
#include "tablaDeSimbolos.h"
#include "nombresDeTipos.h" 
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

const char* nombreDeOperadorToString(NombreDeOperador tipo) {
    switch (tipo) {
        case SUMA_ENTERO: return "Suma de enteros";
        case SUMA_REAL: return "Suma de reales";
        case RESTA_ENTERO: return "Resta de enteros";
        case RESTA_REAL: return "Resta de reales";
        case MULT_ENTERO: return "Multiplicación de enteros";
        case MULT_REAL: return "Multiplicación de reales";
        case DIV_ENTERO: return "División de enteros";
        case DIV_REAL: return "División de reales";
        case ENTERO_TO_REAL: return "Tipo de entero a real";
        case REAL_TO_ENTERO: return "Tipo de real a entero";

    }
}    

void gen(tipoOperando oper1, tipoOperando oper2, NombreDeOperador oper, infoVariable res) {
    tablaDeCuadruplas[posCuadruplas].operando1 = oper1;
    tablaDeCuadruplas[posCuadruplas].operando2 = oper2;
    tablaDeCuadruplas[posCuadruplas].operador = oper;
    tablaDeCuadruplas[posCuadruplas].resultado = res;
    posCuadruplas++;
}


void imprimirTablaCuadruplas(){
    printf("////////TABLA CUADRUPLAS////////\n");
    for (int i = 0; i < posCuadruplas; i++){
        printf("Operando 1, pos:%d y tipo:%s, operando 2: pos:%d y tipo:%s, operador: %s y resultado nombre:%s y tipo: %s\n",
            tablaDeCuadruplas[i].operando1.place, nombreDeTipoToString(tablaDeCuadruplas[i].operando1.type),
            tablaDeCuadruplas[i].operando2.place, nombreDeTipoToString(tablaDeCuadruplas[i].operando2.type),
            nombreDeOperadorToString(tablaDeCuadruplas[i].operador),
            tablaDeCuadruplas[i].resultado.nombre, nombreDeTipoToString(tablaDeCuadruplas[i].resultado.tipo)
        );
    }
}