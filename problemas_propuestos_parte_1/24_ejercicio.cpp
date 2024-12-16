#include <iostream>

void imprimirTabla(int numero, int hasta) {
    for (int i = 1; i <= hasta; ++i) {
        std::cout << numero << " x " << i << " = " << numero * i << std::endl;
    }
}

int main() {
    int num1, num2;
    int hasta = 10; // Puedes cambiar este valor para imprimir más o menos multiplicaciones

    // Solicitar los números al usuario
    std::cout << "Ingrese el primer número: ";
    std::cin >> num1;
    std::cout << "Ingrese el segundo número: ";
    std::cin >> num2;

    // Imprimir las tablas de multiplicar de forma alternada
    std::cout << "Tablas de multiplicar de " << num1 << " y " << num2 << ":\n";
    for (int i = 1; i <= hasta; ++i) {
        std::cout << num1 << " x " << i << " = " << num1 * i << "\t";
        std::cout << num2 << " x " << i << " = " << num2 * i << std::endl;
    }

    return 0;
}