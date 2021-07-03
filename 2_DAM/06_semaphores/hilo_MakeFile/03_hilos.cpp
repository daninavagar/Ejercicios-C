#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include"primes.h"


/*
 * Programa que cree 2 hilos. En el primero vaya introduciendo numeros pares
 * y en el segundo numeros impares. 
 * */


extern "C" {
    void title();
    void* even(void *);
    void* odd(void *);
    void loop();
}



int main (int argc, char *argv[]) {



    pthread_t pthread[2];

   

    title();

    
    if (0 != pthread_create(&pthread[0], NULL, &even, NULL))
        fprintf (stderr, "Hilo no creado");
    if (0 != pthread_create(&pthread[1], NULL, &odd, NULL))
        fprintf (stderr, "Hilo 2 no creado");

    for (int i=0; i<2;i++)
        pthread_join(pthread[i], NULL);

    loop();

    
    return EXIT_SUCCESS;
}
