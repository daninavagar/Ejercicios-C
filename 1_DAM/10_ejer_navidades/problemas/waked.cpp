#include<stdio.h>
#include<stdlib.h>

#define PAPUP 8
#define MAMUP 4
#define HIJOP 2
#define HIJAP 1

enum TMiembro {
	papa,
	mama,
	hijo,
	hija,
	total_miembros
};

/* conmutar: devuelve el valor old_status habiendo cambiado el valor del bit correspondiente 
al miembro de la familia*/
int conmutar (int old_status, enum TMiembro miembro) {
	int new_status;
	int bit;
	switch (miembro) {
		case papa:
			bit = PAPUP;
		break;
		case mama:
			bit = MAMUP;
		break;
		case hijo:
			bit = HIJOP;
		break;
		case hija:
			bit = HIJAP;
		break;
		default:
			bit = 0;
	}
	new_status = old_status ^ bit;

	return new_status;
}

/* acostar: devuelve el valor old_status habiendo puesto a 0 el bit correspondiente 
al miembro de la familia*/
int acostar (int old_status, enum TMiembro miembro) {
	int bit = 1, 
		pos = total_miembros - 1 - miembro; /* Invierto los miembros de la familia*/
	for (int vez=0; vez<pos; vez++) /* bit => PAPUP | MAMUP,...*/
		bit = bit << 1;

	return old_status & ~bit;
}


/* levantar: devuelve el valor old_status habiendo levantado el bit correspondiente
al miembro de la familia*/
int levantar (int old_status, enum TMiembro levantado) {
	int bit = 1,
		pos = total_miembros - 1 - levantado; /* Invierto los miembros de la familia*/
	for (int vez=0; vez<pos; vez++) /* bit => PAPUP | MAMUP,...*/
		bit = bit << 1;

	return old_status | bit;
}

/* imprime con el texto el estado de cada miembro de la familia*/
void print (int waked) {
	printf ("Papa esta %s\n", waked & PAPUP ? "levantado": "acostado");
}

int main () {
	int waked = 0;
	enum TMiembro desperado = papa;

	waked = levantar (waked, papa);
	waked = acostar (waked, papa);
	waked = conmutar (waked, papa);
	waked = conmutar (waked, papa);

	print (waked);

	return EXIT_SUCCESS;
}