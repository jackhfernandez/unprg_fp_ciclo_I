/* Dados dos números imprimir sus tablas de multiplicar de forma alternativa.*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int num1, num2; // Variables de las cuales se va a mostrar la multiplicacion
  int hasta = 12; // Numero hasta el cual se va a multiplicar

  // Solicitar los números al usuario
  cout<<"Programa para mostrar la tabla de multiplicar de dos numeros\n"<<endl;
  cout<<"Ingrese el primer numero: ";
  cin >>num1;
  cout<<"Ingrese el segundo numero: ";
  cin >>num2;

  // Imprimir las tablas de multiplicar de forma alternada
  cout << "\nTablas de multiplicar de "<<num1<<" y "<<num2<<":\n"<<endl;
  for (int i = 1; i <= hasta; ++i) {
    cout<<setw(2)<<num1<<" x "<<setw(2)<<i<< " = "<< setw(3)<<num1 * i <<"\t";
    cout<<setw(2)<<num2<<" x "<<setw(2)<<i<<" = "<< setw(3)<<num2 * i<<endl;
  }

  return 0;
}