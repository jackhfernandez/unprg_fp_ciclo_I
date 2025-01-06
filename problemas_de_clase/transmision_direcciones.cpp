#include <iostream>
using namespace std;

void intercambio(float *, float *);

int main() {
  float num1=20.8, num2=6.78;

  cout<<"1er numero: "<<num1<<endl;
  cout<<"2do numero: "<<num2<<endl;

  intercambio(&num1, &num2); // llamada a la funcion

  cout<<"\n\nDespues del intercambio\n"<<endl;
  cout<<"El nuevo valor de num1: "<<num1<<endl;
  cout<<"El nuevo valor de num2: "<<num2<<endl;

  return 0;
}

void intercambio(float *dirNm1, float *dirNm2) {
  float aux;

  // Intercambiar los valores de las variables
  aux = *dirNm1;
  *dirNm1 = *dirNm2;
  *dirNm2 = aux;
}