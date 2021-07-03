#include <stdio.h>

int main(int argc, char *argv[])
{

	char *name;
	printf ("HOLA DIME TU NOMBRE DE: \n");
	scanf ("%s", &name);

	printf("tu nombre es: %s\n", &name);
	return 0;
}
