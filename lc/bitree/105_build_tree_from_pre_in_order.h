#include "utils.h"
#include <vector>
#include <unordered_map>

class Solution {

private:
    unordered_map<int, int> inMap;
    bool baseCase;
    bool withMap;

public:
    explicit Solution(bool baseCase) : Solution(baseCase, false) {}
    explicit Solution(bool baseCase, bool withMap) : baseCase(baseCase), withMap(withMap) {}

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        size_t n = preorder.size();
        for (int i = 0; i < n; ++i) {
            inMap[inorder[i]] = i;
        }
        return buildTreeWithMap(preorder, 0, n - 1, inorder, 0, n - 1);
    }

    TreeNode* buildTreeWithMap(vector<int>& preorder, size_t preStart, size_t preEnd,
                        vector<int>& inorder, size_t inStart, size_t inEnd) {
        if (preStart > preEnd || inStart > inEnd) {
            return nullptr;
        }
        auto* root = new TreeNode(preorder[preStart]);
        size_t inRoot = inMap[root->val];
        size_t numLeft = inRoot - inStart;
        root->left = buildTreeWithMap(preorder, preStart + 1, preStart + numLeft, inorder, inStart, inRoot - 1);
        root->right = buildTreeWithMap(preorder, preStart + numLeft + 1, preEnd, inorder, inRoot + 1, inEnd);
        return root;
    }

    TreeNode* buildTreeWithoutMap() {
        // todo
        return nullptr;
    }
};