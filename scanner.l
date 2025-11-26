 //Para poder probar el ejemplo debe:
 //1-Usar flex ejecutando flex scannerBeta.l
 //2-Compilar el fichero generado por flex con la opcion -lfl (-ll en OSx)
 //3-Ejecutar el fichero resultante
 //4-Introducir lo que quiera que lea el scanner mediante el teclado

 //PARTE 1: ZONA DE DECLARACIONES
 //PARTE 1.1: Constantes manifiestas y codigo necesario para el .c que genera flex 

%{
	// Headers standard necesarios
	#include <stdio.h> //Para poder escribir en el terminal
	#include <stdlib.h> //Para usar exit()
	#include <strings.h> //Para trabajar con cadenas de caracteres
	

	#include "nombresDeTipos.h"
	#include "literal.h"
	#include "parser.tab.h"
	
	void errorEnScanner(char*, char*); //prototipo necesario para compilar
	
%}

 // PARTE 1.2: Zona de definiciones regulares 

falsoOP	(?i:falso)
verdaderoOP	(?i:verdadero)
letraOP [A-Za-z]

cadenaOP (?i:cadena)
caracterOP (?i:caracter)
enteroOP (?i:entero)
booleanoOP (?i:booleano)
realOP (?i:real)
accionOP (?i:accion)
algoritmoOP (?i:algoritmo)
funcionOP (?i:funcion)
tipoOP (?i:tipo)
varOP (?i:var)
tuplaOP (?i:tupla)
constOP (?i:const)
refOP (?i:ref)
tablaOP (?i:tabla)
deOP (?i:de)
faccionOP (?i:faccion)
falgoritmoOP (?i:falgoritmo)
ffuncionOP (?i:ffuncion)
ftipoOP (?i:ftipo)
fvarOP (?i:fvar)
ftuplaOP (?i:ftupla)
fconstOP (?i:fconst)

mientrasOP (?i:mientras)
siOP (?i:si)
paraOP (?i:para)
hacerOP (?i:hacer)
hastaOP (?i:hasta)
continuarOP (?i:continuar)
fmientrasOP (?i:fmientras)
fsiOP (?i:fsi)
fparaOP (?i:fpara)

entOP (?i:ent)
esOP (?i:e\/s)
salOP (?i:sal)
devOP (?i:dev)

operadoresDivMultOP (?i:div)|(?i:mod)|\*|\/
noOP (?i:no)
operadoresBooleanosOP y|o
operadoresSumaRestaOP \+|\-
parentesisAperturaOP \(
parentesisCierreOP \)
operadoresComparacionOP <|>|<=|>=
signoIgualOP =
asignacionOP :=
puntoYComaOP	;
separadorOP ,
puntoOP \.
subrangoOP \.\.
definicionTipoVariableOP :
entoncesOP ->
siNoSiOP \[\]
inicioArrayOP \[
finArrayOP \]

identificadorOP {letraOP}({letraOP}|[0-9])*
identificadorBooleanoOP [bB]({letraOP}|[0-9])*

literalCaracterOP	\".\"
literalCadenaOP	\'.*\'
comentarioOP	\{.*\}
precondicionOP	\{Prec:[^}]*\}
postcondicionOP	\{Post:[^}]*\}
literalEnteroOP	[+-]?[0-9]+
literalRealOP	{literalEnteroOP}[rR]

%%

 //PARTE 2: Reglas

{cadenaOP}	{
	return cadenaTK;
}
{caracterOP}	{
	return caracterTK;
}
{enteroOP}	{
	return enteroTK;
}
{booleanoOP}	{
	return booleanoTK;
}
{realOP}	{
	return realTK;
}
{accionOP}	{
	return accionTK;
}
{algoritmoOP}	{
	return algoritmoTK;
}
{funcionOP}	{
	return funcionTK;
}
{tipoOP}	{
	return tipoTK;
}
{varOP}	{
	return varTK;
}
{tuplaOP}	{
	return tuplaTK;
}
{constOP}	{
	return constTK;
}
{refOP}	{
	return refTK;
}
{tablaOP}	{
	return tablaTK;
}
{deOP}	{
	return deTK;
}
{faccionOP}	{
	return finAccionTK;
}
{falgoritmoOP}	{
	return finAlgoritmoTK;
}
{ffuncionOP}	{
	return finFuncionTK;
}
{ftipoOP}	{
	return finTipoTK;
}
{fvarOP}	{
	return finVarTK;
}
{ftuplaOP}	{
	return finTuplaTK;
}
{fconstOP}	{
	return finConstTK;
}


{mientrasOP}	{
	return mientrasTK;
}
{siOP}	{
	return siTK;
}
{paraOP}	{
	return paraTK;
}
{hacerOP}	{
	return hacerTK;
}
{hastaOP}	{
	return hastaTK;
}
{continuarOP}	{
	return continuarTK;
}
{fmientrasOP}	{
	return finMientrasTK;
}
{fsiOP}	{
	return finSiTK;
}
{fparaOP}	{
	return finParaTK;
}

{entOP}	{
	return entradaTK;
}
{esOP}	{
	return entradaSalidaTK;
}
{salOP}	{
	return salidaTK;
}
{devOP}	{
	return devuelveTK;
}



{operadoresDivMultOP}	{
	yylval.operador = yytext;
	return operadoresMultiplicacionODivisionTK;
}
{noOP}	{
	return noTK;
}
{operadoresBooleanosOP}	{
	return operadoresBooleanosTK;
	printf("%c\n", yytext[0]);
}
{operadoresSumaRestaOP}	{
	yylval.operador = yytext;
	return operadoresSumaORestaTK;
}
{parentesisAperturaOP}	{
	return parentesisAperturaTK;
}
{parentesisCierreOP}	{
	return parentesisCierreTK;
}
{operadoresComparacionOP}	{
	return operadoresComparacionTK;
	printf("%s\n", yytext);

}
{signoIgualOP}	{
	return signoIgualTK;
}
{asignacionOP}	{
	return igualAsignacionTK;
}
{puntoYComaOP}	{
	return puntoYComaTK;
}
{separadorOP}	{
	return separadorTK;
}
{puntoOP}	{
	return puntoTK;
}
{subrangoOP}	{
	return subrangoTK;
}
{definicionTipoVariableOP}	{
	return definicionTipoVariableTK;
}
{entoncesOP}	{
	return entoncesTK;
}
{siNoSiOP}	{
	return siNoSiTK;
}
{inicioArrayOP}	{
	return inicioArrayTK;
}
{finArrayOP}	{
	return finalArrayTK;
}
{falsoOP}	{
	yylval.literal.tipoDelValor = BOOLEANO;
	yylval.literal.valor.valorBooleano = FALSO;
	return literalTK;
}
{verdaderoOP}	{
	yylval.literal.tipoDelValor = BOOLEANO;
	yylval.literal.valor.valorBooleano = VERDADERO;
	return literalTK;
}



{identificadorBooleanoOP}	{
	if ((yylval.cadena = strdup(yytext)) == NULL )
		errorEnScanner("No hay memoria para strdup() al leer %s\n", yytext);
	else
		return identificadorBooleanoTK;
}
{identificadorOP}	{
	if ((yylval.cadena = strdup(yytext)) == NULL )
		errorEnScanner("No hay memoria para strdup() al leer %s\n", yytext);
	else
		return identificadorTK;
}
{literalCaracterOP}	{
	yylval.literal.tipoDelValor = CARACTER;
	yylval.literal.valor.valorCaracter = yytext[1];
	return literalTK;
}
{literalCadenaOP}	{
	yylval.literal.tipoDelValor = CADENA;

	if ((yylval.literal.valor.valorCadena = strdup(yytext)) == NULL )
		errorEnScanner("No hay memoria para strdup() al leer %s\n", yytext);
	else
		return literalTK;
}
{literalEnteroOP}	{
	yylval.literal.tipoDelValor = ENTERO;
	yylval.literal.valor.valorEntero = atoi(yytext);
	return literalTK;
}
{precondicionOP}	{
	return precondicionTK;
}
{postcondicionOP}	{
	return postCondicionTK;
}
{comentarioOP}	{
	return comentarioTK;
}

[+-]?[0-9]*(\.[0-9]+)?([eE][+-]?[0-9]+)?	{
	yylval.literal.tipoDelValor = REAL;
	yylval.literal.valor.valorReal = atof(yytext);
	return literalTK;
}
{literalRealOP}	{
	char * cadena;
	yylval.literal.tipoDelValor = REAL;
	if ((cadena = strndup(yytext, strlen(yytext)-1)) == NULL) 
		errorEnScanner("No hay memoria para strndup() al leer\n", yytext);
	else {
		yylval.literal.valor.valorReal = atof(cadena);
		free(cadena);
	}
	return literalTK;
}
[A-Z][A-Z_]*	{
	yylval.cadena = strdup(yytext);
	return nombreConstanteTK;
}


.	{ //Permite que el resto de caracteres no hagan echo
}


%%

 //PARTE 3: CODIGO ADICIONAL
 //En la parte anterior se ha hecho uso de funciones que el compilador debe conocer. 
 //Aqu� se programan esas funciones. Su prototipo debe aparecer en la parte de arriba
 //(salvo el main, en el caso que exista)
 //Como podeis ver, ni siquiera pongo un main. La libreria de flex proporciona un main
 //por defecto que usa stdin como fichero de entrada y stdout como fichero de salida 

void errorEnScanner(char* definicionDelError, char * variable){
	printf("\n\n\n\t%s %s \n", definicionDelError, variable);
	exit(EXIT_FAILURE);
}

int yywrap() {
	return 1;
}