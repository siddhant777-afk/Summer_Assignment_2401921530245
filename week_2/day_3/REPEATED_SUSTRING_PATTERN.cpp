class Solution {
public:
    bool repeatedSubstringPattern(string s) {
    for (int len = 1; len <= s.size() / 2; len++) {
        if (s.size() % len != 0) continue;

        string pattern = s.substr(0, len);
        string temp = "";

        while (temp.size() < s.size())
            temp += pattern;

        if (temp == s)
            return true;
    }

    return false;  
    }
};