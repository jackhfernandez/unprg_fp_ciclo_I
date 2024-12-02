#include <iostream>
#include <vector>
#include <iomanip> // Para manejar el formato de salida
using namespace std;

int main() {
    int n; // Numero de elementos
    vector<int> serie_numeros(n); // Declaracion del vector para almacenar
    
    cout << "Ingrese la cantidad de numeros: ";
    cin >> n;

    // Solicitar los numeros al usuario
    cout << "\nIntroduce " << n << " numeros en base decimal: " << endl;
    
    for (int i = 0; i < n; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> serie_numeros[i]; // Guardar los numeros en el vector
    }

    // Mostrar los numeros en formato octal
    cout << "\nNumeros en formato octal:\n" << endl;
    
    for (int i = 0; i < n; i++) {
        cout << "Decimal: " << serie_numeros[i] << " -> Octal: " << oct;
				cout<< serie_numeros[i] << dec << endl;
    } 

    return 0;
}