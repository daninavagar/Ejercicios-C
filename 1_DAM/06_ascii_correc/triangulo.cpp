#include <stdio.h>
#include <stdlib.h>

//const char *simbolo = "*";

int main () {

    unsigned altura;
    char caracter [4];
    //saber cual es la altura;
    printf("altura y caracter: ");
    scanf(" %u %s", &altura);

    //pintar todas / cada linea;
    for (int f=0; f<altura; f++){
        //pintar todos los astericos
        for (int c=0; c<f+1; c++)
            printf("*");
        // Imprimir un salto de linea;
        printf("\n");
    }

    return EXIT_SUCCESS;
}
