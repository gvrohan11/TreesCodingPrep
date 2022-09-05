// Leetcode
// O(log(n))

class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if (root == nullptr) return true;
        
        return symmetric(root->left, root->right);
    }
    
    bool symmetric(TreeNode* l, TreeNode* r) {
        if (l == nullptr && r == nullptr) return true;
        
        if (l == nullptr || r == nullptr) return false;
        
        if (l->val != r->val) return false;
        
        return symmetric(l->left, r->right) && symmetric (l->right, r->left);
    }
};
