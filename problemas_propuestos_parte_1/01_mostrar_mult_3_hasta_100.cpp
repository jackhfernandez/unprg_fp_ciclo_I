#include <iostream>
// Hacer un programa que imprima y cuente multiplos de 3 que hay entre 1 y 100

using namespace std;
int a; int c=0;

int contar_mostrar(int x);

int main() {
	int a;
	cout<<"Programa para mostrar multiplos de un nro 'n' hasta 100"<<endl;
	cout<<"Ingrese un numero: ";
	cin >>a;
	contar_mostrar(a);
	cout<<"\nCantidad de multiplos de "<<a<<": "<<c<<endl;
			
	return 0;
}

int contar_mostrar(int a) {
	for (int i=1; i<=100; i++) {
		if (i%a==0){
			 	c++;
				cout<<i<<" ";		
		}
	}
	return c;
}