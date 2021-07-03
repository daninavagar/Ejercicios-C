#include <stdio.h>
#include <stdlib.h>

double f(double x) { return x * x -3; }

int main (int argc, char *argv[]) {


    for (double x=-5; x<5; x+=0.5)
        printf ( "x: %2lf, f(x): %2lf\n", x, f(x));

    return EXIT_SUCCESS;
}
