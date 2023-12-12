class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size()-1;
        sort(nums.begin(), nums.end());
        int mul = (nums[n]-1)*(nums[n-1]-1);
        int max1=0 , max2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] >= max1){
                max2 = max1;
                max1 = nums[i];
            }
            else max2 = max(max2, nums[i]);
        } 
        return (max1-1)*(max2-1);
    }
};