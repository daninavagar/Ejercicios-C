#include<stdio.h>


int main () {

    int i;
    char j;

    for (int i=0; i<=10;i++){
        printf("Vuelta: %i\n", i);
    }

    printf ("=================================\n");

    for (int i=0, j=7;i<=5 && j>=0;i++, j--){
        printf ("Variable i: %i\nVariable j: %i\n", i,j);
    }
  
    printf("hola mi amor");
    printf("\n");
    return 0;
}
