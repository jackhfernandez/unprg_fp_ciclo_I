#include <iostream>
using namespace std;

int main() {
	float a,b,c;
	cout<<"Programa para determinar el mayor de tres numeros"<<endl;
	cout<<"Ingrese los numeros: ";
	cin >>a>>b>>c;
	
	int mayor=a;
	
	if (b>mayor)
	  mayor=b;
		  
  if (c>mayor)
	  mayor=c;
		  
	cout<<"El mayor es "<<mayor;
	 
	return 0;
}