// Hallar el factorial de un numero

#include <iostream>
using namespace std;

void recibir_numero(int &n) {
  cout<<"Programa para calcular el factorial de un numero"<<endl;
  cout<<"Ingrese un numero:";
  cin >>n;
}

void factorial(int &n) {
  int x=1;
  for (int i=1; i<=n; i++)
    x*=i;
  cout<<"\nEl factorial de "<<n<<" es "<<x<<endl;
}

int main() {
  int a;
  recibir_numero(a);
  factorial(a);

  return 0;
}