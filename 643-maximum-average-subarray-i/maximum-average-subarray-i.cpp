class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans= INT_MIN;
        int n= nums.size(), i;
        double sum = 0.0;
        for(i=0; i<k; i++){
            sum+= nums[i];
            ans = sum/k;
        }
        if(n>1){
            while(i<n){
            sum += nums[i] - nums[i-k];
            
            ans = max(ans, sum/k);
            
            i++;
            }
        }
        
        
        return ans;

    }
};