#include "utils.h"

/**
 * lc 124
 */
class Solution {
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