#include <stdio.h>
#include <stdlib.h>



int main (int argc, char *argv[]) {
    unsigned altura;
    const char *simbolo;

    // Saber cuál es la altura;
    printf ("Introduce el numero y tipo de signos que tendra el cuadrado (5 y -): ");
    scanf (" %u y %s", &altura, &*simbolo);

    // Pintar todas / cada linea;
    for (int f=0; f<altura; f++) {
       // Pintar todos / cada simbolo;
       for (int c=0; c<altura; c++)
           if (f==0 || c==0 ||
               f == altura - 1 || c == altura - 1)
               printf ("%s", *simbolo);
           else
               printf (" ");
       // Imprimir un salto de linea;
       printf ("\n");
    }

    return EXIT_SUCCESS;
}

