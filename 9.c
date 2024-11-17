#include <stdio.h>

int main()
{
  int matriz[1000][1000], matrizTransposta[1000][1000], diagonalPrincipal = 0;
  int n, i, j;

  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      scanf("%d", &matriz[i][j]);
    }
  }

  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      matrizTransposta[i][j] = matriz[j][i];
      if (i == j)
      {
        diagonalPrincipal += matriz[i][j];
      }
    }
  }

  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      matriz[i][j] = diagonalPrincipal * matriz[i][j] + matrizTransposta[i][j];
    }
  }

  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }

  return 0;
}