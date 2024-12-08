#include <iostream>
// Algoritmo que suma los nros impares de 0 a 100

using namespace std;
int i; int n; int s=0;

int suma_impares();

int main(){
	n = suma_impares();
	cout<<"\nLa suma de nros es: "<<n;
	return 0;
}

int suma_impares() {
	cout<<"Programa para mostrar la suma de impares de 0 a 100"<<endl;
	for (i=0; i<=100; i++) {
		if (i%2==1)
			 s+=i;
	}
	
	return s;
}