class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
         vector<int> arr1(26,0),arr2(26,0);
         vector<int> vec;
        if(p.size()>s.size())
        return vec;
        for(int i=0;i<p.size();i++){
            arr1[p[i]-'a']++;
            arr2[s[i]-'a']++;
        }
        if(arr1==arr2)
        vec.push_back(0);
         for(int i=p.size();i<s.size();i++){
            arr2[s[i-p.size()]-'a']--;
            arr2[s[i]-'a']++;
            if(arr1==arr2)
            vec.push_back(i-(p.size()-1));

        }
        return vec; 
    }
};