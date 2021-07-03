#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
/*
 * Calcula la cantidad de veces que se imprime "Hola".
 * */
int main (){

    fork();
    fork();
    fork();

    printf ("Hola, pid hijo-> %i, pid PADRE -> %i \n", getpid(), getppid());

    while(1);
    return 0;
}

/*
 * Respuesta => Imprime por pantalla 8 Hola. Al ejecutar fork genera 2 procesos. osea que hay que calcular 2^n. n es el numero de veces que esta fork en el codigo. Es decir 2^3 = 8.
 * */
