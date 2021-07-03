#include <stdio.h>
#include <stdlib.h>

int titulo () {
    system("clear");
    system("toilet -f pagga --gay BINARIO");

}

int main (int argc, char *argv[]) {
    char *nombre;
    unsigned numero, binario = 0;

    // system ("clear");
    // system ("toilet -f pagga BINARIO");


      // Preguntar el nombre de usuario
      // Le voy a saludar atentamente

    titulo ();

    printf ("\n\n");
    printf ("Amadísimo usuario, ¿puedo conocer su nombre?\n");
    printf ("Nombre: ");
    scanf (" %ms", &nombre);

    printf ("%s espero que estés pasando un burn día.\n", nombre);
    free (nombre);

    printf ("Te voy a pasar un número a binario a ver si acierto.\n");
    printf ("Número: ");
    // Le pregunto un numero
    scanf ("  %u", &numero);

    // Y voy a desguazar el numero
    // por la derecha

    for (int pot=1 ; numero>0; numero>>=1, pot*=10)
        binario += pot * (numero % 2);

    printf ("%i", binario);
    printf ("\n");

    return EXIT_SUCCESS;
}
