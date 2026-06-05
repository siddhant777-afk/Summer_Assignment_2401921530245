class Solution {
public:
    string longestCommonPrefix(vector<string>& nums) {
        string st="";
        if(nums.size()==0){
            return st;
        }
        for(int i=0;i<nums[0].size();i++){
        for(int j=1;j<nums.size();j++){
            if(nums[0][i]!=nums[j][i]){
                return st;
            }        }
                 st=st+nums[0][i];
        }
   return st;
    }
};