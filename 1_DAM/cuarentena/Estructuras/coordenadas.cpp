#include <stdio.h>
#include <stdlib.h>

void title () {
	system("clear");
	system("toilet -f pagga --metal COORDENADAS");
}

struct TCoordenada{

    double x, y;
}

struct Preguntar(double x, double y) {
    
    printf ("dime el valor de la variable x");
    scanf ("%lf", &x);

    printf ("dime el valor de la variable y");
    scanf ("%lf", &y);
}

int main (int argc, char *argv[]) {

	title();

    return EXIT_SUCCESS;
}
