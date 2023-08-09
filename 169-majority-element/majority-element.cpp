class Solution {
public:
    /*
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        return nums[n/2];
        
    }*/
        int majorityElement(vector<int>& nums) {
        int ctr=1;
        int ele=nums[0];

        for(int i=1;i<nums.size();i++){
            if(!ctr) ele=nums[i];

            ele==nums[i]?ctr++:ctr--;
        }
        return ele;
    }
};