#include <iostream>
// Calcular la suma de los cuadrados pares de 0 a 100

using namespace std;

int s=0; int a=0;

// Funcion para sumar los cuadrados
int suma_cuadrados() {
  for (int i=0; i<=100; i++) {
    if (i%2==0)
      s+=i*i;
  }
  return s;
}

int main() {
  cout<<"Programa para mostrar la suma de cuadrados pares de 0 a 100\n"<<endl;

  a = suma_cuadrados();
  cout<<"La suma de los cuadrados es "<<a<<endl;

  return 0;
}