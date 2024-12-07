#include <iostream>
// Mostrar la suma de cuadrados desde n hasta 100 con sep de 4

using namespace std;
int s=0; int a=0; int n;

// Funcion para mostrar los cuadrados
int suma_cuadrados(int a) {
  for (int i=n; i<=100; i+=4) {
    s+=i*i;
  }
  return s;
}

int main() {
  cout<<"Programa para mostrar cuadrados desde n hasta 100 con sep de 4"<<endl;
  cout<<"Ingrese n: ";
  cin >>n;
  a = suma_cuadrados(n);
  cout<<"La suma es "<<a<<endl;

  return 0;
}