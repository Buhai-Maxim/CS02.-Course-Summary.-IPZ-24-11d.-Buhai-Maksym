
#include <algorithm> 

class Solution {
public:
    int maxDepth(TreeNode* root) {
        
        if (root == nullptr) {
            return 0;
        }

        
        int leftHeight = maxDepth(root->left);
        int rightHeight = maxDepth(root->right);

        
        return std::max(leftHeight, rightHeight) + 1;
    }
};