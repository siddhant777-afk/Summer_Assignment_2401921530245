class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j=0,count=0;
        if(s.empty()){
            return true;
        }
        for(int i=0;i<t.size();i++){
            if(s[j]==t[i]){
                j++;
                count++;
            }
            if(count==s.size()){
                return true;
            }
        }
        return false;
        
    }
};