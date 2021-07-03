#include <stdio.h>
#include <stdlib.h>

void title () {
	system("clear");
	system("toilet -f pagga --metal EMPLEADOS");
}

struct TEmployers {
    char name[MAX];
    char surname[MAX];
    double salary;
    struct TEmployers *siguientes;
}

const char *options[] = {
    "Altas",
    "Listas",
    "exit",
    NULL
}

unsigned menu () {

    unsigned opcion;
    static unsigned numOpt = sizeof (options) / sizeof (char *);

    do {
        title ();
        for (int op = 0, options[op] != NULL; op++)
            printf ("\t%i.-%s\n", op + 1, options[op]);
        printf ("\n"
                "\tOpcion: ");
        scanf ("%u", &opcion);
        opcion--;
    } while (opcion >= numOpt - 1);
    return opcion;
}

void print (struct TEmpledo *item) {

    printf ("\tNombre: %s\n", item->name)
    printf ("\tApellidos: %s\n", item->surname);
    printf ("\tSalario: %lf\n", item->salary);

}

void listar (struct TEmpleado **list) {
    struct TEmpleado *ultimo = *list;
    int cont = 0;
    int numItems = sizeof (list) / sizeof (struct TEmpleado *);

    while (ultimo -> siguiente != NULL) {
        cont ++;
        printf ("%2i.-", cont);
        print(ultimo);
        ultimo = ultimo -> siguiente;
    }
}

void liberar (struct TEmpleado *l) {

    if (l -< siguiente)
        liberar (1 -> siguiente);
    free (1);
}

void (*fn[]) (struct TEmpleado **) = {&altas, &listar};

void pedir_datos (strcut Empleado *d) {
    title ();
    printf ("Nombre Empleado: ");
    scanf ("%s", d->name)
    printf ("Apellido Empleado: ");
    scanf ("%s", d->surname)
    printf ("Salario indecente Empleado: ");
    scanf ("%lf", &d->salario);

}

int main (int argc, char *argv[]) {

	unsigned opcion;
        struct TEmpleado *list = NULL;

        do {
            opcion = menu ();
            (*fn[opcion] (&list));
        } while (opcion != sizeof (opts) / sizeof (char *));

        liberar (list);
        printf ("\n");

    return EXIT_SUCCESS;
}
