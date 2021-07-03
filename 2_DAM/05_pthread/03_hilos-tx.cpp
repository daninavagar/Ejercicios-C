#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

/*
 * Programa que cree 2 hilos. En el primero vaya introduciendo numeros pares
 * y en el segundo numeros impares. 
 * */
int numbers[100];

void title() {

	system("clear");
}

pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;


void* even(void* ) {

	for (int i=0; i<100; i++) {
		pthread_mutex_lock(&mutex);
		if (i%2 == 0)
			numbers[i] = i;
		pthread_mutex_unlock(&mutex);
	}


	return NULL;
}

void* odd(void* ) {

	for (int i=0; i<100; i++) {
		pthread_mutex_lock(&mutex);
		if (i%2 != 0)
			numbers[i] = i;
		pthread_mutex_unlock(&mutex);
	}


	return NULL;
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

	for (int i=0, pos = 0; i<200;i++) {
		printf ("\n Posicion %i --> [%i]\n", pos, numbers[i]);
		pos++;
	}


	return EXIT_SUCCESS;
}
