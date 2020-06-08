/*
 * =====================================================================================
 *
 *       Filename:  ejer1.cpp
 *
 *    Description:  Confecciona a un programa que sume los n primeros números naturales
 *
 *        Version:  1.0
 *        Created:  06/08/20 13:49:44
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
    system("toilet -f pagga --metal NUMEROS NATURALES");
}

int suma_r (int cantidad) {

    if (cantidad < 1) {
        return 0;
    }
    return cantidad + suma_r (cantidad - 1);
}

int main (int argc, char *argv[]) {

    int numero, cantidad;
    title();

    do {
        printf ("                                                             \r");
        printf ("Dime un numero: ");
        scanf ("%i", &numero);
        fflush(stdout);
        printf("\x1B[1A");
    } while (numero < 0);

    printf ("\n");
    printf ("La suma de %i de los primeros numeros es %i\n", numero, suma_r(numero));


    return EXIT_SUCCESS;
}

