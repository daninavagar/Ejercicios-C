#include <stdio.h>
#include <stdlib.h>

void title() {
    printf ("\n\n");
    system ("clear");
    system ("toilet -f pagga --gay NUMEROS ENTEROS");
    system ("\n\n");
}

int main (int argc, char *argv[]) {

  

    int tot = 2, elec;
    title ();
    printf ("DIME LA FORMA DE HACER EL EJERCICIO, 1-for, 2-while, 3-do-while\n");
    scanf("%i", &elec);

    printf("\n");
    switch(elec){ 
        case 1:
        printf("%i", tot);
        for(int i; i <= 100; i++){
            tot = tot + 3;
            if (tot < 100){
                printf("%i", tot);
                printf("\n");
            }
        }
        break;
        case 2:
        printf("%i", tot);
        while(tot <= 100 - 3){
            tot = tot + 3;
            printf("%i", tot);
            printf("\n");
        }
        break;
        case 3: 
        printf("%i", tot);
        do{
            tot = tot + 3;
            printf("%i \n", tot);
        } while(tot <= 100 - 3);
        break;
}



    return EXIT_SUCCESS;
}

