int dp[101][27][101][101]; 

class Solution {
public:

  
    int solveMem(string& s, int index, int prev, int k, int count){
        // Base case: if we have used more deletions than allowed
        if(k < 0) return 1e9;

        // Base case: if we have reached the end of the string
        if(index >= s.size()){
            return 0;
        }

        // If the result for the current state is already computed, return it
        if(dp[index][prev][k][count] != -1){
            return dp[index][prev][k][count];
        }

        // Initialize the accumulated cost to a large value
        int acc = INT_MAX;

        // Recursive call for deleting the current character
        int del = solveMem(s, index + 1, prev, k - 1, count);

        // Check if the current character is the same as the previous one
        // Check if the current character is the same as the previous one
        if(prev + 'a' == s[index]){
            // If the count of consecutive characters is 1, 9, or 99
            if(count == 1 || count == 9 || count == 99){
                // Update the accumulated cost by 1 and recursively call the function
                acc = 1 + solveMem(s, index + 1, prev, k, count + 1);
            }
            else{
                // If the count is not 1, 9, or 99, recursively call the function without updating the cost
                acc = solveMem(s, index + 1, prev, k, count + 1);
            }
        }

        else{
            // If the current character is different, update the accumulated cost accordingly
            acc = 1 + solveMem(s, index + 1, s[index] - 'a', k, 1);
        }

        // Store the minimum of the delete and accumulate operations in the DP table
        return dp[index][prev][k][count] = min(del, acc);
    }


    int getLengthOfOptimalCompression(string s, int k) {
        int n = s.size();

        // Initialize the DP table with -1
        memset(dp, -1, sizeof(dp));

        // Call the recursive function with initial parameters
        return solveMem(s, 0, 26, k, 0);
    }
};