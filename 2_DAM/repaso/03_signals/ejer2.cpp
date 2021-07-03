#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/wait.h>
#include <unistd.h>


/*
 * Programa con señales de.
 * 1- señal SIGUSR1, mensaje de has recibido señal SIGUSR1
 * 2- señal SIGUSR2, mensaje de has recibido señal SIGUSR2
 * 3- señal SIGTERM muestre el mensaje Fin de ejecucion y termine su ejecucion.
 * 4. señal SIGINT, la ignore.
 * */

#define N 100

void title() {

    system("clear");
    system("toilet -f pagga --gay SEÑALES");
    printf ("\n");
}

void handler_sigusr1 (int sig) {

    printf (" Has recibido la señal SIGUSR1.\n");
}

void handler_sigusr2 (int sig) {

    printf (" Has recibido la señal SIGUSR2.\n");
}

void handler_sigterm(int sig) {

    printf ("\n. Fin de ejecución.\n");
    exit(1);
}

void handler_sigint(int sig) {

    printf ("No puede usar Ctrl+c, crack.\n");
    signal(SIGINT, SIG_IGN);
}

int main (int argc, char* argv[]) {

    struct sigaction primera;
    struct sigaction segunda;
    struct sigaction tercer;
    struct sigaction cuarta;


    pid_t process_id = getpid();
    title();


    primera.sa_handler = &handler_sigusr1;
    segunda.sa_handler = &handler_sigusr2;
    tercer.sa_handler = &handler_sigterm;
    cuarta.sa_handler = &handler_sigint;

    sigaction(SIGUSR1, &primera, NULL);
    kill(process_id, SIGUSR1);
    sigaction(SIGUSR2, &segunda, NULL);
    sigaction(SIGTERM, &tercer, NULL);
    sigaction(SIGINT, &cuarta, NULL);

    for (int i=0; i<N; i++) {
        printf ("Windows >>>> Linux.\n");
        sleep(3);
    }

    return EXIT_SUCCESS;
}
