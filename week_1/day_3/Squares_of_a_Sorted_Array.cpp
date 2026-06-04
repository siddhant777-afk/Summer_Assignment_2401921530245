class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> arr;
        int i;
        for (i = 0; i < nums.size(); i++) {
            if (nums[i] >= 0)
                break;
        }
        int j = i - 1;
        while (j >= 0 && i < nums.size()) {
            if (nums[i] > (nums[j] * (-1))) {
                arr.push_back(nums[j] * nums[j]);
                j--;
            } else {
                arr.push_back(nums[i] * nums[i]);
                i++;
            }
        }
        while (i < nums.size()) {
            arr.push_back(nums[i] * nums[i]);
            i++;
        }
        while(j>=0){
            arr.push_back(nums[j]*nums[j]);
            j--;
        }
        return arr;
    }
};