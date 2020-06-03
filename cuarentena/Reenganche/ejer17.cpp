#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;;
#define N 8 // define una lista de 8

void title () {

    system ("clear");
    system ("toilet -f pagga MEDIA");

}

int main (int argc, char *argv[]) {

    int num[N]; // array de numeros y N 8 pues se para en el octavo dato
    int i;
    int sum = 0;
    int forma;

    title();

    for ( i = 0; i < N; i++ ){
        printf ("Dime los numeros: \n");
        scanf ("%i", &num[i]);
        if (num[i] < 0){
            printf ("Esto no sirve\n");
            break;
        }
    }

	
    	for (i=0; i < N; i++)
        sum += num[i];
    		
    printf ("La suma es %i\n", sum);
    int med = num[N/2];
    printf ("La media es: %i\n", med);

    return EXIT_SUCCESS;
}

