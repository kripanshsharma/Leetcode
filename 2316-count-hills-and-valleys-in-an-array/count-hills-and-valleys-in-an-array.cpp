class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int cnt=0;
        for(int i=1; i<nums.size()-1; i++){
            if(nums[i]>nums[i-1] && nums[i]>nums[i+1]){
                cnt++;
            }
            else if(nums[i]>nums[i-1] && nums[i]==nums[i+1]){
                for(int j=i+1; j<nums.size(); j++){
                    if(nums[j]<nums[i]){
                        cnt++;
                        i=j-1;
                        break;
                    }
                    else if(nums[j]>nums[i]){
                        i=j-1;
                        break;
                    }
                }
            }
            else if(nums[i]<nums[i-1] && nums[i]<nums[i+1]){
                cnt++;
            }
            else if(nums[i]<nums[i-1] && nums[i]==nums[i+1]){
                for(int j=i+1; j<nums.size(); j++){
                    if(nums[j]>nums[i]){
                        cnt++;
                        i=j-1;
                        break;
                    }
                    else if(nums[j]<nums[i]){
                        i=j-1;
                        break;
                    }
                }
            }
        }
        return cnt;
    }
};