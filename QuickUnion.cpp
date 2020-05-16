#include <stdio.h>
#define N 1000

/*
  Este algoritmo resuelve el problema de la conectividad entre puntos.
  La idea básicamente es crear un arreglo de enteros con un tamaño predeterminado,
  y asignarle el valor correspondiente a al aposicion del arreglo i[n] = n;
  
*/

main()
{
  int i, p, q, j, id[N];
  for (int i = 0; i < N; i++)
  {
    id[i] = i;
  }

  while(scanf("%d %d\n", &p, &q) == 2){
    for (i = p; i != id[i]; i = id[i]);
    for (j = q; j != id[j]; j = id[j]);
    if(i == j)
      continue;
    printf("%d %d\n", p, q);
  }
  
}