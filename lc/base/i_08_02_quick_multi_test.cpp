#include "i_08_02_quick_multi.h"
#include "gtest/gtest.h"

TEST(QMul, case1) {
Solution solution;
EXPECT_EQ(solution.multiply(2, 8), 16);
}

TEST(QMul, case2) {
Solution solution;
EXPECT_EQ(solution.multiR(2, 8), 16);
}