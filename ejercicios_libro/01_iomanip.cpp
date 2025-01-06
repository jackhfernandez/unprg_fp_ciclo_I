#include <iostream>
#include <iomanip>
using namespace std ;
int main()
{
bool x = true ;
cout << boolalpha << x <<endl; // escribe los booleanos como 'false' o 'true'
cout << dec << 27  <<endl; // escribe 27 (decimal)
cout << hex << 27  <<endl; // escribe 1b (hexadecimal)
cout << oct << 27  <<endl; // escribe 33 (octal)
cout << setprecision(2) << 4.567  <<endl; // escribe 4.6 con redondeo
cout << setw(5) << 234  <<endl; // escribe " 234"
cout << setfill('0') << setw(5) << 234  <<endl; // escribe "00234"
}
/*
#include <iostream>
using namespace std ;
int main()
{
int num_1, num_2 ;
cout << "Introduce el primer numero: " ;
cin >> num_1 ;
cout << "Introduce el segundo numero: " ;
cin >> num_2 ;
cout << "Multiplicacion: " << (num_1 * num_2) << endl ;
cout << "Fin" << endl ;
} */