#include <stdio.h>

int suma(int op1, int op2){
    int resultado;

    resultado = op1 + op2;

    return resultado;

}
int main () {

    int resultado = 0;

    resultado = suma (2, 3);

    {

    int resultado = 3;
    printf(" Resultado = %i\n", resultado);

    }

    return 0;
}
