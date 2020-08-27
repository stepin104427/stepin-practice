#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int frequency(char s[], int length, char ch);

int main()
{
  char *s1 = malloc(256 * sizeof(char));
  char *s2 = malloc(256 * sizeof(char));
  scanf("%[^\n]%*c", s1);
  scanf("%[^\n]%*c", s2);

  int length1 = strlen(s1);
  int length2 = strlen(s2);
  s1 = realloc(s1, length1);
  s2 = realloc(s2, length2);

  for(int i = 0; i < length2; i++)
  {
    int freq = frequency(s1, length1, s2[i]);
    printf("%d\n", freq);
  }
  free(s1);
  free(s2);
  return 0;
}

int frequency(char s[], int length, char ch)
{
  int count = 0;
  for(int i = 0; i < length; i++)
  {
    if(s[i] == ch)
    {
      count += 1;
    }
  }
  return count;
}
