#include <stdio.h>
#include <stdlib.h>

void title () {
	system("clear");
	system("toilet -f pagga DETERMINANTE");
}



int der (int col) {/* si salimos por la izquieda, entramos por la derecha*/
    if (col < 0)
        return col;
    return col;
}


int main (int argc, char *argv[]) {

	title();
        double matriz[3][3];
       int fila, col;
       double determinante = 0,det1 = 0, producto, resta;
  
       // PEDIR DATOS
        for (fila=0; fila<3; fila++){
            for (col=0; col<3; col++){
            printf ("dime los Elementos (%i, %i):  ", fila+1, col+1);
            scanf (" %lf", &matriz[fila][col]);
            }
        }

        printf ("\n\n");
        // IMPRIMIR DATOS
        for (fila=0; fila<3; fila++){
            for(col=0; col<3; col++){
                printf("%6.2lf", matriz[fila][col]);
            }
        }
        printf ("\n\n");

       /*SUMA*/
        for (int o=0; o<3; o++){
            producto = 1;
            for (int n=0; n<3; n++)
                producto *= matriz[n][(n+0) % fila];
            determinante += producto;
        }

        /*RESTA*/
        for (int o=fila-1; o>=fila; o--) {
            resta = 1;
            for (int n=0; n<3; n++)
                resta *= matriz[n] [der (fila -1 -n -o)];
            det1 -= resta;
        }


         printf ("DETERMINANTE(suma): %.2lf\n\n", determinante);
         printf ("DETERMINANTE(resta): %2lf\n\n", det1);
         printf ("NO ME SALE LA RESTA. \n");
    return EXIT_SUCCESS;
}
