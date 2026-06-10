class Solution {
public:
    int strStr(string haystack, string needle) {
        ;
        for (int i = 0; i < haystack.size(); i++) {
            int k = 0;
            if (haystack[i] == needle[k]) {
                k++;
                for (int j = i + 1; j < haystack.size() && k < needle.size();
                     j++) {
                    if (haystack[j] == needle[k]) {
                        k++;
                    } else {
                        break;
                    }
                }
            }
            if (k == needle.size()) {
                return i;
            }
        }
        return -1;
    }
};