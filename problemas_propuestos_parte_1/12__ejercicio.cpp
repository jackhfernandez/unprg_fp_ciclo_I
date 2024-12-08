// Imprimir y sumar los números desde el cero hasta un número determinado, excepto
// los múltiplos de 5. Imprimir el valor de la suma de los múltiplos de 5.

#include <iostream>
using namespace std;

void recibir_numero(int &n);
void mostrar(int &n, int &c);

int main() {
  int a=0; int c=0;
  recibir_numero(a);
  mostrar(a,c);

  return 0;
}

void recibir_numero(int &n) {
  cout<<"Programa para mostrar numeros desde 0 hasta n excepto mult de 5"<<endl;
  cout<<"Ingrese n: ";
  cin >>n;
}

void mostrar(int &n, int &c) {
  for (int i=0; i<=n; i++) {
    if (i%5!=0) { cout<<i<<" "; }
    else { c+=i; }
  }
  cout<<"\nLa suma de los multiplos de 5 es "<<c<<endl;
}