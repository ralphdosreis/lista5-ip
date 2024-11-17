#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);

  if (n <= 0 || n > 10)
  {
    printf("dimensao invalida\n");
    return 0;
  }

  int matriz[10][10];
  int i, j;
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      scanf("%d", &matriz[i][j]);
    }
  }

  int simetria;
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      if (matriz[i][j] != matriz[j][i] || matriz[i][j] != matriz[n - j - 1][n - i - 1])
      {
        printf("nao bissimetrica\n");
        return 0;
      }
    }
  }

  printf("bissimetrica\n");

  return 0;
}