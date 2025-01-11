/* Introducir un carácter de teclado y mostrar su número ASCII.*/

#include <iostream>
using namespace std;

int main() 
{
    char caracter;
    cout<<"\nPrograma para mostrar el numero ASCII de un caracter\n"<<endl;
    // Solicitar al usuario que introduzca un caracter
    cout << "Introduce un caracter: ";
    cin >> caracter;

    // Obtener el valor ASCII del caracter
    int numero = static_cast<int>(caracter);

    // Mostrar el resultado
    cout << "\nEl codigo ASCII del caracter '"<<caracter<<"' es: "<<numero<<endl;

    return 0;
}
