#include <iostream>
#include <cmath>  // Para usar log10() y calcular el numero de cifras
using namespace std;

int main() {
    int numero;

    // Solicitar al usuario un numero
    cout << "Introduce un numero: ";
    cin >> numero;

    // Calcular el cuadrado del numero
    int cuadrado = numero * numero;

    // Calcular la ultima cifra del cuadrado
    int ultimaCifra = cuadrado % 10;

    // Calcular el numero de cifras del cuadrado
    int numeroDeCifras = (cuadrado == 0) ? 1 : log10(cuadrado) + 1;

    // Mostrar los resultados
    cout << "El cuadrado de " << numero << " es: " << cuadrado << endl;
    cout << "La ultima cifra del cuadrado es: " << ultimaCifra << endl;
    cout << "El numero de cifras del cuadrado es: " << numeroDeCifras << endl;

    return 0;
}
