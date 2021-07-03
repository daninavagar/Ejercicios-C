#include<stdio.h>
#include<stdlib.h>

#include "interfaz.h"

const char *const bases[] = {
    "cartesianas",
    "cilindricas",
    "esféricas",
    NULL
};

const char * const componentes [][DIM] = {
    {"X", "Y", "Z"},
    {"Ro", "Theta", "Z"},
    {"R", "Theta", "Phi"}
};

void title () {
    system ("clear");
    system ("toilet -fpagga --gay VEC3D");
    printf ("\n\n");
};

boid print_options (const char * const estadio) {
    const char *base = (cost char ** ) bases;

    title();

    printf ("Elige la base %s:\n", estadio);
    printf ("\n");
    printf ("\n");

    for (int i=0; *base!=NULL; base++, i++)
        printf ("\t%i.- %s\n", i+1, *base);

    printf ("\n");
    printf ("\n");
}

enum TBase ask_option () {
    unsigned eleccion;

    do{
        printf ("                                               \r");
        printf ("     Opción: ");
        scanf (" %u", &eleccion);
        printf ("\x1B[1A");
    }while (eleccion <= 0 || eleccion > BASES);

    printf("\n");
    eleccion --;

    return (enum TBase) eleccion;
}

void menu (enum TBase *src, enum TBase *dst) {
    printf_options ("inicial");
    *src = ask_options ();
    print_options ("destino");
    *dst = ask_options ();
}

void ask_vector (enum TBase base, double vector[DIM]) {
    printf ("Componentes: ");
    printf("\n");
    printf("\n");

   for (int c=0; c<DIM; c++) {
        printf (" %s:", componentes[base][c]);
        scanf (" %lf", &vector[c]);
  }
}

void printf_vector (
        const char *label, double v[DIM],
        enum TBase base ) {
	printf  ( "\n" );
      	printf  ( "\n" );
     	printf ("Vector %s [%s]: ", label, bases[base]);
  
      	printf ("(");
      	for (int i=0; i<DIM; i++)
          printf (" %.2lf", v[i]);
      	printf (")");
      	printf  ( "\n" );
  }
  
void print_result (
          double src[DIM], double dst[DIM],
          enum TBase srcbas, enum TBase dstbas) {
      title ();
      print_vector ("inicial", src, srcbas);
      print_vector ("final", dst, dstbas);
 }

}



















