#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>


enum TLang {es,en,pt,it,de};

const char *greeting[] = {
    "Hola",
    "Hellow",
    "Olá",
    "Ciao",
    "Hallo"
};

struct TParameter {
    int count;
    enum TLang lang;
};


void* print(void* parameters){

//     int count = * ( (int *)  parameters);
    struct TParameter p = * ( (struct TParameter *) parameters);

    for (int i=0; i<p.count;i++)
        fprintf (stderr, "%s ", greeting[p.lang]);

    return NULL;
}

int main (int argc, char *argv[]){


    system("clear");
    pthread_t pthread_1[2];
    struct TParameter call1 = {10, es};

    struct TParameter call2;
    call2.count = 5;
    call2.lang = it;
    
    pthread_create(&pthread_1[0], NULL, &print, (void * )&call1);
    pthread_create(&pthread_1[1], NULL, &print, (void * )&call2);

    for (int i=0; i<2;i++)
        pthread_join(pthread_1[i], NULL);
    // join --> espera que acabe el hilo

    fprintf (stderr, "\nThread Terminated.\n\n");


    EXIT_SUCCESS;
}
