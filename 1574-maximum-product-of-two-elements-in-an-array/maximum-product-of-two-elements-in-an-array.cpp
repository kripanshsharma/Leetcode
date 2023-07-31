class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size()-1;
        sort(nums.begin(), nums.end());
        /*int maxi1 = INT_MIN;
        int maxi2 = INT_MIN;
        int i=0, j= nums.size()-1;
        while(i<j){
            maxi1 = max(maxi1, nums[i]);
            maxi2 = max(maxi2, nums[j]);
            i++;
            j--;
        }*/
        int mul = (nums[n]-1)*(nums[n-1]-1);
        return mul;
    }
    /*int max1=0 , max2=0;
        for(int i=0;i<nums.length;i++){
            if(nums[i] >= max1){
                max2 = max1;
                max1 = nums[i];
            }
            else max2 = Math.max(max2, nums[i]);
        } 
        return (max1-1)*(max2-1);
        */
};