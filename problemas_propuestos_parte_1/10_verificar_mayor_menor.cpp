#include <iostream>
#include <vector>
using namespace std;

int main() {
	int numeroBase;
	cout<<"Ingrese el numero base: ";
	cin >>numeroBase;
	
	vector<int> numeros; // Vector para almacenar los nros ingresados
	
	int numero;
	char continuar;
	
	do {
		cout<<"Ingrese un numero: ";
		cin >>numero;
		numeros.push_back(numero);
		
		cout<<"Deseas ingresar otro numero? (s/n): ";
		cin >> continuar;
				
	} while (continuar == 's' || continuar == 'S');
	
	cout<<"\nResultados de la comparacion: "<<endl;
	for (int num : numeros) {
		if (num > numeroBase) {
  	  cout<< num << " es mayor que "<< numeroBase<<endl;
		} else if (num < numeroBase) {
				cout<< num << " es menor que "<<numeroBase<<endl;
		} else {
				cout<< num << " es igual a " << numeroBase<<endl;
		}
	}
	return 0; 
}