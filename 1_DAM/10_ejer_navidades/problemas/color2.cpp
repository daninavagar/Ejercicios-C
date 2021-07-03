#include<stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>

void titulo () {
    system ("clear");
    system ("toilet --gay -fpagga COLOR");
    printf("\n\n");
}

unsigned char pregunta_intensidad(const char *componente){
    unsigned int entrada;

    do {
        __fpurge(stdin);
        printf ("Intesidad de %s: ", componente);
        scanf (" %u", &entrada);
    } while (entrada > 0xFF);

    return (unsigned char) entrada;
}


int main (int argc, char *argv[]) {

    unsigned char r, g, b;
    unsigned char xr;
    titulo ();
    r = pregunta_intensidad ("rojo");
    g = pregunta_intensidad ("verde");
    b = pregunta_intensidad ("azul");

    xr = r ^ 0xFF; // 255

    printf("#%X%X%X => #%X%X%X\n", r, g, b, xr, g, b);


    return EXIT_SUCCESS;
}
