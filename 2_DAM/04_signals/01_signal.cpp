#include<stdio.h>
#include<stdlib.h>
#include<signal.h>
#include<unistd.h>



void NoCtrlC(int sig) {

    printf ("Macho no puedes usar Ctrl+c, buscate la vida crack.\n");
}

int main (int argc, char *argv[]){



    struct sigaction primero;
    struct sigaction segundo;

    primero.sa_handler = &NoCtrlC; // SEÑAL SIGINT

    sigaction(SIGINT, &primero, NULL);


    for (int i=0; i<10; i++){
        printf ("No voy a suspender\n");
        sleep(4);
    }
    return EXIT_SUCCESS;
}
