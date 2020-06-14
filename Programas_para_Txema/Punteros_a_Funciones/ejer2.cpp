/*
 * =====================================================================================
 *
 *       Filename:  ejer2.cpp
 *
 *    Description:  Teniendo varias funciones matemáticas, pregúntale al usuario qué 
 *    función quiere usar qué x, y calcula el valor de la función en esa x.
 *
 *        Version:  1.0
 *        Created:  06/14/20 13:15:01
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Daniel Navarro Garcia (), daninavagar@gmail.com
 *   Organization:  Salesianos Dosa DAM
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void title () {
    system("clear");
    system("toilet -f pagga --metal FUNCIONES");
}

void PedirDatos(double *x){

    printf ("Dime valor para la x: ");
    scanf ("%lf", x); 
}

double Funcion1(double x){
    return 2*x *5;
}

double Funcion2(double x){
    return 5*pow(x,2) + 3*x -2;
}

int main (int argc, char *argv[]) {

    title();
    printf("ELIGE UNA DE LAS OPCIONES\n");
    printf ( "Primera Opcion         1 --> 2x*5\n"
            "Segunda Opcion         2 --> 5x² + 3x -2\n"
            "Tercera Opcion         3 --> SALIR\n"
            "\n\n"
    );
    double x;
    int opcion;
    bool exit = false;
    do {
            printf ("Opcion : ");
            scanf ("%i", &opcion);
            double (*func[]) (double) = { &Funcion1, &Funcion2 };
            switch (opcion) {
                case 1:
                    PedirDatos(&x);
                    Funcion1(x);
                    printf ("\tEl resultado: %.2lf\n", func[opcion - 1](x));
                    printf ("\n\n");
                    break;
                case 2:
                    PedirDatos(&x);
                    Funcion2(x);
                    printf("\tEl resultado: %.2lf\n", func[opcion - 1](x));
                    printf ("\n\n");
                    break;
                case 3:
                    printf("\nGRACIAS POR VENIR\n");
                    exit = true;
                    break;
                }
            } while (!exit);

    return EXIT_SUCCESS;
}
