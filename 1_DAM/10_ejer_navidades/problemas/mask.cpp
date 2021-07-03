#include<stdio.h>
#include<stdio_ext.h>
#include<stdlib.h>

#define COLS 3
#define R 2
#define G 1
#define B 0

void titulo () {
    system ("clear");
    system ("toilet --gay -fpagga MASCARA");
    printf ("\n\n");
}

void borrar () {
    printf ("           ");
    printf ("\x1B[10D");
}

unsigned char pedir_color(const char *nombre) {
    int buffer;
    int letra;

    printf ("\n");
    do {
        printf ("\x1B[1A");
        printf ("%s (0-255): ", nombre);
        borrar ();
        do {
            letra = getchar ();
            if (letra < '0' || letra > '9') {
                __fpurge (stdin);
                printf ("\x1B[1A");
                printf ("%s (0-255): ", nombre);
                borrar ();
            } else 
                ungetc (letra, stdin);
        } while (letra < '0' || letra > '9');

        scanf (" %u", &buffer);
        __fpurge (stdin);
    } while (buffer < 0 || buffer > 255);

    return (unsigned char) buffer;
}

void imprimir_color (const char *etiqueta, unsigned char color[COLS]) {
    printf ("%s: ", etiqueta);
    printf (" #");
    for (int col=B; col<COLS; col++)
        printf ("%2X", color[col]);
    printf ("\n");
}

int main (int argc, char *argv[]) {
    unsigned char rgb[COLS],
                  mask[COLS],
                  resultado[COLS];
     titulo ();

    /* Entrada de datos*/
    printf ("COLOR\n");
    printf("=====\n");
    rgb[R] = pedir_color ("Rojo");
    rgb[G] = pedir_color ("Verde");
    rgb[B] = pedir_color ("Azul");

    printf ("MASCARA\n");
    printf("=====\n");
    mask[R] = pedir_color ("Rojo");
    mask[G] = pedir_color ("Verde");
    mask[B] = pedir_color ("Azul");

    /* Calculos*/
    for (int col=B; col<COLS; col++)
        resultado[col] = rgb[col] ^ mask[col];

    /* Salida de datos*/
    imprimir_color("Original", rgb);
    imprimir_color("Mascara", mask);
    imprimir_color("Resultado", resultado);

    return EXIT_SUCCESS;
}


