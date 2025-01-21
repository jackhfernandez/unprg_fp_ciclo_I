/* Fernandez
- Imprimir y sumar los elementos que ocupan las posiciones impares de la lista anterior.*/

#include <iostream>
using namespace std;

int main() {
  int size = 50;
  int L[size];

  for (int i = 0; i < size; ++i) {
    L[size] = i + 1; // Anadir elementos al arreglo
  }

  cout << "Programa para mostrar los impares y mostrar y su suama\n" << endl;

  for (int i = 0; i < size; ++i ) {
    if (L[size] % 2 == 1) {
      cout << L[size];
    }
  }

  return 0;
}