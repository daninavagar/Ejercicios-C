#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

/*
 * Predice la salida del siguiente programa.
 * */


void forkexample(){

    if (fork() == 0)
        printf ("Hello from Child!\n");
    else
        printf ("Hello from Parent!\n");
}
int main (){

  
    forkexample();
    return 0;
}

/*
 * Ejecuta primero el proceso padre, osea el else y despues y el proceso hijo.
 * */
