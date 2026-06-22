class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == nullptr)
            return 0;

        int leftDeep = maxDepth(root->left);
        int rightDeep = maxDepth(root->right);

        return 1 + max(leftDeep, rightDeep);
    }
};