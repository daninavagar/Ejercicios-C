/*
 * =====================================================================================
 *
 *       Filename:  ejer1.cpp
 *
 *    Description:  Dado un array de enteros relleno (me da igual como aparezca este
 *                  array), se trata de imprimrlo de manera ordenada sin ordenarlo. Para
 *                  ello se generará un segundo array de puntero que ha de terminar
 *                  apuntando a todos los números del primer array en orden creciente.
 *
 *        Version:  1.0
 *        Created:  06/14/20 18:17:45
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

#define N 8

void title () {
    system("clear");
    system("toilet -f pagga --metal ORDENACIÓN");
    printf("\n\n");
}

void imprimir (int *a[N]) {
    for (int i=0; i<N; i++)
        printf ("%i", *a[i]);
    printf ("\n");
}


int main (int argc, char *argv[]) {

    title();


    int A[N] = {1,2,5,3,7,4,6,9};
    int *o[N];

    for (int i=0; i<N; i++)
        o[i] = &A[i];
    printf ("\nMuestra array sin ordenar\n");
    imprimir (o);
    for (int p=0; p<N-1; p++)
        for (int i=0; i<N-1; i++){
            if (*o[i] < *o[i+1]) {
                int *b = o[i+1];
                o[i+1] = o[i];
                o[i] = b;
            }
        }
    printf("\nMuestra el array ordenado\n");
    imprimir(o);




    return EXIT_SUCCESS;
}
