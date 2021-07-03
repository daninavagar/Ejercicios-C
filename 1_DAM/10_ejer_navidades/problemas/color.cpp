#include<stdio.h>
#include<stdlib.h>

int main (int argc, char *argv[]) {

	unsigned char r, g, b;
	unsigned int entrada;
	unsigned char xr;


	printf ("Intesidasd de rojo: ");
	scanf(" %i", &entrada);
	r = (unsigned char) entrada;


	printf ("Intesidasd de verde: ");
	scanf(" %i", &entrada);
	g = (unsigned char) entrada;


	printf ("Intesidasd de azul: ");
	scanf(" %i", &entrada);
	b = (unsigned char) entrada;

	xr = r ^ 0xFF; // 255

	printf("#%X%X%X => #%X%X%X\n", r, g, b, xr, g, b);


	return EXIT_SUCCESS;
}
