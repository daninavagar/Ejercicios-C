#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>


void lanzar(char *lc[]){

    pid_t tengo_hijo = fork();

    if (tengo_hijo == 0){
        // hijo
        // (programa, linea de comandos) --> (firefox, -p )
        // execl --> (firefox)
        // execv --> (firefox, firefox, -p, txema, NULL)
        // execp --> si no se pone la p se tiene que poner la ruta entera del programa
        execvp(lc[0], lc);
        fprintf (stderr, "Si hemos llegado hasta aqui malo.\n");
        exit(1);
    }
}

int main (int argc, char *argv[]){

    lanzar(&argv[1]);
    return EXIT_SUCCESS;
}
