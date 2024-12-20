/* Programa para calcular si un numero es primo
usando punteros y banderas adicionales */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n, i, c=0, *dir_n;
	int b=0; // supone que es primo
	int d=0; // el numero divisible
	
	cout<<"Programa para determinar si un numero es primo o no"<<endl;
	cout<<"Ingrese el numero: ";
	cin >>n;
	dir_n = &n;
	
	for (i=2; i<int(sqrt(n))+1 && b==0; i++) {
		
		if (*dir_n%i==0) {
			 c += 1;
			 b=1; // afirma que no es primo
	 		 d=i; // n es divisible por  			 
		}	
	}
	cout<<"\nNro de veces que se ejecuto la division "<<c<<endl;
	
	if (b==0)
    cout<<"Es primo"<<endl;
  else
    cout<<"No es primo, es divisible por "<<d<<endl;
    
	cout<<"La direccion: "<<dir_n<<endl;
	
	return 0;
}