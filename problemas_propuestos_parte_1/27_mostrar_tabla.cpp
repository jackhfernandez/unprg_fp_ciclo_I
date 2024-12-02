#include <iostream>
#include <iomanip>

using namespace std;
int main() {
	int n;
	cout<<"Programa que muestra la tabla de multiplicar de 7 y 9"<<endl;
	cout<<"Tabla de multiplicar hasta: ";
	cin >>n; cout<<"\n";
	for (int i=0; i<=n; i++) {
		cout<<"7 x "<<setw(2)<<i<<" = "<<setw(2)<<7*i<<"         ";
		cout<<"9 x "<<setw(2)<<i<<" = "<<setw(2)<<7*i<<endl;		 
	}
	
	return 0;
}