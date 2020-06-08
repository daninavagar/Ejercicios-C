/*
 * =====================================================================================
 *
 *       Filename:  Fibonnaci.cpp
 *
 *    Description:  Sucesion de fibonacci
 *
 *        Version:  1.0
 *        Created:  06/08/20 12:34:56
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
    system("toilet -f pagga --metal FIBONACCI");
}

int Fibonacci (int numero) {
    if (numero == 0 || numero == 1)
        return 1;
    return Fibonacci(numero -1) + Fibonacci(numero - 2);
}

int main (int argc, char *argv[]) {

    int numero, x, cantidad;
    title();

    do {
      printf ("                                                                             \r");
      printf ("Dime cuantos numeros quieres que sace de la sucesion: ");
      scanf ("%i", &cantidad);
      fflush(stdout);
      printf ("\x1B[1Am"); /* Enseñado por Diego */
    } while (cantidad < 0);
    printf ("\n");
      for (numero = 0; numero < cantidad; ++numero) {
            x = Fibonacci(numero);
            printf ("%d\n", x);
          }


    return EXIT_SUCCESS;
}


