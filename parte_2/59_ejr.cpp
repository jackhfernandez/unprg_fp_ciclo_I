/* Fernandez
Imprimir los elementos pares de la lista numérica L (50).
*/

#include <iostream>
using namespace std;

int main() {
  const int size = 50; // Tamano del arreglo
  int L[size];         // Declaracion arreglo

  for (int i = 0; i < size; ++i) {
    L[i] = i + 1;      // Agrega elementos al arreglo
  }

  cout << "Programa para mostrar elementos pares de una lista\n" << endl;

  for (int i = 0; i < size; ++i) {
    if (L[i] % 2 == 0) {
      cout << L[i] << " "; //  Muestra los pares
    }
  }
  cout << endl;

  return 0;
}