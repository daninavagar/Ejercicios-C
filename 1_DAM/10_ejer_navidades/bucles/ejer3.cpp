#include<stdio.h>
#include<stdlib.h>

int main (int argc, char*argv[]) {

    int numero;
    const char *nombre;

    printf("Introduce el numero de veces y el nombre que se imprima por pantalla: \n");
    scanf(" %i y %s", &numero, &*nombre);

    for (int i = 0; i < numero ; i++)

    printf(" %s\n", nombre);

    return EXIT_SUCCESS;
}




