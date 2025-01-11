/* Introducir un número ASCII y mostrar su carácter correspondiente*/

#include <iostream>
using namespace std;

int main() {
    int n; // numero en ascii

    // Solicitar al usuario que introduzca un numero ASCII
    cout<<"\nPrograma para mostrar el caracter de un numero en ASCII\n"<<endl;
    cout<<"Introduce un numero ASCII (0-127): ";
    cin >> n;

  // Verificar si el numero esta en el rango valido
    if (n >= 0 && n <= 127) {
        // Convertir el numero a su caracter correspondiente
        char caracter = static_cast<char>(n);
        cout << "\nEl caracter del numero "<<n<<" es: '"<<caracter<<"'"<< endl;
    } else {
        cout <<"Por favor, introduce un numero en el rango 0-127"<<endl;
    }

    return 0;
}
