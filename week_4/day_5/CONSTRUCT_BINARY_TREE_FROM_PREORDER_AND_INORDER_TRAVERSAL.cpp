class Solution {
public:
    unordered_map<int, int> mpp;
    int value = 0;
    TreeNode* build(vector<int>& preorder, int start, int end) {
        if (end < start)
            return nullptr;
        TreeNode* root = new TreeNode(preorder[value++]);
        int sub = mpp[root->val];
        root->left = build(preorder, start, sub - 1);
        root->right = build(preorder, sub + 1, end);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for (int i = 0; i < inorder.size(); i++)
            mpp[inorder[i]] = i;
        return build(preorder, 0, preorder.size() - 1);
    }
};