#include <stdio.h>
#include <stdlib.h>

const char *simbolo = "*";

int main ( int argc, char *argv[]) {

    unsigned altura;
    
    //saber cual es la altura;
    printf("altura: ");
    scanf(" %u", &altura);

    //pintar todas / cada linea;
    for (int f=0; f<altura; f++) {
        //pintar todos los astericos
        for (int c=0; c<altura; c++)
            if (f==0 || c==0 ||
                 f == altura - 1 || c == altura - 1)
            printf(" %s", simbolo);
            else
                printf (" ");
        // Imprimir un salto de linea;
        printf("\n");
    }

    return EXIT_SUCCESS;
}
