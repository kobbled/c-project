#include <gtest/gtest.h>

extern "C" {
    #include "libfoo.h"
}

int passed = 0;
int failed = 0;

TEST (FooTest, GetAnswer) {
    EXPECT_EQ(get_answer(), 42);
}

TEST (FooTest, GetWrongAnswer) {
    EXPECT_NE(get_answer(), 0);
}
