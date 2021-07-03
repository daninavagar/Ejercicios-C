#include <stdio.h>
#include <stdlib.h>

#ifndef NUM 
#define NUM 3
#endif

int main (int argc, char *argv[]) {
    char resultado = NUM  % 2 == 0 ? 'p' : 'i';

    printf ("%i => %c\n", NUM, resultado);

    return EXIT_SUCCESS;
}
