#include <stdio.h>
#include <stdlib.h>

#define N 3

void title () {
    system ("clear");
    system ("toilet -fpagga --gay DETERMINANTE");
    printf ("\n\n");
}

void pedir_datos ( double m[N][N] ) { /* En respuesta a alguien que quería saber cómo se pedían datos */
    for (int f=0; f<N; f++)
        for (int c=0; c<N; c++) { /* c : columna */ 
            printf ("Elemento (%i, %i): ", f+1, c+1);
            scanf ("%lf", &m[f][c]);
        }
}

void imprimir (double m[N][N]) {
    printf ("\n\n");
    for (int f=0; f<N; f++){
        for (int c=0; c<N; c++)
            printf ("%6.2lf", m[f][c]);
        printf ("\n");
    }
    printf ("\n");
}

int der (int c) { /* Si salimos por la izquierda, entramos por la derecha. */
    if (c < 0)
        return c + N;
    return c;
}

int main (int argc, char *argv[]) {


    double matriz[N][N];
    double determinante = 0;
    double producto;

    title ();
    pedir_datos (matriz);

    /* Suma de las diagonales ppales */

    for (int o=N-1; o>=0; o--){
        producto = 1;
        for (int n=0; n<N; n++)
            producto *= matriz[n][der (N - 1 - n - o)];
        determinante -= producto;
    }

    imprimir (matriz);
    printf ("Determinante = %.2lf\n\n", determinante);
    printf ("\n\n");


    return EXIT_SUCCESS;
}
