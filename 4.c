#include <stdio.h>

int main()
{
  double A[2][2], result[2][2] = {0};
  int i, j, k;

  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 2; j++)
    {
      scanf("%lf", &A[i][j]);
    }
  }

  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 2; j++)
    {

      for (k = 0; k < 2; k++)
      {
        result[i][j] += A[i][k] * A[k][j];
      }
    }
  }

  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 2; j++)
    {
      printf("%.3lf ", result[i][j]);
    }
    printf("\n");
  }

  return 0;
}