#include <stdio.h>
#include <stdlib.h>

void title () {
	system("clear");
	system("toilet -f pagga --metal POLINOMIOS");
}

double preguntar_num(double *x) {

    printf ("Introduce un valor para x :\n");
    scanf ("%lf", x);
}

double funcion (double x, double *pol, double grado) {

    double resul = 0;
    double potencia = 1;
    for (int i = 0; i < grado; i++, potencia ++, potencia *= x)
        resul += pol[i] * potencia;

    return resul;
}



int main (int argc, char *argv[]) {

    double pol[] = {-3, 0 ,4 ,3};
    double grado = 3;
    double x;

    title();

    preguntar_num (&x);

    printf ("FINAL \t--> [%2lf]\n", funcion(x, pol, grado));


    return EXIT_SUCCESS;
}
