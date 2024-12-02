#include <iostream>
// Hacer un programa que imprima y cuente multiplos de 3 que hay entre 1 y 100

using namespace std;
int c=0; int i; int n;int a;

int contar_mostrar() {
	for (i=1; i<=100; i++) {
		if (i%a==0){
			 	c++;
				cout<<i<<endl;		
		}
	}
	return i;
}

int main() {
	cout<<"Programa para mostrar multiplos de un nro 'n': "<<endl;
	cout<<"Ingrese un numero: ";
	cin >>a;
	n = contar_mostrar();
	cout<<"Cantidad de multiplos de "<<a<<": "<<c<<endl;
			
	return 0;
}