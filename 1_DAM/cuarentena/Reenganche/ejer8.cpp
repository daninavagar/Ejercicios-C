#include <stdio.h>
#include <stdlib.h>

void title () {
	system("clear");
	system("toilet -f pagga DIVISIBLES");
}


int main (int argc, char *argv[]) {

	title();
	int number = 2;
	int j;
	for (int i; number < 100; i++){
		number = number + 3;
		printf("Numero: %i \n", number);
		if (number%5 == 0){
			j = number;
			number = j + number;
			printf("Suma: %i \n", number);
		}
	}


    return EXIT_SUCCESS;
}
