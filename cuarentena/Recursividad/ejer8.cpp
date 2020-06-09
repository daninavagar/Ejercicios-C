#include <stdio.h>
#include <stdlib.h>


/* Haz una función no recursiva "bool es_primo(int n) que apoyándose en la función recursiva "int nummero_de_divisores (int n)" diga si un número es primo o no.*/

void title (){
	system ("clear");
	system ("toilet -f pagga PRIMOS");
}



bool numeroPrimo (unsigned numero, int divisor){
	if (numero % divisor == 0 && numero != 2) /* resto entre numero y divisor es 0 y numero no es 2 devuelve falso 2*/
	{
		return false;
	} else if (divisor > numero/2)
	{
		return true;
	} else 
		return numeroPrimo(numero, divisor + 1);
}



int main(int argc, char *argv[])
{
	unsigned numero;

	title ();

	printf("Dime que numero quieres: \n");
	scanf ("%u", &numero);
	if (numeroPrimo(numero, 2))
	{
		printf("Es primo\n");
	} else
	printf("No es primo\n");


	
	return EXIT_SUCCESS;
}


























