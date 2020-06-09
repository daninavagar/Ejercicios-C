#include<stdio.h>
#include<stdlib.h>

int main (int argc, char *argv[]) {
    const char *texto[] = {"Windows Mola","Linux no mola" };
    int total = 0;

    int longitud = sizeof (texto) / sizeof (char *);

    for (int i = 0; i < longitud; i++)
        printf ("%s\n", texto[i]);

    return EXIT_SUCCESS;
}
