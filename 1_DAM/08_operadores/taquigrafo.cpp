#include <stdio.h>
#include <stdlib.h>

#define P(...) printf ( "MACRO:" __VA_ARGS__);

int main (int argc, char *argv[]) {

    int b = 37;

    b %= 5;
    P("%%: %i\n", b);

    b <<= 2;
    P("<<: %i\n", b);

    return EXIT_SUCCESS;
}
