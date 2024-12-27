#include "unity.h"
#include "foo.h"

void setUp(void) {}
void tearDown(void) {}

void testfoo(void) {
    TEST_ASSERT_EQUAL(8, foobar(5, 3));
    TEST_ASSERT_EQUAL(0, foobar(0, 0));
    TEST_ASSERT_EQUAL(-2, foobar(-1, -1));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(testfoo);
    return UNITY_END();
}
