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
        case DIV_ENTERA_ENTEROS: return "División entera de enteros";
        case DIV_ENTERA_REALES: return "División entera de reales";
        case DIV_REAL_ENTEROS: return "División real de enteros";
        case DIV_REAL_REALES: return "División real de reales";
        case MOD_ENTERO: return "Módulo de enteros";
        case ENTERO_TO_REAL: return "Tipo de entero a real";
        case REAL_TO_ENTERO: return "Tipo de real a entero";
        case ASIGNACION: return "Asignacion";
        case Y: return "Y";
        case O: return "O";
        case NO: return "No";
        case MENOR: return "Menor";
        case MENOR_O_IGUAL: return "Menor o igual";
        case MAYOR: return "Mayor";
        case MAYOR_O_IGUAL: return "Mayor o igual";
    }
}    

void gen(tipoOperando oper1, tipoOperando oper2, NombreDeOperador oper, infoVariable res) {
    tablaDeCuadruplas[nextquad].operando1 = oper1;
    tablaDeCuadruplas[nextquad].operando2 = oper2;
    tablaDeCuadruplas[nextquad].operador = oper;
    tablaDeCuadruplas[nextquad].resultado = res;
    nextquad++;
}


void imprimirTablaCuadruplas(){
    printf("////////TABLA CUADRUPLAS////////\n");
    for (int i = 0; i < nextquad; i++){
        printf("Operando 1, pos:%d y tipo:%s, operando 2: pos:%d y tipo:%s, operador: %s y resultado nombre:%s y tipo: %s\n",
            tablaDeCuadruplas[i].operando1.place, nombreDeTipoToString(tablaDeCuadruplas[i].operando1.type),
            tablaDeCuadruplas[i].operando2.place, nombreDeTipoToString(tablaDeCuadruplas[i].operando2.type),
            nombreDeOperadorToString(tablaDeCuadruplas[i].operador),
            tablaDeCuadruplas[i].resultado.nombre, nombreDeTipoToString(tablaDeCuadruplas[i].resultado.tipo)
        );
    }
}