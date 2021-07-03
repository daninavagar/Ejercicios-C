#include <stdio.h>
#include <stdlib.h>

int main(){


    int num;
    const char *signo;

    printf("Introduce el numero y tipo de signos que tendra el cuadrado(5 y -): ");
    scanf(" %i y %s", &num, &*signo ); //  scanf lee el numero introducido por pantalla

    for(int i = 1; i<=num; i++){
        for(int i = 1; i<num; i++ )
            printf("%s",signo);
            printf("\n");
    }


    return 0;
}
