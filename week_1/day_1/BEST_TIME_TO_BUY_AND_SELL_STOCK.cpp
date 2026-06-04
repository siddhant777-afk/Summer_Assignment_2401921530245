class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int buy=prices[0],maxi=INT_MIN,diff=0;
    for(int i=1;i<prices.size();i++){
        diff=prices[i]-buy;
        maxi=max(diff,maxi);
        if(diff<0){
            buy=prices[i];
        }
    }
    if(maxi<0){
        return 0;
    }
    return maxi;
    }
};