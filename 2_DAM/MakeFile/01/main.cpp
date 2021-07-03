#include<stdio.h>
#include<stdlib.h>
#include "portada.h"

extern "C"{
void portada();
}

int main(int argc, char *argv[]){


    portada();
    return EXIT_SUCCESS;
}
