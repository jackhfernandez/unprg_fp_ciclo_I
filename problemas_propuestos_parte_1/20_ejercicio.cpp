#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Función para leer las frases
vector<string> leerFrases(int numFrases) {
    vector<string> frases;
    string frase;
    cin.ignore(); // Ignorar el salto de línea después de leer el numero
    for (int i = 0; i < numFrases; ++i) {
        cout << "Ingrese la frase " << i + 1 << ": ";
        getline(cin, frase);
        frases.push_back(frase);
    }
    return frases;
}

// Función para encontrar la frase mas larga y su posición
pair<string, int> encontrarFraseMasLarga(const vector<string>& frases) {
    string fraseMasLarga;
    int posicion = 0;
    for (size_t i = 0; i < frases.size(); ++i) {
        if (frases[i].length() > fraseMasLarga.length()) {
            fraseMasLarga = frases[i];
            posicion = i;
        }
    }
    return {fraseMasLarga, posicion};
}

// Función para imprimir el resultado
void imprimirResultado(const pair<string, int>& resultado) {
    cout << "La frase mas larga es: \"" << resultado.first << "\"\n";
    cout << "Se encuentra en la posicion: " << resultado.second + 1 << "\n";
}

int main() {
    int numFrases;
    cout << "Ingrese el numero de frases: ";
    cin >> numFrases;

    vector<string> frases = leerFrases(numFrases);
    pair<string, int> resultado = encontrarFraseMasLarga(frases);
    imprimirResultado(resultado);

    return 0;
}