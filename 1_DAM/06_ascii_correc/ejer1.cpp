#include <stdio.h>
#include <stdlib.h>


int main (int argc, char *argv[]) {

      int numero;
      const char *signo;

      printf("Introduce el número y el tipo de signo que quieres que salgan por pantalla(5 y -): ");
      scanf(" %i y %s", &numero, &*signo); /*scanf lee el numero introducido. "d" valor entero */

      for (int i=0;i<numero;i++) 
          /*hace un bucle para que imprima las que veces que este definida la variable */


      printf(" %s ",signo);
      printf("\n");


    return EXIT_SUCCESS;
}
