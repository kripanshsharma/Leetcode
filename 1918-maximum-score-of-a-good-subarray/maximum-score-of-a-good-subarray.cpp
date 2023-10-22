class Solution {
public:
    int maximumScore(vector<int>& nums, int k) {
        int left = k, right = k;
        int min_val = nums[k];
        int max_score = min_val;  // Initial score when the window size is 1

        while (left > 0 || right < nums.size() - 1) {
            // Move the window to the side where the value is larger
            if (left == 0 || (right < nums.size() - 1 && nums[right + 1] > nums[left - 1])) {
                right++;
            } else {
                left--;
            }

            // Update the minimum value in the window
            min_val = min(min_val, min(nums[left], nums[right]));

            // Update the maximum score
            max_score = max(max_score, min_val * (right - left + 1));
        }

        return max_score;
    }
};
