#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<semaphore.h>

#define N 10000
static int counter = 0;

sem_t sem1;
void title() {

    system("clear");
    system("toilet -f pagga --gay SEMAFOROS");
    printf ("\n");
}

void* rutina1(void *arg) {

    for (int i=0; i<N; i++) {
        sem_wait(&sem1);
        counter += 1;
        sem_post(&sem1);
    }

    return NULL;
}


void* rutina2(void *arg) {

    for (int i=0; i<N; i++) {
        sem_wait(&sem1);
        counter -= 1;
        sem_post(&sem1);
    }

    return NULL;

}


int main (int argc, char *argv[]) {


    pthread_t pthread[2];


    title();

    sem_init(&sem1, 0, 1);

    pthread_create(&pthread[0], NULL, rutina1, NULL);
    pthread_create(&pthread[1], NULL, rutina2, NULL);

    for (int i=0; i<2; i++)
        pthread_join(pthread[i], NULL);


    printf ("El valor de counter es : %i. \n", counter);
    return EXIT_SUCCESS;
}
