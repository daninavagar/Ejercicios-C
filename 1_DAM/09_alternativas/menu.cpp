#include <stdio.h>
#include <stdlib.h>

int titulo () { // esta funcion es para meter comandos de shell en el programa en C. luego en el main se especifica que empieze con el clear
    system ("clear");
    system ("toilet -f pagga CALCULATOR");

    return 0;
}

int main (int argc, char *argv[]) {

    titulo (); // llama a la funcion clear para ejecutar comandos de shell

   int num1, num2;
   int resultado;
   char operacion;

    printf  ("Enter the first number and the second number(5 and 6)\n");
    scanf   ( " %i and %i", &num1, &num2);
    printf  ("Choose sum(s) or rest(r)\n");
    scanf   ( " %c", &operacion);

    if (operacion != 'r' && operacion != 's' ) {
        fprintf (stderr, "Eres un pringao CARLOS.\n");
        return EXIT_FAILURE;
    }

    if (operacion == 's') // si operacion es s suma los dos numeros y luego lo imprime.
    { resultado = num1 + num2;
    printf ( " %i + %i = %i\n", num1, num2, resultado);}

    if (operacion == 'r')
    {resultado = num1 - num2;
    printf ( " %i - %i = %i\n", num1, num2, resultado);}


    return EXIT_SUCCESS;
}
