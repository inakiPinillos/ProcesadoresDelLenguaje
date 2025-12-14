# Procesadores del lenguaje

Hemos realizado la **declaración de variables, expresiones aritméticas y las expresiones booleanas** (ambas con las asignaciones).

Nuestra gramática no ha sufrido grandes modificaciones sobre la que se nos daba para implementar, para diferenciar las variables booleanas de las demás utilizamos **Fortran**, indicando que todas las variables booleanas tienen que comenzar por b.

Para ejecutar el código hemos realizado un **makefile**, por ello basta con poner make en la terminal y ejecutar *./compilador ejemplo.txt*, también está disponible el *make clean* para limpiar todos los archivos restantes.

Nuestro *ejemplo.txt* contiene varios ejemplos de cada operación. En el caso de las aritméticas hay operaciones con cambio de tipos o que deberían de dar error, por el tipo de variables que se están usando. En cambio, en las booleanas son operaciones sencillas que deben funcionar todas.