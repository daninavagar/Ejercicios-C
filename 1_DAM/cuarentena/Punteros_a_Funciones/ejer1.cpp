#include <stdio.h>
#include <stdlib.h>

void title () {
	system("clear");
	system("toilet -f pagga AREAS");
}
enum TOpcion {triangulo, cuadrado};
const char *nombre[] = {"triangulo", "cuadrado"};

double tri (double base, double altura) {return base * altura / 2;}
double cua (double base, double altura) {return base * altura;}
double fail (double, double) {
	fprintf(stderr, "No se que figura usar\n");
	exit(1);
}


double (*area_disp[]) (double, double) = {&tri, &cua, &fail};

enum TOpcion menu () {

	int opcion;

	title ();
	printf(	"\n"
			"\t1.- Triángulo\n"
			"\t2.- Cuadrado\n"
			"\n"
			"tOpcion: ");
	scanf ("%i", &opcion);
	opcion --;

	return (enum TOpcion) opcion;
}

void preguntar_dim (double *base, double *altura) {
	printf("Base: ");
	scanf ("%lf", base);
	printf("Altura: ");
	scanf ("%lf", altura);
}

int main (int argc, char *argv[]) {

	double base, altura;

	double (*area) (double, double) = &fail;

	enum TOpcion opcion = menu ();
	area = area_disp[opcion];

	preguntar_dim (&base, &altura);

	printf("Area del %s = %.2lf\n", nombre[opcion], (*area)(base, altura));

    return EXIT_SUCCESS;
}
