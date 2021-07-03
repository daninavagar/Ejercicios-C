#include<stdio.h>
#include<stdlib.h>

//declarar un array que tenga 20 unsigned char

#define LONG 20

int main (int argc, char *argv[]) {

    unsigned char l[LONG];

    for ( int i=0; i<LONG; i++)
        l[i] = (i+1)*(i+1);

    printf ("======================\n");

    for ( int i=0; i<LONG; i++)
        printf("%i\n", l[i]);

    return EXIT_SUCCESS;
}
