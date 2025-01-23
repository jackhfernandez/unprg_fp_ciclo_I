/* Fernandez
   Imprimir, sumar y contar los elementos impares
   que ocupan las posiciones pares de la lista anterior */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int size = 50; // Tamano de la lista
  int suma = 0, contador = 0;  // Variable suma
  int L[size];   // Declaro el arreglo
  
  cout << "\nMostrar y contar los elementos impares\n" << endl;

  // Agregar elementos al arreglo
  for ( int i = 0; i < size; ++i ) {
    L[i] = i + 1;
    
  }

  // Mostrar suma y elementos impares
  for ( int j = 0; j < size; ++j ) {
    if ( L[j] % 2 == 1) {
      ++contador;
      cout << setw(2) << L[j] << " ";
      suma += j + 1;
    }
    if ( (j + 1) % 10 == 0 ) cout << endl; // Dar salto de linea
  }
  cout << "\nLa suma es " << suma << endl;
  cout << "\nLa cantidad de elementos es " << contador << endl;

  return 0;
}