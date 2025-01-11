/* Imprimir los números que pertenecen a la serie 1, 3, 6, 10… número
determinado de elementos. En cada línea se imprimirán cinco números.
Calcular su suma. */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int n, suma=0; // Variable almacena cantidad de termninos
  cout<<"\nPrograma para imprimir una serie y mostrar su suma"<<endl;
  cout<<"\nIngrese el numero de terminos que deseas imprimir: ";
  cin >>n;

  cout<<"\nLos numeros de la serie son: \n"<<endl;

  for (int i=1; i<=n; i++) {
    cout << setw(2) << ( i * (i + 1)) / 2<<" ";
    suma += ( i * (i + 1)) / 2;

    if (i % 5 == 0) {
      cout << endl;
    }
  }
 
  cout<<"\n\nLa suma es "<<suma<<endl;

  return 0;
}