#include <iostream>
using namespace std;

int main() {
    int numero, suma = 0, mayor = INT_MIN, contador = 0;
    char continuar;
    cout << "Programa para sumar y contar multiplos de 5" << endl;
    do {
        cout << "Introduce un numero: ";
        cin >> numero;
        contador++; // Incrementar el contador de numeros introducidos
        // Sumar si es multiplo de 5
        if (numero % 5 == 0) {
            suma += numero;
        }
        // Determinar el numero mayor
        if (numero > mayor) {
            mayor = numero;
        }

        // Preguntar si desea continuar
        cout << "Deseas introducir otro numero? (s/n): ";
        cin >> continuar;

    } while (continuar == 's' || continuar == 'S');

    cout << "\nResultados:" << endl;
    cout << "Suma de los multiplos de 5: " << suma << endl;
    cout << "Numero mayor: " << mayor << endl;
    cout << "Cantidad de numeros introducidos: " << contador << endl;

    return 0;
}
