#include <iostream>
// Hacer un programa que imprima y cuente los multiplos de 5 entre 1 y 500.
using namespace std;
int i; int n; int c=0;

int multiplos();

int main() {
	cout<<"Programa para mostrar y contar los multiplos de un nro 'n' "<<endl;
	cout<<"\nIngrese el numero: ";
	cin >> n;
	multiplos();
	cout<<"\nLa cantidad de multiplos de "<<n<<" entre 1 y 500 es "<<c<<endl;
	
	return 0;
}

int multiplos() {
	for (i=1; i<=500; i++) {
		if (i%n==0) {
			 	c++;
			 	cout<<i<<" ";
		}
	}
	return i,c;
}