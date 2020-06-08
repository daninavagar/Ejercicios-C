/*
 * =====================================================================================
 *
 *       Filename:  ejer4.cpp
 *
 *    Description:  Rehaz el programa anterior para que los imprime en orden creciente
 *
 *        Version:  1.0
 *        Created:  06/08/20 17:31:04
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

int naturales_creciente (int numero) {

    if (numero < 1)
        return 0;


    naturales_creciente (numero -1);
    printf ("%i \n", numero);
  
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
    naturales_creciente(numero);
    return EXIT_SUCCESS;
}
