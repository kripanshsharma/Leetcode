class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int j=0,count=0, ele= nums[0];
        for(int i=1; i<nums.size(); i++){
            ele ^= nums[i];
        }
        return ele;
    }
};