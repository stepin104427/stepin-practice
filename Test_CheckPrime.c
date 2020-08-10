#include "unity.h"
#include "CheckPrime.h"

void setUp(){}

void tearDown)(){}

void testPrime(void)
{
  TEST_ASSERT_EQUAL(1, checkPrime(37));
  TEST_ASSERT_EQUAL(1, checkPrime(97));
  TEST_ASSERT_EQUAL(0, checkPrime(10));
}
void testOneZero(void)
{
  TEST_ASSERT_EQUAL(0, checkPrime(1));
  TEST_ASSERT_EQUAL(0, checkPrime(0));
}

void testNegative(void)
{
  TEST_ASSERT_EQUAL(0, checkPrime(-2));
}
