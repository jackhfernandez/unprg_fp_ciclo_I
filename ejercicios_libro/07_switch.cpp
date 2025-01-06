#include <iostream>
using namespace std;

const double EUR_PTS = 166.386 ;
const double EUR_FRC = 6.55957 ;
const double EUR_MRC = 1.95583 ;
const double EUR_LIR = 1936.27 ;

int main() {
	char resp;
	cout<<"Programa para convertir monedas\n"<<endl;
	cout<<"Escriba 'p' para convertir de pesetas a Euros"<<endl;
	cout<<"Escriba 'f' para convertir de francos a Euros"<<endl;
	cout<<"Escriba 'm' para convertir de marcos a Euros"<<endl;
	cout<<"Escriba 'l' para convertir de liras a Euros"<<endl;
	cout<<"Ingrese una opcion: ";
	cin >>resp;
	cout<<"Introduce la cantidad a convertir: ";
	int cantidad, result;
	cin >>cantidad;
	
	switch (resp) {
		case 'p':
			result = cantidad * EUR_PTS; break;
		case 'f':
			result = cantidad * EUR_FRC; break;
		case 'm':
			result = cantidad * EUR_MRC; break;
		case 'l':
			result = cantidad * EUR_LIR; break;
		default : cout<<"Ingrese una opcion valida"<<endl; 	 
	}
	
	cout<<cantidad<<" equivale a "<< result<<endl;
	
	return 0;
}