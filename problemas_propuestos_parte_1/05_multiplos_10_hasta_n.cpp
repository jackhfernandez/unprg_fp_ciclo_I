#include <iostream>
// Mostrar, contar y sumar los multiplos de 10 hasta n

int n;int c=0; int s=0; int i;
using namespace std;

int multiplos(int a);

int main() {
  int m;
  cout<<"Programa para mostrar, contar y sumar multiplos de 10 hasta n"<<endl;
  cout<<"Ingrese n: ";
  cin >>n;
  multiplos(n);
  cout<<"\nLa suma es "<<s<<endl<<endl;
  cout<<"La cantidad de multiplos entre 10 y "<<n<<" es "<<c<<endl;

  return 0;
}

int multiplos(int a) {
  for (i=10; i<=n; i++) {
    if (i%10==0) {
      c++;
      s+=i;
      cout<<i<<" ";
    }
  }
  return i;
}