#include <stdio.h>
#include <stdlib.h>

#include "general.h"
#include "interfaz.h"


void liberar(struct TEmpleado *l){

    if (!l)
        return;

    if (l->siguiente)
        liberar (l->siguiente);

    free (l);
}



void altas (struct TEmpleado **inicio) {
    struct TEmpleado *ultimo = *inicio;
    struct TEmpleado *nuevo = (struct TEmpleado *) malloc (sizeof (struct TEmpleado));
    datos_empleado (nuevo);
    nuevo->siguiente = NULL;

    if (!ultimo){
        *inicio = nuevo;
        return;
    }

    while (ultimo->siguiente != NULL)
        ultimo = ultimo->siguiente;
    ultimo->siguiente = nuevo;

    /*
    l => Dir 1º
    l->siguiente => Dir 2º
    l->siguiente->siguiente => Dir 3º
    */
}

void salir (struct TEmpleado **inicio) {
    liberar (*inicio);
    exit (0);
}

void (*fn[]) (struct TEmpleado **inicio) = { &altas, &salir };

int main (int argc, char *argv[]) {
    struct TEmpleado *l = NULL;
    unsigned opcion;

    while (1){
        opcion = menu ();
        (*fn[opcion]) (&l);
    }

    liberar(l);

    return EXIT_SUCCESS;
}



