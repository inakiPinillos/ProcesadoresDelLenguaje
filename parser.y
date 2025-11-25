 //Archivo: Ejemplo de de archivo .y para la gramatica que indica la practica
 // Autor: Federico Fari�a
 // Fecha: 7/9/23
 // Version: 0.0.1
 // Copyright: Este ejemplo se hace para que lo puedan analizar los alumnos de 
 // la asignatura de procesadores de lenguaje de la UPNA. El autor prohibe 
 // expresamente la copia/uso de este fichero salvo para los alumnos de la 
 // asignatura. Estos pueden usarlo como muestra para desarrollar la practica,
 // pero para ning�n otro tipo de uso.

 //  1: ZONA DE DECLARACIONES
 // PARTE 1.2: Cosas que necesitamos que esten en el .c
%{
	#include <stdio.h>
	#include <string.h>
	#include "nombresDeTipos.h"
	#include "literal.h"
	#include "tablaDeConstantes.h"
	#include "tablaDeSimbolos.h"
	#include "tablaDeCuadruplas.h"
	int yylex(); // Usamos la funcion que se crea gracias a flex
	void yyerror(char *); // Prototipo de una funcion necesaria
	extern FILE* yyin; // Usamos la varible de Flex en la que viene la entrada
	TablaDeConstantes tc; //Es donde guardaremos las constantes
	#define YYDEBUG 1 //Permite activar el modo Debugg de Bison

	#define MAX_CONSTANTES 100
	#define MAX_IDS 100
	#define MAX_CUADRUPLAS 1000

	int pos = 0; 
	infoVariable tablaDeSimbolos[MAX_IDS]; 

	int posCuadruplas = 0; 
	cuadrupla tablaDeCuadruplas[MAX_CUADRUPLAS]; 

%}

 //PARTE 2.2: Declaracion de los tokens del lenguaje y declaracion de los tipos del
 // union en los que flex nos enviara el valor asociado a los tokens multivaluados


%token cadenaTK
%token caracterTK
%token booleanoTK
%token realTK
%token enteroTK
%token accionTK
%token algoritmoTK
%token funcionTK
%token tipoTK
%token varTK
%token tuplaTK
%token constTK
%token refTK
%token tablaTK
%token deTK
%token finAccionTK
%token finAlgoritmoTK
%token finFuncionTK
%token finTipoTK
%token finVarTK
%token finTuplaTK
%token finConstTK
%token mientrasTK
%token siTK
%token paraTK
%token hacerTK
%token hastaTK
%token continuarTK
%token finMientrasTK
%token finSiTK
%token finParaTK
%token entradaTK
%token entradaSalidaTK
%token salidaTK
%token devuelveTK
%token <operador> operadoresMultiplicacionODivisionTK
%token noTK
%token <operador> operadoresBooleanosTK
%token <operador> operadoresSumaORestaTK
%token parentesisAperturaTK
%token parentesisCierreTK
%token <operador> operadoresComparacionTK
%token signoIgualTK
%token igualAsignacionTK
%token puntoYComaTK
%token separadorTK
%token subrangoTK
%token definicionTipoVariableTK
%token entoncesTK
%token siNoSiTK
%token literalTK
%token inicioArrayTK
%token finalArrayTK
%token <valor> literalBooleanoTK
%token <cadena> literalCadenaTK
%token <cadena> identificadorTK
%token <caracter> literalCaracterTK
%token <entero> literalEnteroTK
%token <precondicon> precondicionTK
%token <postcondicion> postCondicionTK
%token  comentarioTK
%token <real> literalRealTK
%token <constante> nombreConstanteTK
%token <cadena> identificadorBooleanoTK
%token puntoTK


 //PARTE 2.3: Definiciones (algunas innecearias) de prioridades

// %nonassoc constTK //hago no asociativo y de baja prioridad a constTK
// %right fconstTK //hago fcosntTK es mas prioritario que constTK y asociativo a derecha
// %left puntoYComaTK //Hago muy prioritario y asociativo a izquierdas al ;

%left operadoresBooleanosTK
%nonassoc operadoresComparacionTK
%left operadoresSumaORestaTK
%left operadoresMultiplicacionODivisionTK
%right noTK
%right UPLUSMINUS
%left inicioArrayTK
%left puntoTK refTK 

 //PARTE 2.3: Creamos el union necesario para valores de flex y traducciones de bison
%code requires {
	#include "tablaDeCuadruplas.h"
	typedef struct listadoIds{ 
		char* nombres[100]; 
		int longitud;  
	}  listadoIds;
	
}

%union{
	char* cadena;
	char operador;
	LiteralT literal;
	int entero;
	NombreDeTipoT tipo;
	listadoIds paraListaId;
	tipoOperando paraOperando;
}

 //PARTE 2.4: Asignacion de traducciones a las variables

%type <entero> lista_d_cte  //para contar las que se definen
%type <paraListaId> lista_id
%type <tipo> d_tipo
%type <paraOperando> operando
%type <paraOperando> exp_a
%%

desc_algoritmo: 
	algoritmoTK identificadorTK puntoYComaTK cabecera_alg bloque_alg finAlgoritmoTK puntoTK{
	}
	;
cabecera_alg: 
	decl_globales decl_a_f decl_ent_sal precondicionTK{
	}
	;
bloque_alg: 
	bloque postCondicionTK{
	}
	;
decl_globales:
	declaracion_tipo decl_globales {

	}
	| declaracion_const decl_globales {

	}
	|
	;

decl_a_f:
	accion_d decl_a_f {

	} 
	| funcion_d decl_a_f {

	}
	| 
	;
bloque:
	declaraciones instrucciones {

	}
	;
declaraciones:
	declaracion_tipo declaraciones {

	}
	| declaracion_const declaraciones {

	}
	| declaracion_var declaraciones {

	}
	|
	;



declaracion_tipo:
	tipoTK lista_d_tipo finTipoTK puntoYComaTK {

	}
	;
declaracion_const:
	constTK lista_d_cte finConstTK puntoYComaTK {

	}
	;
declaracion_var:
	varTK lista_d_var finVarTK puntoYComaTK {
			
	}
	;


lista_d_tipo:
	identificadorTK signoIgualTK d_tipo puntoYComaTK lista_d_tipo {

	}
	|
	;
d_tipo:
	tuplaTK lista_campos finTuplaTK {

	}
	| tablaTK inicioArrayTK expresion_t subrangoTK expresion_t finalArrayTK deTK d_tipo {

	}
	| identificadorTK {

	}
	| expresion_t subrangoTK expresion_t {

	}
	| refTK d_tipo {

	}
	| enteroTK {
		$$ = ENTERO;
	}
	| booleanoTK {
		$$ = BOOLEANO;
	}
	| realTK {
		$$ = REAL;
	}
	| cadenaTK {
		$$ = CADENA;
	}
	| caracterTK {
		$$ = CARACTER;
	}
	;
expresion_t:
	expresion {

	}
	| literalCaracterTK {

	}
	;
lista_campos:
	identificadorTK definicionTipoVariableTK d_tipo puntoYComaTK lista_campos {

	}
	|
	;


lista_d_cte:
	nombreConstanteTK signoIgualTK literalCaracterTK puntoYComaTK lista_d_cte {

	}
	| nombreConstanteTK signoIgualTK literalCadenaTK puntoYComaTK lista_d_cte {

	}
	| nombreConstanteTK signoIgualTK literalEnteroTK puntoYComaTK lista_d_cte {

	}
	| nombreConstanteTK signoIgualTK literalRealTK puntoYComaTK lista_d_cte {

	}
	| nombreConstanteTK signoIgualTK literalBooleanoTK puntoYComaTK lista_d_cte {

	}
	| {

	}
	;
lista_d_var:
	lista_id definicionTipoVariableTK d_tipo puntoYComaTK lista_d_var {
		for (int i = 0; i < $1.longitud; i++) {
			agregarVariable($1.nombres[i], $3);
		}
	}
	|
	;
lista_id:
	identificadorTK separadorTK lista_id {
		for (int i = 0; i < $3.longitud; i++) {
			$$.nombres[i] = $3.nombres[i];  
		} 
		$$.nombres[$3.longitud] = $1; 
		$$.longitud = $3.longitud + 1;
    }	
	|
	identificadorTK {
        $$.nombres[0] = $1;  
        $$.longitud = 1; 
	}
	;

decl_ent_sal:
	decl_ent {

	}
	| decl_ent decl_sal {

	}
	| decl_sal {

	}
	;
decl_ent:
	entradaTK lista_d_var {

	}
	;
decl_sal:
	salidaTK lista_d_var {

	}
	;

expresion:
	exp_a {

	}
	| exp_b {

	}
	| funcion_ll {

	}
	;
exp_a:
	exp_a operadoresSumaORestaTK exp_a {
		infoVariable T = agregarTemporal();
		$$.place = obtenerPos(T.nombre);
		if($2 == '+')
		{
			if ($1.type == ENTERO && $3.type == ENTERO) {
				actualizarTipoTemporal(T, ENTERO);
				gen($1, $3, SUMA_ENTERO, T);
				$$.type = ENTERO;
			}
		}else{
		}

	}
	| exp_a operadoresMultiplicacionODivisionTK exp_a {

	}
	| parentesisAperturaTK exp_a parentesisCierreTK {

	}
	| operando {
		$$ = $1;
	}
	| literalRealTK {

	}
	| literalEnteroTK {

	}
	| operadoresSumaORestaTK exp_a %prec UPLUSMINUS{

	}
	;
exp_b:
	exp_b operadoresBooleanosTK exp_b {

	}
	| noTK exp_b {

	}
	| operando_b {

	}
	| literalBooleanoTK {

	}
	| expresion operadoresComparacionTK expresion {

	}
	| parentesisAperturaTK exp_b parentesisCierreTK {

	}
	;

operando:
	identificadorTK {
		$$.place = obtenerPos($1);
		$$.type = obtenerTipo($1);
	}
	| operando puntoTK operando {

	}
	| operando inicioArrayTK expresion finalArrayTK {

	}
	| operando refTK {

	}
	;

operando_b:
	identificadorBooleanoTK {

	}
	;

instrucciones:
	instruccion puntoYComaTK instrucciones {

	}
	| instruccion {

	}
	;
instruccion:
	continuarTK {

	}
	| asignacion {

	}
	| alternativa {

	}
	| iteracion {

	}
	| accion_ll {

	}
	;
asignacion:
	operando igualAsignacionTK expresion {

	}
	;
alternativa:
	siTK expresion entoncesTK instrucciones lista_opciones finSiTK {

	}
	;
lista_opciones:
	siNoSiTK expresion entoncesTK instrucciones lista_opciones {

	}
	| 
	;
iteracion:
	it_cota_fija {

	}
	| it_cota_exp {

	}
	;
it_cota_exp:
	mientrasTK expresion hacerTK instrucciones finMientrasTK {

	}
	;
it_cota_fija:
	paraTK identificadorTK igualAsignacionTK expresion hastaTK expresion hacerTK instrucciones finParaTK {

	}
	;

accion_d:
	accionTK a_cabecera bloque finAccionTK {

	}
	;
funcion_d:
	funcionTK f_cabecera bloque devuelveTK expresion finFuncionTK {

	}
	;
a_cabecera:
	identificadorTK parentesisAperturaTK d_par_form parentesisCierreTK puntoYComaTK {

	}
	;
f_cabecera:
	identificadorTK parentesisAperturaTK lista_d_var parentesisCierreTK devuelveTK d_tipo puntoYComaTK {

	}
	;
d_par_form:
	d_p_form puntoYComaTK d_par_form {

	}
	|
	;
d_p_form:
	entradaTK lista_id definicionTipoVariableTK d_tipo {

	}
	| salidaTK lista_id definicionTipoVariableTK d_tipo {

	}
	| entradaSalidaTK lista_id definicionTipoVariableTK d_tipo {

	}
	;

accion_ll:
	identificadorTK parentesisAperturaTK l_ll parentesisCierreTK {

	}
	;
funcion_ll:
	identificadorTK parentesisAperturaTK l_ll parentesisCierreTK {

	}
	;
l_ll:
	expresion separadorTK l_ll {

	}
	| expresion {

	}
	;

%%
int main(int argc, char **argv){
	#if defined YYDEBUG
	yydebug=1;
	#endif
	++argv, --argc;
	if (argc > 0)
		yyin = fopen(argv[0], "r");
	else
		yyin = stdin;
	tc = nuevaTablaDeConstantes();
	yyparse();
	imprimeTablaDeConstantes(tc);
	imprimirTabla();
	imprimirTablaCuadruplas();
}


void yyerror(char * s){
	printf("\tBISON: ERROR, %s\n", s);
}

