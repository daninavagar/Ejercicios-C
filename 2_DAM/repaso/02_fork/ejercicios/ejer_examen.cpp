#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main() {

    ( fork() || fork() ) && ( fork() || fork() );

    printf ("*\n");
    while(1);
    return 0;
}
