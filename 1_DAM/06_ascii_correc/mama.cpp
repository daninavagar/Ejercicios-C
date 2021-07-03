#include <stdio.h>
#include <stdlib.h>


int main (int argc, char *argv[]) {
    char carta[] = "🂡";
/*
    //char *final = carta + 3;
    char *fin;
    fin = carta +3;
    ++(*fin);
*/
    /* Notacion de matrices
     carta[3]++;
     */

    ++(*(carta + 3));


    printf(" %s\n ", carta);
    
    return EXIT_SUCCESS;
}
