#include<stdlib.h>
#include "sound.h"


extern "C"{
void portada();
}

int main (int argc, char *argv[]){

    portada();
    beep();
    return EXIT_SUCCESS;
}
