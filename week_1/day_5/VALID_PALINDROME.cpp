class Solution {
public:
    bool isPalindrome(string s) {
        int i = s.size() - 1, j = 0;
        while (j <= i) {
            while (!isalnum(s[j]) && j < i) {
                j++;
            }
            while (!isalnum(s[i]) && j < i) {
                i--;
            }
            if (tolower(s[j]) != tolower(s[i])) {
                return false;
            }
            j++;
            i--;
        }
        return true;
    }
};