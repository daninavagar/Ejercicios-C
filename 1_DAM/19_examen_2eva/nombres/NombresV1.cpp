#include <stdio.h>
#include <stdlib.h>

const char *lista[] = {
    "Jose",
    "Manolo",
    "Raul",
    NULL
}; // define una lista de nombres. puntero a char

int main (int argc, char *argv[]) {

    const char **actual = lista; // puntero que hace referencia a otro puntero que a su vez hace referncia a otro puntero. (los asteriscos los dicen)

    printf ("%c\n", **actual); // imprime solo el primer caracter. 2 astericos. SE USA "%c"
    printf ("%s\n", *actual); // imprime todo. Solo un astersico SE USA "%s"


    while (*actual != NULL)
       printf ("\v\t%s\n", *(actual++));

    printf ("\n\n");


    //  for (const char **actual = lista;
    //        *actual != NULL; actual++ )
    //    printf ("\t%s\n", *actual);

    //  printf("\n\n");

    //  for (int i=0; lista[i]; i++)
    //    printf ("\t%s\n", lista[i]);
    //  printf ("\n\n");


    return EXIT_SUCCESS;
}
