#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {

    int b = 1;

    b=b++ + 5;
    /* b++ primero mira el valor de b (es 1), lo incrementa , y despues haces la operacion y la almacenas en b, por lo que el resultado es 6
     * Ó por el contrario se pone (++b) lo incrementa y luego mira el valor de b, por lo que el resultado final es 7*/ 

    printf ("b=%i\n", b);
    
    return EXIT_SUCCESS;
}
