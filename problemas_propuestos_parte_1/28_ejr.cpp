/* - Igual que el Ejercicio 27 pero de forma que la tabla del 9 se
imprima al revés (empezando por el número 10, 9 ,8)*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  cout<<"\nPrograma para mostrar la tabla del 9 al reves\n"<<endl;
  
  for (int i=10; i>=0; i--) {
    cout<<"\t\t9 x "<<setw(2)<<i<<" = "<<setw(3)<<9*i<<endl;
  }

  return 0;
}