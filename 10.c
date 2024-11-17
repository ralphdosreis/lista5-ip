#include <stdio.h>

int main()
{
  int linha, coluna, matriz[1000][1000];

  scanf("%d", &linha);
  scanf("%d", &coluna);

  int i, j;
  for (i = 0; i < linha; i++)
  {
    for (j = 0; j < coluna; j++)
    {
      scanf("%d", &matriz[i][j]);
    }
  }

  for (i = 0; i < linha; i++)
  {
    for (j = 0; j < coluna; j++)
    {
      if (matriz[i][j] == 1111)
      {
        // Camiseta no meio
        if (matriz[i + 1][j] == 8)
        {
          if (matriz[i - 1][j] == 4)
          {
            if (matriz[i][j + 1] == 0 && matriz[i][j - 1] == 0)
            {
              printf("%d %d\n", i, j);
              return 0;
            }
          }
        }

        // Camiseta em cima
        if (matriz[i + 1][j] == 8)
        {
          if (matriz[linha - 1][j] == 4)
          {
            // Estando no meio
            if (matriz[i][j + 1] == 0 && matriz[i][j - 1] == 0)
            {
              printf("%d %d\n", i, j);
              return 0;
            }
            // Canto direito
            else if (matriz[i][0] == 0 && matriz[i][j - 1] == 0)
            {
              printf("%d %d\n", i, j);
              return 0;
            }
            // Canto esquerdo
            else if (matriz[i][j + 1] == 0 && matriz[i][coluna - 1] == 0)
            {
              printf("%d %d\n", i, j);
              return 0;
            }
          }
        }

        // Camiseta em baixo
        if (matriz[0][j] == 8)
        {
          if (matriz[i - 1][j] == 4)
          {
            // Estando no meio
            if (matriz[i][j + 1] == 0 && matriz[i][j - 1] == 0)
            {
              printf("%d %d\n", i, j);
              return 0;
            }
            // Canto direito
            else if (matriz[i][0] == 0 && matriz[i][j - 1] == 0)
            {
              printf("%d %d\n", i, j);
              return 0;
            }
            // Canto esquerdo
            else if (matriz[i][j + 1] == 0 && matriz[i][coluna - 1] == 0)
            {
              printf("%d %d\n", i, j);
              return 0;
            }
          }
        }
      }
    }
  }

  printf("WALLY NAO ESTA NA MATRIZ\n");

  return 0;
}