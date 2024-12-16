/* Introducir dos números inferiores a 50 por teclado. Al más pequeño aumentarlo de 5 en 5
y al mayor disminuirlo de 2 en 2. Imprimir ambas series de números de una
forma alternativa, hasta que el menor supere al mayor.
*/

#include <iostream>
using namespace std;

void recibir_numeros(int &a, int &b) {
	cout << "Ingrese el primer numero (menor a 50): ";
  cin >> num1;
  cout << "Ingrese el segundo numero (menor a 50): ";
  cin >> num2;
}

int main() {
  int num1, num2;

	recibir_numeros(num1, num2);

  // Verificar que ambos numeros sean menores a 50
  if (num1 >= 50 || num2 >= 50) {
    cout << "Ambos numeros deben ser menores a 50." << endl;
    return 1;
  }

  // Determinar cuál es el menor y cuál es el mayor
  int menor = (num1 < num2) ? num1 : num2;
  int mayor = (num1 > num2) ? num1 : num2;

  // Imprimir las series de numeros de forma alternada
  cout << "Serie de numeros:\n";
  while (menor <= mayor) {
    cout << menor << " ";
    menor += 5;
    if (menor > mayor) break;
    cout << mayor << " ";
    mayor -= 2;
  }

  cout << endl;
  return 0;
}