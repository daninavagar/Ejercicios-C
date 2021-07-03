#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>


pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

#define N 50
int i=0;
int num;

void* suma1(void *number) {


    int total =  *( (int *) number );
    while (i<N) {
        pthread_mutex_lock(&mutex);
        printf ("Le sumo 3.\n");
        num += 3;
        printf ("Numero es: %d\n", num);
        i++;
        pthread_mutex_unlock(&mutex);
        sleep(5);
    }

    return NULL;
}



void* suma2(void *number) {


    int total =  *( (int *) number );
    while (i<N) {
        pthread_mutex_lock(&mutex);
        printf ("Le quito 1.\n");
        num -= 1;
        printf ("Numero es: %d\n", num);
        i++;
        pthread_mutex_unlock(&mutex);
        sleep(5);
    }

    return NULL;
}
int main (int argc, char *argv[]) {

    pthread_t hilos[2];

    printf ("introduce numero.\n ");
    scanf ("%d", &num);

    if (0 != pthread_create(&hilos[0], NULL, &suma1, (void *) &num))
            fprintf (stderr, "Primer Hilo no creado.\n");
    if (0 != pthread_create(&hilos[0], NULL, &suma2, (void *) &num))
            fprintf (stderr, "Segundo Hilo no creado.\n");

    for (int i=0; i<2;i++)
        pthread_join(hilos[i], NULL);

    pthread_mutex_destroy(&mutex);
    return EXIT_SUCCESS;
}
