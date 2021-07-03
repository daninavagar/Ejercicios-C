#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <semaphore.h>



#define N 50
int i=0;
int num;
sem_t sem;

void* suma1(void *number) {


    int total =  *( (int *) number );
    while (i<N) {
        sem_wait(&sem);
        printf ("Le sumo 3.\n");
        num += 3;
        printf ("Numero es: %d\n", num);
        i++;
        sem_post(&sem);
        sleep(1);
    }

    return NULL;
}



void* suma2(void *number) {


    int total =  *( (int *) number );
    while (i<N) {
        sem_wait(&sem);
        printf ("Le quito 1.\n");
        num -= 1;
        printf ("Numero es: %d\n", num);
        i++;
        sem_post(&sem);
        sleep(1);
    }

    return NULL;
}
int main (int argc, char *argv[]) {

    pthread_t hilos[2];

    sem_init(&sem, 0, 1);
    printf ("introduce numero.\n ");
    scanf ("%d", &num);

    if (0 != pthread_create(&hilos[0], NULL, &suma1, (void *) &num))
            fprintf (stderr, "Primer Hilo no creado.\n");
    if (0 != pthread_create(&hilos[0], NULL, &suma2, (void *) &num))
            fprintf (stderr, "Segundo Hilo no creado.\n");

    for (int i=0; i<2;i++)
        pthread_join(hilos[i], NULL);

    sem_destroy(&sem);
    return EXIT_SUCCESS;
}
