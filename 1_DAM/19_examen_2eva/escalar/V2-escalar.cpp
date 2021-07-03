#include <stdio.h>
#include <stdlib.h>

/*
 * Vamos a introducir la idea de matriz.
 * Compara con la version 1.
 * Ahora "v" va a ser una matriz 3x2
 * 3 filas y 2 columnas
 * */

#define D 3 /* D: Dimension */

int main (int argc, char *argv[]) {

    double v[2][D] = { { 4, 1, 2 },
                     { 3, 1, 4 } },
           producto = 0;

    for (int c=0;c<D; c++) // c: Componente
        producto += v[0][c] * v[1][c];

    printf ("Producto = %.2lf\n", producto);

    return EXIT_SUCCESS;
}
