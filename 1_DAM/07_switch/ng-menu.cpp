#include <stdio.h>
#include <stdlib.h>

enum TOpcion {
    suma,
    resta,
    multiplica,
    divide,
    TOTALOPCIONES };

const char *opciones[] = {
    "Suma",
    "Resta",
    "Multiplica",
    "Divide",
    NULL
};

int menu (){
    int opcion;
    system ("clear");
    system ("toilet -fpagga --gay TheShow");

    printf (
"\n\
    MENU\n\
    =====\n\
 \n");

    for (int op=0; op<TOTALOPCIONES; op++)
    //for (int op=0; opciones[op] != NULL; op++)
        printf (" %i.- %s. \n", op + 1, opciones[op]);

    printf (" \n\
    Tu opcion: \
"

          );
    scanf (" %i", &opcion);

    return opcion -1;
}

int main () {
    int op1 = 7, op2 = 5;
    int opcion = menu ();

    printf ("%s:\n", opciones[opcion]);

    switch (opcion) {
        case suma:
            printf ( "%i + %i = %2i\n", op1, op2, op1 + op2 );
            break;
        case resta: ( "%i + %i = %2i\n", op1, op2, op1 - op2 );
            break;

        default:
            fprintf (stderr, "Tu eres tonto, macho. \n");
            return EXIT_FAILURE;
    }

    printf ("%p - %s - %c\n", opciones[0], opciones[0], *opciones[0]);

    return EXIT_SUCCESS;
}

