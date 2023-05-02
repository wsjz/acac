#include <iostream>
#include <algorithm>

using namespace std;

/**
 * lc 124
 */
class Solution {
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
};

public:
    int oneSideMax(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        int left = max(0, oneSideMax(root->left));
        int right = max(0, oneSideMax(root->right));
        ans = max(ans, left + right + root->val);
        return max(left, right) + root->val;
    }
private:
    int ans = INT32_MIN;
};

int main() {
    
}