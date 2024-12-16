#include <iostream>

int main() {
    int num1, num2;

    // Solicitar los números al usuario
    std::cout << "Ingrese un número menor que 50: ";
    std::cin >> num1;
    std::cout << "Ingrese un número entre 100 y 200: ";
    std::cin >> num2;

    // Verificar que los números cumplan con las condiciones
    if (num1 >= 50 || num2 < 100 || num2 > 200) {
        std::cout << "El primer número debe ser menor que 50 y el segundo debe estar entre 100 y 200." << std::endl;
        return 1;
    }

    // Determinar cuál es el menor y cuál es el mayor
    int menor = num1;
    int mayor = num2;

    // Imprimir las series de números de forma alternada
    std::cout << "Serie de números:\n";
    while (menor <= mayor) {
        std::cout << menor << " ";
        menor += 7;
        if (menor > mayor) break;
        std::cout << mayor << " ";
        mayor -= 3;
    }

    std::cout << std::endl;
    return 0;
}