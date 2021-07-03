/*
 * =====================================================================================
 *
 *       Filename:  primos.cpp
 *
 *    Description:  Haz una funcion no recursiva bool es_primo(int n) que apoyándose en
 *                  la función recursiva int numero_de_divisores(int n) diga si un número
 *                  es primo o no.
 *
 *        Version:  1.0
 *        Created:  06/09/20 20:45:01
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
    system("toilet -f pagga --metal PRIMOS");
}

int numero_de_divisores(int numero, int divisor, int cantidad) { /* SI ES RECURSIVO */


    if (divisor <= numero) {
        if (numero % divisor == 0){
              cantidad++;
            }
        cantidad = numero_de_divisores(numero, divisor + 1, cantidad);
    }

    return cantidad;
}

bool es_primo(int primo, int numero) { /* no recursiva*/


    if ( primo == 2)
        return true;
    else 
        return false;
   }

int main (int argc, char *argv[]) {

    title();
    int numero, divisor = 1, cantidad = 0, primo;

    do {
        printf ("                                                              \r");
        printf ("Dime un numero y te digo si es primo o no: ");
        scanf ("%i", &numero);
        fflush(stdout);
        printf ("\x1B[1A");
    } while (numero <= 0);
    printf ("\n");

    primo = numero_de_divisores(numero, divisor, cantidad);

    if (es_primo(primo, numero) == true){
        printf ("El numero es primo\n");
    } else
        printf ("El numero no es primo\n");
    printf ("La cantidad de divisores es %i\n", primo);

    return EXIT_SUCCESS;
}

