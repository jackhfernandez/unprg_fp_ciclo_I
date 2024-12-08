/* - Introducir dos números por teclado de tal forma que el segundo sea mayor que el primero.
A partir del primero, imprimir los números separados entre sí 7 unidades, contarlos.
De estos, cuántos son pares y cuantos vale la suma de los impares 
1. recibir nros
2. imprimir y cuenta los nros separados 7 unidades
3. contar pares, sumar impares
*/

#include <iostream>
using namespace std;

void recibir_numeros(int &a, int &b);
void imprimir_contar(int &a, int &b);
void contar_sumar(int &a, int &b);

int main() {

  int a,b;

  recibir_numeros(a,b);
  imprimir_contar(a,b);
  contar_sumar(a,b);

  return 0;
}

void recibir_numeros(int &a, int &b) {
  cout<<"Programa para ingresar dos numeros y verificar lo siguiente"<<endl;
  cout<<"Ingrese  el primer numero: ";
  cin >>a;
  cout<<"Ingrese el segundo numero: ";
  cin >>b;
}

void imprimir_contar(int &a, int &b) {
  int contar_sumar=0;
  cout<<"\nLos numeros son: \n"<<endl;
  for (int i=a; i<=b; i+=7) {
    cout<<i<<" ";
    contar_sumar++;
  }
  cout<<"\n\nLa cantidad de numeros es "<<contar_sumar<<endl;
}

void contar_sumar(int &a, int &b) {
  int contar_sumar=0; int suma=0;
  for (int i=a; i<=b; i+=7) {
    if (i%2==0) {
      contar_sumar++;
    } else {
      suma+=i;
    }
  }
  cout<<"\nLa cantidad de numeros pares es "<<contar_sumar<<endl;
  cout<<"\nLa suma de impares es "<<suma<<endl;
}