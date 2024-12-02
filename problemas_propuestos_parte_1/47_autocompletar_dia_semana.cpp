#include <iostream>
#include <string>
using namespace std;

// Funcion para convertir los dos primeros caracteres a su nombre completo
string obtenerDiaCompleto(string abreviatura) {
    // Convertir a minusculas para hacer la comparacion sin importar el caso
    for (char &c : abreviatura) {
        c = tolower(c); // Convierte todos los caracteres a minusculas
    }

    // Comparar la abreviatura con los dias de la semana
    if (abreviatura == "lu") return "Lunes";
    if (abreviatura == "ma") return "Martes";
    if (abreviatura == "mi") return "Miercoles";
    if (abreviatura == "ju") return "Jueves";
    if (abreviatura == "vi") return "Viernes";
    if (abreviatura == "sa") return "Sabado";
    if (abreviatura == "do") return "Domingo";

    return "Dia invalido"; // Si no se encuentra la abreviatura
}

int main() {
    string abreviatura;

    // Solicitar al usuario la abreviatura del dia
    cout << "\nIntroduce los dos primeros caracteres del dia de la semana\n";
    cout << "(por ejemplo, 'Lu' para Lunes): ";
    cin >> abreviatura;

    // Llamar a la funcion para obtener el nombre completo del dia
    string diaCompleto = obtenerDiaCompleto(abreviatura);

    // Mostrar el resultado
    cout << "\nEl dia completo es: " << diaCompleto << endl;

    return 0;
}