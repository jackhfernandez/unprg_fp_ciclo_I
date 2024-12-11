/* Hacer un programa o algoritmo que imprima, sume y cuente los números
pares entre dos números determinados de una forma alternativa. */

#include <iostream>
using namespace std;

void recibir_numeros(int &a, int &b) {
  cout<<"\nPrograma para imprimir y contar nros pares alternados"<<endl;
  cout<<"\nIngrese el primer  numero: ";
  cin >>a;
  cout<<"Ingrese el segundo numero: ";
  cin >>b;
}

void imprimir_sumar(int &a, int &b) {
  cout<<"\nMostrando pares alternados entre a y b\n"<<endl;
  int contador=0; int suma=0; int conta_alter=0;
  for (int i=a; i<=b; i++) {
    if (i%2==0) {
      contador++;
      if(contador%2==1) {
        conta_alter++;
        suma+=i;
        cout<<i<<" ";
      }
    }
  }
  cout<<"\n\nLa suma pares alternados es "<<suma<<endl;
  cout<<"\nLa cantidad de numeros es "<<conta_alter<<endl;
}

int main() {
  int a,b;

  recibir_numeros(a,b);
  imprimir_sumar(a,b);

  return 0;
}