#include <iostream>
using namespace std;

int main()
{
int n = 0;
do {
cout << "Introduzca un numero [1..9]: ";
cin >> n;
while (cin.fail()) { // ? Estado Erroneo ?
cin.clear(); // Restaurar estado
cin.ignore(1000, '\n'); // Eliminar la entrada de datos anterior
cout << "Error: Introduzca un numero [1..9]: ";
cin >> n;
}
} while (! (n > 0 && n < 10));
cout << "Valor: " << n << endl;
}