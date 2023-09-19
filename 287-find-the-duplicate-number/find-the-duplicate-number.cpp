class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> v(nums.size());
        int ans =0;
        for(int i=0; i<nums.size(); i++){
            if(v[nums[i]-1]==nums[i]){
                ans = nums[i];
                break;
            }
            else{
                v[nums[i]-1]=nums[i];
            }
        }
        return ans;
    }
};