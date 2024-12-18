// Dados dos numeros imprimir sus tablas de multiplicar de forma alternativa.

#include <iostream>
using namespace std;

void imprimirTabla(int numero, int hasta) {
    for (int i = 1; i <= hasta; ++i) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }
}

int main() {
    int num1, num2;
    int hasta = 10; // Puedes cambiar este valor para imprimir más o menos multiplicaciones

    // Solicitar los numeros al usuario
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    // Imprimir las tablas de multiplicar de forma alternada
    cout << "Tablas de multiplicar de " << num1 << " y " << num2 << ":\n\n";
    for (int i = 1; i <= hasta; ++i) {
        cout << num1 << " x " << i << " = " << num1 * i << "\t";
        cout << num2 << " x " << i << " = " << num2 * i << endl;
    }

    return 0;
}