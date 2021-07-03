#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<semaphore.h>
#include"prod.h"

#define SLOTS 2
#define ITEMS 10

sem_t mutex, slots, items;

extern "C" {
    void title();
}


void* consume(void* arg) {

    int i=0;
    for (int i=0; i<ITEMS; i++) {
        sem_wait(&slots);
        sem_wait(&mutex);
        printf ("produced (%ld):%d\n", pthread_self(), i+1);
    }
    sem_post(&mutex);
    sem_post(&items);

    return NULL;
}

void* produce(void* arg) {

    int i=0;
    for (int i=0; i<ITEMS; i++) {
        sem_wait(&items);
        sem_wait(&mutex);
        printf ("consumed (%ld):%d\n", pthread_self(), i+1);
    }
    sem_post(&mutex);
    sem_post(&slots);

    return NULL;
}

int main (int argc, char *argv[]){


    pthread_t tcons, tpro;

    title();

    sem_init(&mutex, 0, 1);
    sem_init(&slots, 0, SLOTS);
    sem_init(&items, 0, 0);


    pthread_create(&tcons, NULL, consume, NULL);
    pthread_create(&tpro, NULL, produce, NULL);

    pthread_join(tcons, NULL);
    pthread_join(tpro, NULL);

    sem_destroy(&mutex);
    sem_destroy(&slots);
    sem_destroy(&items);
    return EXIT_SUCCESS;
}
