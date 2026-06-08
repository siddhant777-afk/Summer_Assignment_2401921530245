class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, pair<int, int>> mpp;
        for (int i = 0; i < s.size(); i++) {
            mpp[s[i]].first += 1;
            mpp[s[i]].second = i;
        }
        int j = INT_MAX;
        for (auto it : mpp) {
            if (it.second.first == 1 && it.second.second < j) {
                j = it.second.second;
            }
        }
        if (j < INT_MAX) {
            return j;
        } else
            return -1;
    }
};