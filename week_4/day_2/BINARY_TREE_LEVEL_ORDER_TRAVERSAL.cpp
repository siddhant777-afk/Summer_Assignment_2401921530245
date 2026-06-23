    class Solution {
    public:
        vector<vector<int>> levelOrder(TreeNode* root) {
            queue<TreeNode*> qu;
            vector<vector<int>> vec;
            if (!root) {
                return vec;
            }
            qu.push(root);
            while (!qu.empty()) {
                int size = qu.size();
                vector<int> veco;
                while (size) {
                    root = qu.front();
                    qu.pop();
                    veco.push_back(root->val);
                    if (root->left) {
                        qu.push(root->left);
                    }
                    if (root->right) {
                        qu.push(root->right);
                    }
                    size--;
                }
                vec.push_back(veco);            
            }
            return vec;
        }
    };