class Solution {
public:
    vector<string> ans;

    void solve(string s, int op, int cl, int n) {
        if (s.size() == 2 * n) {
            ans.push_back(s);
            return;
        }

        if (op < n)
            solve(s + "(", op + 1, cl, n);

        if (cl < op)
            solve(s + ")", op, cl + 1, n);
    }

    vector<string> generateParenthesis(int n) {
        solve("", 0, 0, n);
        return ans;
    }
};