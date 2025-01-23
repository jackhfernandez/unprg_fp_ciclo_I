/* Fernandez
   Imprimir los elementos, así como la posición que ocupan los elementos de la
   lista anterior, que sean al mismo tiempo múltiplos de 2 y de 3.
   Calcular su suma */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  // Declarando arreglo y su tamano. Variable contador
  const int size = 50;
  int L[size];
  int contador = 0, suma = 0;

  cout << "\nMostrar numeros mult de 2, 3 y su suma\n" << endl;

  // Dar valores a la lista
  for (int i = 0; i < size; ++i) {
    L[i] = i + 1;
  }

  // Mostar posicion, elementos y suma
  for ( int i = 0; i < size; ++i) {
    ++contador; // Variable para mostrar la posicion
    if ( (L[i] % 2 == 0) && (L[i] % 3 == 0) ) {
      suma += i + 1;
      cout << "Posicion " << setw(2) << contador << " --> " << setw(2) << L[i] << endl;
    }
  }
  cout << "\nLa suma es " << suma << endl;

  return 0;
}