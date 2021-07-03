#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void title () {
	system("clear");
	system("toilet -f pagga RGB");
}

int main (int argc, char *argv[]) {

	title();
	char color = '8';
	printf("Introduce la inicial de un color (r, g, b): \n");
	scanf ("%c", &color);

	switch (tolower(color)) {
		case 'r':
				printf(" Has elegido 'r' \n");
				break;
		case 'g':
				printf("Has elegido 'g' \n");
				break;
		case 'b':
				printf("Has elegido 'b' \n");
				break;
		default:
				printf("No valido\n");
	}

    return EXIT_SUCCESS;
}
