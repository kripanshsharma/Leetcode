class Solution {
public:
  int triangularSum(vector<int>& nums) {
    
    while(nums.size()!=1){
      vector<int>currvect;
      for(int i=0;i<nums.size()-1;i++){
        int sum = nums[i]+nums[i+1];
        if(sum%10>=0){
          currvect.push_back(sum%10);           
        }
        else{
          currvect.push_back(sum);
        }           
      }
      nums = currvect;
    }
    return nums[0];
  }
};