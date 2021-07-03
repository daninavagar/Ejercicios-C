#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char *argv[]) {

    char **lista = NULL;
    int s = 0;

    /* Repetir en un bucle */

    lista = (char **) realloc (lista, (s+1) * sizeof (char *));
    printf ("Nombre: ");
    scanf (" %mc", &lista[s++]);

    /* Liberar 2 tipos de cosas */

    return EXIT_SUCCESS;
}
