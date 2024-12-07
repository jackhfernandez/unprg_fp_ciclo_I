#include <iostream>
// Mostrar, contar y sumar los numeros desde n hasta 500
using namespace std;

int i; int s=0; int c=0; int n;

int num_sep(int x);

int main() {
  cout<<"Programa para mostrar, contar y sumar los nros separados en 8 desde n hasta 500\n"<<endl;
  cout<<"Ingrese n: ";
  cin >>n; cout<<"\n";
  num_sep(n);
  cout<<"\n\nLa suma es "<<s<<endl;
  cout<<"\nLa cantidad de nros es "<<c<<endl;

  return 0;
}

int num_sep(int x) {
  for(i=n; i<=500; i+=8) {
    c++;
    s+=i;
    cout<<i<<" - ";
  }
  return i;
}