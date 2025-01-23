/* Imprimir la lista del ejercicio anterior empezando a
   recorrerla desde la última posición.
   Fernandez */

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
  const int size = 50;
  int L[size];

  cout << "\nImprimir lista desde el final\n" << endl;

  // Llenar la lista con elementos
  for ( int i = 0; i < size; ++i) {
    L[i] = i + 1;
  }

  // Imprimir la lista desde el final
  for ( int i = size - 1; i >= 0; --i) {
    cout << setw(2) << L[i] << " ";
    if ( i % 10 == 0) cout << endl;
  }

  return 0;
}