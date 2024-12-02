#include <iostream>
#include <iomanip> // Para formato de salida
#include <conio.h> // Para usar _getch() (pausa entre pantallas)
using namespace std;

void mostrarTablas(int num1, int num2) {
    cout << "Tabla del " << num1 << " y " << num2 << ":\n" << endl;
    cout << setw(10) << "Tabla del " << num1 << setw(20) << "Tabla del " << num2 << endl;
    cout << string(40, '-') << endl;

    for (int i = 0; i <= 10; i++) {
        cout << setw(8) << num1 << " x " << i << " = " << setw(2) << num1 * i
             << setw(10) << " " << num2 << " x " << i << " = " << setw(2) << num2 * i << endl;
    }

    cout << "\nPresiona cualquier tecla para continuar..." << endl;
    _getch(); // Espera a que el usuario presione una tecla
}

int main() {
    // Generar las tablas de multiplicar del 0 al 10
    for (int i = 0; i <= 10; i += 2) {
        int siguiente = (i + 1 <= 10) ? i + 1 : -1; // Determinar el siguiente numero (si existe)
        mostrarTablas(i, siguiente == -1 ? i : siguiente);
    }

    cout << "\n!Todas las tablas han sido mostradas!" << endl;
    return 0;
}