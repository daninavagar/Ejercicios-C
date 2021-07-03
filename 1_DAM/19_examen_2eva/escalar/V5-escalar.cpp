#include <stdio.h>
#include <stdlib.h>

/*
 * Simplificamos v4 metiendo un bucle.
 * Nota: si haces funciones siempre que puedas
 * el programa se simplifica/conceptualiza mucho.
 **/

#define D 3 /* D: Dimensión */
#define V 3 /* V: Número de vectores */


double escalar( double op1[D], double op2[D] ) {
    double producto = 0;


    for (int c=0; c<D; c++)  // c: Componente
        producto += op1[c] * op2[c];

    return producto;
}

int main (int argc, char *argv[]) {
    double v[3][D] = { { 4 , 1,  2 },
                       { 3 , 1,  4 },
                       { -1, 2, -3 } };

    for (int i=0; i<V; i++) // i: vector inicial
        printf ("Producto = %.2lf\n", escalar (v[i], v[ (i + 1) % V]));

    return EXIT_SUCCESS;
}

