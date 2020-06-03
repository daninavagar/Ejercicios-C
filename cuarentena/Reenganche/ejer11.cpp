#include<stdio.h>
#include<stdlib.h>


void title () {
	system ("clear");
	system ("toilet -f pagga TEMPERATURA");
	printf("\n\n");
}

int main (int argc, char *argv[]){

    title ();
    int temperatura;

    printf ("DIME LA TEMPERATURA DEL AGUA\n");
    scanf ("%i", &temperatura);

   printf("EL AGUA ESTÁ EN ESTADO: \n");
   if (temperatura < 1)
   {
   	printf("Esta en estado SOLIDO\n");
   } else if (temperatura > 0 && temperatura < 100)
   {
   	printf("Esta en estado LIQUIDO\n");
   } else {
   	printf("Esta en estado GASEOSO\n");
   }
    return EXIT_SUCCESS;
}
