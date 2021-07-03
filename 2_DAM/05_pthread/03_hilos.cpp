#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

#define N 20000
/*
 * Programa que cree 2 hilos. En el primero vaya introduciendo numeros pares
 * y en el segundo numeros impares. 
 * */
int numbers[N];
int i = 0;

void title() {
    
    system("clear");
}

pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;


void* even(void* ) {
       int my_pos;

       while (i<N) {
        pthread_mutex_lock (&mutex);
	my_pos = i++;
        pthread_mutex_unlock(&mutex);

	numbers[my_pos] = (random () % 100) * 2;
    }


    return NULL;
}

void* odd(void* ) {
    int my_pos;

    while (i<N) {
        pthread_mutex_lock(&mutex);
	my_pos = i++;
        pthread_mutex_unlock(&mutex);

        numbers[my_pos] = (random () % 100) * 2 + 1;
    }


    return NULL;
}


int main (int argc, char *argv[]) {



    pthread_t pthread[2];

    srand (time (NULL));

    title();

    if (0 != pthread_create(&pthread[0], NULL, &even, NULL))
        fprintf (stderr, "Hilo no creado");
    if (0 != pthread_create(&pthread[1], NULL, &odd, NULL))
        fprintf (stderr, "Hilo 2 no creado");

    for (int i=0; i<2;i++)
        pthread_join(pthread[i], NULL);

    for (int i=0, pos = 0; i<N;i++) {
        printf ("\n Posicion %i --> [%i]\n", pos, numbers[i]);
        pos++;
    }


    return EXIT_SUCCESS;
}
