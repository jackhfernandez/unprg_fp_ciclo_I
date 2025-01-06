#include <iostream>
#include <stdlib.h> // new, delete

using namespace std;

int numCalif, *calif;

void pedirNotas() {
  cout<<"Ingrese el numero de notas: ";
  cin >>numCalif;

  calif = new int[numCalif]; // Crear arreglo

  for(int i=0; i<numCalif; i++) {
    cout<<"Ingrese una nota: ";
    cin >>calif[i];
  }
}

void mostrarNotas() {
  cout<<"\n\nMostrando notas\n"<<endl;
  for (int i=0; i<numCalif; i++) {
    cout<<calif[i]<<endl;
  }
}

int main() {
  pedirNotas();
  mostrarNotas();

  delete[] calif; // liberar memoria utilizados en el array

  return 0;
}