class Solution {
public:
    string decodeString(string s) {
        stack<string> tempstr;
        stack<int> tempnum;
        string temp;
        int num = 0, i = 0;
        while (i < s.size()) {
            if (isdigit(s[i])) {
                num = num * 10 + (s[i] - '0');
            } else if (s[i] == '[') {
                tempstr.push(temp);
                tempnum.push(num);
                num = 0;
                temp = "";
            } else if (s[i] == ']') {
                int rep = tempnum.top();
                tempnum.pop();
                string str = tempstr.top();
                tempstr.pop();
                while (rep--) {
                    str += temp;
                }
                temp = str;
            } else {
                temp += s[i];
            }
            i++;
        }
        return temp;
    }
};