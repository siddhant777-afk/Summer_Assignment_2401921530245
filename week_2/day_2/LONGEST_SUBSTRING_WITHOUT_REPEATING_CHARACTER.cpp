class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mpp;
        int count = 0, maxcount = 0, j = 0;
        for (int i = 0; i < s.size(); i++) {
            mpp[s[i]] += 1;
            while (mpp.find(s[i])->second > 1) {
                mpp[s[j]] -= 1;
                j++;
                maxcount--;
            }
            if (mpp.find(s[i])->second <= 1) {
                maxcount++;
                count = max(maxcount, count);
            }
        }
        return count;
    }
};