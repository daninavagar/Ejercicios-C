#include <stdio.h>

int main () {
   /* Las mismas 3 lineas de tres formas disintas*/ 

    printf(" Hola \x0A \x09 Beep \x07 \x0A");
    printf(" Hola \012 \011 Beep \007 \012");
    printf(" Hola \n \t Beep \a \n");

    printf(" Hola \n \0esto es secreto esto es secreto  ");
    ointf ("\n");
    for (int  vez=0; vez<MAXCOLS; vwz++) {
        printf("\r");
        for (int igual=0; igual<vez; igual++)
            printf("=");
        printf("> %2i%%", vez);
        fflush(stdout);
        __fpurge(100000);
    }
    printf("\n.FIN.");
    return 0;
}
