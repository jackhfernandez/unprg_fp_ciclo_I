/* Imprimir la tabla de multiplicar de 7 y del 9 */

#include <iostream>
#include <iomanip>

using namespace std;
int main() {
	int n;
	cout<<"\nPrograma que muestra la tabla de multiplicar del 7 y del 9"<<endl;
	cout<<"\nTabla de multiplicar desde el 0 hasta: ";
	cin >>n; cout<<"\n";

	for (int i=0; i<=n; i++) {
		cout<<"\t7 x "<<setw(2)<<i<<" = "<<setw(2)<<7*i<<"         ";
		cout<<"9 x "<<setw(2)<<i<<" = "<<setw(2)<<7*i<<endl;		 
	}
	
	return 0;
}