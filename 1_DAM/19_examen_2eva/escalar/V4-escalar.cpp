#include <stdio.h>
#include <stdlib.h>

/*
 * Metemos ahora un tercer vector.
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

    printf ("Producto = %.2lf\n", escalar (v[0], v[1]));
    printf ("Producto = %.2lf\n", escalar (v[1], v[2]));
    printf ("Producto = %.2lf\n", escalar (v[2], v[3 % V])); // Nota.

    return EXIT_SUCCESS;
}

/* Fíjate qué interesante 3 % V == 0.
 * Si te sales por la derecha, vuelves
 * a entrar por la columna de la izquierda.
 */

