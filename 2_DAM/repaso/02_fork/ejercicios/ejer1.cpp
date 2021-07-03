#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

/*
 * Predice la salida del siguiente programa.
 * */
int main (){

    fork();

    printf ("Hola Mundo\n");

    return 0;
}

/*
 * Respuesta => Imprime por pantalla 2 Hola Mundo. Al ejecutar fork genera 2 procesos. osea que hay que calcular 2^n. n es el numero de veces que esta fork en el codigo. Es decir 2^1 = 2.
 * */
