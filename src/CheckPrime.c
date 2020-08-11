/**
* @file CheckPrime.c
*
*/
#include <stdio.h>

/**
* Check if a number is prime or not
* @param[in] Number to be checked
* @return If number is prime or not
* @note Returns 1 if prime and 0 if not prime
*/
short checkPrime(int n)
{
  short primeFlag = 1;
  for(int i = 2; i <= n/2; i++)
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
