#include <iostream>

int main() {
    int numero;

    // Solicitar el número al usuario
    std::cout << "Ingrese un número menor que 10: ";
    std::cin >> numero;

    // Verificar que el número sea menor que 10
    if (numero >= 10) {
        std::cout << "El número debe ser menor que 10." << std::endl;
        return 1;
    }

    // Imprimir la tabla de multiplicar de forma alternada
    std::cout << "Tabla de multiplicar de " << numero << ":\n";
    for (int i = 0, j = 10; i <= 10; ++i, --j) {
        std::cout << numero << " x " << i << " = " << numero * i << "\t";
        std::cout << numero << " x " << j << " = " << numero * j << std::endl;
    }

    return 0;
}