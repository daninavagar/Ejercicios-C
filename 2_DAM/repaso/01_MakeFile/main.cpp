#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<math.h>
#include"operaciones.h"


extern "C"{
    void title();
    double plus();
    double res();
    double multi();
    double divi();
}


int main (int argc, char* argv[]){

    int option;
    bool exit = false;

    do {

        title();

        printf ("Choose One: "
                "\n\t1. +."
                "\n\t2. -."
                "\n\t3. *."
                "\n\t4. /."
                "\n\t5. Exit.\n"
                );

        scanf ("%d", &option);

        switch (option){

            case 1:
                printf ("\nThe numbers is %.2f\n", plus());
                sleep(5);
                break;
            case 2:
                printf ("\nThe numbers is %.2f\n", res());
                sleep(5);
                break;
            case 3:
                printf ("\nThe numbers is %.2f\n", multi());
                sleep(5);
                break;
            case 4:
                printf ("\nThe numbers is %.2f\n", divi());
                sleep(5);
                break;
            case 5:
                printf ("Bye!\n");
                exit = true;
                break;
        }

    } while (!exit);

    return EXIT_SUCCESS;
}
