// Verificar si un numero es par usando punteros

#include <iostream>
using namespace std;

int main() {
	int n, *dir_n;
	cout<<"Programa para calcular si un numero es par\n"<<endl;
	cout<<"Ingrese el numero: ";
	cin >>n;
	
	dir_n = &n;
	
	if (*dir_n%2==0) {
		cout<<*dir_n<<" es par"<<endl;
		cout<<"Su direccion en memoria es "<<dir_n<<endl;		 
	} else {
		cout<<*dir_n<<" es impar"<<endl;
		cout<<"Su direccion en memoria es "<<dir_n<<endl;						
	}
	
	return 0;
}