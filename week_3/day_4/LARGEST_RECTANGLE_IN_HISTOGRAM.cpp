class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        int n = arr.size();
        vector<int> left(n), right(n);
        stack<int> st;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }
            if (st.empty()) {
                left[i] = i;
            } else {
                left[i] = i - st.top() - 1;
            }
            st.push(i);
        }
        while (!st.empty())
            st.pop();
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }
            if (st.empty()) {
                right[i] = n - i - 1;
            } else {
                right[i] = st.top() - i - 1;
            }
            st.push(i);
        }
        for (int i = 0; i < n; i++) {
            ans = max(ans, (left[i] + right[i] + 1) * arr[i]);
        }
        return ans;
    }
};