class Solution {
public:
    int compress(vector<char>& chars) {
        if (chars.size() == 1)
            return 1;
        int i = 0, j = 0;
        while (j < chars.size()) {
            int count = 1;
            while (j < chars.size() - 1 && chars[j] == chars[j + 1]) {
                count++;
                j++;
            }
            chars[i] = chars[j];
            if (count != 1) {
                int k = i;
                while (count) {
                    i++;
                    chars[i] = (count % 10) + '0';
                    count /= 10;
                }
                reverse(chars.begin() + k + 1, chars.begin() + i + 1);
            }
            i++;
            j++;
        }
        return i;
    }
};
