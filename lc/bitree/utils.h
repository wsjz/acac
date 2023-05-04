#include <iostream>
#include <list>
#include <algorithm>
#include <math.h>

using namespace std;

/**
 * lc 124
 */
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

static TreeNode *buildTree(list<int> levels) {
    if (levels.empty()) {
        return nullptr;
    }
    list<TreeNode *> nodes;
    auto *root = new TreeNode(levels.front());
    levels.pop_front();
    nodes.push_back(root);
    while (!nodes.empty()) {
        auto *node = nodes.front();
        nodes.pop_front();
        if (!levels.empty()) {
            int lv = levels.front();
            levels.pop_front();
            node->left = new TreeNode(lv);
            nodes.push_back(node->left);
        }
        if (!levels.empty()) {
            int rv = levels.front();
            levels.pop_front();
            node->right = new TreeNode(rv);
            nodes.push_back(node->right);
        }
    }
    return root;
}

static void printTree(TreeNode *tree) {
    list<TreeNode *> nodes;
    nodes.push_back(tree);
    int level = 0;
    int num_cur_nodes = 0;
    int num_level_node = 1;
    while (!nodes.empty()) {
        auto *node = nodes.front();
        nodes.pop_front();
        if (node == nullptr) {
            continue;
        }
        if (node->val == INT32_MIN) {
            cout << " " << "null" << " ";
            continue;
        }
        cout << " " << node->val << " ";
        num_cur_nodes++;
        if (num_cur_nodes == num_level_node) {
            cout << "\n";
            num_cur_nodes = 0;
            num_level_node = static_cast<int>(pow(2, ++level));
        }
        nodes.push_back(node->left);
        nodes.push_back(node->right);
    }
}
