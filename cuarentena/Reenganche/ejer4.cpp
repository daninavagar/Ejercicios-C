#include <stdio.h>
#include <stdlib.h>

void title () {
	system("clear");
	system("toilet -f pagga ASCII");
}


int main (int argc, char *argv[]) {

	title();

	char word[30];
	int i;
	printf("CUAL ES TU PALABRA: "); 
   	scanf("%s", word);
   
   	for (i = 0; word[i] != '\0'; i++)
      	printf("word[%d] --> \'%c\' --> %3d\n", i, word[i], word[i]);

    return EXIT_SUCCESS;
}
