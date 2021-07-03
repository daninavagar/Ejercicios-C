/*
 * =====================================================================================
 *
 *       Filename:  ejer7.cpp
 *
 *    Description:  Imprime los divisores de N.
 *
 *        Version:  1.0
 *        Created:  06/09/20 17:16:10
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
    system("toilet -f pagga --metal DIVISORES");
}

int Divisores (int numero) {

    static int rest = numero;

    if (numero > 0){
        if (rest % numero == 0)
            printf("%i\n", numero);
        Divisores(numero - 1);
    }

}

int main (int argc, char *argv[]) {

    title();
    int numero;
    do {
        printf("                                                                                 \r");
        printf ("Dime un numero y te digo sus divisores: ");
        scanf ("%i", &numero);
        fflush (stdout);
        printf("\x1B[1A");

    } while (numero < 0);
    

    printf ("Los divisores son: \n");
    printf ("\n");

    Divisores(numero);




    return EXIT_SUCCESS;
}
