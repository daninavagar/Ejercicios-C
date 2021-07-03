#include<stdio.h>
#include<stdlib.h>
#include "operacion.h"


extern "C"{
    double suma();
    double resta();
    double multi();
    double division(); 
}

int main(int argc, char *argv[]){


    int opcion;
    double resul;
    bool exit = false;

    
    system("clear");
    do {

        printf ("Que Operacion quieres hacer"
                "\n\t1. Suma"
                "\n\t2. Resta"
                "\n\t3. Multiplicacion"
                "\n\t4. Division"
                "\n\t5. Borrar Pantalla"
                "\n\t6. Salir"
                "\n\t\t Elige: ");

    scanf ("%i", &opcion);
        switch (opcion){

                case 1:
                    resul = suma();
                    printf ("\n El resultado de la suma es %.2lf\n", resul);
                    break;
                case 2:
                    resul = resta();
                    printf ("\n El resultado de la resta es %.2lf\n", resul);
                    break;
                case 3:
                    resul = multi();
                    printf ("\n El resultado de la multipiliacion es %.2lf\n", resul);
                    break;
                case 4:
                    resul = division();
                    printf ("\n El resultado de la suma es %.2lf\n", resul);
                    break;
                case 5:
                    system("clear");
                    break;
                case 6:
                    printf ("\n\t GRACIAS POR VENIR\n");
                    exit = true;
                    break;
            }
    } while (!exit);
    

    
    return EXIT_SUCCESS;
}
