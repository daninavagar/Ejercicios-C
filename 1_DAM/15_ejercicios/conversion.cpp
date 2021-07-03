#include <stdio.h>
#include <stdlib.h>

#define DIM 3

const char *const bases[] = {
	"Cartesianas",
	"Cilíndricas",
	"Esféricas",
	NULL
};

const char * const componentes [][DIM] = {
    {"X", "Y", "Z"},
    {"Ro", "Theta", "Z"},
    {"R", "Theta", "Phi"}
};

enum TBase {cart, cil, esf, BASES}; // Declara las constantes

void title () {
	system ("clear");
	system ("toilet -f future VEC3D");
	printf("\n\n");
}

enum TBase print_options (const char * const estadio) {

	const char **base = (const char **) bases;

    title ();

	printf ("Elige la base: %s\n", estadio);
    printf ("\n");
    printf ("\n");

	for (int i=0; *base != NULL; base++)
            printf ("\t%i.- %s\n", i+1, *base);

        printf ("\n");
        printf ("\n");


};

enum TBase ask_option () {
    unsigned eleccion;

    do {
    	printf ("												\r");
    	printf ("		Opcion: ");
    	scanf (" %u", &eleccion);
    	printf ("\x1B[1A");
    }while (eleccion <= 0 || eleccion > BASES);

    printf ("\n");
    eleccion--;

    return (enum TBase) eleccion;
}

void menu (enum TBase *src, enum TBase *dst) {

	print_options ("inicial");
	*src = ask_option ();
	print_options ("destino");
	*dst = ask_option ();
};

void ask_vector (enum TBase base, double vector[DIM]) {

	printf ("Componente: ");
	printf ("\n");
	printf ("\n");

	for (int c=0;c<DIM; c++){
		printf(" %s: ", componentes[base][c]);
		scanf (" %lf", &vector[c]);
	}
}


int main (int argc, char *argv[]) {

	enum TBase srcbas, dstbas;
	double src_vec[DIM], dts_vec[DIM];
	
	menu ( &srcbas, &dstbas);
	title ();
	ask_vector (srcbas, src_vec);

	if (srcbas == dstbas)

    return EXIT_SUCCESS;
}
