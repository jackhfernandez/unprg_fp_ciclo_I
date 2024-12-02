#include <iostream>
#include <cstdlib>
#include <ctime>
// TINKA: Mostrar 6 numeros entre 1 y 45
 
using namespace std;
int main () {
	
	srand(time(0)); // semilla para el numero aleatorio
	
	cout<<"Los numeros de la tinka son: "<<endl;
	
	for (int i=0; i<6; i++)
		cout<<(rand()%45+1)<<" ";
	
	return 0;
}