class Solution {
public:
    // int findKthLargest(vector<int>& nums, int k) {
        
    //     sort(nums.begin(),nums.end(),greater<int>());
    //     return nums[k-1];
    // }
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq(nums.begin(), nums.end());
        for (int i = 0; i < k - 1; i++) 
            pq.pop();
        return pq.top();
    }

    /*
    int findKthLargest(vector<int>& nums, int k) {
        int left = 0, right = nums.size() - 1;
        while (true) {
            int pos = partition(nums, left, right);
            if (pos == k - 1) 
                return nums[pos];
            else if (pos < k - 1) 
                left = pos + 1;
            else 
                right = pos - 1;
        }
    }
    
    int partition(vector<int>& nums, int left, int right) {
        int pivot = nums[left], i = left, j = right;
        while (i < j) {
            while (i < j && nums[j] <= pivot) 
                j--;
            while (i < j && nums[i] >= pivot) 
                i++;
            if (i < j) 
                swap(nums[i], nums[j]);
        }
        swap(nums[left], nums[i]);
        return i;
    }
    */

};