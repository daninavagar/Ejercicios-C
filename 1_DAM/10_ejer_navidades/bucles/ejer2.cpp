#include<stdio.h>
#include<stdlib.h>

int main () {

    int numero;

    printf("Introduce cuantas veces quieres que salga tu nombre por pantalla: \n");
    scanf("%i", &numero);

    for (int i = 1; i <= numero; i++)
        printf(" dani\n");

    return EXIT_SUCCESS;
}
