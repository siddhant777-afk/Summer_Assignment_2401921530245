class Solution {
public:
    int ans=INT_MIN;
    int Path(TreeNode* root){
        if(!root)
            return 0;
        int left=Path(root->left);
        int right=Path(root->right);
        if(left<0)
            left=0;
        if(right<0)
            right=0;
        ans = max(ans, root->val + left + right);
        return root->val + max(left,right);
    }
    int maxPathSum(TreeNode* root) {
        Path(root);
        return ans;
    }
};