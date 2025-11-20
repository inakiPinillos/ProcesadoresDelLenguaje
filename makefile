compilador: parser.tab.c lex.yy.o literal.o literal.h nombresDeTipos.h tablaDeConstantes.o tablaDeConstantes.h tablaDeSimbolos.o
	gcc parser.tab.c lex.yy.o tablaDeConstantes.o literal.o tablaDeSimbolos.o
	mv a.out compilador

parser.tab.c parser.tah.h: parser.y literal.h nombresDeTipos.h tablaDeConstantes.h
	bison -d -v -t parser.y

lex.yy.o: scannerVFinal.l parser.tab.h literal.h nombresDeTipos.h tablaDeConstantes.h
	flex scannerVFinal.l
	gcc -c lex.yy.c

literal.o: literal.c
	gcc -c literal.c

tablaDeSimbolos.o: tablaDeSimbolos.c
	gcc -c tablaDeSimbolos.c

tablaDeConstantes.o: tablaDeConstantes.c
	gcc -c tablaDeConstantes.c

scanner: scannerVFinal.l
	flex scannerVFinal.l
	gcc lex.yy.c -lfl
	mv a.out scanner

clean:
	rm *.tab.* lex.yy.c *.o parser.output compilador
