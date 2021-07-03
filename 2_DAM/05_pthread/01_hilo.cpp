#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
#include<sys/stat.h>
#include<fcntl.h>


/*
 * Crear un hilo abrir, cierra, que escribe x lineas en un archivo de texto
 * N lineas se pasa por argumento en la consola
 * */

/*
void *thread_routine(void *arg) {

    int n_lineas = *((int*)arg);
    printf ("El hilo comineza a ejecutarse... \n");
    int fd;
    char buf[] = "Nueva linea \n";

    for (int i=0; i<n_lineas;i++) {
        fd = open("/home/dnavarro/work/servicios_y_procesos/hola.txt", O_WRONLY|O_APPEND);
        write(fd, buf, sizeof(buf)-1);
        close(fd);
    }
}
*/

void *hijo_guay(void *arg) {

    int numero = *( (int*) arg);

    printf ("El numero es %i\n", numero);
}

int main (int argc, char *argv[]) {


    pthread_t thread_1;
    int value = atoi(argv[1]);

/*
    if (0 !=  pthread_create(&thread_1, NULL, thread_routine, &value) ) {
        return -1;
    }*/

    pthread_create(&thread_1, NULL, hijo_guay, &value);
    // 4 ARGUMENTOS.  1) Puntero al identificador   2) Atributos del Hilo, default NULL   3) rutina de ejecucion  4) Argumentos de entrada de la rutina
    // SI HILO SE EJECUTA BIEN DEVUELVE UN 0.
    

    pthread_join(thread_1, NULL);


    return EXIT_SUCCESS;
}
