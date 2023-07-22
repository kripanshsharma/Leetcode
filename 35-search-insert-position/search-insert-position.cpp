class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
         int n=nums.size();
        
        if(target>nums[n-1]) return n;
        
        int l=0, r=n-1;
        
        while(l<r){
            int m=l+(r-l)/2;
            
            if(nums[m]>=target){
                r=m;
            }else{
                l=m+1;
            }
        }
        return l; // smallest index with value >= k
    }
};