#include <iostream>
#include <string>
using namespace std;

// Funcion para convertir un numero decimal a una base dada
string convertToBase(int decimalNumber, int base) {
    if (base < 2 || base > 16) {
        return "Base no soportada (debe estar entre 2 y 16).";
    }

    string result = "";
    string digits = "0123456789ABCDEF";

    // Proceso de conversion
    while (decimalNumber > 0) {
        int remainder = decimalNumber % base;
        result = digits[remainder] + result;
        decimalNumber /= base;
    }

    return result.empty() ? "0" : result; // Manejar el caso del numero 0
}

int main() {
    int decimalNumber, base;

    // Solicitar al usuario un numero en base decimal
    cout << "Introduce un numero en base decimal: ";
    cin >> decimalNumber;

    // Solicitar la base a la que se desea convertir
    cout << "Introduce la base a la que deseas convertir (2-16): ";
    cin >> base;

    // Convertir el numero y mostrar el resultado
    string convertedNumber = convertToBase(decimalNumber, base);
    cout << "El numero " << decimalNumber << " en base " << base << " es: " << convertedNumber << endl;

    return 0;
}
