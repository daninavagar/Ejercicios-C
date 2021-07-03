#include<stdio.h>
#include "operacion.h"

double resta(){

    double n1, n2, resul;

    printf ("Dime el numero 1 --> ");
    scanf ("%lf", &n1);
    printf ("Dime el numero 2 --> ");
    scanf ("%lf", &n2);

    resul = n1 - n2;

    return resul;
}
