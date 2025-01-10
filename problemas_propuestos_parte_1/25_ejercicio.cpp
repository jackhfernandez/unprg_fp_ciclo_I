/* Dado un número menor que 10, hallar su tabla de multiplicar por duplicado,
es decir, empezando por el cero y por el 10 de forma alternativa.*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int numero;
    cout<<"\nPrograma mostrar multiplicacion de n de forma alternada\n"<<endl;

    // Solicitar el número al usuario
    cout << "Ingrese un numero menor que 10: ";
    cin >> numero;

    // Verificar que el número sea menor que 10
    if (numero >= 10) {
        cout << "\nEl numero debe ser menor que 10" << endl;
        return 1;
    }

    // Imprimir la tabla de multiplicar de forma alternada
    cout << "\nTabla de multiplicar de " << numero << ":\n"<<endl;
    for (int i = 0, j = 10; i <= 10; ++i, --j) {
        cout << numero << " x "<<setw(2) << i << " = "
                         <<setw(3)<< numero * i << "\t";
        cout << numero << " x "<<setw(2) << j << " = "
                        <<setw(3)<< numero * j << endl;
    }

    return 0;
}