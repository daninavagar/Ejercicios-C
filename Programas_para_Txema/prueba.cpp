#include <stdio.h>
#include <stdlib.h>
#include <math.h>


enum TOpcion {primeraf, casa, FTriangulo, FCuadrado};
const char *nombre[] = {"F1", "F2", "FTriangulo", "FCuadrado"};

double Funcion1 (double x, double) {
    return 2*x * 5;
}

double Funcion2 (double x, double) {
    return 5*pow(x,2) + 3*x -2;
}

double Triangulo(double x , double y) {
    return x * y / 2;
}

double Cuadrado(double x , double y) {
    return x * y;
}


double (*victor[])(double, double) = {&Funcion1, &Funcion2, &Triangulo, &Cuadrado};
enum TOpcion Menu () {
	int opcion;
    do {

	printf("ELIGE UNA DE LAS OPCIONES\n");
		    printf ( 	"\tPrimera funcion 		1 --> 2x*5\n"
				        "\tSegunda funcion   		2 --> 5x² + 3x -2\n"
				        "\tTercera funcion 		3 --> Area del Triangulo\n"
				        "\tCuarta funcion		4 --> Area del Cuadrado\n"
            			"Opcion : "
            			"\n\n"
            		);
            scanf ("%i", &opcion);
    } while (opcion >= 5);
    opcion --;
    return (enum TOpcion) opcion;
}


void Pedir2Datos (double *x, double *y) {
    printf("Dime valor para la x: ");
    scanf ("%lf", x);
    printf("Dime valor para la y: ");
    scanf ("%lf", y);
}

void Pedir1Datos(double *x, double *y) {
    printf ("Dime la x:" );
    scanf ("%lf", x);
}

int main(int argc, char const *argv[])
{
    /* code */
    system ("clear");
    double x, y;
    double (*area) (double, double);

    enum TOpcion opcion = Menu();
    area = victor[opcion];

    if (opcion == 0 || opcion == 1){
        Pedir1Datos(&x, &y);
    } else 
        Pedir2Datos(&x, &y);
    printf ("El resultado es %.2lf\n", (*area)(x, y));
    return EXIT_SUCCESS;
}