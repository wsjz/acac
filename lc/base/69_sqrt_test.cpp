#include "69_sqrt.h"
#include "gtest/gtest.h"

TEST(QSqrt, case1) {
    Solution solution;
    EXPECT_EQ(solution.mySqrt(4), 2);
}

TEST(QSqrt, case2) {
    Solution solution;
    EXPECT_EQ(solution.mySqrtMath(4), 2);
}

TEST(QSqrt, case3) {
    Solution solution;
    EXPECT_EQ(solution.mySqrtNewton(4), 2);
}