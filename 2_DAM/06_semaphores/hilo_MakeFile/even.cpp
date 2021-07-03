#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<semaphore.h>
#include"primes.h"
#define N 20000


pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
int i=0;
sem_t sem;
int numbers[N];


void* even(void*) {

sem_init(&sem, 0, 1);
    
       int my_pos;
       

       while (i<N) {
           sem_wait(&sem);
        // pthread_mutex_lock (&mutex);
	my_pos = i++;
    sem_post(&sem);
        // pthread_mutex_unlock(&mutex);

	numbers[my_pos] = (random () % 100) * 2;
    }


    return NULL;
}

void* odd(void*) {
    int my_pos;
 
    while (i<N) {
        sem_wait(&sem);
        // pthread_mutex_lock(&mutex);
	my_pos = i++;
    sem_post(&sem);
        // pthread_mutex_unlock(&mutex);

        numbers[my_pos] = (random () % 100) * 2 + 1;
    }

    
    return NULL;
}

void loop() {

    printf ("Los numeros son.\n");

    for (int i=0, pos = 0; i<N;i++) {
        printf ("POSICIÓN [%i] es -> %i.\n", pos, numbers[i]);
        pos++;
    }
   sem_destroy(&sem);
}

