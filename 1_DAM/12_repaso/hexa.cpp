#include <stdio.h>
#include <stdlib.h>

#define MAX 0x100

int main (int argc, char *argv[]) {

    char leido[MAX];
    int numero;

    printf ("Hexa: ");
    scanf (" %[0-9]", leido);
    numero = atoi (leido);
    /* Mi atoi particular */
    int resultado = 0;
    for (int i=0; leido[i]!='\0'; i++)
        resultado = resultado * 10 + leido[i] - '0';

    printf ("Numero:\t%i\nResultado:\t%i\n", numero, resultado);
    printf ("\n");

    return EXIT_SUCCESS;
}
