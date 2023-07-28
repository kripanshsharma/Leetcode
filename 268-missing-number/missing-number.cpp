class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int x=0;
        int x2=0;
        for(int i=0; i<nums.size(); i++){
           
            x = x^nums[i];
            x2 = x2^(i+1);
        }
        x = x^x2;
    
        return x;
    }
};