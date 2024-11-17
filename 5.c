#include <stdio.h>

int main()
{
  int matriz[6][6];
  int i, j;

  for (i = 0; i < 6; i++)
  {
    for (j = 0; j < 6; j++)
    {
      scanf("%d", &matriz[i][j]);
    }
  }

  int max_sum = -63;

  for (i = 0; i <= 3; i++)
  {
    for (j = 0; j <= 3; j++)
    {

      int ampulheta_sum =
          matriz[i][j] + matriz[i][j + 1] + matriz[i][j + 2] +
          matriz[i + 1][j + 1] +
          matriz[i + 2][j] + matriz[i + 2][j + 1] + matriz[i + 2][j + 2];

      if (ampulheta_sum > max_sum)
      {
        max_sum = ampulheta_sum;
      }
    }
  }

  printf("%d\n", max_sum);

  return 0;
}