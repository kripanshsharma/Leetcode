class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int cnt = 0, n = nums.size();
        for (int i=n-1; i>=0; i--) {
            if (abs(nums[i]) <= k) { 
                if (nums[abs(nums[i])-1] < 0) {
                    continue;
                }
                else {
                    cnt++;
                    nums[abs(nums[i])-1] *= -1;
                    if (cnt == k) return n-i;
                }
            }
        }
        return -1;
    }
};