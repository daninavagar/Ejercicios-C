#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <strings.h>
#include <signal.h>

#include "ansi.h"

#define MAX  0x08
#define MAXB 0x100

/*
 * Comentarios de programa: INGLES
 * Comentarios para el estudiante: ESPAÑOL
 */

/* WINDOWS PARAMS*/
/*
 * S: STACK
 * Q: Question
 */

#define YS 18
#define XS 60
#define YQ YS+2
#define XQ 1

sig_atomic_t cont = 1;

/* Pongo las funciones abajo para que no las prestéis atención. */
void title ();
void dump (unsigned [], int, int *);
void handler (int);

int
main (int argc, char *agv[])
{
    int s      = 0;            /* Summit. First empty cell */
    char input[MAXB];          /* User input */

    unsigned stack[MAX];
    int      rv = -1;          /* Stack returned value */

    /* Parte omitible */
    struct sigaction sa;
    bzero (&sa, sizeof (sa));
    sa.sa_handler = &handler;
    sigaction (SIGINT, &sa, NULL);
    /* Fin de la parte omitible */



    do {
        title ();
        dump (stack, s, &rv);

        MOVE (YQ, XQ);
        ANSI_SWITCH_COLOR (AC_WHITE, FORE_LIGHT);
        printf("Input: ");
        ANSI_SWITCH_COLOR(AC_BLUE, FORE_LIGHT);
        ANSI (BOLD_ON)
        printf ( SAVE_CURSOR );

/* PARTE PEDIDA */
        __fpurge (stdin);
        if ( scanf ("%[0-9]", input) ) {   /***** User pushes a number *****/ /* Nota */
            if (s >= MAX - 1)
                break;                     // Impossible push. Stack full.
            stack[s++] = atoi (input);
        } else {                           /***** User pops a number *****/
            if (s == 0)
                break;                     // Pop not possible. Stack empty.
            rv = stack[--s];
        }
/* FIN. Lo demás son todo colores. */
/* Nota:
 * No hay un espacio después de las comillas, porque se tragaría el \n,
 * y no se puede usar %i porque se traga el mismo carácter.
 * También se podría usar %n para ver cuántos caracteres se ha tragado hasta el momento,
 * pero es más complicado.
 **/

        printf ( RESTORE_CURSOR );
        ANSI (BOLD_OFF);
    } while (cont);

    ANSI_COLOR_RESET;
    printf ("\n");

    return EXIT_SUCCESS;
}



void dump (unsigned data[], int last, int *rv) {
    printf ( SAVE_CURSOR );
    ANSI_SWITCH_COLOR(AC_MAGENTA, FORE_NORMAL);
    ANSI (BOLD_ON)

    for (int i=0; i<last; i++){
        MOVE (YS - i, XS);
        printf ("|%4i|", data[i]);
    }
    MOVE (YS - MAX, XS- 3);
    printf ("PILA");

    if (*rv >= 0) {
        MOVE (YS+3, XS);
        printf (" => %i", *rv);
        *rv = -1;
    }

    ANSI (BOLD_OFF);
    ANSI_COLOR_RESET;
    printf ( RESTORE_CURSOR );
}

void title () {
    system ("clear");
    system ("toilet --gay -f pagga STACK");
}

void handler(int signal_number) {
    cont = 0;   /* Si han pulsado ctl c el bucle terminará y resetea los colores */
}
