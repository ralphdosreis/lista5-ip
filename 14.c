#include <stdio.h>
#include <string.h>

int funcao(char n, char string[])
{
  int i = 2;

  while (string[i] != '\0')
  {
    if (string[i] == n)
    {
      return i;
    }
    i++;
  }

  return -1;
}

int main()
{
  int n, aux, i;
  // Ler qtd Loop
  scanf("%d", &n);
  getchar();

  char string[500];
  char procura;

  for (i = 0; i < n; i++)
  {
    // Ler string
    fgets(string, sizeof(string), stdin);

    // Separar primeiro caracter
    procura = string[0];

    // Vericar Toda a string e encontrar o caracter
    aux = funcao(procura, string) - 2;

    // Printagem do problema
    if (aux != -3)
    {
      printf("Caractere %c encontrado no indice %d da string.\n", procura, aux);
    }
    else
    {
      printf("Caractere %c nao encontrado.\n", procura);
    }
  }

  return 0;
}