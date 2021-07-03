#include<stdio.h>


int main () {

    unsigned char i;
    for (i=0x20; i<0x80; i++)
        printf("%X: %c\n", i, i);

    return 0;
}



