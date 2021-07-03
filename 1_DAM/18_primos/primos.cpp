#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {

    unsigned cuantos;

    system ("clear");
    system ("toilet -fpagga --gay PRIMOS");
    printf ("\n\n");

    printf ("Cuantos primos quieres calcular: \n");
    scanf (" %u", &cuantos);

    for (unsigned calculados=0, primo=2; calculados<cuantos; primo++) {
        int tiene_div = 0;
        for (unsigned pdiv=primo/2; pdiv>1 && !tiene_div; pdiv--)
            if (primo % pdiv == 0)
            tiene_div = 1;
        if (!tiene_div) {
            calculados++;
            printf (" %i", primo);
        }
    }

    printf ("\n\n");


    return EXIT_SUCCESS;
}
