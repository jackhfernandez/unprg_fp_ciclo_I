#include <iostream>
// Algoritmo que suma los nros impares de 0 a 100

using namespace std;
int i; int n; int s=0;

int suma_impares();

int main(){
	n = suma_impares();
	cout<<"La suma de nros es: "<<n;
	return 0;
}

int suma_impares() {
	for (i=0; i<=100; i++) {
		if (i%2==1)
			 s+=i;
	}
	
	return s;
}