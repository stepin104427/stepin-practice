#include <stdio.h>

int addition(int a, int b){
  return (a + b);
}

int subtraction(int a, int b){
  return (a - b);
}

int multiplication(int a, int b){
  return (a * b);
}

int division(int a, int b){
  if(b == 0){
    printf("Denominator cannot be 0");
    return -1;
  }
  return (a / b);
}

int calculator(int choice, int x, int y)
{
  int (*calcPtr[4])(int, int);
  calcPtr[0] = addition;
  calcPtr[1] = subtraction;
  calcPtr[2] = multiplication;
  calcPtr[3] = division;

  int result = (*calcPtr[choice-1]) (x, y);
  return result;
}
