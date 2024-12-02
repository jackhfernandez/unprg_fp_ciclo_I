#include <iostream>
using namespace std;

int main() {
    char caracter;

    // Solicitar al usuario que introduzca un caracter
    cout << "Introduce un caracter: ";
    cin >> caracter;

    // Obtener el valor ASCII del caracter
    int numero = static_cast<int>(caracter);

    // Mostrar el resultado
    cout << "El codigo ASCII del caracter '"<<caracter<<"' es: "<<numero<<endl;

    return 0;
}
