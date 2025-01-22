/* Fernandez
   Mostrar un arreglo 3d y llenarlos con numeros consecutivos
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
  int a = 3, b = 3, c = 3, el = 0, arr[a][b][c];

  cout << "\nPrograma para mostrar un arreglo 3d\n" << endl;

  // Llenar el arreglo Fernandez
  for ( int i = 0; i < a; ++i) {
    for (int j = 0; j < b; ++j) {
      for (int k = 0; k < c; ++k) {
        arr[i][j][k] = el;
        ++el;
      }
    }
  }

  // Mostar el arreglo Fernandez
  for ( int i = 0; i < a; ++i ) {
    for ( int j = 0; j < b; ++j) {
      for ( int k = 0; k < c; ++k) {
        cout << setw(2) << arr[i][j][k] << " ";
      }
      cout << endl;
    }
    cout << endl;
  }

  return 0;
}