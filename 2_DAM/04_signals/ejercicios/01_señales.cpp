#include<stdio.h>
#include<stdlib.h>
#include<signal.h>
#include<unistd.h>

/*
 * Realice un programa en C que, antes las siguientes señales, responda de la siguiente manera:
 *
 * Al recibir una señal SIGUSR1 muestre el mensaje "He recibido la señal SIGUSR1"
 * Al recibir una señal SIGUSR2 muestre el mensaje "He recibido la señal SIGUSR2"
 * Al recibir una señal SIGTERM muestre el mensaje "Fin de ejecucion y termine su ejecución"
 * Al recibir una señal SIGINT, la ignore
 *
 * */


void title(){

    system("clear");
    system("toilet -f pagga --metal EJERCICIO 1");
    printf ("\n\n");
}

void handler_siguser1(int sig) {

    printf ("\n\n\t Has mandado la señal SIGUSR1\n");
}

void handler_siguser2(int sig) {

    printf ("\n\n\t\t Has mandado la señal SIGUSR2\n");
}


void handler_sigterm(int sig) {

    printf ("\n\t Fin de ejecución.\n");
    exit(1);
}

void handler_sigint(int sig) {

    printf ("No puedes usar Ctrl+c, crack.\n");
    signal(SIGINT, SIG_IGN);
}

int main(){


    struct sigaction signal1; // SIGUSR1
    struct sigaction signal2; // SIGUSR2
    struct sigaction signal3; // SIGTERM
    struct sigaction signal4; // SIGINT
    title();

    signal1.sa_handler = &handler_siguser1;
    signal2.sa_handler = &handler_siguser2;
    signal3.sa_handler = &handler_sigterm;
    signal4.sa_handler = &handler_sigint;



    sigaction(SIGUSR1, &signal1, NULL);
    sigaction(SIGUSR2, &signal2, NULL);
    sigaction(SIGTERM, &signal3, NULL);
    sigaction(SIGINT, &signal4, NULL);

    for (int i=0; i<50; i++) {
        printf ("Windows es mejor que Linux\n");
        sleep(5);
    }
    return EXIT_SUCCESS;
}
