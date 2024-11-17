#include <stdio.h>

int main()
{
  int largura, altura, k, x, i, j;
  scanf("%d %d %d %d", &largura, &altura, &k, &x);

  int matriz[100][100] = {0};

  for (i = 0; i < altura; i++)
  {
    for (j = 0; j < largura; j++)
    {

      if (i < k || i >= altura - k || j < k || j >= largura - k)
      {
        matriz[i][j] = x;
      }
    }
  }

  printf("P2\n");
  printf("%d %d\n", largura, altura);
  printf("255\n");

  for (i = 0; i < altura; i++)
  {
    for (j = 0; j < largura; j++)
    {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }

  return 0;
}