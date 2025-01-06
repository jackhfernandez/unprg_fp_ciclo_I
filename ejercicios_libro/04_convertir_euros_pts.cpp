#include <iostream>
using namespace std;

const float EURO_PTS = 166.386;

int main() {
  cout<<"Programa para convertir de euros a pst y viceversa"<<endl;
	cout<<"Ingrese 'p' para convertir a pesetas y 'e' para convertir a euros: ";
	float cantidad, resultado; char resp;
	cin >>resp;
	
	cout<<"Ingrese la cantidad a convertir: ";
	cin >>cantidad;
	
	if (resp=='p')
	  resultado=cantidad*EURO_PTS;
  else resultado=cantidad/EURO_PTS;
  
  cout<<cantidad<< " equivale a "<<resultado<<endl;
	
	return 0;
}