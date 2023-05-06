#include "gtest/gtest.h"
#include "utils.h"

TEST(Utils, utils1) {
    list<int> levels = {1, 2, 3, 4, 5, INT32_MIN, 7};
    auto* tree = buildTree(levels);
    printTree(tree);
}


TEST(Utils, utils2) {
    list<int> levels = {1, 2, 3, 4, 5, INT32_MIN, 7};
    auto* tree = buildTree(levels);
    printTree(tree);
}
