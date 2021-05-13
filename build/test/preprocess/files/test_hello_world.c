#include "build/temp/_test_hello_world.c"
#include "src/hello_world.h"
#include "C:/Ruby24-x64/lib/ruby/gems/2.4.0/gems/ceedling-0.29.1/vendor/unity/src/unity.h"




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

    UnityAssertEqualNumber((UNITY_INT)((val1 + val2 + 1)), (UNITY_INT)((result)), (

   ((void *)0)

   ), (UNITY_UINT)(18), UNITY_DISPLAY_STYLE_INT);

}
