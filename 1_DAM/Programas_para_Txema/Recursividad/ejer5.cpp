/*
 * =====================================================================================
 *
 *       Filename:  ejer5.cpp
 *
 *    Description:  Imprime un array de caracteres (const char *frase[]) o cadena (const char *)
 *                  de carácter en carácter.
 *
 *        Version:  1.0
 *        Created:  06/08/20 17:33:57
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

#define T 0x100
void title () {
    system("clear");
    system("toilet -f pagga --metal IMPRIME ARRAY");
}

void Pedir_Datos(const char *frase) {
    printf ("Dime la frase: \n");
    scanf ("%s", frase);
}

void imprimir_array(const char *letra){

    if (*letra != '\0'){
        printf ("%c", *letra);
        imprimir_array(letra + 1);
    }
}


int main (int argc, char *argv[]) {

    title();
    const char *frase;

    Pedir_Datos(frase);

    imprimir_array(frase);
    printf ("\n");

    return EXIT_SUCCESS;
}
