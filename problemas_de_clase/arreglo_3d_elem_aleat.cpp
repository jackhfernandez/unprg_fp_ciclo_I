/* Fernandez
   Imprimir un arreglo 3D y llenarlos con numeros aleatorios entre 1 y 999 */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int a = 3, b = 3, c = 3, max = 89, min = 10, arr[a][b][c];

  srand(time(NULL)); // Semilla numeros aleatorios Fernandez

  cout << "\nImprimir un arreglo 3D con numeros aleatorios\n" << endl;

  // Llenar al arreglo con numeros aleatorios
  for ( int i = 0; i < a; ++i) {
    for ( int j = 0; j < b; ++j) {
      for ( int k = 0; k < c; ++k) {
        arr[i][j][k] = (rand() % max) + min ;  
      }
    }
  }

  // Imprimir el arreglo Fernandez
  for ( int i = 0; i < a; ++i ) {
    for ( int j = 0; j < b; ++j ) {
      for ( int k = 0; k < c; ++k ) {
        cout << setw(4) << arr[i][j][k] << " ";
      }
      cout << endl;
    }
    cout << endl;
  }

  return 0;
}