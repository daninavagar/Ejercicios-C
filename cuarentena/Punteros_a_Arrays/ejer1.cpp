#include <stdio.h>
#include <stdlib.h>

#define num 8
void title () {
	system("clear");
	system("toilet -f pagga ORDENACION BURBUJA");
}

void muestra (int a[num]) {

    for (int i = 0; i < num; i++)
        printf ("%i ", a[i]);
    printf ("\n");
}

int main (int argc, char *argv[]) {

	title();

        int A[num] = {1,2,5,3,7,4,6,9};
              
        muestra (A);
        /* Ordenación de la burbuja (buble sort) */
        for (int p=0; p<num-1; p++)
          for (int i=0; i<num-1; i++)
            if (A[i] < A[i+1]){
                int aux = A[i+1];
                A[i+1] = A[i];
                A[i] = aux;
              }

        /* Fin de la ordenación */
        muestra (A);

    return EXIT_SUCCESS;
}
