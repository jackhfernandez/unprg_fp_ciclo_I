#include <iostream>
// Programa para mostrar multiplos de 4 y 7 menores que 1000 y mayores que 300

using namespace std;
int main() {
	int c=0; int i;
	
	for (i=28 ;i<1000; i++ ) {
		if (i%4==0 and i%7==0) {
			 c++;
			 cout<<i<<endl;
		}
	}
	cout<<"\nCantidad de multiplos en este rango: "<<c<<endl;
	return 0;
}
