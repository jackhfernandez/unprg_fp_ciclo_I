#include <iostream>
using namespace std;

int hallarMax(int *, int); // Prototipo

int main() {

  const int nElementos = 5;
  int numeros[nElementos] = {3,25,2,8,1}, nMayor;

  nMayor = hallarMax(numeros, nElementos);
  cout<<"El mayor es "<<nMayor<<endl;

  return 0;
}

int hallarMax(int *dirVect, int nElementos) {
  int max = 0;

  for(int i=0; i<nElementos; i++) {
    if (*(dirVect+i)>max) {
      max = *(dirVect+i);
    }
  }
  return max;
}