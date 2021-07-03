#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
/*
 *  Programa que recibe por argumneto dos números, y a partir de ellos devuelve
 *  la serie fibonnaci, imprimiendo cada número un proceso diferente.
 * */

#define N 100

int spawn(int a, int b){

    if (a > N)
        return 0;

    pid_t child;
    int child_status;

    child = fork();

    if (child == 0) {
        printf (" %i (PID: %d)\n", a, getpid());
        a += b;
        spawn(b, a);
    }

    wait (&child_status);

    return 0;
}
int main (int argc, char *argv[]) {

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    spawn(a, b);

    printf ("\n");
    return EXIT_SUCCESS;
}
