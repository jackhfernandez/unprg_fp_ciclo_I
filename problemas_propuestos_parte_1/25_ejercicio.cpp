// Dado un número menor que 10, hallar su tabla de multiplicar por duplicado,
//es decir, empezando por el cero y por el 10 de forma alternativa.

#include <iostream>
using namespace std;

int main() {
    int numero;

    // Solicitar el numero al usuario
    cout << "Ingrese un numero menor que 10: ";
    cin >> numero;

    // Verificar que el numero sea menor que 10
    if (numero >= 10) {
        cout << "El numero debe ser menor que 10." << endl;
        return 1;
    }

    // Imprimir la tabla de multiplicar de forma alternada
    cout << "Tabla de multiplicar de " << numero << ":\n";
    for (int i = 0, j = 10; i <= 10; ++i, --j) {
        cout << numero << " x " << i << " = " << numero * i << "\t";
        cout << numero << " x " << j << " = " << numero * j << endl;
    }

    return 0;
}