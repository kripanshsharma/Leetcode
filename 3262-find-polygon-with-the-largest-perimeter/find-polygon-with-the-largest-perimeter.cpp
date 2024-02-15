class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n=nums.size();
        long long p=0, res=nums[0]+nums[1];
        for(int i=2; i<n; i++){
            if (res>nums[i])
                p=res+nums[i];
            res+=nums[i];
        }
        return p==0?-1:p;
    }
};