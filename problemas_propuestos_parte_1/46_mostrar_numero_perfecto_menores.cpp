#include <iostream>
using namespace std;

// Funcion para verificar si un numero es perfecto
bool esPerfecto(int numero) {
    int sumaDivisores = 0;
    
    // Encontrar los divisores del numero
    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            sumaDivisores += i; // Sumar los divisores
        }
    }
    
    // Si la suma de los divisores es igual al numero, es perfecto
    return sumaDivisores == numero;
}

int main() {
    int limite;

    // Solicitar al usuario un numero limite
    cout << "Introduce un numero limite: ";
    cin >> limite;

    // Imprimir los numeros perfectos menores que el limite
    cout << "Los numeros perfectos menores que " << limite << " son: " << endl;
    // Comenzamos desde 2 porque 1 no es un numero perfecto
    for (int i = 2; i < limite; i++) {
        if (esPerfecto(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}