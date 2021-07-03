#include<stdio.h>
#include<stdlib.h>

#define MAX_ERROR 0.00000001

int main () {
    double user_number;

    printf ("Number: ");
    scanf(" %lf", &user_number); /*lf es para double (long flout)*/

    if (user_number >= 3. - MAX_ERROR &&
        user_number <= 3. + MAX_ERROR)
        printf ( "Para mi es un 3 a todos los efectos. \n" );
    else
        printf ( "You 're not a 3. \n" );

    return EXIT_SUCCESS;
}
