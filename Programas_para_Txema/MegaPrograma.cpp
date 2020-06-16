/*
 * =====================================================================================
 *
 *       Filename:  MegaPrograma.cpp
 *
 *    Description:  Programa con la Mayoria de las Cosas que hemos dado.
 *
 *        Version:  1.0
 *        Created:  06/15/20 19:45:35
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Daniel Navarro Garcia (), daninavagar@gmail.com
 *   Organization:  Salesianos Dosa DAM
 *
 * =====================================================================================
 */


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include <string.h>
#include <time.h>

#define N 8


void title () {
    system("clear");
    system("toilet -f pagga --metal ALL_OF_THEM");
    printf ("\n\n");
}


/* FIBONACCI */

int Fibonacci (int numero) {
    if (numero == 0 || numero == 1)
        return 1;
    return Fibonacci(numero -1) + Fibonacci(numero - 2);
}
void Sucesion_Fibonacci () {
	int numero, x, cantidad;
	system ("clear");
	system (" toilet -f pagga --gay FIBONACCI");
	printf("\n\n");

    do {
      printf ("                                                                             \r");
      printf ("Dime cuantos numeros quieres que sace de la sucesion: ");
      scanf ("%i", &cantidad);
      fflush(stdout);
      printf ("\x1B[1Am"); /* Enseñado por Diego */
    } while (cantidad < 0);
    printf ("\n");
      for (numero = 0; numero < cantidad; ++numero) {
            x = Fibonacci(numero);
            printf ("%d\n", x);
          }
}

/* NUMEROS PRIMOS */
int numero_de_divisores(int numero, int divisor, int cantidad) { /* SI ES RECURSIVO */


    if (divisor <= numero) {
        if (numero % divisor == 0){
              cantidad++;
            }
        cantidad = numero_de_divisores(numero, divisor + 1, cantidad);
    }

    return cantidad;
}

bool es_primo(int primo, int numero) { /* no recursiva*/


    if ( primo == 2)
        return true;
    else 
        return false;
   }

void Primos() {
	int numero, divisor = 1, cantidad = 0, primo;
	system ("clear");
	system (" toilet -f pagga --gay PRIMOS");
    do {
        printf ("                                                              \r");
        printf ("Dime un numero y te digo si es primo o no: ");
        scanf ("%i", &numero);
        fflush(stdout);
        printf ("\x1B[1A");
    } while (numero <= 0);
    printf ("\n");

    primo = numero_de_divisores(numero, divisor, cantidad);

    if (es_primo(primo, numero) == true){
        printf ("El numero es primo\n");
    } else
        printf ("El numero no es primo\n");
    printf ("La cantidad de divisores es %i\n", primo);

}



/* NUMEROS ORDINALES*/

const char *ordinal[3][10] = {
    { "", "primero", "segundo", "tercero", "cuarto", "quinto", "sexto", "séptimo", "octavo", "noveno" },
    { "", "decimo", "vigésimo", "trigésimo", "cuatrigésimo", "quincuagésimo", "sexagésimo", "septuagésimo", "octogésimo", "nonagésimo" },
    { "", "centésimo", "bicentésimo", "tricentésimo", "cuadricentésimo", "sexgentésimo", "septingentésimo", "octigentésimo", "noningentésimo" }
};

int imprime_ordinal (int numero) {

    static int x = 0;

    if ( numero < 1 )
        return 1;
    printf (" %s", ordinal[x++][numero % 10]);
    return imprime_ordinal(numero/10);
}

void Numeros_Ordinales() {

  	
	system("clear");
    system("toilet -f pagga --gay ORDINALES");
    int numero;

    do {
        printf ("                                                                 \r");
        printf ("Dime un numero y te lo muestro en ordinal: ");
        scanf ("%i", &numero);
        fflush (stdout);
        printf ("\x1B[1A");
    } while (numero < 0);
    printf ("\n");

    printf ("El ordinal es \n");
    imprime_ordinal(numero);
    printf ("\n");

}

/* PUNTEROS A FUNCIONES */

enum TOpcion {primeraf, casa, FTriangulo, FCuadrado};
const char *nombre[] = {"F1", "F2", "FTriangulo", "FCuadrado"};

double Funcion1 (double x, double) {
    return 2*x * 5;
}

double Funcion2 (double x, double) {
    return 5*pow(x,2) + 3*x -2;
}

double Triangulo(double x , double y) {
    return x * y / 2;
}

double Cuadrado(double x , double y) {
    return x * y;
}


double (*eleccion[])(double, double) = {&Funcion1, &Funcion2, &Triangulo, &Cuadrado};
enum TOpcion Menu () {
	int opcion;
    do {

	printf("ELIGE UNA DE LAS OPCIONES\n");
		    printf ( 	"\tPrimera funcion 		1 --> 2x*5\n"
				        "\tSegunda funcion   		2 --> 5x² + 3x -2\n"
				        "\tTercera funcion 		3 --> Area del Triangulo\n"
				        "\tCuarta funcion		4 --> Area del Cuadrado\n"
            			"Opcion : "
            			"\n\n"
            		);
            scanf ("%i", &opcion);
    } while (!exit);
    opcion --;
    return (enum TOpcion) opcion;
}


void Pedir2Datos (double *x, double *y) {
    printf("Dime valor para la x: ");
    scanf ("%lf", x);
    printf("Dime valor para la y: ");
    scanf ("%lf", y);
}

void Pedir1Datos(double *x, double *y) {
    printf ("Dime la x:" );
    scanf ("%lf", x);
}

void PunterosFunciones()
{
    /* code */
    system ("clear");
    double x, y;
    double (*area) (double, double);

    enum TOpcion opcion = Menu();
    area = eleccion[opcion];

    if (opcion == 0 || opcion == 1){
        Pedir1Datos(&x, &y);
    } else 
        Pedir2Datos(&x, &y);
    printf ("El resultado es %.2lf\n", (*area)(x, y));
    
}

/* PUNTEROS A ARRAYS*/

void imprimir (int *a[N]) {
    for (int i=0; i<N; i++)
        printf ("%i", *a[i]);
    printf ("\n");
}


void OrdenarNumeros() {
	system("clear");
	system ("toilet -f pagga --gay O. NUMEROS");
	int A[N];
    int *o[N];

    /* Genera numeros aleatorios */
    srand(time (NULL));
    for (int i=0; i<N; i++)
    	A[i] = rand () % 20 + 1;

    for (int i=0; i<N; i++)
        o[i] = &A[i];
    printf ("\nMuestra array sin ordenar\n");
    imprimir (o);
    for (int p=0; p<N-1; p++)
        for (int i=0; i<N-1; i++){
            if (*o[i] < *o[i+1]) {
                int *b = o[i+1];
                o[i+1] = o[i];
                o[i] = b;
            }
        }
    printf("\nMuestra el array ordenado\n");
    imprimir(o);
}

const char *lista[] = {
	"Windows",
	"es",
	"Mejor",
	"que",
	"linux",
	NULL
};
void imprimir_palabra (const char *a[]) {
    for (int i=0; lista[i]!=NULL ; i++)
        printf ("%s ", lista[i]);
    printf ("\n");
}

void OrdenarPalabras() {

	system("clear");
	system ("toilet -f pagga --gay O. PALABRAS");
    int menor;


    imprimir_palabra (lista);
    for (int p=0; lista[p+1]!=NULL; p++){
    	menor = p;
        for (int i=p+1; lista[i]!=NULL ; i++)
            if (strcasecmp(lista[i] , lista[menor]) < 0 )
            	menor = i;
            if (menor > p)
            {
            	const char *aux = lista[p];
            	lista[p] = lista[menor];
            	lista[menor] = aux;

            }
    }
        
    printf("\nMuestra el array ordenado\n");

    imprimir_palabra(lista);
}


void PunterosArrays () {
	system("clear");
	system ("toilet -f pagga --gay PUNTEROS_ARRAYS");
	int opcion;
	bool exit = false;
	do {
		printf ("HOLA, EN ESTE BONITO PROGRAMA PUEDES HACER DE TODO\n\n");
       	printf ("QUE OPCION QUIERES\n"
            "\n"
            "\t1.- Ordenacion de numeros\n"
            "\t2.- Ordenacion de palabras\n"
            "\t3.- Irse a casita \n"
            "\n"
            "Opcion: ");
    	scanf ("%i", &opcion);

    	switch (opcion) {
    		case 1:
    			OrdenarNumeros();
    			break;
    		case 2: 
    			OrdenarPalabras();
    			break;
    		case 3:
    			printf ("GRACIAS POR VENIR");
    			exit = true;
    	}

	} while (!exit);

}




/* MATRICES */

void pedir_datos(double m[3][3]) {
    
    for (int fila=0; fila<3; fila++)
        for (int columna=0; columna<3; columna++){
            printf (" Elemento (%i, %i): ", fila + 1, columna + 1);
            scanf ("%lf", &m[fila][columna]);
        }
}

void imprimir_datos(double m[3][3]) {

    printf ("\n\n");
    for (int fila=0; fila<3; fila++){
        for (int columna=0; columna<3; columna++)
            printf ("  |%6.2lf|  ", m[fila][columna]);
        printf ("\n");    
    }
    printf("\n\n");

}

int der (int columna) {
    if (columna < 0)
        return columna + 3;
    return columna;
}

void Matrices() {

    
	system("clear");
	system ("toilet -f pagga --gay MATRICES");
    double matriz[3][3];
    double determinante = 0, det1 = 0, producto;

    pedir_datos (matriz);
    

    for (int j=0; j<3; j++) { /* o: offset. Dice si empiezo en la col 0 en la 1 o en la 2 la diagonal. */
            producto = 1;
            for (int n=0; n<3; n++)  /* Número de elemento dentro de la diagonal */
                    producto *= matriz[n][(n+j) % 3];
            determinante += producto;
        }

    for (int j=N-1; j>=0; j--){
        producto = 1;
        for (int n=0; n<3; n++)
            producto *= matriz[n][der (3 - 1 - n - j)];
        det1 -= producto;
    }


    imprimir_datos (matriz);
    printf ("\n\n Determinante(suma) = %.2lf\n\n", determinante);
    printf("\n\n Determinante(resta) = %.2lf\n\n", det1);
    printf("\n\n");

}





int main (int argc, char *argv[]) {

    title();
    int opcion;
    bool exit = false;
    do {
    	title();
        printf ("HOLA, EN ESTE BONITO PROGRAMA PUEDES HACER DE TODO\n\n");
       	printf ("QUE OPCION QUIERES\n"
            "\n"
            "\t1.- Fibonacci\n"
            "\t2.- Numeros Primos\n"
            "\t3.- Numeros Ordinales\n"
            "\t4.- Punteros a Funciones\n"
            "\t5.- Punteros a Arrays\n"
            "\t6.- Matrices\n"
            "\t7.- Irse a casita \n"
            "\n"
            "Opcion: ");
    	scanf ("%i", &opcion);
        
        switch (opcion) {
            case 1:
                Sucesion_Fibonacci();
                printf("\nTe dejo 10 segundos para comprobar el resultado\n");
                system ("sleep 10");          
                break;
            case 2:
                Primos();
                printf("\nTe dejo 10 segundos para comprobar el resultado\n");
                system ("sleep 10"); 
                break;
            case 3:
                Numeros_Ordinales();
                printf("\nTe dejo 10 segundos para comprobar el resultado\n");
                system ("sleep 10"); 
                break;
            case 4:
                PunterosFunciones();
                printf("\nTe dejo 10 segundos para comprobar el resultado\n");
                system ("sleep 10"); 
                break;
            case 5:
            	PunterosArrays();
            	printf("\nTe dejo 10 segundos para comprobar el resultado\n");
            	system ("sleep 10");
            	break;
            case 6: 
            	Matrices();
            	printf("\nTe dejo 10 segundos para comprobar el resultado\n");
            	system ("sleep 10");
            	break;
            case 7:
            	printf ("GRACIAS POR APROBARME TXEMA ♥");
            	exit = true;
            	break;
            }
        } while (!exit);
        printf("\n");
    return EXIT_SUCCESS;
}


