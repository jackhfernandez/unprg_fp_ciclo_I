#include <iostream>
#include <string>
#include <iomanip> // Para manejar el formato de salida
using namespace std;

// Funcion para convertir el numero del mes a su nombre
string obtenerMes(int mes) {
    switch (mes) {
        case 1: return "Enero";
        case 2: return "Febrero";
        case 3: return "Marzo";
        case 4: return "Abril";
        case 5: return "Mayo";
        case 6: return "Junio";
        case 7: return "Julio";
        case 8: return "Agosto";
        case 9: return "Septiembre";
        case 10: return "Octubre";
        case 11: return "Noviembre";
        case 12: return "Diciembre";
        default: return "Mes invalido"; // En caso de un numero de mes incorrecto
    }
}

int main() {
    string fecha;
    
    // Solicitar la fecha en formato ddmmaa
    cout << "Introduce la fecha en formato ddmmaa: ";
    cin >> fecha;

    // Verificar que la fecha tenga el formato correcto (6 caracteres)
    if (fecha.length() != 6) {
        cout << "Formato de fecha incorrecto. Debe ser ddmmaa." << endl;
        return 1;
    }

    // Extraer el dia, mes y ano de la cadena
    
    // Los primeros dos caracteres corresponden al dia
    int dia = stoi(fecha.substr(0, 2));
    // Los dos caracteres siguientes corresponden al mes
    int mes = stoi(fecha.substr(2, 2));
    // Los ultimos dos caracteres corresponden al ano, sumamos 2000
    int anio = 2000 + stoi(fecha.substr(4, 2));

    // Verificar que el mes sea valido (1-12)
    if (mes < 1 || mes > 12) {
        cout << "Mes invalido. El mes debe estar entre 1 y 12." << endl;
        return 1;
    }

    // Imprimir la fecha en formato normal
    cout << "La fecha en formato normal es: "
         << dia << " de " << obtenerMes(mes) << " de " << anio << endl;

    return 0;
}
