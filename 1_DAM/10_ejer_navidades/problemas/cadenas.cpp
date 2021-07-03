#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAXLIN 0x100

const char * const cprog = "cadenas";
char vprog[] = "programa";

void concatena (char *dest, const char *org, int max) {
    // Avanzar destino hasta el \0
    while (*dest != '\0') dest++;

    /* VERSIONES ALTERNATIVAS
    while (*(dest++) != '\0');
    for (;*dest != '\0'; dest++);
    */

        //Copia caracter a caracter de org a dest como mucho max o hasta \0
        for (int c=0; *org!='\0' && c<max; c++, ++org, ++dest)
            *dest = *org; // copia hasta el \0
        *dest = *org; // se hace una vez mas para copiar el \0 (con la cadena)
}

void cifra (char *frase, int clave) {
    while (*(frase++) != '\0')
        *(frase++) += clave;
    /*
    for (; frase != '\0'; frase++)
        *frase += clave;
    */
}

int main (int argc, char *argv[]) {

    char linea[MAXLIN];
    strcpy (linea, cprog); // sintaxis strcpy (destino, origen) FUNCION INSEGURA
                            // copia lo que hay en cprog dewntro de la linea (en la memoria)
    strncpy (linea, cprog, MAXLIN); // hace lo mismo pero copai los caracteres que indiquemos
                                    // sintaxis strncpy (destino, origen, tamañop)
    strcat (linea, " ");
    strcat (linea, vprog); // Pone lo qye hablen en vprog a continuacion de lo que habia (sin machacar)
    strncat (linea, vprog, MAXLIN - strlen(linea)); // copia en el espacio que quede (si hay 100) y estan ocupadas 20 solo guarda 80

    concatena (linea,"Esto es un mensaje secreto", MAXLIN -strlen(linea));

    cifra (linea + strlen(linea) + 1, 3);

    printf ("%s\n", linea);
    printf ("secreto: %s\n", linea +strlen(linea) + 1);

    cifra (linea + strlen(linea) + 1, -3);
    printf ("Secreto: %s\n", linea +strlen(linea) - 1);

    return EXIT_SUCCESS;
}
