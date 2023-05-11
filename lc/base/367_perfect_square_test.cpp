#include "367_perfect_square.h"
#include "gtest/gtest.h"

TEST(PerSqrt, case1) {
    Solution solution;
    EXPECT_TRUE(solution.isPerfectSquare(16));
    EXPECT_FALSE(solution.isPerfectSquare(15));

    EXPECT_TRUE(solution.isPerfectSquare1(16));
    EXPECT_FALSE(solution.isPerfectSquare1(15));
}
