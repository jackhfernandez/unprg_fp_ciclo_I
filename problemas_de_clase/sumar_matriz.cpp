#include <iostream>

using namespace std;

int main()
{
    cout << "Programa que suma arreglos 2D\n" << endl;

    int v1[3][3], v2[3][3], v3[3][3];

    cout<<"Matriz 1\n"<<endl;

    // Ingresar elementos v1
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            cout << "Elemento en [" << i << "][" << j << "]: ";
            cin >> v1[i][j];
        }
        cout<<"\n";
    }

    // Ingresar elementos v1
    cout<<"\nMatriz 2\n"<<endl;

    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            cout << "Elemento en [" << i << "][" << j << "]: ";
            cin >> v2[i][j];
        }
        cout<<"\n";
    }

    // Mostrando resultados

    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            v3[i][j] = v1[i][j]+v2[i][j];
        }
        cout<<"\n";
    }

    cout<<"Mostrando vector resultante\n"<<endl;
    cout<<"\tv3 = [ ";

    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            cout<<v3[i][j]<< " ";
        }
        cout<<"\n\t\t";
    }
    cout<<"\t ]\n\n";

    return 0;
}
