class Solution {
public:
bool hasSum(TreeNode* root, int sum,int targetSum){
       if(!root)
    return false;          
        bool leftDeep = hasSum(root->left,sum+root->val,targetSum);
         if (!root&&(sum == targetSum))
            return true;
        bool rightDeep = hasSum(root->right,sum+root->val,targetSum);       
        return leftDeep||rightDeep;
}
    bool hasPathSum(TreeNode* root, int targetSum) {
return  hasSum(root,0,targetSum);         
    }
};