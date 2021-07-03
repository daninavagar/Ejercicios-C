/*
 * =====================================================================================
 *
 *       Filename:  ejer2.cpp
 *
 *    Description:  Dada una lista de palabras, ordenarla usando strcmp.
 *
 *        Version:  1.0
 *        Created:  06/15/20 13:28:14
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
#include <string.h>


void title () {
    system("clear");
    system("toilet -f pagga --metal O.PALABRAS");
    printf ("\n\n");
}

const char *lista[] = {
	"Windows",
	"es",
	"Mejor",
	"que",
	"linux",
	NULL
};
void imprimir (const char *a[]) {
    for (int i=0; lista[i]!=NULL ; i++)
        printf ("%s ", lista[i]);
    printf ("\n");
}


int main (int argc, char *argv[]) {

    title();

    int menor;


    imprimir (lista);
    for (int p=0; lista[p+1]!=NULL; p++){
    	menor = p;
        for (int i=p+1; lista[i]!=NULL ; i++)
            if (strcasecmp(lista[i] , lista[menor]) < 0 )
            	menor = i;
            if (menor > p)
            {
            	const char *aux = lista[p];
            	lista[p] = lista[menor];
            	lista[menor] = aux;

            }
    }
        
    printf("\nMuestra el array ordenado\n");

    imprimir(lista);

    return EXIT_SUCCESS;
  }