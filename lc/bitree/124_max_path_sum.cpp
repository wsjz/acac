#include <iostream>
#include <algorithm>

using namespace std;

/**
 * lc 124
 */
class Solution {
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

public:
    int maxPathSum(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        int left = max(0, maxPathSum(root->left));
        int right = max(0, maxPathSum(root->right));
        ans = max(ans, left + right + root->val);
        return max(left, right) + root->val;
    }
private:
    int ans = INT32_MIN;
};

int main() {
    
}