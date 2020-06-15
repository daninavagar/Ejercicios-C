/*
 * =====================================================================================
 *
 *       Filename:  MegaPrograma.cpp
 *
 *    Description:  Programa con la Mayoria de las Cosas que hemos dado.
 *
 *        Version:  1.0
 *        Created:  06/15/20 19:45:35
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Daniel Navarro Garcia (), daninavagar@gmail.com
 *   Organization:  Salesianos Dosa DAM
 *
 * =====================================================================================
 */


#include <stdio.h>
#include <stdlib.h>

void title () {
    system("clear");
    system("toilet -f pagga --metal ALL_OF_THEM");
    printf ("\n\n");
}


int Fibonacci (int numero) {
    if (numero == 0 || numero == 1)
        return 1;
    return Fibonacci(numero -1) + Fibonacci(numero - 2);
}
void Sucesion_Fibonacci () {
	int numero, x, cantidad;
	system ("clear");
	system (" toilet -f pagga --gay FIBONACCI");
	printf("\n\n");

    do {
      printf ("                                                                             \r");
      printf ("Dime cuantos numeros quieres que sace de la sucesion: ");
      scanf ("%i", &cantidad);
      fflush(stdout);
      printf ("\x1B[1Am"); /* Enseñado por Diego */
    } while (cantidad < 0);
    printf ("\n");
      for (numero = 0; numero < cantidad; ++numero) {
            x = Fibonacci(numero);
            printf ("%d\n", x);
          }
}

void PunterosFunciones () {
	printf ("HOLA\n");

}
void PunterosArrays () {
	printf ("HOLA\n");

}
int main (int argc, char *argv[]) {

    title();
    int opcion;
    bool exit = false;
    do {
    	// system ("clear");
    	title();
        printf ("HOLA, EN ESTE BONITO PROGRAMA PUEDES HACER DE TODO\n\n");
       	printf ("QUE OPCION QUIERES\n"
            "\n"
            "\t1.- Fibonacci\n"
            "\t2.- Numeros Primos\n"
            "\t3.- Numeros Ordinales\n"
            "\t4.- Punteros a Funciones\n"
            "\t5.- Punteros a Arrays\n"
            "\t6.- Matrices\n"
            "\t7.- Funcion --> f(x) = 3x + 3 \n"
            "\n"
            "Opcion: ");
    	scanf ("%i", &opcion);
        
        switch (opcion) {
            case 1:
                // Recursividad();
                Sucesion_Fibonacci();            
                break;
            case 2:
                PunterosFunciones();
                break;
            case 3:
                PunterosArrays();
                break;
            case 4:
            	printf ("GRACIAS POR APROBARME TXEMA ♥");
            	exit = true;
            	break;
            }
        } while (!exit);
        printf("\n");
    return EXIT_SUCCESS;
}


