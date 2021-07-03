#include <stdio.h>
#include <stdlib.h>

#define MAX 10

/* Pongo las funciones abajo para que vayas al main directo. */
int dime (int [MAX][MAX], int, int);

int main () {
    int pascal[MAX][MAX];

    pascal[0][0] = 1;

    /* Cálculos */
    for (int f=1; f<MAX; f++)
        for (int c=0; c<=f; c++) // No quiero recorrer más allá de la diagonal: son todo 0's
            pascal[f][c] = dime (pascal, f-1, c) + dime (pascal, f-1, c-1);

    /* Salida de Datos */
    for (int f=0; f<MAX; f++) {
        for (int s=0; s<MAX-f; s++)  // Estos espacios al comienzo de cada línea son el único truco para que se vea bien.
                printf ("    ");
        for (int c=0; c<=f; c++)
            printf ("%4i    ", pascal[f][c]);
        printf ("\n");
    }
    return EXIT_SUCCESS;
}


/* dime:
 * Devuelve el valor que hay en una fila y una columa de una matriz.
 *
 * PARÁMETROS:
 *  la matriz
 *  la fila
 *  la columna
 *
 * VALOR DE RETORNO:
 * EL valor de una celda o 0 si salimos fuera de los límites
 * de búsqueda.
 *
 * NOTAS:
 * Las funciones que devuelven el valor de una variable se llaman funciones
 * accedentes (getter) y tienen la ventaja sobre el acceso directo que pueden
 * hacer comprobaciones: permisos, límites, etc.
 */
int dime (int matriz[MAX][MAX], int fila, int col) {

    if (fila < 0 || col > fila || col < 0 || fila >= MAX  )
        return 0;

    /* Si llegamos a esta parte es porque no se ha cumplido
     * el if previo, así que, esto sería como un else.
     * No obstante, al compilador le es más fácil si no todos
     * los return están en una rama. Así comprueba que hay un
     * return y que no depende de por dónde vaya.
     * Y,a mí me ahorra un else y me recuerda que hoy es
     * más caro el progrmador que el tiempo máquina.
     * Ventajas para todos no poner el else.
     */

    return matriz[fila][col];
}
