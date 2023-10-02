class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        int n = nums.size();
        priority_queue<int> maxheap;
        priority_queue <int, vector<int>, greater<int> > minheap;
        
        // even fill  (0,2,4,6....)
        for(int i=0; i<n;){
            minheap.push(nums[i]);
            i = i+2;
        }
        // odd fill  (1,3,5,7,....)
        for(int i=1; i<n;){
            maxheap.push(nums[i]);
            i = i+2;
        }
        //
        // nums.clear();
        int i = 0;
        while(i<n){
            if(i%2==0){
                nums[i] = minheap.top();
                minheap.pop();
            }
            else{
                nums[i] = maxheap.top();
                maxheap.pop();
            }
            i++;
        }
        return nums;
    }
};