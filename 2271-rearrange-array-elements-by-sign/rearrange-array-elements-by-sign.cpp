class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int j=0, k=0, n = nums.size();
        vector<int> pos;
        vector<int> neg;
        for(int i=0; i<n; i++){
            if(nums[i]<0){
                neg.push_back(nums[i]);
            }
            else{
                pos.push_back(nums[i]);
            }
        }
        for(int i=0; i<n; i++){
            if(i%2==0){
                nums[i]= pos[j++];
            }
            else{
                nums[i]=neg[k++];
            }
        }
        return nums;
    }
};