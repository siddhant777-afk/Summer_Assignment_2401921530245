class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }
        int values[26] = {0};
        for (int i = 0; i < s.size(); i++) {
            values[s[i] - 'a']++;
            values[t[i] - 'a']--;
        }
        for (int i = 0; i < 26; i++) {
            if (values[i] != 0) {
                return false;
            }
        }
        return true;
    }
};