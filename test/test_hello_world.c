#include "unity.h"

#include "hello_world.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_hello_world_NeedToImplement(void)
{
    int val1 = 1;
    int val2 = 1;
    int result = addition( val1, val2 );
    TEST_ASSERT_EQUAL_INT( val1 + val2 + 1, result );
}
