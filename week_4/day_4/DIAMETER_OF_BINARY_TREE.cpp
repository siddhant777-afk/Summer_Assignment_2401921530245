class Solution {
public:
    int height(TreeNode* root, int& dia) {
        if (root == nullptr)
            return 0;
        int leftDeep = height(root->left, dia);
        int rightDeep = height(root->right, dia);
        dia = max(dia, leftDeep + rightDeep);
        return 1 + max(leftDeep, rightDeep);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int dia = 0;
        height(root, dia);
        return dia;
    }
};