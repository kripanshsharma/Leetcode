class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxi = 0;
        int index;
        long long int sum =0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>maxi){
            
                maxi=nums[i];
                index= i;
            }
        }
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=maxi && maxi<2*nums[i]){
                return -1;
            }
        }
        return index;
        
        
    }
};