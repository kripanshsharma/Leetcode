class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini= INT_MAX;
        int ans=0;
        int profit;
        for(int i=0; i<prices.size(); i++){
            if(prices[i]<mini){
                mini= prices[i];
            }
            profit = prices[i]- mini;
            if(ans<profit){
                ans= profit;
            }


        }
        return ans;
    }
};