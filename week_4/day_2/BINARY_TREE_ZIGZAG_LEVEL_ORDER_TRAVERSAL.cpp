class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        deque<TreeNode*> dqu;
        vector<vector<int>> vec;
        if (!root) {
            return vec;
        }
          int i=0;  
        dqu.push_back(root);
        while (!dqu.empty()) {
            int size = dqu.size();
            vector<int> veco;
            while (size) {
                if(i%2==0){
                root = dqu.front();
                dqu.pop_front();
                if (root->left) {
                    dqu.push_back(root->left);
                }
                if (root->right) {
                    dqu.push_back(root->right);
                }}else{
            root = dqu.back();
                dqu.pop_back();
                    if (root->right) {
                    dqu.push_front(root->right);
                }
                if (root->left) {
                    dqu.push_front(root->left);
                }
                }
                veco.push_back(root->val);
                
                size--;
            }
            vec.push_back(veco);            i++;
        }
        return vec;
    }
};