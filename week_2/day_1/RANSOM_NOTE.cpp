class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
 int val[26]={0};
        for(int i=0;i<=magazine.size()-1;i++){
            val[magazine[i]-'a']+=1;
        }
          for(int i=0;i<=ransomNote.size()-1;i++){
           if(val[ransomNote[i]-'a']==0){
            return false;
           }else{
            val[ransomNote[i]-'a']-=1;
           }
        }
          return true; 
    }
};