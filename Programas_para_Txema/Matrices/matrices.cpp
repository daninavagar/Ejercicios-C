/*
 * =====================================================================================
 *
 *       Filename:  matrices.cpp
 *
 *    Description:  Confeccionar un programa que calcule el determinante de un matriz
 *                  3x3
 *
 *        Version:  1.0
 *        Created:  06/15/20 14:06:31
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

#define N 3

void title () {
    system("clear");
    system("toilet -f pagga --metal MATRICES");
    printf ("\n\n");
}


void pedir_datos(double matriz[N][N]) {
    
    for (int fila=0; fila<N; fila++)
        for (int columna=0; columna<N; columna++){
            printf ("(%i, %i)", fila + 1, columna + 1);
            scanf ("%lf", &matriz[fila][columna]);
        }
}

void impimir_datos(double matriz[N][N]) {


    printf ("\n");
    for (int fila=0; fila<N; fila++)
        for (int columna=0; columna<N; columna++){
            printf ("|%6.2lf|", matriz[fila][columna]);
            printf ("\n");
            }

}

int der (int columna) {
    if (columna < 0)
        return columna + N;
    return columna;
}

int main (int argc, char *argv[]) {

    title();

    double matriz[N][N];
    double determinante = 0, producto;

    pedir_datos(matriz);
    for (int j=0; j<N; j++) { /* o: offset. Dice si empiezo en la col 0 en la 1 o en la 2 la diagonal. */
            producto = 1;
            for (int n=0; n<N; n++)  /* Número de elemento dentro de la diagonal */
                    producto *= matriz[n][(n+j) % N];
            determinante += producto;
        }

    for (int j=N-1; j>=0; j--){
        producto = 1;
        for (int n=0; n<N; n++)
            producto *= matriz[n][der (N - 1 - n - j)];
        determinante -= producto;
    }
    imprimir_datos(matriz);

    printf ("\n\n Determinante = \n\t %.2lf\n\n", determinante);



    return EXIT_SUCCESS;
}
