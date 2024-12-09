/* - Imprimir los múltiplos de tres que, entre dos números
determinados de una forma alternativa, es decir, uno si y otro no. */

#include <iostream>
using namespace std;

void recibir_numeros(int &a, int &b) {
  cout<<"\nPrograma para imprimir los multiplos de 3 de forma alternada"<<endl;
  cout<<"\nIngrese el  primer numero: ";
  cin >>a;
  cout<<"Ingrese el segundo numero: ";
  cin >>b;
}

void imprimir(int &a, int &b) {
  cout<<"\nLos multiplos de 3 de forma alternada son: "<<endl;
  int contador=0;
  for (int i=a; i<=b; i++) {
    if(i%3==0) {
      contador++;
          if(contador%2==1)
            cout<<i<<" ";
    }
  }
}

int main() {
  int a,b;

  recibir_numeros(a,b);
  imprimir(a,b);
  return 0;
}