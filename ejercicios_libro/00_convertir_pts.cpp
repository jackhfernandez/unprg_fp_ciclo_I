#include <iostream>
using namespace std;
const double EURO_PZT = 166.386;
int main() {
	float euros, pesetas;
	cout << "Programa para convertir euros a pesetas"<<endl;
	cout << "Ingrese la cantidad en euros: ";
	
	cin  >> euros;
	pesetas = euros*EURO_PZT;
	
	cout << euros<<" equivalen a "<< pesetas<< " pts"<< endl;

	return 0;
}