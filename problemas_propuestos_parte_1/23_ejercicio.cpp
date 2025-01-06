/* Introducir dos numeros por teclado de tal forma que uno sea menor que 50
y el otro comprendido entre 100 y 200. Al mayor se le restan 3 unidades y
al menor se le aumenta en 7 unidades. Imprimir la secuencia de los numeros.
Hasta que se crucen, de forma alternativa. */

#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    // Solicitar los numeros al usuario
    cout << "Ingrese un numero menor que 50: ";
    cin >> num1;
    cout << "Ingrese un numero entre 100 y 200: ";
    cin >> num2;

    // Verificar que los numeros cumplan con las condiciones
    if (num1 >= 50 || num2 < 100 || num2 > 200) {
        cout << "El primer numero debe ser menor que 50 y el segundo debe estar entre 100 y 200." << endl;
        return 1;
    }

    // Determinar cuál es el menor y cuál es el mayor
    int menor = num1;
    int mayor = num2;

    // Imprimir las series de numeros de forma alternada
    cout << "Serie de numeros:\n\n";
    while (menor <= mayor) {
        cout << menor << " ";
        menor += 7;
        if (menor > mayor) break;
        cout << mayor << " ";
        mayor -= 3;
    }

    cout << endl;
    return 0;
}