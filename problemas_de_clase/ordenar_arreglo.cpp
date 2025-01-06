/* Pedir al usuario N numeros, almacenarlos en un arreglo dinamico
posteriormente ordenar los numeros en orden ascendente y mostrarlos en pantalla.
NOTA: utilizar cualquier metodo de ordenamiento */

#include <iostream>
#include <stdlib.h> // new, delete

using namespace std;

int nElementos, *elemento;

void pedirDatos();
void ordenarArreglo(int *, int);
void mostrarArreglo(int *, int);

int main() {
  pedirDatos();
  ordenarArreglo(elemento, nElementos);
  mostrarArreglo(elemento, nElementos);

  delete[] elemento; // Liberar espacio en memoria
  return 0;
}

void pedirDatos() {
  cout<<"Digite el numero de elementos del arreglo: ";
  cin >>nElementos;

  elemento = new int[nElementos];

  for (int i=0; i<nElementos; i++) {
    cout<<"Ingrese el valor ["<<i<<"]: ";
    cin >> *(elemento+i); // elemento[i]
  }
}

void ordenarArreglo(int *elemento, int nElementos) {
  int aux;

  // Ordenar el arreglo con el metodo burbuja
  for (int i=0; i<nElementos; i++) {
    for (int j=0; j<nElementos-1; j++) {
      if (*(elemento+j) > *(elemento+j+1)) {
        aux = *(elemento+j);
        *(elemento+j) = *(elemento+j+1);
        *(elemento+j+1) = aux;
      }
    }
  }
}

void mostrarArreglo(int *elemento, int nElementos) {
  cout<<"\n\nMostrando arreglo ordenado\n"<<endl;
  for (int i=0; i<nElementos; i++) {
    cout<<*(elemento+i)<<" - "; // elemento[i]
  }
}