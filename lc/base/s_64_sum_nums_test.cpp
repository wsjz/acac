#include "s_64_sum_nums.h"
#include "gtest/gtest.h"

TEST(SumNums, case1) {
    Solution solution;
    EXPECT_EQ(solution.sumNums(9), 45);
}

TEST(SumNums, case2) {
    Solution solution;
    EXPECT_EQ(solution.sumNums1(9), 45);
}
