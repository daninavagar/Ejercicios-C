#include<stdio.h>
#include<stdlib.h>
#include<signal.h>
#include<unistd.h>


void siguser1(int sig){
    printf ("Has enviado la señal SIGUSR1\n");
}

void siguser2(int sig){
    printf ("Has enviado la señal SIGUSR2\n");
}
void sigterm(int sig){

    printf ("Fin de ejecucion\n");
    exit(1);
}
void sigint(int sig){
    printf ("No puedes usar Ctrl+c, crack\n");
}


int main() {

    struct sigaction primera, segunda, tercera, cuarta;
    int opcion;
    bool exit = false;

    pid_t process_id;

    process_id = getpid();

    primera.sa_handler = &siguser1;
    segunda.sa_handler = &siguser2;
    tercera.sa_handler = &sigterm;
    cuarta.sa_handler = &sigint;

    do {

      system("clear");
      printf ("Dime que opcion queres usar");
             // + "\t1. Señal SIGUSR1"
             //  + "\t2. Señal SIGUSR2"
             //  + "\t3. Señal SIGTERM"
             // + "\t4. Señal SIGINT"
             // + "\t5. Salir");
      scanf("%i", &opcion);

    
      switch (opcion){
          case 1:
            printf ("Señal 1\n");
            sigaction(SIGUSR1, &primera, NULL);
            kill(process_id, SIGUSR1);
            sleep(3);
            break;
          case 2:
            printf ("Señal 2\n");
            sigaction(SIGUSR2, &segunda, NULL);
            kill(process_id, SIGUSR2);
            sleep(3);
            break;
          case 3:
            printf ("Señal sigterm\n");
            sigaction(SIGTERM, &tercera, NULL);
            signal(SIGTERM, sigterm);
            kill(process_id, SIGTERM);
            sleep(3);
            break;
          case 4:
            printf ("Señal sigint\n");
            // sigaction(SIGINT, &cuarta, NULL);
            signal(SIGINT, sigint);
            // kill(process_id, SIGINT);
            sleep(3);
            break;

        case 5:
            printf ("Gracias por venir, ciaoooo\n");
            exit = true;
            break;
    } 

    } while (!exit);
    return EXIT_SUCCESS;
}
