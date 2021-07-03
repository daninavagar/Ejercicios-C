#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define MAX 0x100

int main () {
    int i;            // No declaro la variable en el for porque tengo curiosidad de ver en qué valor termina.
    uint64_t lim;

    uint64_t f[MAX];  // Es lo mismo que unsigned long long, pero aquí explicito que tengo 64 bits
                      // y, por lo tanto, que si la suma crece mucho me puedo salir.
                      // Por lo tanto, el número más grande que puedo poner es 2^64 - 1
                      // Que para redondear entre nosotros es 2^4*2^10.....6 veces
                      // 1 Miles
                      // 2 Millones
                      // 3 Miles de millones
                      // 4 Billones
                      // 5 miles de billones
                      // 6 millones de billones
                      // Vamos 16 millones de billones, que: sí, sé escribirlo, pero: no. No sé lo que es.
                      // No me cabe
                      // Para que interpreteis el resultado: son 18 0's

    lim = 1UL << ( (sizeof (uint64_t) - 1) * 8 );   // Me voy a parar en 2^64 / 2 =====> 2^63
                                                    // O sea, en cuanto encuentre un resultado de 17 0's

    /* Si os acordais de las constantes numéricas,
     * decíamos que por defecto eran int.
     * Yo quiero que mi uno inicial no sea de 4 bytes,
     * sino de 8 para poder desplazarlo 63 bits.
     * Por eso es imprescindible el UL
     */

    f[0] = f[1] = 1;
    for (i=2; i<MAX && f[i-1] < lim; i++)
        f[i] = f[i-1] + f[i-2];

    for (int u=1; u<i && u<MAX; u++)
        printf ("%4i: %19lu [%9.6lf]\n", u, f[u], (double) f[u] / f[u-1]);

    /* ¡¡ Es flipante que aunque tengamos 255 celdas, con 83 nos ha sobrado !!
     * Fíajte cada cuantas sumas aproxidamente crece un 0.
     * A mí me recuerda a los diagramas y números de Feigenbaum que
     * explican cada cuanto un sistema se vuelve caótico.
     */

    /* Pasadlo bien: que todo es broma. */

    return EXIT_SUCCESS;
}
