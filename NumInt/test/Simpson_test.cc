#include "gtest/gtest.h"
#include "Simpson.hpp"

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions1) {
    // Expect two strings not to be equal.
    EXPECT_STRNE("hello", "world");
}

TEST(HelloTest, BasicAssertions2) {
    // Expect equality.
    EXPECT_EQ(6 * 6, 36);
}

TEST(HelloTest, BasicAssertions3) {
    // Expect equality.
    EXPECT_EQ(10 * 10, 100);
}

TEST(HelloTest2, BasicAssertions1) {
    // Expect equality.
    EXPECT_EQ(10 * 10, 100);
}