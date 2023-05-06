#include <gtest/gtest.h>
#include "371_sum_two_int.h"

TEST(SumTwoInt, case1) {
    Solution solution;
    EXPECT_EQ(solution.getSumR(5, 7), 12);
}

TEST(SumTwoInt, case2) {
    Solution solution;
    EXPECT_EQ(solution.getSumNoR(5, 7), 12);
}

TEST(SumTwoInt, case3) {
    Solution solution;
    EXPECT_EQ(solution.getSum(123, 456), 579);
}