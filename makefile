compilador: parser.tab.c lex.yy.o literal.o literal.h nombresDeTipos.o tablaDeConstantes.o tablaDeConstantes.h tablaDeSimbolos.o tablaDeCuadruplas.o
	gcc parser.tab.c lex.yy.o tablaDeConstantes.o nombresDeTipos.o literal.o tablaDeSimbolos.o tablaDeCuadruplas.o
	mv a.out compilador

parser.tab.c parser.tah.h: parser.y literal.h nombresDeTipos.h tablaDeConstantes.h
	bison -d -v -t parser.y

lex.yy.o: scanner.l parser.tab.h literal.h nombresDeTipos.h tablaDeConstantes.h
	flex scanner.l
	gcc -c lex.yy.c

literal.o: literal.c
	gcc -c literal.c

nombresDeTipos.o: nombresDeTipos.c
	gcc -c nombresDeTipos.c

tablaDeSimbolos.o: tablaDeSimbolos.c
	gcc -c tablaDeSimbolos.c

tablaDeConstantes.o: tablaDeConstantes.c
	gcc -c tablaDeConstantes.c

tablaDeCuadruplas.o: tablaDeCuadruplas.c
	gcc -c tablaDeCuadruplas.c

scanner: scanner.l
	flex scanner.l
	gcc lex.yy.c -lfl
	mv a.out scanner

clean:
	rm *.tab.* lex.yy.c *.o parser.output compilador
