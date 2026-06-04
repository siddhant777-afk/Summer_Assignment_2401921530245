class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j,temp;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                j=i;
                break;
            }
        }
        for(int i=j+1;i<nums.size();i++){
            if(nums[i]!=nums[j]){
                temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
                j++;
            }
        }
        
    }
};