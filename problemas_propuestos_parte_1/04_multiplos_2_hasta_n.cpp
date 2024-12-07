#include <iostream>
//Imprimir, contar y sumar los multiplos de 2. desde 1 hasta 'n'

using namespace std;
int n=0; int s=0; int c=0; int i;

int multiplos() {
	for (i=2; i<=n; i++){
		if (i%2==0) {
  	  c++;
		  s+=i;
		  cout<<i<<endl; 
		}
	}
	return i;
}

int main() {
	cout<<"Programa para mostrar los multiplos de 2. Desde 1 hasta n"<<endl;
	cout<<"\nIngrese n: ";
	cin >>n;
	
	multiplos();
	cout<<"Cantidad de nros: "<<c<<endl; cout<<"La suma es: "<<s;
	
	return 0;
}