#include<stdio.h>
#include<stdlib.h>

int main () {

    char *frase = NULL;
    char letra = 0;
    int leidos = 0;

    printf ("Nombre: ");
    while ( (letra = (char) getchar ()) != '\n') {
      frase = (char *) realloc (frase, ++leidos * sizeof (char));
      *(frase + leidos - 1) = letra;
    }
    frase = (char *) realloc (frase, ++leidos * sizeof(char));
    *(frase + leidos - 1 )= '\0';

    printf ("Hola, %s\n", frase);

    free(frase);
    return EXIT_SUCCESS;
}
