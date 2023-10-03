class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> m;
        int cnt=0;
        for(int i=0; i<nums.size(); i++){
            cnt+=m[nums[i]]++;
        }
        return cnt;
    }
};