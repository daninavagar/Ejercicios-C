#include <stdio.h>
#include <stdlib.h>


int main (int argc, char *argv[]) {

    /*
     * int carta = 0xA1828CF0;
     * carta    += 0x0100000;
     */

    int carta = 0xA1828CF0;
    carta     += 0x1000000;


    printf("%s\n", (char *) &carta);

    return EXIT_SUCCESS;
}
