class Solution {
public:
    bool isSymm(TreeNode* p, TreeNode* q) {
        if (!p && !q) {
            return true;
        }
        if (!p && q || p && !q)
            return false;
        if ((p->val != q->val))
            return false;
        bool left = isSymm(p->left, q->right);
        bool right = isSymm(p->right, q->left);
        return left && right;
    }
    bool isSymmetric(TreeNode* root) { 
        return isSymm(root->left, root->right);
     }
};