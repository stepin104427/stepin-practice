#include <stdio.h>
#include <stdlib.h>

void swap(int *num1, int *num2)
{
  int temp = *num1;
  *num1 = *num2;
  *num2 = temp;
}

//Bubble sort
void sort(int *array)
{
  int length = *(array + 0);
  for(int i = 1; i <= length; i++)
  {
    for(int j = 1; j <= (length - i); j++)
    {
      if(*(array + j) > *(array + j + 1))
      {
        swap((array + j), (array + j + 1));
      }
    }
  }
}

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
