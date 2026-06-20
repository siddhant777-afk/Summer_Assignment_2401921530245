class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for (string s : tokens) {
            if (s == "+" || s == "-" || s == "*" || s == "/") {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                if (s == "+")
                    st.push(b + a);
                else if (s == "-")
                    st.push(b - a);
                else if (s == "*")
                    st.push(b * a);
                else
                    st.push(b / a);
            } else {
                int num = 0;
                int sign = 1;
                int j = 0;

                if (s[0] == '-') {
                    sign = -1;
                    j = 1;
                }

                for (int i = j; i < s.size(); i++) {
                    num = num * 10 + (s[i] - '0');
                }

                st.push(sign * num);
            }
        }
        return st.top();
    }
};