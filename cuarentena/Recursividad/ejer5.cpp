#include <stdio.h>
#include <stdlib.h>

/* Imprime un array de caracteres (char frase[]) o cadena (const char *) de cáracter en cáracter*/

void title () {
	system("clear");
	system("toilet -f pagga IMPRIME_ARRAY");
}


void imprime_array (const char *letra) {
	if (*letra != '\0'){
		printf ("%c", *letra);
		imprime_array (letra +1);
	}
}


int main (int argc, const char *argv[]) {
	
	
	const char *frase[]={};
	title ();
	
	printf("Dime la frase :"); 
	scanf ("%s", frase);
	
	printf ("La frase es: \n");
	
	printf ("====================================\n"); /* NO funciona si pregunto al usuario al frase */
	
	imprime_array(*frase);
	
	printf("\n");
	
	return EXIT_SUCCESS;
}
