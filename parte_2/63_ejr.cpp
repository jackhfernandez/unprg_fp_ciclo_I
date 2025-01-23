/* Generar e imprimir una lista con la tabla de multiplicar de un número
   determinado que se introducirá por teclado.
   * Imprimir el elemento que ocupa la tercera posición
   Fernandez */

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
  int n; // variable a multiplicar
  const int size = 12;
  int L[size];

  cout << "Imprimir tabla de multiplicar nro n\n" << endl;
  cout << "Ingrese un numero: ";
  cin  >> n;

  // Ingresar los elementos al arreglo
  for ( int i = 0; i < size; ++i ) {
    L[i] = n * i;
  }

  // Imprimir el arreglo
  cout << "\nTabla del " << n << endl << endl;
  for ( int i = 0; i < size; ++i ) {
    cout << n << " x " << setw(2) << i << " = " << setw(2) << L[i] << endl;
  }

  // Imprimir elemento que ocupa la 3ro posicion
  for ( int i = 0; i < size; ++i ) {
    if ( (i+1) == 3) cout<< "\nElemento en la posicion " <<i+1<<" es "<<L[i] <<endl;
  }

  return 0;
}