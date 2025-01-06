/* Rellenar un array de 10 numeros,
utilizando punteros indicar los pares y sy posicion*/

#include <iostream>
using namespace std;

int main() {
  int numeros[10], *dir_numeros;

  for (int i=0; i<10; i++) {
    cout<<"Ingrese el valor en ["<<i<<"]: ";
    cin >>numeros[i];
  }

  dir_numeros = numeros; // Posicion en memoria donde comienza el array

  for (int i=0; i<10; i++) {
    if (*dir_numeros%2==0) {
      cout<<"El numero "<<*dir_numeros<<" es par"<<endl;
      cout<<"Posicion: "<<dir_numeros<<endl;
    }
    dir_numeros++;
    cout<<endl;
  }

  return 0;
}
