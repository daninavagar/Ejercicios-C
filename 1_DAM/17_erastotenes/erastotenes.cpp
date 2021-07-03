#include <stdio.h>
#include <stdlib.h>

#define N 0x1000

void title () {
    system ("clear");
    system ("toilet -fpagga --gay ERASTOTENES");
    printf ("\n\n");
}
int main (int argc, char *argv[]) {
    unsigned primo[N];

    title ();

    /* Inicializar */
    for (int i=0; i<N; i++)
        primo[i] = i+1;

    /* Tachar */
    for (unsigned p=1; p<N; p++) /* p: Número con el que se tacha. ej 1*/
        if (primo[p])
            for (unsigned t=2*primo[p]-1; t<N; t+=primo[p]) /* t: Número tachado. xej, múltiplos de 2. */
                primo[t] = 0;

    /* Imprimir los no 0. */
    for (int i=0; i<N; i++)
        if (primo[i])
            printf ("%i ", primo[i]);

    printf ("\n");
    printf ("\n");

    return EXIT_SUCCESS;
}
