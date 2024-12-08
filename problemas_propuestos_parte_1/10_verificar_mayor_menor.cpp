/* Introducir tantos números como queramos. Decir si son mayores o menores que un
 número que previamente introduciremos por teclado.*/

#include <iostream>
#include <vector>
using namespace std;

void ingresar_base(int &numero_base);
void almacenar_numeros(vector<int>& numeros);
void mostrar_resultados(const vector<int>& numeros, int &numero_base);

int main() {

	vector<int> numeros;
	int numero_base;
	cout<<"Programa para verificar si una serie de numeros es mayor que n"<<endl;

	ingresar_base(numero_base);
	almacenar_numeros(numeros);
	mostrar_resultados(numeros, numero_base);

	return 0;
}

void ingresar_base(int &numero_base) {
	cout<<"Ingrese el numero base: ";
	cin >>numero_base;
}

void almacenar_numeros(vector<int>& numeros) {
	int numero; char continuar;

	do {
		cout<<"Ingrese un numero: ";
		cin >>numero;
		numeros.push_back(numero);

		cout<<"Quieres agregar otro numero? (s/n): ";
		cin >>continuar;
	} while (continuar=='s' || continuar=='S');
}

void mostrar_resultados(const vector<int>& numeros, int &numero_base)  {
	cout<<"\nResultados"<<endl;
	for (int numero : numeros) {
		if (numero > numero_base) {
  	  cout<< numero << " es mayor que "<< numero_base<<endl;
		} else if (numero < numero_base) {
				cout<< numero << " es menor que "<<numero_base<<endl;
		} else {
				cout<< numero << " es igual a " << numero_base<<endl;
		}
	}
	
	
}