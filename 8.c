#include <stdio.h>
#define TAM 500

int ehPermutacao(int matriz[TAM][TAM], int n, int *soma)
{
  int i, j, verificador1 = 0, verificador2 = 0, verificadorPerm = 0;

  // Vericador Linha
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      *soma += matriz[i][j];
      if (matriz[i][j] == 1)
      {
        verificador1++;
      }
      if (matriz[i][j] == 0)
      {
        verificador2++;
      }
    }

    if (verificador1 == 1 && verificador2 == n - 1)
    {
      verificadorPerm++;
    }

    verificador1 = 0;
    verificador2 = 0;
  }

  // Verificador Coluna
  j = 0;
  while (j < n)
  {
    for (i = 0; i < n; i++)
    {
      if (matriz[i][j] == 1)
      {
        verificador1++;
      }

      if (matriz[i][j] == 0)
      {
        verificador2++;
      }

      if (verificador1 == 1 && verificador2 == n - 1)
      {
        verificadorPerm++;
      }
    }
    j++;
    verificador1 = 0;
    verificador2 = 0;
  }

  if (verificadorPerm == n * 2)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

int main()
{
  int matriz[TAM][TAM], n;
  scanf("%d", &n);

  int i, j;
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      scanf("%d", &matriz[i][j]);
    }
  }

  int soma, perm;

  perm = ehPermutacao(matriz, n, &soma);

  if (perm == 1)
  {
    printf("%d\nPERMUTACAO\n%d\n", n, soma);
  }
  else
  {
    printf("%d\nNAO EH PERMUTACAO\n%d\n", n, soma);
  }

  return 0;
}