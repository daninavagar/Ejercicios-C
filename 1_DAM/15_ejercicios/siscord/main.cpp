#include<stdio.h>
#include<stdlib.h>

#include "common.h"
#include "interfaz.h"
#include "euclides.h"

int main (int argc, char *argv[]) {
    
    enum TBase srcbas, dstbas;
    double src_vec[DIM], dst_vec[DIM];

    /* Entrada de Datos */
    menu ( &srcbas, &dstbas );
    title ();
    ask_vector (srcbas, src_vec);

    /* Salida Sin Cálculos */
    if (srcbas == dstbas) {
        print_result (src_vec, src_vec, srcbas, dstbas);
        return EXIT_SUCCESS;
    }

    /* Cálculos */
}
