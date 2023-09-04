class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        long long int mul =1;
        for(int i=0; i<n; i++){
            mul *= nums[i];
        }
        for(int i=0; i<n; i++){
            if(nums[i]!=0 && mul!=0){
                ans.push_back(mul/nums[i]);

            }
            else if(nums[i]!=0 && mul==0){
                ans.push_back(0);
            }
            else{
                long long int mul2=1;
                for(int j=0; j<i; j++){
                    
                    mul2*=nums[j];
                }
                for(int j=i+1; j<n; j++){
                    mul2*=nums[j];
                }
                ans.push_back(mul2);
            }
        }
        return ans;
    }
};