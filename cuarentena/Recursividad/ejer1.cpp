#include <stdio.h>
#include <stdlib.h>

/* Recursvidad */
/* Confeccciona un programa que sume los n primeros números naturales*/
void title () {
	system ("clear");
	system ("toilet -fpagga SUMA");
}
unsigned suma (unsigned numero) { /* no recurisvo*/
	unsigned resul = 0;

	for (unsigned i = 1; i <= numero; ++i)
	{
		resul += i;
	}

	return resul;
}

unsigned suma_r (unsigned numero){ /* con recursividad*/
	if (numero < 1)
	{
		return 0;
	}

	return numero + suma_r (numero-1);
}


int main(int argc, char *argv[])
{
	title ();
	unsigned N;

	printf("Dime un numero: \n");
	scanf ("%u", &N);



	printf("La suma de %u los primeros numeros es %u\n", N, suma_r(N));

	return EXIT_SUCCESS;
}
