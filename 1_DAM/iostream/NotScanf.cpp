#include <iostream>
using namespace std; // El espacio de nombres 'std' es un contenedor donde estan todas las funciones de <iostream>

int main (int argc, char *argv[]/* Si no sabes lo que es ignoralo, no es importante ahora*/) {
  int a;
  char b; /* Declaro dos variables pa que veas que funciona con todo */
  cout << "Introduce un numero: "; /* Esto es un printf */
  cin >> a; /* Eso es un scanf, dara error si metes algo que no sea un entero */
  cout << "El numero es el " << a << "." << endl; /* Asi se concatenan variables en cout, no necesitas formatearlo. [...] endl es un salto de linea, tambien se puede puner DENTRO DEL STRING un '\n' */
  cout << "\n\n"; /* pa que sepa */
  cout << "Introduce un caracter (SOLO UNO): ";
  cin >> b;
  cout << "El caracter es el " << b << "." << endl; /* Para que veas que funciona con char tambien */
  return 0;
}
