#include <stdio.h>
#include <stdlib.h>

#define MAX_DIM 10

int is_unique(int *matrix, int rows, int cols, int value, int index)
{
  int count = 0, i;
  int total_elements = rows * cols;
  for (i = 0; i < total_elements; i++)
  {
    if (matrix[i] == value)
    {
      count++;
    }
    if (count > 1)
    {
      return 0;
    }
  }
  return count == 1;
}

int main()
{
  int nl, nc;

  scanf("%d %d", &nl, &nc);

  if (nl <= 0 || nl > MAX_DIM || nc <= 0 || nc > MAX_DIM)
  {
    printf("dimensao invalida\n");
    return 0;
  }

  int matrix[nl * nc], i;

  for (i = 0; i < nl * nc; i++)
  {
    scanf("%d", &matrix[i]);
  }

  int has_unique = 0;
  int first = 1;

  for (i = 0; i < nl * nc; i++)
  {
    if (is_unique(matrix, nl, nc, matrix[i], i))
    {
      if (!first)
      {
        printf(",");
      }
      printf("%d", matrix[i]);
      has_unique = 1;
      first = 0;
    }
  }

  if (!has_unique)
  {
    printf("sem elementos unicos\n");
  }

  return 0;
}
