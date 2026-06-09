class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> arr1(26,0),arr2(26,0);
        if(s1.size()>s2.size())
        return false;
        for(int i=0;i<s1.size();i++){
            arr1[s1[i]-'a']++;
            arr2[s2[i]-'a']++;
        }
        if(arr1==arr2)
        return true;
         for(int i=s1.size();i<s2.size();i++){
            arr2[s2[i-s1.size()]-'a']--;
            arr2[s2[i]-'a']++;
            if(arr1==arr2)
            return true;

        }
        return false;
    }
};