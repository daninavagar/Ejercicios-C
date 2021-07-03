#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define CUANTOS 4 

void titulo () {
    system ("clear");
    system ("toilet -f pagga --gay PERFECTOS");
    printf ("\n\n");
    printf ("Numeros perfectos:\n\n");
};

int main (int argc, char *argv[]) {

    unsigned long perfecto[CUANTOS];
    int s = 0; /*summit: cima de la pila. Primera posicion vacia. */

    /* Calculos */
    for (unsigned long candidato=2, cuantos=0, suma=0;
            cuantos < CUANTOS && candidato<ULONG_MAX-1; suma=0, candidato ++){
        printf ("Procesing: %lu\r", candidato);
        for (unsigned long div=candidato/2;
                div>0; div--)
            if (candidato % div == 0)
                suma+= div;
        if (suma == candidato) {
            cuantos ++;
            perfecto[s++] = candidato;
        }
    }

    /* Salida */
    fflush (stdout);
    titulo();

    for (int i=0; i<s; i++)
        printf(" %lu", perfecto[i]);

    printf ("\n\n");

    return EXIT_SUCCESS;
}
