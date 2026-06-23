class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> vec;
        stack<TreeNode*> st;
        while (root) {
            while (root) {
                st.push(root);
                root = root->left;
            }

            while (!st.empty()) {
                root = st.top();
                st.pop();
                vec.push_back(root->val);
                if (root->right) {
                    root = root->right;
                    break;
                }
                root = nullptr;
            }
        }
        return vec;
    }
};