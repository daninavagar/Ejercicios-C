#include <stdio.h>
#include <stdlib.h>

void title () {
	system("clear");
	system("toilet -f pagga ORDINALES");
}

const char *command_name;

void printf_usage (FILE *output) { /*PONE EL NUMERO ANTES DE EJECUTAR EL ARCHIVO, COMO SCANF PERO MAS RARO PARA MI */
    fprintf (output, "\
            Usage:    %s <number>\n\
                      This programs converts a number into its ordinal counterpart.\n\
            \n\
            ", command_name);

    exit (1);
}


const char *ordinal_name[3][10] = {
	{ "", "primero", "segundo", "tercero", "cuarto", "quinto", "sexto", "séptimo", "octavo", "noveno"},
	{ "", "decimo", "vigésimo", "trigésimo", "cuatrigésimo", "quincuagésimo", "sexagésimo", "septuagésimo", "octogésimo", "nonagésimo"},
	{ "" ,"centésimo", "bicentésimo", "tricentésimo", "cuadrigésimo", "quiengentésimo", "sexgentésimo", "septingentésimo", "octingentésimo", "noningentésimo" }
};


void ordinal (int numero, int prof) {
	if (numero != 0)
	{
		ordinal (numero / 10, prof + 1);
		printf ("%s  ", ordinal_name[prof][numero % 10]);
	}
}
int main (int argc, char *argv[]) {

	title();

        command_name = argv[0];

        if (argc < 2)
            printf_usage (stderr);


	ordinal (atoi (argv[1]), 0);

	printf("\n");

    return EXIT_SUCCESS;
}


/* FALTA COSAS POR ENTENDER */
