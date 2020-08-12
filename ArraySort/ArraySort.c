#include <stdio.h>

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
