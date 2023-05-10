#include "231_pow_of_two.h"
#include "gtest/gtest.h"

TEST(PowOfTwo, case1) {
    Solution solution;
    EXPECT_FALSE(solution.isPowerOfTwo(15));
    EXPECT_TRUE(solution.isPowerOfTwo(16));
    
    EXPECT_FALSE(solution.isPowerOfTwo1(15));
    EXPECT_TRUE(solution.isPowerOfTwo1(16));
    
    EXPECT_FALSE(solution.isPowerOfTwo2(31));
    EXPECT_TRUE(solution.isPowerOfTwo2(32));
}