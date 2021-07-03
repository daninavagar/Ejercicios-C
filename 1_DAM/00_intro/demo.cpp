#include <math.h>
#include "fbd.h" si el archivo esta dentro del sistema esta entre comillas y si esta en el sistema operativo se usa <>

#define R 100

void circle () {
    for (double a=0; a<2*M_PI; a+=.001)
    put (R*cos(a),R*sin(a), 0xFF, 0xFF, 0xFF, 0xFF);
}

int main () {

    open_fb ();
    /*Hacer lo que me de la gana*/
    put (500, 350, 0xFF, 0xFF, 0xFF, 0xFF);
    circle ();
    
    /* Fin de hacer lo que me de la gana */
    close_fb ();

    return 0;
}
