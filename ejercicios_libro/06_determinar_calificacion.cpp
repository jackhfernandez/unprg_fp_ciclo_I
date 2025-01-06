#include <iostream>
using namespace std;

int main() {
	float nota;
	cout<<"Programa para detereminar tu calificacion"<<endl;
	cout<<"Ingrese su nota: "; cin>>nota;
	
	if (!((nota>=0.0) && (nota<=10.0)))
	  cout<<"Error: 0 <= n <= 10"<<endl;
  else if (nota>=9.5)
    cout<<"\nMatricula de honor"<<endl;
  else if (nota>=9.0)
    cout<<"\nSobresaliente"<<endl;
  else if (nota>=7.0)
    cout<<"\nNotable"<<endl;
  else if (nota>=5.0)
    cout<<"\nAprobado"<<endl;
  else
    cout<<"\nSuspenso"<<endl;
	
	return 0;
}