#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORDS 200
#define MAX_WORD_LEN 64 + 1

int str_split(char *str, char m[][MAX_WORD_LEN], char *sep)
{
  int word_count = 0;
  char *token = strtok(str, sep);

  while (token != NULL)
  {
    if (word_count >= MAX_WORDS)
      break;
    strncpy(m[word_count], token, MAX_WORD_LEN - 1);
    m[word_count][MAX_WORD_LEN - 1] = '\0';
    word_count++;
    token = strtok(NULL, sep);
  }

  return word_count;
}

int count_max_length_words(char m[][MAX_WORD_LEN], int word_count, int *max_length)
{
  int count = 0;
  *max_length = 0;
  int i;
  for (i = 0; i < word_count; i++)
  {
    int length = strlen(m[i]);
    if (length > *max_length)
    {
      *max_length = length;
      count = 1;
    }
    else if (length == *max_length)
    {
      count++;
    }
  }

  return count;
}

int main()
{
  char text[10001];
  char separators[1001];
  char words[MAX_WORDS][MAX_WORD_LEN];
  int word_count, max_length, max_length_count;

  scanf("%[^\n]", text);
  getchar();
  scanf("%[^\n]", separators);

  word_count = str_split(text, words, separators);

  max_length_count = count_max_length_words(words, word_count, &max_length);
  int i;
  for (i = 0; i < word_count; i++)
  {
    printf("(%lu) %s\n", strlen(words[i]), words[i]);
  }

  printf("%d\n", max_length_count);

  return 0;
}