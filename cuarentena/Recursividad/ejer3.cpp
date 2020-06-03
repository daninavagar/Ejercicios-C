#include <stdio.h>
#include <stdlib.h>

/* Confecciona un programa que imprima todos los números naturales desde n hasta 1 (ó 0 me es indiferente) en orden decreciente. Recuerda que tienes que imprimir n y luego imprimir los n-1 anteriores */
void title() {
	system ("clear");
	system ("toilet -fpagga CUENTA_ATRAS");
}
void imprimir(int num){
	if (num < 0)
	{
		return;
	}

	// return num + numero (num - 1);
	printf("%i \n", num);
	imprimir (num - 1);
}



int main (int argc, char * argv[]) {
	
	int num;
	title ();
	printf ("Dime un número para iniciar la cuentra atras: ");
	scanf ("%i", &num);
	
	while ( num <= 0) {
		printf ("Por favor dime un número positivo: ");
		scanf ("%i", &num);
	}
	imprimir (num);
	
	// printf("La cuenta atras de %i son los numeros %i\n", num, numero (num) );
	
	return EXIT_SUCCESS;
}
