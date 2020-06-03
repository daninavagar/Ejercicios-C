#include <stdio.h>
#include <stdlib.h>
/* Haz una función que calcule el número e con n términos
						e(0)=1/0!=1
				e(1)=1/1!+1/0!=1/1!+e(0)=2
			e(2)=1/2!+1/1!+1/0!=1/2!+e(1)=2.5

e(n) = \sum_{0}^{n} \frac{1}{x!}
*/
void title () {
	system("clear");
	system("toilet -f pagga CALCULAR_E ");
}


unsigned factorial_r (unsigned numero) {
	if (numero == 0)
	{
		return 1;
	}

	return numero * factorial_r (numero -1 ); 
 
}

double e(unsigned numero){ /* COPIADO DE TXEMA, NO ENTIEDO EL RETURN "1." */
	if (numero == 0)
		{
			return 1;
		}

	return 1. / factorial_r (numero) + e (numero - 1 ); /*EL 1. DEVUELVE EL DOUBLE*/
}

int main(int argc, char *argv[])
{
	
	title ();
	unsigned N;


	printf("Dime un numero: \n");
	scanf ("%u", &N);

	printf("N --> %lf\n", e (N));
	
	return EXIT_SUCCESS;
}
