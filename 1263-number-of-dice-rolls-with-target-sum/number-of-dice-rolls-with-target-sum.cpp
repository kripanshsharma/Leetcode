#define m 1000000007
class Solution {
public:
    
    // 1. Recursion
    // TC - O(Exponential)
    int numRollsToTargetRec(int n, int k, int target)
    {
        // Base Case
        if(n < 0)
            return 0;
        if(n == 0 and target == 0)
            return 1;
        if(n != 0 and target == 0)
            return 0;
        if(n == 0 and target != 0)
            return 0;
        
        int ans = 0;
        for(int i = 1; i <= k; i++)
        {
            ans += numRollsToTargetRec(n-1, k, target-i);
        }

        return (ans % m);
    }

    // 2. Top Down
    // TC and SC - O(N * K * target) and SC - O(N * target)
    int numRollsToTargetMemo(int n, int k, int target, vector<vector<int>>& dp)
    {
        // Base Case
        if(n < 0)
            return 0;
        if(n == 0 and target == 0)
            return 1;
        if(n != 0 and target == 0)
            return 0;
        if(n == 0 and target != 0)
            return 0;
        if(dp[n][target] != -1)
            return dp[n][target];
        
        int ans = 0;
        for(int i = 1; i <= k; i++)
        {
            if(target - i >= 0)
                ans = (ans % m) + (numRollsToTargetMemo(n-1, k, target-i, dp) % m);
        }

        dp[n][target] = (ans % m);
        return dp[n][target];
    }

    // 3. Bottom Up
    // TC - O(N * K * target) and SC - O(N * target)
    int numRollsToTargetTab(int n, int k, int target) {
        vector<vector<int>> dp(n+1,vector<int>(target+1,0));
        dp[0][0] = 1;

        for(int index = 1; index <= n; index++)
        {
            for(int t = 1; t <= target; t++)
            {
                int ans = 0;
                for(int i = 1; i <= k; i++)
                {
                    if(t - i >= 0)
                        ans = (ans % m) + (dp[index-1][t-i] % m);
                }

                dp[index][t] = (ans % m);
            }
        }
        return dp[n][target];
    }

    // 4. Space Optimization
    // TC - O(N * K * target) and SC - O(target)
    int numRollsToTargetSO(int n, int k, int target) {
        vector<int> prev(target+1,0);
        vector<int> curr(target+1,0);
        prev[0] = 1;

        for(int index = 1; index <= n; index++)
        {
            for(int t = 1; t <= target; t++)
            {
                int ans = 0;
                for(int i = 1; i <= k; i++)
                {
                    if(t - i >= 0)
                        ans = (ans % m) + (prev[t-i] % m);
                }

                curr[t] = (ans % m);
            }
            prev = curr;
        }
        return prev[target];
    }
    
    int numRollsToTarget(int n, int k, int target) {
        // return numRollsToTargetRec(n,k,target);

        // 2. Top Down
        // vector<vector<int>> dp(n+1,vector<int>(target+1,-1));
        // return numRollsToTargetMemo(n,k,target,dp);

        // // 3. Bottom up
        // return numRollsToTargetTab(n,k,target);

        // 4. Space Optimization
        return numRollsToTargetSO(n,k,target);
    }
};