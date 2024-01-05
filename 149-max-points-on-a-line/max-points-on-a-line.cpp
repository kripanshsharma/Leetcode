class Solution {
public:
    int maxPoints(vector<vector<int>>& points) 
    {
        if(points.size()==1) return 1;
        long long n=points.size() , ans=0;

        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                //(y-y1)/(y2-y1)=(x-x1)/(x2-x1)
                //(y-y1)*(x2-x1)=(x-x1)*(y2-y1)
                long long temp_ans=0;
                for(int k=0;k<n;k++)
                {
                    long long eq1=(points[k][1]-points[i][1])*(points[j][0]-points[i][0]);
                    long long eq2=(points[k][0]-points[i][0])*(points[j][1]-points[i][1]);
                    if(eq1==eq2) temp_ans++;
                }
                ans=max(ans,temp_ans);
            }
        }    
        return ans;
    }
};