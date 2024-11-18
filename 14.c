#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
  return (*(int *)a - *(int *)b);
}

int main()
{
  int N;

  scanf("%d", &N);

  if (N <= 1 || N > 1000)
  {
    return 0;
  }

  int matrix[N][N];
  int i, j;
  for (i = 0; i < N; i++)
  {
    for (j = 0; j < N; j++)
    {
      scanf("%d", &matrix[i][j]);
    }
  }

  for (j = 0; j < N; j++)
  {
    int column[N];

    for (i = 0; i < N; i++)
    {
      column[i] = matrix[i][j];
    }

    qsort(column, N, sizeof(int), compare);

    for (i = 0; i < N; i++)
    {
      matrix[i][j] = column[i];
    }
  }

  for (i = 0; i < N; i++)
  {
    for (j = 0; j < N; j++)
    {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }

  return 0;
}