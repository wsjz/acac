#include "gtest/gtest.h"
#include "utils.h"

TEST(Case, test1) {
    std::cout << "sdfgdgsdfg" << std::endl;
    EXPECT_EQ(7*8, 56);
}

TEST(Case, test2) {
    list<int> levels = {1, 2, 3, 4, 5, INT32_MIN, 7};
    auto* tree = buildTree(levels);
    printTree(tree);
}