#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

/*
 * Predice la salida del siguiente programa.
 * */


void forkexample(){

    int id = fork();
    int x = 1;
    if (id == 0) {
        sleep(5);
        printf ("Child has x = %d and pid --> %d.\n", ++x, getpid());
    }
    else
    {
        wait(NULL);
        printf ("Parent has x = %d and pid --> %d.\n", --x, getpid());
    }
}
int main (){

  
    forkexample();
    return 0;
}

/*
 * Ejecuta primero el proceso padre, osea el else y despues y el proceso hijo.
 * */
