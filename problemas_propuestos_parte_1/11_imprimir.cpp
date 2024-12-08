// Imprimir y contar los números que hay del 1 al 100, excepto los múltiplos de 2.

#include <iostream>
using namespace std;

void imprimir(int &contador);

int main() {
  int s=0;
  cout<<"Programa para imprimir y contar numeros del 1 al 100 excepto los multiplos de 2"<<endl;
  imprimir(s);

  return 0;
}

void imprimir(int &contador) {
  cout<<"\n";
  for (int i=1; i<=100; i++) {
    if (i%2!=0) {
      contador++;
      cout<<i<<" ";
    }
  }
  cout<<"\nLa cantidad de numeros es "<<contador<<endl;
}