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

int main (int argc, char *argv[]) {

    title();
    double x;
    int opcion;

    do {
        printf ("                                              \r");
        printf ("Dime la opcion que quieres: ");
        scanf ("%i", &opcion);
        fflush (stdout);
        printf ("\x1B[1A");
    } while (opcion < 0);
    printf ("\n");

    double (*func[]) (double) = { &Funcion1 };
//    printf ("")
    switch (opcion) {
        case 1:
            PedirDatos(&x);
            Funcion1(x);
            printf ("\tEl resultado: %.2lf\n", func[opcion - 1](x));
            break;
        default:
            printf ("Porfa, numeros del 1 al 3");


    }

    return EXIT_SUCCESS;
}
