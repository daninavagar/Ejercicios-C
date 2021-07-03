#include<stdio.h>
#include<stdlib.h>

int main (int argc, char *argv[]) {

    // a que distancia del principio y la posicion de la memoeria esta de la primera u de la frase.
    char frase[] = "El Sol esta muy alto en el  cielo";

    /* Metodo matricial*/
    int i;  // Declaro i fuera del bucle para poder usar
            // valor cuando acabe de dar vueltas
    for (i=0; frase[i]!='u' && frase[i] != '\0'; i++);
    // El bucle sólo avanza i: está vacío.



    // Cuando acaba el bucle puede ser porque hemos
    // econtrado la 'u' o porque hemos llegado
    // al final.

    if (frase[i] == 'u') {
        printf (
                "La u se encuentra a %i posiciones del inicio. \n"
                "En la dirección: %p\n", i, &frase[i]
                );
    }
    printf ("========================\n");

    /* Método puntero */
    char *busca = frase;
    while (*busca != 'u' && *busca != '\0')
        busca++;

    if (*busca == 'u') {
          printf (
              "la u se encuentra a %lu posiciones del inicio.\n"
              "En la direccion: %p\n", (busca - frase) / sizeof (char), &frase[i]);
    }

    return EXIT_SUCCESS;
}
