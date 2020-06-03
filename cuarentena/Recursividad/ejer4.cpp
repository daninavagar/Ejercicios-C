#include <stdio.h>
#include <stdlib.h>

/* Rehaz el ejer3 para que los imprime en orden creciente. 
Recuerda que tienes que imprimir los n-1 anteriores y luego imprimir n */
/*
int main (int argc, char *argv[]) {
	
	int num;
	
	printf ("Dime un número hasta el que quieras que te cuenta: ");
	scanf ("%i", &num);
	
	for (int i=0; i<=num-1; i++)
		printf ("%i ", i);
	printf ("%i", num);
	
	return EXIT_SUCCESS;
}
*/
void title () {
	system("clear");
	system("toilet -f pagga CUENTA_DELANTE");
}

void imprimir(int num){
	if (num < 0)
	{
		return;
	}

	imprimir (num - 1);
	printf("%i \n", num);
}


int main (int argc, char *argv[]) {

	title();

	int num;

	printf("Dime que numero quieres :");
	scanf ("%i", &num);

	while (num <= 0)
		{
		printf("Por favor introduce un numero positivo: ");
		scanf ("%i", &num);
	}

	imprimir(num);

    return EXIT_SUCCESS;
}
