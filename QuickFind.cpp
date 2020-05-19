#include <iostream>
#define N 10

/*
  Este algoritmo resuelve el problema de la conectividad entre puntos.
  La idea básicamente es crear un arreglo de enteros con un tamaño predeterminado,
  y asignarle el valor correspondiente a al aposicion del arreglo i[n] = n;
  Posteriormente se introduce de la entrada el par de puntos y lo que se verifica es que 
  sus valores sean diferentes, si se cumple dicha condicion pues lo que se hace es 
  asignarle a la posicion i[p] = i[q]. La idea detrás de esto es que se considera que 
  dos puntos están conectados si y solo si sus valores son iguales.
*/

int main()
{
  int i, p, q, t, id[N];
  for (int i = 0; i < N; i++)
  {
    id[i] = i;
  }
  
  while(scanf("%d %d\n", &p, &q) == 2)
  {
    if (id[p] == id[q]) continue;
    for (t = id[p], i = 0; i < N; i++)
      if(id[i]== t) id[i] = id[q];
    printf("%d %d\n", p, q);
  }
  
  return 0;

}