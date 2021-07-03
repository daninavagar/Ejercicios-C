#include <stdio.h>


/* Compile with
 * * g++ -DLETRA=\'d\' mays.cpp -o mays
 */

#define SALTO ('a' - 'A')
#define LETRA 'e'

int main () {

    char letra = LETRA;

    /* Algo */

    /* Si la letra es mayuscula */
    if (letra >= 'a' && letra <= 'z')
        letra -= SALTO;
    else
    /* si no */
        letra += SALTO;

    printf("letra en mayusculas: %c\n", letra);

    return 0;


}
