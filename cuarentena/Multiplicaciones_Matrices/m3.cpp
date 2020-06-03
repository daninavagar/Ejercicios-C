#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// #include "ansi.h"

#define N 3

void title () {
	system ("clear");
	system ("toilet -f pagga MATRICES");
	printf ("\n");
	printf("Multiplicacion de Matrices\n");
	printf("\n\n");
}

void pedir_datos (double M[N][N], const char *label) {
	title ();
	printf ("Introduce los datos de la Matriz %s\n", label);
	printf ("\n");
	
	for (int f=0; f<N; f++) {
		for (int c=0; c<N; c++) {
			printf ("\t\t\t");
			for (int tab=0; tab<c; tab++)
				printf ("\t");
			scanf ("%lf", &M[f][c]);
			// GO_UP(1);
		}
		
		printf ("\n");
	}
}

void mostrar (double M[N][N], const char *label) {
	printf ("Matriz %s\n", label);
	printf ("\n");
	for (int f=0; f<N; f++) {
		printf("\n\n");
		for (int c=0; c<N; c++)
			printf("9.2lf", M[f][c]);
		printf("\n");
	}
}

int main (int argc, char *argv[]) {

	double A[N][N], B[N][N], C[N][N];

	bzero (C, sizeof(C)); /* Poner todos a 0*/
	pedir_datos (A,"A");
	pedir_datos (B,"B");

	/* Para calcular la fila i y j de c, sabemos que cij = aik*bjk contrayendo k en una acumulacion */
	for (int i=0; i<N; i++)
		for (int j=0; j<N; j++)
			for (int k=0; k<N; k++)
				C[i][j] += A[i][k] * B[k][j];

	title ();
	mostrar (A, "A");
	mostrar (B, "B");
	mostrar (C, "C");
	printf ("\n");

	return EXIT_SUCCESS;
}




