class Solution {
public:
  int triangularSum(vector<int>& nums) {    
    while(nums.size()!=1){
      vector<int>currvect;
      for(int i=0;i<nums.size()-1;i++){
        currvect.push_back((nums[i]+nums[i+1])%10);           
      }
      nums = currvect;
    }
    return nums[0];
  }
};