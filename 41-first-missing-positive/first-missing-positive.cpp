class Solution {
public:
    int firstMissingPositive(vector<int>& nums) 
    {
        priority_queue<int,vector<int>,greater<int>>q;
        for(auto i:nums)
            q.push(i);
        while(!q.empty() and q.top()<=0)
        {
            q.pop();
        }
        int c=1;
        while(!q.empty())
        {
            if(q.top()==c)
            {
                int temp=q.top();
                q.pop();
                if(q.size()==0||temp!=q.top())
                c++;
            }
            else
            return c;
        }
        return c;
    }
};