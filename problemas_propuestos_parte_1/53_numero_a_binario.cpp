#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Funcion para convertir un numero decimal a binario
string convertABinario(int numDecimal) {
    if (numDecimal == 0) return "0";

    string binario = "";
    while (numDecimal > 0) {
        binario = to_string(numDecimal % 2) + binario;
        numDecimal /= 2;
    }
    return binario;
}

int main() {
    int n; // Numero de elementos
    cout << "Cantidad de numeros que desea convertir: ";
    cin >> n;

    vector<int> numbers(n);

    // Solicitar los numeros al usuario
    cout << "Introduce " << n << " numeros en base decimal:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numbers[i];
    }

    // Mostrar los numeros en formato binario
    cout << "\nNumeros en formato binario:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Decimal: " << numbers[i] << " -> Binario: " << convertABinario(numbers[i]) << endl;
    }

    return 0;
}
