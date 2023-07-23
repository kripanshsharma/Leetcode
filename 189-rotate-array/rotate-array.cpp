class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> v(nums.size());
        for(int i=0; i<nums.size(); i++){
            int n=(i+k)%nums.size();
            v[n]=nums[i];
        }
        nums=v;
    }
};