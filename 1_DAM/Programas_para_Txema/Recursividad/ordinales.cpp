/*
 * =====================================================================================
 *
 *       Filename:  ordinales.cpp
 *
 *    Description:  Haz un programa que pregunte un numero al usuario e imprima el
 *                  ordinal correspondiente usando una función recursiva.
 *
 *        Version:  1.0
 *        Created:  06/10/20 11:18:34
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
    system("toilet -f pagga --metal ORDINALES");
}

const char *ordinal[3][10] = {
    { "", "primero", "segundo", "tercero", "cuarto", "quinto", "sexto", "séptimo", "octavo", "noveno" },
    { "", "decimo", "vigésimo", "trigésimo", "cuatrigésimo", "quincuagésimo", "sexagésimo", "septuagésimo", "octogésimo", "nonagésimo" },
    { "", "centésimo", "bicentésimo", "tricentésimo", "cuadricentésimo", "sexgentésimo", "septingentésimo", "octigentésimo", "noningentésimo" }
};

int imprime_ordinal (int numero) {

    static int x = 0;

    if ( numero < 1 )
        return 1;
    printf (" %s", ordinal[x++][numero % 10]);
    return imprime_ordinal(numero/10);
}

int main (int argc, char *argv[]) {

    title();

    int numero;

    do {
        printf ("                                                                 \r");
        printf ("Dime un numero y te lo muestro en ordinal: ");
        scanf ("%i", &numero);
        fflush (stdout);
        printf ("\x1B[1A");
    } while (numero < 0);
    printf ("\n");

    printf ("El ordinal es \n");
    imprime_ordinal(numero);
    printf ("\n");

    return EXIT_SUCCESS;
}
