#include <iostream>

int main() {
    int num1, num2;

    // Solicitar los números al usuario
    std::cout << "Ingrese el primer número (menor a 50): ";
    std::cin >> num1;
    std::cout << "Ingrese el segundo número (menor a 50): ";
    std::cin >> num2;

    // Verificar que ambos números sean menores a 50
    if (num1 >= 50 || num2 >= 50) {
        std::cout << "Ambos números deben ser menores a 50." << std::endl;
        return 1;
    }

    // Determinar cuál es el menor y cuál es el mayor
    int menor = (num1 < num2) ? num1 : num2;
    int mayor = (num1 > num2) ? num1 : num2;

    // Imprimir las series de números de forma alternada
    std::cout << "Serie de números:\n";
    while (menor <= mayor) {
        std::cout << menor << " ";
        menor += 5;
        if (menor > mayor) break;
        std::cout << mayor << " ";
        mayor -= 2;
    }

    std::cout << std::endl;
    return 0;
}