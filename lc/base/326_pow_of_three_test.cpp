#include "326_pow_of_three.h"
#include "gtest/gtest.h"

TEST(PowOfThree, case1) {
    Solution solution;
    EXPECT_TRUE(solution.isPowerOfThree(81));
    EXPECT_FALSE(solution.isPowerOfThree(80));
    EXPECT_TRUE(solution.isPowerOfThree1(81));
    EXPECT_FALSE(solution.isPowerOfThree1(80));
}