#include <stdio.h>
#include <stdlib.h>

/*
 * Partiendo de la version 1,
 * vamos a utilizar las funciones
 * */

#define D 3 /* D: Dimension */

double escalar( double op1[D], double op2[D] ){
    double producto = 0;

    for (int c=0; c<D; c++)
        producto += op1[c] * op2[c];

    return producto;
}

int main (int argc, char *argv[]) {

    double v0[D] = { 4, 1, 2 },
           v1[D] = { 3, 1, 4 };
    printf ("Producto %5.2lf\n", escalar (v0, v1));


    return EXIT_SUCCESS;
}
