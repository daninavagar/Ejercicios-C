#include <stdio.h>
#include <stdlib.h>

/*
 * Esta es una version simple que
 * repasa como se hace un producto
 * escalar
 * */

#define D 3 /* D: Dimension */

int main (int argc, char *argv[]) {

    double v0[D] = { 4, 1, 2 },
           v1[D] = { 3, 1, 4 },
           producto = 0;

    for (int c=0;c<D; c++) // c: Componente
        producto += v0[c] * v1[c];

    printf ("Producto = %.2lf\n", producto);

    return EXIT_SUCCESS;
}
