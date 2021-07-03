#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <string.h>

/*
 * Cogiendo la idea desarrolladad en el boceto anterior (v2)
 * vamos a hacer el bucle
 * */

void show (char **lista, int s) {
    for (int i=0;i<s;i++)
        printf ("%s\n", *(lista + i));
    printf ("\n");
}

int main (int argc, char *argv[]) {

    char **lista = NULL;
    int s = 0,    // s: summit. cima de la pila. Primera ce.da vacia
        l = 0;    // l: Numero de elementos leidos por scanf.

    do {
        lista = (char **) realloc (lista, (s+1) * sizeof (char*));
        printf ("Nombre: ");
        l = scanf ("%m[^\n]", &lista[s++]); // Ojo con no poner el espacio despues de las comillas
        __fpurge (stdin);           // sino se come el intro
        if (l)
            show (lista, s);
    } while (l != 0);

    /* Como el ultimo scanf no leyo nada vamos
     * a minorar el espacio reservado */
    lista = (char **) realloc (lista, (--s) * sizeof (char *));

    /* Ya se ha terminado de leer
     * Aqui el programa hace sus cosillas. */

    /* Liberar 2 tipos de cosas*/

    for (int i=0;i<s;i++)
        free (lista[i]);
    free (lista);

    /* Haceos el dibujito*/

    return EXIT_SUCCESS;

}
