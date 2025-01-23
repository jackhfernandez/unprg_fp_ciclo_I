/* Fernandez
- Imprimir y sumar los elementos que ocupan las posiciones impares de la lista anterior.*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int size = 50, suma = 0; // Tamano del arreglo
  int L[size];             // Declarando el arreglo

  for (int i = 0; i < size; ++i) {
    L[i] = i + 1; // Anadir elementos al arreglo
  }

  cout << "\nPrograma para mostrar los impares y su suma\n" << endl;

  for (int i = 0; i < size; ++i ) {
    if (L[i] % 2 == 1) {
      cout << setw(2) << L[i] << " "; // Muestra los impares
      suma += i + 1;       // Muestra la suma de impares
    }
    if ( (i + 1) % 10 == 0) cout << endl;
  }
  cout << "\nLa suma de los impares es " << suma << endl;

  return 0;
}