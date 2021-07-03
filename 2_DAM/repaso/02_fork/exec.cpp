#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>



void lanzar (char *lc[]){

    pid_t child = fork();

    if (child){

        execvp(lc[0], lc);
        fprintf (stderr, "Si hemos llegado hasta aquí, malo.\n");
        exit(1);
    }
}
int main(int argc, char* argv[]){


    lanzar(&argv[1]);
    return EXIT_SUCCESS;
}
