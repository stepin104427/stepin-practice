#include "unity.h"
#include "CheckPrime.h"

void setUp(){}

void tearDown(){}

void testPrime(void)
{
  TEST_ASSERT_EQUAL_MESSAGE(1, checkPrime(37), "Standard test case[37]");
  TEST_ASSERT_EQUAL_MESSAGE(1, checkPrime(97), "Standard test case[97]");
  TEST_ASSERT_EQUAL_MESSAGE(0, checkPrime(10), "Standard test case[10]");
}
void testOneZero(void)
{
  TEST_ASSERT_EQUAL_MESSAGE(0, checkPrime(1), "Border test case[1]");
  TEST_ASSERT_EQUAL_MESSAGE(0, checkPrime(0), "Border test case[0]");
}
void testNegative(void)
{
  TEST_ASSERT_EQUAL_MESSAGE(0, checkPrime(-2), "Negative test case[-2]");
}

int testMain(void)
{
  UNITY_BEGIN();

  RUN_TEST(testPrime);
  RUN_TEST(testOneZero);
  RUN_TEST(testNegative);

  return UNITY_END();
}
