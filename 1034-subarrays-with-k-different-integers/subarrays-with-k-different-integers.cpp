class Solution {
public:
    int n;
    int goodLessEqualK(vector<int>& nums, int k){
        int distinct=0;
        int freq[20001]={0};//array is much faster than unordered_map
        int cnt=0;
        for(int l=0, r=0; r<n; r++){
            int x=nums[r];
            distinct+=(++freq[x]==1);
            while(distinct>k){
                int y=nums[l];
                distinct-=(--freq[y]==0);
                l++;
            }
            cnt+=(r-l+1);//nums[l..r] has k distinct numbers, with len=r-l+1
        }
        return cnt;
    }

    int subarraysWithKDistinct(vector<int>& nums, int k) {
        n=nums.size();
        return (k==1)?goodLessEqualK(nums, 1):goodLessEqualK(nums, k)-goodLessEqualK(nums, k-1);
    }
};