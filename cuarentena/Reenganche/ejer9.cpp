#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void title () {
	system("clear");
	system("toilet -f pagga /* LO QUE TU QUIERAS*/");
}
int num;
char *texto= "HOLA TXEMA666";
char *nums = "4563435345";
int cont = 0;
void CuentaPalabras(){
	int len = strlen(texto);	
			printf ("Tiene %i palabras\n", len);
}
void CuentaNumeros(){
	for (int i = 0; i < strlen(texto); i++)
		for(int j = 0; j < strlen(nums); j++)
			if (texto[i] == nums[j])
			cont++;
	printf("Tiene %i numeros", cont);
}


int main (int argc, char *argv[]) {

	title();
	CuentaPalabras();
	CuentaNumeros();	


    return EXIT_SUCCESS;
}
