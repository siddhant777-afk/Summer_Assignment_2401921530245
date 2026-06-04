class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum{0};
        double rem;
      for(int i=0;i<k;i++){
        sum+=nums[i];
      } 
      rem=sum/(double)k;
      for(int i=k;i<nums.size();i++){
         sum+=nums[i]-nums[i-k];
          if(rem<=(sum/(double)k)){
            rem=sum/(double)k;
        } 
      }
      return rem; 
    }
};