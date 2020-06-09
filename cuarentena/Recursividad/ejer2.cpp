#include <stdio.h>
#include <stdlib.h>

/* Partiendo del ejer1 confecciona un programa que haga el factorial de un número */
void title () {
	system ("clear");
	system ("toilet -fpagga SUMA");
}
unsigned factorial_r (unsigned numero) {
	if (numero <= 0)
	{
		return 1;
	}

	return numero * factorial_r (numero-1); 

}

int main(int argc, char *argv[])
{
	
	title ();
	unsigned N;


	printf("Dime un numero: \n");
	scanf ("%u", &N);



	printf("La suma de %u los primeros numeros es %u\n", N, factorial_r(N));
	
	return EXIT_SUCCESS;
}
