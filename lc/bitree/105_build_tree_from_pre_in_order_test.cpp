#include "gtest/gtest.h"
#include "105_build_tree_from_pre_in_order.h"

TEST(PreIn, base_line) {
    /**
     * 输入: preorder = [3,9,20,15,7], inorder = [9,3,15,20,7]
     * 输出: [3,9,20,null,null,15,7]
     * 
     * 输入: preorder = [-1], inorder = [-1]
     * 输出: [-1]
     */
    Solution solution(true);
    vector<int> preorder = {3,9,20,15,7};
    vector<int> inorder = {9,3,15,20,7};
    auto* tree = solution.buildTree(preorder, inorder);
    printTree(tree);
    cout << endl;
}

TEST(PreIn, with_map) {
    Solution solution(false, true);
    // solution.buildTree();
    cout << endl;
}

TEST(PreIn, with_no_map) {
    Solution solution(false, false);
    // solution.buildTree();
    cout << endl;
}