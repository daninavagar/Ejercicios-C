#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {

    int *p;

    p = (int *) malloc( 5 * sizeof (int));

    *p = 2;
    *(p+1) = 7;
    p[2] = 9;

    printf ("%i - %i - %i\n", *p, p[1], *(p+2));

    free(p);

    return EXIT_SUCCESS;
}
