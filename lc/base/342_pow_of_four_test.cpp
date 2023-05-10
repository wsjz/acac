#include "342_pow_of_four.h"
#include "gtest/gtest.h"

TEST(PowOfFour, case1) {
    Solution solution;
    EXPECT_TRUE(solution.isPowerOfFour(64));
    EXPECT_FALSE(solution.isPowerOfFour(65));
    EXPECT_TRUE(solution.isPowerOfFour1(64));
    EXPECT_FALSE(solution.isPowerOfFour1(65));
}