#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    // Solicitar los tres numeros al usuario
    cout << "Introduce  el primer numero: ";
    cin >> a;
    cout << "Introduce el segundo numero: ";
    cin >> b;
    cout << "Introduce  el tercer numero: ";
    cin >> c;

    // Variables temporales para ordenarlos
    int menor, medio, mayor;

    // Comparaciones para determinar el orden
    if (a <= b && a <= c) {
        menor = a;
        if (b <= c) {
            medio = b;
            mayor = c;
        } else {
            medio = c;
            mayor = b;
        }
    } else if (b <= a && b <= c) {
        menor = b;
        if (a <= c) {
            medio = a;
            mayor = c;
        } else {
            medio = c;
            mayor = a;
        }
    } else {
        menor = c;
        if (a <= b) {
            medio = a;
            mayor = b;
        } else {
            medio = b;
            mayor = a;
        }
    }

    // Mostrar los numeros en orden creciente
    cout << "Los numeros en orden creciente son: " 
         << menor << ", " << medio << ", " << mayor << endl;

    return 0;
}