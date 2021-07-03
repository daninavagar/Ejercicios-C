#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<signal.h> // obligada para las señales

/* ps -all
 * kill e -SIGKILL <nproceso> --> mata el proceso
 * kill -s SIGURS1 <PID> llama a la señal SIGURS1
 * int main () {
 * +++++++++++++++++ alternativo------------------
 * }
 	SIGNIT ctrl c
 	SIGKILL
 	SIGCHILD
 	SIGTERM
 * */


sig_atomic_t var = 0; // int, solo puede acceder un proceso, vale con poner int tambien

void handler_sigint(int sig) {

    var++;
    printf ("No se puede usar CTRL+C.\n");
    printf ("La variable vale %i\n", var);
    
}
/*
void handler_siguser1(int sig) {
   printf ("Ha mandado la señal SIGUSR1.\n"); 
}*/

int main (int argc, char *argv[]) {

    struct sigaction sa;
    struct sigaction sa2;

    sa.sa_handler = &handler_sigint;
    // sa2.sa_handler = &handler_siguser1;

    sigaction(SIGINT, &sa, NULL); // devuelve entero a la direccion de sa
    // sigaction(SIGUSR1, &sa2, NULL);

    for (int i=0; i<100; i++) {
        printf ("HOLA BUENOS DÍAS\n\n");
        sleep(2); //u_slepp con microsegundos
    }

    return EXIT_SUCCESS;
}
