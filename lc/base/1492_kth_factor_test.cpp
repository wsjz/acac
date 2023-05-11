#include "1492_kth_factor.h"
#include "gtest/gtest.h"

TEST(KthF, case1) {
    Solution solution;
    EXPECT_EQ(solution.kthFactor(12, 3), 3);
    EXPECT_EQ(solution.kthFactor(7, 2), 7);
    EXPECT_EQ(solution.kthFactor(4, 4), -1);
}