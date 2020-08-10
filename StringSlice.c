/**
*@File StringSlice
*
*
*/
#include <stdio.h>
#include <string.h>

void strSlice(char str[], char delim[])
{
  printf("Original string: %s\n", str);
  printf("\nSliced string:\n");

  char *word = strtok(str, delim);
  while(word != NULL){
    printf("%s\n", word);
    word = strtok(NULL, delim);
  }
}

int main()
{
  char str[50], delim[2];
  printf("Enter a string: ");
  scanf("%[^\n]%*c", str);
  printf("Enter a delimeter: ");
  scanf("%[^\n]%*c", delim);
  strSlice(str, delim);
  return(0);
}
