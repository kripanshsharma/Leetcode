class Solution {
public:
    int minCost(string s, vector<int>& time) {
        int l = s.length(), ans = 0;
        stack<pair<char,int>> stk;
        stk.push({s[0],time[0]});

        for(int i = 1; i < l; i++)
        {
            if(stk.top().first != s[i])  stk.push({s[i],time[i]});
            else
            {
                if(stk.top().second > time[i])  ans += time[i];
                else
                {
                    auto it = stk.top();ans += it.second;
                    stk.push({s[i],time[i]});
                }
            }
        }
        return ans;

    }
};