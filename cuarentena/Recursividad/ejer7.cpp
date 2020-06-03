#include <stdio.h>
#include <stdlib.h>

/* Imprime los divisores de N*/
void title () {
	system("clear");
	system("toilet -f pagga DIVISORES");
}
void divisores (unsigned n) {

	static unsigned res = n;

	if (n > 0)
	{	if (res % n == 0)
			printf("%u\n", n);
		divisores(n-1);
	}
}

int main(int argc, char const *argv[])
{
	unsigned n;

	title ();

	printf("Introduce el valor de n: \n");
	scanf ("%u", &n);

	printf("Los divisores de %u son: \n \n", n);

	divisores(n);
	
	return EXIT_SUCCESS;
}
