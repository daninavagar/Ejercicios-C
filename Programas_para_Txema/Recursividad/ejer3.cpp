/*
 * =====================================================================================
 *
 *       Filename:  ejer3.cpp
 *
 *    Description:  Confecciona un programa que imprima todos los números naturales
 *                  desde n hasta 1 (ó 0 me es indiferente) en orden decreciente.
 *                  Recuerda que tienes que imprimir n y luego los n-1 caracteres.
 *
 *        Version:  1.0
 *        Created:  06/08/20 17:09:21
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Daniel Navarro Garcia (), daninavagar@gmail.com
 *   Organization:  Salesianos Dosa DAM
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void title () {
    system ("clear");
    system ("toilet -f pagga --metal DECRECIENTE");
    printf("\n");
}

int naturales_decreciente (int numero) {

    if (numero < 1)
        return 0;
    printf ("%i \n", numero);
    naturales_decreciente (numero -1);
}

int main (int argc, char *argv[]) {

    int numero;

    title ();

    do {
        printf ("                                                                               \r");
        printf ("Dime un numero: ");
        scanf ("%i", &numero);
        fflush(stdout);
        printf("\x1B[1A");
    } while (numero < 0);
    printf ("\n");
    naturales_decreciente(numero);
    return EXIT_SUCCESS;
}
