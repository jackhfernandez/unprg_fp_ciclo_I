/* Introducir una serie de números. Sumar los múltiplos de 5.
Cuál es el mayor y cuantos números se han introducido. */

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void almacenar_numeros(vector<int>& numeros);
int sumar_multiplos_5(const vector<int>& numeros);
int mostrar_mayor(const vector<int>& numeros);
int contar_numeros(const vector<int>& numeros);
void mostrar_vector(const vector<int>& numeros);

int main() {

  int suma; int cantidad; int mayor;
  vector<int> numeros;

  almacenar_numeros(numeros);
  suma = sumar_multiplos_5(numeros);
  cantidad = contar_numeros(numeros);
  mayor = mostrar_mayor(numeros);

  mostrar_vector(numeros);

  cout<<"\n\nLa suma de los mult de 5 es "<<suma<<endl;
  cout<<"\nEl mayor es "<<mayor<<endl;
  cout<<"\nLa cantidad de nros introducidos es "<<cantidad<<endl;

  return 0;
}

void  almacenar_numeros(vector<int>& numeros) {
  int numero; char continuar;

  do {
    cout<<"Programa para ingresar una serie de nros realizar operaciones"<<endl;
    cout<<"\nIngresa un numero: ";
    cin >>numero;
    numeros.push_back(numero);

    cout<<"Quieres ingresar otro numero (s/n): ";
    cin >> continuar;
  } while (continuar=='s' || continuar=='S');
}

void mostrar_vector(const vector<int>& numeros) {
  cout<<"\nLos numeros ingresados son: ";
  for (int n : numeros) {
    cout<<n<<" ";
  }
}

int sumar_multiplos_5(const vector<int>& numeros) {
  int suma=0;
  for (int numero : numeros ) {
    if (numero%5==0) {
      suma+=numero;
    }
  }
  return suma;
}

int mostrar_mayor(const vector<int>& numeros) {
  int mayor = INT_MIN;
  for (int numero : numeros ) {
    if (numero > mayor ) {
      mayor = numero;
    }
  }
  return mayor;
}

int contar_numeros(const vector<int>& numeros) {
  return numeros.size();
}
