#include <stdio.h>

#define INF -1

int main()
{
  int dist[6][6] = {
      {0, 63, 210, 190, INF, 190},
      {63, 0, 160, 150, 95, 10},
      {210, 160, 0, 10, 1, 10},
      {190, 150, 10, 0, 10, 20},
      {INF, 95, 1, 10, 0, 80},
      {190, 10, INF, 41, 80, 0}
  };

  int N;
  scanf("%d", &N);

  if (N <= 0 || N > 100)
  {
    printf("rota invalida!\n");
    return 0;
  }

  int route[N], i;
  for (i = 0; i < N; i++)
  {
    scanf("%d", &route[i]);

    if (route[i] < 0 || route[i] > 5)
    {
      printf("rota invalida!\n");
      return 0;
    }
  }

  int total_distance = 0;
  for (i = 0; i < N - 1; i++)
  {
    int from = route[i];
    int to = route[i + 1];

    if (dist[from][to] == INF)
    {
      printf("rota invalida!\n");
      return 0;
    }

    total_distance += dist[from][to];
  }

  printf("%d\n", total_distance);

  return 0;
}
