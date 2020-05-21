#include <iostream>
#define N 9
using namespace std;

/*
  Este algoritmo resuelve el problema de la conectividad entre puntos.
  La idea básicamente es crear un arreglo de enteros con un tamaño predeterminado,
  y asignarle el valor correspondiente a al aposicion del arreglo i[n] = n;
  Posteriormente se valida que los indices no sean iguales, si son iguales significa que están conectados.
  La idea basicamente es que dos puntos están conectados si i solo si el valor de la posicion del arreglo 
  que indica su indice son iguales. Se utiliza la idea de que las posiciones del arreglo son 
  posiciones de memoria, enotnces dos puntos están concetados si apuntan a la misma posicione de memoria.
*/

int main()
{
  int i, p, q, j, id[N], count;
  for (int i = 0; i < N; i++)
  {
    id[i] = i;
  }

  while(scanf("%d %d\n", &p, &q) == 2){

    count = 0;

    for (i = p; i != id[i]; count++, i = id[i]);
    for (j = q; j != id[j]; count++, j = id[j]);
    if(i == j) continue;
    id[i] = j;
    
    for (int  i = 0; i < N; i++){
      cout << id[i] << " "; 
    }
    cout << endl;
    cout << count << endl;
  }
  
  return 0;
}
