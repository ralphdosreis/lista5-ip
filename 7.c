#include <stdio.h>

int main()
{
  int n, i, j;
  char borda, fundo;
  char matriz[99][99];

  scanf("%d %c %c", &n, &borda, &fundo);

  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      matriz[i][j] = ' ';
    }
  }

  int centro = n / 2;

  for (i = 0; i <= centro; i++)
  {
    int start = centro - i;
    int end = centro + i;

    matriz[i][start] = borda;
    matriz[i][end] = borda;
    for (j = start + 1; j < end; j++)
    {
      matriz[i][j] = fundo;
    }

    matriz[n - i - 1][start] = borda;
    matriz[n - i - 1][end] = borda;
    for (j = start + 1; j < end; j++)
    {
      matriz[n - i - 1][j] = fundo;
    }
  }

  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      printf("%c ", matriz[i][j]);
    }
    printf("\n");
  }

  return 0;
}