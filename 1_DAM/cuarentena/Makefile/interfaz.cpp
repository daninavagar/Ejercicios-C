#include <stdio.h>
#include <stdlib.h>


#include "general.h"


static const char *opciones[] = {
    "Altas",

    "Salir",
    NULL
};

void title () {
    system ("clear");
    system ("toilet -fpagga --gay 'GESTION DE USUARIOS'");
    printf ("\n\n");
}

unsigned menu () {
    unsigned opcion;
    static unsigned n_opciones = sizeof(opciones) / sizeof (char *);
    printf ("----------> %i\n", n_opciones);

    do {
        title ();
        printf ("Menu\n");
        printf ("====\n");
        printf ("\n");

        for (int op=0; opciones[op] != NULL; op++)
            printf ("\t%i.- %s\n", op + 1, opciones[op]);
        printf ("\n");
        printf ("\tOpcion: ");
        scanf (" %u", &opcion);
        opcion--;
    } while (opcion >= n_opciones - 1);

    return opcion;
}

void datos_empleado (struct TEmpleado *d) {
    title ();
    printf ("Nombre: ");
    scanf (" %s", d->nombre);
    printf ("Apellidos: ");
    scanf (" %s", d->apellidos);
    printf ("Salario: ");
    scanf (" %lf", &d->salario);
}
