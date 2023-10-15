class Solution {
public:
    int climbStairs(int n) {
        vector<int>v;
        // if(n<=2){
        //     return n;
        // }   
        // return climbStairs(n-1)+climbStairs(n-2);
        v.push_back(0);
        for (int i = 1; i <= n; i++)
        {
            if (i < 4)
                v.push_back(i);
            else
                v.push_back(v[i - 1] + v[i - 2]);
        }
        return v[n];
    }
};