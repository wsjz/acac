#include "50_quick_power.h"
#include "gtest/gtest.h"

TEST(QPow, case1) {
    Solution solution;
    EXPECT_EQ(solution.myPowNR(2, 8), 256);
}

TEST(QPow, case2) {
    Solution solution;
    EXPECT_EQ(solution.myPowR(2, 8), 256);
}