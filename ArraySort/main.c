#include <stdio.h>
#include <stdlib.h>
#include "ArraySort.h"

int main()
{
  int length = 0;
  printf("Enter number of elements: ");
  scanf("%d", &length);
  int *array = malloc(sizeof(int) * (length + 1));
  array[0] = length;

  printf("Enter %d integers:\n", length);
  for(int i = 1; i <= length; i++)
  {
    scanf("%d", (array + i));
  }

  printf("Original array[length = %d]: ", *array);
  for(int i = 1; i <= length; i++)
  {
    printf("%d ", *(array + i));
  }
  sort(array);
  printf("\nSorted array: ");
  for(int i = 1; i <= length; i++)
  {
    printf("%d ", *(array + i));
  }
  printf("\n");
  return 0;
}
