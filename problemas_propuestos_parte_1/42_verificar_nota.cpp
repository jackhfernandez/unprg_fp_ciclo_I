#include <iostream>
using namespace std;
int main() {
	int n; // nota
	cout<<"Programa mostrar tu nivel academico\n"<<endl;
	cout<<"Ingrese su nota (0-10): ";
	cin >>n;

	switch (n) {
		case (1): cout<<"\nMuy Insuficiente"<<endl; break;
		case (2): cout<<"\nMuy Insuficiente"<<endl; break; 
		case (3): cout<<"\nInsuficiente"<<endl; break;
		case (4): cout<<"\nInsuficiente"<<endl; break; 
		case (5): cout<<"\nSuficiente"<<endl; break;
		case (6): cout<<"\nSuficiente"<<endl; break; 
		case (7): cout<<"\nBien"<<endl; break;
		case (8): cout<<"\nBien"<<endl; break; 
		case (9): cout<<"\nExcelente"<<endl; break;
		case(10): cout<<"\nExcelente"<<endl; break; 
		default: cout<<"\nOpcion invalida!!!"<<endl;						 			 
  }
	return 0;
}