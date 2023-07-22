class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    long long int sum=0, sum2=0;
    int maxi= INT_MIN;

    for(int i=0; i<nums.size(); i++){
        sum+=nums[i];
        

        if(sum<0){

            sum = 0;

        }
        if(sum>maxi){
            maxi= sum;
        }
    }
    if(maxi==0){
        maxi = *max_element(nums.begin(), nums.end());
    }
    return maxi;
    }
};