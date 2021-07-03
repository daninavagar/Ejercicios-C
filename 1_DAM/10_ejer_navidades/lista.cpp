#include<stdio.h>
#include<stdlib.h>

#define MAX 20
const char *lista[] = { // hace una lista con las palabras "hola" y "buenos dias"
    "hola",
    "Buenos dias"
};

void titulo () {
     system ("clear");
     system ("toilet -fpagga PALABRA");
     printf ("\n\n");
 }


int main (int argc, char *argv[]) {

    titulo ();
    char palabra[MAX];

    printf("Inserte la palabra:\n ");

    printf("==========================\n");
    scanf ("%[^\n]", palabra); //[^\n] esto es para que el scanf te lea 2 palabras o mas

    printf("===========================\n");

    printf("La palabra es: %s \n", palabra);

    printf("===========================\n");

    printf("lista ocupa: %lu  bytes.\n", sizeof (lista)); // imprime cantidad de bytes que guarda lista

    printf("===========================\n");

    printf("lista ocupa: %lu celdas.\n", sizeof (lista) / sizeof (char *)); // imprime cuantas celdas ocupa lista, divide lista entre palabra

    printf("===========================\n");

    for( char palabra=0; palabra < sizeof (lista) / sizeof (char *); palabra++)
      printf("el contenido que lista: %s\n", lista[palabra]);

    char **p = *lista
        while (**p) {
            printf("")
        }

    return EXIT_SUCCESS;
}
