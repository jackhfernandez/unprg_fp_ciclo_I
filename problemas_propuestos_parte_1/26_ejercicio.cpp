// Imprimir los numeros que pertenecen a la serie 1, 3, 6, 10… numero determinado
//de elementos. En cada línea se imprimirán cinco numeros. Calcular su suma.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el numero de elementos de la serie: ";
    cin >> n;

    int sum = 0;
    int current = 1;
    int increment = 2;

    for (int i = 1; i <= n; ++i) {
        cout << current << " ";
        sum += current;
        current += increment;
        increment++;

        if (i % 5 == 0) {
            cout << endl;
        }
    }

    cout << endl << "La suma de los elementos de la serie es: " << sum << endl;

    return 0;
}