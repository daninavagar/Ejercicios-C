#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {

    int resultado = 0;
    int op1 = 7, op2 = 3;

    for (int v=0; v<op2; v++)
        resultado += op1;

    printf ("%i x %i = %i\n", op1, op2, resultado);

    return EXIT_SUCCESS;
}
