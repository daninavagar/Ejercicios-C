/*
 * =====================================================================================
 *
 *       Filename:  ejer1.cpp
 *
 *    Description:  Dada dos medidas que pueden ser base y altura de un triangulo o de un
 *                  rectángulo, y teniendo dos funciones que calculan áreas:
 *                  "double area_triangulo(double, double)" y "double area_rectangulo(double
 *                  , double). Imprime el área de lo que quiera el usuario usando un puntero
 *                  que a veces apunte a "area_triangulo" y a veces a "area_rectangulo".
 *                  No uses switch
 *
 *        Version:  1.0
 *        Created:  06/10/20 12:22:04
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

void title () {
    system("clear");
    system("toilet -f pagga --metal AREAS");
}

enum TElegir {triangulo, cuadrado};
const char *nombre[] = {"triangulo", "cuadrado"};

enum TElegir Eleccion () {
    int elegir;
    printf ("\n"
                "\t1.- Triángulo\n"
                "\t2.- Rectángulo\n"
                );
    scanf ("%i", &elegir);
    elegir --;

    return (enum TElegir) elegir;
}


void pedir_datos(double *base, double *altura) {

    printf ("Dime un valor para base y la altura: ");
    scanf ("%lf", base);
    scanf ("%lf", altura);
    printf("\n");
}


double area_triangulo(double base, double altura) {

    return base * altura /2;
}

double area_rectangulo(double base, double altura) {

    return base * altura;
}
double Fail(double, double) {
    fprintf(stderr, "Elige bien pls\n");
    exit(1);
}


double (*imprimir[]) (double, double) = {&area_triangulo, &area_rectangulo, &Fail}; 


int main (int argc, char *argv[]) {

    title();
    double base, altura;
    double (*area) (double, double);

    enum TElegir elegir = Eleccion ();
    area = imprimir[elegir];

    if (elegir >= 3) {
        area = imprimir[3];
    } else{

    pedir_datos(&base, &altura);

    printf ("Area del %s = %.2lf", nombre[elegir], (*area)(base, altura));
    }

    return EXIT_SUCCESS;
}
