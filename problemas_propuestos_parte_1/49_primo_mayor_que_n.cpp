#include <iostream>
using namespace std;

// Funcion para verificar si un numero es primo
bool esPrimo(int numero) {
    if (numero <= 1) return false; // Los numeros menores o iguales a 1 no son primos
    for (int i = 2; i * i <= numero; i++) { // Solo se necesita verificar hasta la raiz cuadrada del numero
        if (numero % i == 0) { // Si el numero es divisible por otro numero, no es primo
            return false;
        }
    }
    return true;
}

// Funcion para encontrar el menor numero primo mayor que un numero dado
int menorPrimoMayorQue(int numero) {
    int candidato = numero + 1; // Empezamos desde el siguiente numero
    while (!esPrimo(candidato)) {
        candidato++; // Si no es primo, probamos el siguiente numero
    }
    return candidato;
}

int main() {
    int numero;

    // Solicitar al usuario un numero
    cout << "Introduce un numero: ";
    cin >> numero;

    // Calcular el menor numero primo mayor que el numero introducido
    int resultado = menorPrimoMayorQue(numero);

    // Mostrar el resultado
    cout<<"El menor numero primo mayor que "<<numero<<" es: "<<resultado<<endl;

    return 0;
}