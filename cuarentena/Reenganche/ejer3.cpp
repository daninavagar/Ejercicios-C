#include <stdio.h>
#include <stdlib.h>

void title() {
    printf ("\n\n");
    system ("clear");
    system ("toilet -f pagga NUMEROS ENTEROS");
    system ("\n\n");
}

int main (int argc, char *argv[]) {

    int total = 0;
    int numero = 0;

    title ();

    printf ("What's number do you want?");
    scanf ("%i", &numero);

    for ( int i=0; i<=100; i++){
        total = numero+1;
        printf ("%i+", numero);
    }
    total += numero;
    printf ("%i = ", numero);

    printf ("\n\nEl Total es: %i\n\n", total);

    return EXIT_SUCCESS;
}
