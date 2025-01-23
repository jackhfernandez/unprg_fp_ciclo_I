/* Fernandez
Imprimir los elementos pares de la lista numérica L (50).
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  const int size = 50; // Tamano del arreglo
  int L[size];         // Declaracion arreglo

  for (int i = 0; i < size; ++i) {
    L[i] = i + 1;      // Agrega elementos al arreglo
  }

  cout << "\nPrograma para mostrar elementos pares de una lista" << endl;

  for (int i = 0; i < size; ++i) {
    if (L[i] % 2 == 0) {
      cout << setw(2) << L[i] << " "; //  Muestra los pares
    }
    if ( i % 10 == 0 ) cout << endl;  // Dar salto de linea mult de 10
  }
  cout << endl;

  return 0;
}