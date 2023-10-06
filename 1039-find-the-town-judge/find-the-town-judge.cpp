class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) 

    {   map<int,int> m;
        for(int i=0;i<trust.size();i++)
        {
           m[trust[i][0]]=-1;
           m[trust[i][1]]++; 
        }
        int ans=-1;
     
        for(int i=1;i<=n;i++)
        {
            if(m[i]==n-1)
            ans=i;
        }
        return ans;
    }
};