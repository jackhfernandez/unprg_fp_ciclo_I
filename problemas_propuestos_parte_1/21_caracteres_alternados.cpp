#include <iostream>
#include <string>
using namespace std;

int main() {
  string frase;              // variable que almacena una cadena
  cout << "Ingresa una frase: "; 
  getline(cin, frase);       // almacena una linea completa ingresada por el usuario
// hola
	int inicio = 0;
  int fin = frase.length() - 1;  // toma el tamano de la cadena

  while (inicio <= fin) {
    cout << frase[fin];       // imprimi primero el ultimo caracter
    if (inicio != fin) {
 		  cout << frase[inicio];  // imprime segundo el segundo caracter
    }
    inicio++;
    fin--;
	}
	
  return 0;
}