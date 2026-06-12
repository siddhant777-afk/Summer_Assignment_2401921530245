class Solution {
public:
    string reverseWords(string s) {
        int j = 0;
        for (int i = 1; i <= s.size(); i++) {
            if (i==s.size()||s[i] == ' ') {
                int k = i - 1;
                while (j <= k) {
                    swap(s[k],s[j]);
                    j++;
                    k--;
                }
                j=i+1;
            }
        }
        return s; 
    }
};