# include <stdio.h>
# include <string.h>
# include <stdlib.h>

void isogram(char string[], int length);
void sorted(char string[], int length);

int main()
{
  char* string = malloc(100 * sizeof(char));
  scanf("%s", string);
  strcpy(string, "string");
  int length = strlen(string);
  string = realloc(string, length);
  sorted(string, length);
  isogram(string, length);
  free(string);

  return 0;
}

void sorted(char string[], int length)
{
  for(int i = 0; i < length - 1; i++)
  {
    for(int j = 0; j < length - i - 1; j++)
    {
      if(string[i] < string[j])
      {
        char temp = string[i];
        string[i] = string[j];
        string[j] = temp;
      }
    }
  }
}

void isogram(char string[], int length)
{
  for(int i = 1; i < length; i++)
  {
    if(string[i] == string[i - 1])
    {
      printf("Not isogram\n");
      return;
    }
  }
  printf("Isogram\n");
}
