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

enum TOpcion {Funcion1, Funcion2, FTriangulo, FCuadrado};
const char *nombre[] = {"Funcion1", "Funcion2", "FTriangulo", "FCuadrado"};



void Pedir2Datos(double *a, double *b) {
	printf ("Valor para a: ");
	scanf ("%lf", a);
	printf ("Valor para b: ");
	scanf ("%lf", b);
}


double Funcion1(double a, double b){
    return 2*a *5;
}

double Funcion2(double a, double b){
    return 5*pow(a,2) + 3*a -2;
}

double FTriangulo(double a , double b) {
	return a * b / 2;
}

double FCuadrado(double a , double b) {
	return a * b;
}

double F (double, double) {
	fprintf(stderr, "introduce un numero corrrecto\n");
	exit(1);
}

double (*func[]) (double, double) = { &Funcion1, &Funcion2, &FTriangulo, &FCuadrado, &F};
enum TOpcion Menu () {
	int opcion;
	printf("ELIGE UNA DE LAS OPCIONES\n");
		    printf ( 	"\tFuncion1 		1 --> 2x*5\n"
				        "\tFuncion2   		2 --> 5x² + 3x -2\n"
				        "\tFTriangulo 		3 --> Area del Triangulo\n"
				        "\tFCuadrado 		4 --> Area del Cuadrado\n"
				        // "\tF     			5 --> SALIR\n"
            			"Opcion : "
            			"\n\n"
            		);
            scanf ("%i", &opcion);
    opcion --;
    return (enum TOpcion) opcion;
}

void PunterosFunciones() {

    system("clear");
    system("toilet -f pagga --gay P. FUNCIONES");
    double a, b;
    
    double (*funcion) (double, double) = &F;
    enum TOpcion opcion = Menu ();
    funcion = fun[opcion];

    Pedir2Datos(&a, &b);

    printf ("El resultado es: %.2lf \n", nombre[opcion], (*func)(a, b));
    

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
	int A[N] = {1,2,5,3,7,4,6,9};
    int *o[N];

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
                system ("sleep 10");          
                break;
            case 2:
                Primos();
                system ("sleep 10"); 
                break;
            case 3:
                Numeros_Ordinales();
                system ("sleep 10"); 
                break;
            case 4:
                PunterosFunciones();
                system ("sleep 10"); 
                break;
            case 5:
            	PunterosArrays();
            	system ("sleep 10");
            	break;
            // case 6: 
            // 	Matrices();
            // 	system ("sleep 10");
            // 	break;
            case 7:
            	printf ("GRACIAS POR APROBARME TXEMA ♥");
            	exit = true;
            	break;
            }
        } while (!exit);
        printf("\n");
    return EXIT_SUCCESS;
}


