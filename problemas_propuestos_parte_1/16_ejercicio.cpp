/* - Introducir una cantidad por teclado.
Si es menor de 500, sumarle el 50 por 100;
si es mayor o igual a 500 pero menor de 1000, sumarle el 7 por 100;
si es mayor o igual a 1000 y menor o igual a 5000, sumarle el 15 por 100, y
si es mayor de 5000, restarle el 5 por 100. */

#include <iostream>
using namespace std;

void recibir_numero(float &n) {
  cout<<"\nPrograma para recibir un numero y realizar operaciones"<<endl;
  cout<<"Ingresa un numero: ";
  cin >>n;
}

void operaciones(float &n){
  if (n<500) { 
    cout<<"Agregando el 50'%' es "<<n*1.5<<endl;
  } else if (n>=500 && n<1000 ){
    cout<<"Agregando el 7'%' es "<<n*1.07<<endl;
  } else if (n>=1000 && n<=5000 ) {
    cout<<"Agregando el 15'%' es "<<n*1.15<<endl;
  } else {
    cout<<"Restando el 5'%' es "<<n*0.95<<endl;
  }
}

int main() {
  float a;
  recibir_numero(a);
  operaciones(a);
  
  return 0;
}