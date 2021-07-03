#include<stdio.h>
#include"operaciones.h"

double multi(){
    double resul;
    int size;

    printf ("Size of the array: ");
    scanf ("%d", &size);
    double values[size];

    printf ("\nNow enter the numbers what you want\n");
    for (int x=0; x<size; x++){
        printf ("Number [%d]: ", (x+1));
        scanf ("%lf", &values[x]);
    }

    for (int i=0; i<size; i++){
        resul *= values[i];
    }
    return resul;
}
