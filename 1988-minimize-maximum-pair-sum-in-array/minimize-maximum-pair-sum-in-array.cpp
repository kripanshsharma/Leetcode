class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int s = 0;
        int e = nums.size()-1;
        int maxi = INT_MIN;
        while(s<e){
            int sum = nums[s++]+nums[e--];
            maxi = max(maxi, sum);
        }
        return maxi;
    }
};