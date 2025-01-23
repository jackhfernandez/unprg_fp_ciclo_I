/* Fernandez Reyes
En un arreglo A(5,6,30) donde el primer índice señala el número de centros, el segundo el número de cursos por centro
y el tercero el número de alumnos por curso. Se guardarán las notas de los alumnos:
- La nota media por curso
- La nota media por centro.
- La nota media global.
- Los dos mejores centros y sus notas.
- El mejor alumno de cada curso con su nota correspondiente.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

const int NUM_CENTROS =  5;
const int NUM_CURSOS  =  6; 
const int NUM_ALUMNOS = 30;

// Modulo llenar el arreglo con notas
void llenarNotasAleat(double A[NUM_CENTROS][NUM_CURSOS][NUM_ALUMNOS]) {
  for (int centro = 0; centro < NUM_CENTROS; ++centro) {
    for ( int curso = 0; curso < NUM_CURSOS; ++curso) {
      for ( int alumno = 0; alumno < NUM_ALUMNOS; ++alumno) {
        A[centro][curso][alumno] = ( rand() % 15) + 5;
      }
    }
  }
}

// Modulo mostrar el A[][][] con notas
void mostrarNotas(double A[NUM_CENTROS][NUM_CURSOS][NUM_ALUMNOS]) {
  for ( int centro = 0; centro < NUM_CENTROS; ++centro) {
    cout << "Mostrando notas en el centro " << centro +1 << endl;
    for ( int curso = 0; curso < NUM_CURSOS; ++curso) {
      for ( int alumno = 0; alumno < NUM_ALUMNOS; ++alumno) {
        cout << setw(2) << A[centro][curso][alumno] << " ";
      }
      cout << endl;
    }
    cout << endl;
  }
  cout << endl;
}

// Modulo calcular nota media
void calcularNotaMediaPorCurso(double A[NUM_CENTROS][NUM_CURSOS][NUM_ALUMNOS]) {
  cout << "Mostrando nota media por curso" << endl;
  for(int centro = 0; centro < NUM_CENTROS; ++centro) {
    cout << "\nCentro " << centro + 1 << endl;
    for (int curso = 0; curso < NUM_CURSOS; ++curso) {
      double suma = 0;
      for (int alumno = 0; alumno < NUM_ALUMNOS; ++alumno) {
        suma += A[centro][curso][alumno];
      }
      double media = suma / NUM_ALUMNOS;
      cout << "Curso " << curso + 1 << ": " << (media*100 + 0.5)/100.0 << endl;
    }
  }
}

// Modulo nota media por centro
void calcularNotaMediaPorCentro(double A[NUM_CENTROS][NUM_CURSOS][NUM_ALUMNOS]) {
  cout << "Mostrando nota media por centro\n" << endl;
  for (int centro = 0; centro < NUM_CENTROS; ++centro) {
    double suma = 0;
    int totalAlumnos = NUM_CURSOS * NUM_ALUMNOS;
    for (int curso = 0; curso < NUM_CURSOS; ++curso) {
      for (int alumno = 0; alumno < NUM_ALUMNOS; ++alumno) {
        suma += A[centro][curso][alumno];
      }
    }
    double media = suma / totalAlumnos;
    cout << "Nota media del centro " << centro + 1 << ": "<< (media*100 + 0.5)/100.0 << endl; 
  }
}

void calcularNotaMediaGlobal(double A[NUM_CENTROS][NUM_CURSOS][NUM_ALUMNOS]) {
  double suma = 0;
  int totalAlumnos = NUM_CENTROS * NUM_ALUMNOS * NUM_CENTROS;
  for (int centro = 0; centro < NUM_CENTROS; ++centro) {
    for (int curso = 0; curso < NUM_CURSOS; ++curso) {
      for (int alumno = 0; alumno < NUM_ALUMNOS; ++alumno) {
        suma += A[centro][curso][alumno];
      }
    }
  }
  double media = suma / totalAlumnos;
  cout << "\nNota media global: "<< (media*100 + 0.5)/100.0 << endl;
}

void encontrarMejoresCentros(double A[NUM_CENTROS][NUM_CURSOS][NUM_ALUMNOS]) {
  vector<pair<double, int>> mediasCentros;
  for (int centro = 0; centro < NUM_CENTROS; ++centro) {
    double suma = 0;
    int totalAlumnos = NUM_CENTROS * NUM_ALUMNOS;
    for (int curso = 0; curso < NUM_CURSOS; ++curso) {
      for (int alumno = 0; alumno < NUM_ALUMNOS; ++alumno) {
        suma += A[centro][curso][alumno];
      }
    }
    double media = suma / totalAlumnos;
    mediasCentros.push_back(make_pair((media*100 + 0.5)/100, centro + 1));
  }
  sort(mediasCentros.rbegin(), mediasCentros.rend());
  cout << "\nMostrando dos mejores centros: \n" << endl;
  for (int  i = 0; i < 2; ++i) {
    cout << "Centro " << mediasCentros[i].second <<
    " con nota media: " << mediasCentros[i].first << endl;   
  }
}

void encontrarMejorAlumnoPorCurso(double A[NUM_CENTROS][NUM_CURSOS][NUM_ALUMNOS]) {
  cout << "\nMostrando mejor alumno por curso" << endl;
  for (int centro = 0; centro < NUM_CENTROS; ++centro) {
    cout << "\nCentro " << centro + 1<< endl;
    for (int curso = 0; curso < NUM_CURSOS; ++curso) {
      double mejorNota = -1;
      int mejorAlumno = -1;
      for (int alumno = 0; alumno < NUM_ALUMNOS; ++alumno) {
        mejorNota = A[centro][curso][alumno];
        mejorAlumno = alumno + 1;
      }
      cout << "Mejor alumno del curso " << curso + 1<< ": Alumno "
      <<mejorAlumno <<" con nota "<<setw(2)<<mejorNota<< endl;
    }
  }
}

int main() {
  srand(time(NULL));
  double A[NUM_CENTROS][NUM_CURSOS][NUM_ALUMNOS] = {};

  cout << "\nMostrando notas\n" << endl;
  llenarNotasAleat(A);
  mostrarNotas(A);
  calcularNotaMediaPorCurso(A);
  calcularNotaMediaPorCentro(A);
  calcularNotaMediaGlobal(A);
  encontrarMejoresCentros(A);
  encontrarMejorAlumnoPorCurso(A);

  return 0;
}