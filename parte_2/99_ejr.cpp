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

srand(time(NULL));

void llenarNotasAleat(double A[NUM_CENTROS][NUM_CURSOS][NUM_ALUMNOS]) {
  for (int centro = 0; centro < NUM_CENTROS; ++centro) {
    for ( int curso = 0; curso < NUM_CURSOS; ++curso) {
      for ( int alumno = 0; alumno < NUM_ALUMNOS; ++alumno) {
        A[centro][curso][alumno] = ( rand() % 3) + 5;
      }
    }
  }
}


void calcularNotaMediaPorCurso(double A[NUM_CENTROS][NUM_CURSOS][NUM_ALUMNOS]) {
  for(int centro = 0; centro < NUM_CENTROS; ++centro) {
    for (int curso = 0; curso < NUM_CURSOS; ++curso) {
      double suma = 0;
      for (int alumno = 0; alumno < NUM_ALUMNOS; ++alumno) {
        suma += A[centro][curso][alumno];
      }
      double media = suma / NUM_ALUMNOS;
      cout << "Nota media del curso " << curso + 1 << " en el centro " << centro + 1 << ": " << media << endl;
    }
  }
}

void calcularNotaMediaPorCentro(double A[NUM_CENTROS][NUM_CURSOS][NUM_ALUMNOS]) {
  for (int centro = 0; centro < NUM_CENTROS; ++centro) {
    double suma = 0;
    int totalAlumnos = NUM_CURSOS * NUM_ALUMNOS;
    for (int curso = 0; curso < NUM_CURSOS; ++curso) {
      for (int alumno = 0; alumno < NUM_ALUMNOS; ++alumno) {
        suma += A[centro][curso][alumno];
      }
    }
    double media = suma / totalAlumnos;
    cout << "Nota media del centro " << centro + 1 << ": " << media << endl; 
  }
}

void calcularNotaMediaGlobal(double A[NUM_CENTROS][NUM_CURSOS][NUM_ALUMNOS]) {
  double suma = 0;
  int totalAlumnos = NUM_CENTROS * NUM_ALUMNOS;
  for (int centro = 0; centro < NUM_CENTROS; ++centro) {
    for (int curso = 0; curso < NUM_CURSOS; ++curso) {
      for (int alumno = 0; alumno < NUM_ALUMNOS; ++alumno) {
        suma += A[centro][curso][alumno];
      }
    }
  }
  double media = suma / totalAlumnos;
  cout << "Nota media global: " << media << endl;
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
    mediasCentros.push_back(make_pair(media, centro + 1));
  }
  sort(mediasCentros.rbegin(), mediasCentros.rend());
  cout << "Los dos mejores centros son: " << endl;
  for (int  i = 0; i < 2; ++i) {
    cout << "Centro " << mediasCentros[i].second << " con nota media: " << mediasCentros[i].first << endl;   
  }
}

void encontrarMejorAlumnoPorCurso(double A[NUM_CENTROS][NUM_CURSOS][NUM_ALUMNOS]) {
  for (int centro = 0; centro < NUM_CENTROS; ++centro) {
    for (int curso = 0; curso < NUM_CURSOS; ++curso) {
      double mejorNota = -1;
      int mejorAlumno = -1;
      for (int alumno = 0; alumno < NUM_ALUMNOS; ++alumno) {
        mejorNota = A[centro][curso][alumno];
        mejorAlumno = alumno + 1;
      }
      cout << "Mejor alumno del curso " << curso + 1 << " en el centro " << centro + 1 << ": Alumno " << mejorAlumno << " con nota " << mejorNota << endl;
    }
  }
}

int main() {
  double A[NUM_CENTROS][NUM_CURSOS][NUM_ALUMNOS] = {};

  llenarNotasAleat(A);
  calcularNotaMediaPorCurso(A);
  calcularNotaMediaPorCentro(A);
  calcularNotaMediaGlobal(A);
  encontrarMejoresCentros(A);
  encontrarMejorAlumnoPorCurso(A);

  return 0;
}