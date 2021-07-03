#include <stdio.h>

#define EURO 166.386

int main () {
    double input;

    printf("How much do you wanna change?");
    scanf(" %lf", &input);  /* lee la entrada del stdou*/ 

    printf("%.2lf₧ => %.2lf€\n", input, input / EURO);

    return 0;
}
