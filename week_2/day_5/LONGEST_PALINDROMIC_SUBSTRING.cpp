class Solution {
public:
    string longestPalindrome(string s) {
        int len=1,str=0;
        for(int i=0;i<s.size();i++){
            int left=i,right=i;         while(left<s.size()&&right>=0){
                if(s[left]==s[right]){
                    left++;
                    right--;
                }else{
                    break;
                }
            }
            if((left-right-1)>len){
                str=right+1;
                len=(left-right-1);}
            left=i+1;
                right=i;
      while(left<s.size()&&right>=0){
                if(s[left]==s[right]){
                    left++;
                    right--;
                }else{
                    break;
                }
            }
            if((left-right-1)>len){
                str=right+1;
                len=(left-right-1);
            }
        }
        return s.substr(str,len);
    }
};