/* - Imprimir, sumar y contar los números que son a la vez múltiplos
de 2 y de 3, que hay entre la unidad y un determinado número. */

#include <iostream>
using namespace std;

void recibir_numero(int &n);
void multiplos(int &n, int &s, int &c);

int main() {
  int a; int s=0; int c=0;
  recibir_numero(a);
  multiplos(a,s,c );

  return 0;
}

void recibir_numero(int &n) {
  cout<<"Programa para imprimir, sumar y contar nros entre 1 y n que sean multiplos de 2 y 3"<<endl;
  cout<<"Ingrese n: ";
  cin >>n;
}

void multiplos(int &n, int &s, int &c) {
  cout<<endl;
  for (int i=1; i<=n; i++) {
    if (i%2==0 && i%3==0) {
      cout<<i<<" ";
      c++;
      s+=i;
    }
  }
  cout<<"\n\nLa cantidad de numeros es "<<c<<endl;
  cout<<"\nLa suma de estos  numeros es "<<s<<endl;
}