// Programa para ingresar numeros y verificar que sean mayores que 10

#include <iostream>
#include <vector>
using namespace std;

// Funcion para guardar numeros ingresados en vector
void almacenar_numeros(vector<int>& numeros);
// Funcion para verificar si son mayores a 10
void mostrar_resultados(const vector<int>& numeros, int &numero_base);

int main() {
  int numero_base=10;
  vector<int> numeros;

  cout<<"Programa para ingresar numeros y verificar que sean mayores que 10"<<endl;
  almacenar_numeros(numeros);
  mostrar_resultados(numeros, numero_base);

  return 0;
}

void almacenar_numeros(vector<int>& numeros) {
  int numero; char continuar;

  do {
    cout<<"Ingrese un numero: ";
    cin >> numero;
    numeros.push_back(numero);

    cout<<"Quieres agregar otro numero? (s/n): ";
    cin >>continuar;
  } while (continuar=='s' || continuar=='s');
}

void mostrar_resultados(const vector<int>& numeros, int &numero_base) {
  cout<<"\nResultados"<<endl;

  for (int numero : numeros) {
    if (numero > numero_base) {
      cout<<numero<<" es mayor que "<<numero_base<<endl;
    } else if (numero < numero_base) {
      cout<<numero<<" es menor que "<<numero_base<<endl;
    } else {
      cout<<numero<<" es igual a "<<numero_base<<endl;
    }
  }
}