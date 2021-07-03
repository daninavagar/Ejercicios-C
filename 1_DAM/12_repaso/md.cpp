#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {

    int *p;
    
    p = (int *) malloc (sizeof (int));

    *p = 2;

    printf ("%i\n", *p);

    free(p);

    return EXIT_SUCCESS;
}
