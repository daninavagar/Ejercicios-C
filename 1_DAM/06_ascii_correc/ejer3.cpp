#include <stdio.h>
#include <stdlib.h>

int main(){

    int a;
    int base;
    int i;
    const char *signo;
    printf("Introduce el numero y el tipo de signos que tendra el triangulo(5 y *): ");
    scanf(" %i y %s", &base, &*signo);

    for(i=0; i <=base; i++){
        for( a=1; a <= i; a++){
          printf("%s", signo);
                  }
   printf("\n");

    }

    return 0;
}
