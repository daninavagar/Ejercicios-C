#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    char cadena [] = "Linux no mola";
    char aux_cadena[strlen(cadena)];
    int flag = 0;
    for (int i = strlen(cadena) -1; i >= 0; i--) {
        flag = strlen(cadena) - i - 1;
        aux_cadena[flag] = cadena[i];
    }

    printf ("El texto normal es: %s\n", cadena);
    printf("El texto invertido es: %s\n", aux_cadena);

    return 0;
}
