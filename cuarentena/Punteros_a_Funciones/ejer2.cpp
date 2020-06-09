#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void title () {
	system("clear");
	system("toilet -f pagga --metal FUNCIONES MATEMATICAS");
}

enum TOpcion {Suma, Resta, Multipliacion, Division, Funcion};
const char *nombre[] = {"Suma", "Resta", "Multiplicación", "División", "Función"};

double Sum(double op1, double op2) {
    return op1 + op2;
}


double Res(double op1, double op2) {
    return op1 - op2;
}

double Mult (double op1, double op2) {
    return op1 * op2;
}

double Div (double op1, double op2) {
    return op1 / op2;
}

double Fun (double op1, double op2) {
    return 3 * op1 + 3;

    printf ("Primer operando: ");
    scanf ("%lf", op1);

}

double F (double, double) {
    fprintf (stderr, "Pls lee despacio y escoge sabiamente una funcion matematica\n");
    exit(1);

}

double (*eleccion_func[])(double, double) = {&Sum, &Res, &Mult, &Div, &Fun, &F};
enum TOpcion menu () {

    int opcion;

    printf ("QUE OPCION QUIERES\n"
            "\n"
            "\t1.- Suma\n"
            "\t2.- Resta\n"
            "\t3.- Multiplicación\n"
            "\t4.- Division\n"
            "\t5.- Funcion --> f(x) = 3x + 3 \n"
            "\n"
            "TOpcion: ");
    scanf ("%i", &opcion);
    opcion --;

    return (enum TOpcion) opcion;
}

void preguntar_operando (double *op1, double *op2) {

    printf ("Primer operando: ");
    scanf ("%lf", op1);
    printf ("Segundo operando: ");
    scanf ("%lf", op2);
}

int main (int argc, char *argv[]) {

	title();
        double op1, op2;
        double (*eleccion) (double, double) = &F;

        enum TOpcion opcion = menu ();
        eleccion = eleccion_func[opcion];

        preguntar_operando (&op1, &op2);

        printf ("Has elegido %s y su resultado es %.2lf \n", nombre[opcion],(*eleccion)(op1, op2));
        printf ("YA HEMOS ACABADO, BYE!\n");

    return EXIT_SUCCESS;
}
