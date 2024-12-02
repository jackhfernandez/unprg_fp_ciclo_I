#include <iostream>
#include <vector>
#include <iomanip> // Para manejar el formato de salida
using namespace std;

int main() {
    int n; // Numero de elementos
    cout << "Cuantos numeros deseas convertir a hexadecimal? ";
    cin >> n;

    vector<int> numbers(n);

    // Solicitar los numeros al usuario
    cout << "Introduce " << n << " numeros en base decimal:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numbers[i];
    }

    // Mostrar los numeros en formato hexadecimal
    cout << "\nNumeros en formato hexadecimal:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Decimal: " << numbers[i] << " -> Hexadecimal: " << hex << uppercase << numbers[i] << endl;
    }

    return 0;
}
