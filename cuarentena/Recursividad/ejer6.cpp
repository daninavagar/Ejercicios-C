#include <stdio.h>
#include <stdlib.h>

/* Imprime un array de caracteres (char frase[]) o cadena (const char *) de c�racter en c�racter en orden inverso. Una buena frase ser�a: "dabale un arroz a la zorra el abad" porque es un pal�ndromo*/
void title () {
	system("clear");
	system("toilet -f pagga IMPRIME_ARRAY_REVES");
}
void imprime_array (const char *letra) {
	if (*letra != '\0'){
		imprime_array (letra +1);
		printf ("%c", *letra);
	}
}


int main (int argc, const char *argv[]) {
	
	
	const char *frase[]={"Hola txema, Windows siempre ser� mejor que linux\n"};

	title ();
	
	printf ("La frase es: \n");
		printf ("%s", frase[0]);
	
	printf ("\n============================================================================\n");
	
	imprime_array(*frase);
	
	printf("\n");
	return EXIT_SUCCESS;
}
