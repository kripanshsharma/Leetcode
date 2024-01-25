int dp[1001][1001];

int find(int p1, int p2, string &s1, string &s2)
{

    if(p1 == s1.length() || p2 == s2.length())
        return 0;

    if(dp[p1][p2] != -1)
        return dp[p1][p2];

    if(s1[p1] == s2[p2])
        return dp[p1][p2] = ( 1 + find(p1+1, p2+1, s1, s2) );
 
    else 
        return dp[p1][p2] = max(find(p1+1, p2, s1, s2) , find(p1, p2+1, s1, s2));

    return 0;
}


class Solution {
public:
    int longestCommonSubsequence(string t1, string t2) {

        memset(dp, -1, sizeof(dp));
        return find(0, 0, t1, t2);
    }
};