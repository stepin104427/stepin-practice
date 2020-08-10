#include <stdio.h>
#include <math.h>

short checkPrime(int n)
{
  short primeFlag = 1;
  for(int i = 2; i <= sqrt(n); i++)
  {
    if(n % i == 0)
    {
      primeFlag = 0;
      break;
    }
  }
  if(n <= 1)
  {
    primeFlag = 0;
  }
  return primeFlag;

}

int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  if(checkPrime(n))
  {
    printf("The number %d is a Prime Number\n", n);
  }
  else
  {
    printf("The number %d is NOT a Prime Number\n", n);
  }
  return 0;
}
