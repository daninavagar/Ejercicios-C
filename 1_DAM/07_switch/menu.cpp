#include <stdio.h>
#include <stdlib.h>

int menu () {
    int opcion;
    system ("clear");
    system ("toilet -fpagga --gay TheShow");

    printf (
 "\n\
    MENU\n\
    ====\n\
\n\
        1.- Suma. \n\
        2.- Resta.\n\
\n\
    Tu opcion: \
"
            );
    scanf (" %i", &opcion);

    return opcion;
}

int main () {

    int op1 = 7, op2 = 5;
    int opcion = menu();

    printf ("La opcion elegida es: %i\n", opcion);

    switch (opcion) {
      case 1:
          printf (" %i + %i = %2i\n", op1, op2, op1 + op2);
          break;
      case 2:
          printf (" %i - %i = %2i\n", op1, op2, op1 - op2);
    }

    return EXIT_SUCCESS;
}
