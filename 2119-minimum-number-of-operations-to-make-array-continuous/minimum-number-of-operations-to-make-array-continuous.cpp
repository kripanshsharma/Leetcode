class Solution {
public:
    int minOperations(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int uniqueLen = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                nums[uniqueLen++] = nums[i];
            }
        }

        int ans = nums.size();
        for (int i = 0, j = 0; i < uniqueLen; i++) {
            while (j < uniqueLen && nums[j] - nums[i] <= nums.size() - 1) {
                j++;
            }
            ans = min(ans, static_cast<int>(nums.size()) - (j - i));
        }

        return ans;
    

    }
};