#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {

    int d, y;
    int rv;

    printf ("dd/mm/yyyy: ");
    rv = scanf (" %i/%*i*%*i[/-]%i", &d, &y);

    printf ("rv : %i\n", rv);


    return EXIT_SUCCESS;
}
