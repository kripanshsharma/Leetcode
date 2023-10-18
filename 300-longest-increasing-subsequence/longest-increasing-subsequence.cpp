class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }

        vector<int> ans;
        ans.push_back(nums[0]);

        for(int i = 1; i < nums.size(); i++) {
            if (ans.back() < nums[i]) {
                ans.push_back(nums[i]);
            }
            else {
                auto it = lower_bound(ans.begin(), ans.end(), nums[i]);
                int index = distance(ans.begin(), it);
                ans[index] = nums[i];
            }
        }
        return ans.size();
    }
};