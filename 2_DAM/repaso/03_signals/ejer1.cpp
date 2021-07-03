#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

/*
 * ps -all
 * kill e -SIGKILL <nproceso> --> mata el proceso
 * kill -s SIGUSR1 <nproceso> llama la señal SIGUSR1
 * */

#define N 100

sig_atomic_t var = 0; // variable atómica. No se puede interrumpir hasta que no se ha terminado.


void handler_sigint(int sig) {

    var++;
    printf ("No se puede usar CTRL+C.\n");
    printf ("La variable --> (%d)", var);

}
int main() {


    struct sigaction primera_señal;
    struct sigaction segunda_señal;

    primera_señal.sa_handler = &handler_sigint;

    sigaction(SIGINT, &primera_señal, NULL);
    for (int i=0; i<N; i++) {
        printf ("Buenos Dias.\n");
        sleep(2);
    }
    return EXIT_SUCCESS;
}
