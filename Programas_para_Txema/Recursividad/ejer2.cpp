/*
 * =====================================================================================
 *
 *       Filename:  ejer2.cpp
 *
 *    Description:  Partiendo del programa anterior confecciona un programa que haga el
 *                  factorial de un numero
 *
 *        Version:  1.0
 *        Created:  06/08/20 14:14:19
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
    system("clear");
    system("toilet -f pagga --metal NUMERO FACTORIAL");
}

int factorial (int numero) {

    if (numero == 1)
        return 1;
    else {
        return numero * factorial (numero - 1);
    }
}

int main (int argc, char *argv[]) {

    title();
    int numero, cantidad;

    do {
        printf ("                                                                     \r");
        printf ("Dime un numero: ");
        scanf ("%i", &numero);
        fflush(stdout);
        printf ("\x1B[1A");
    } while (numero < 0);

    printf (" El factorial de %i es: %i\n", numero, factorial(numero));

    return EXIT_SUCCESS;
}
