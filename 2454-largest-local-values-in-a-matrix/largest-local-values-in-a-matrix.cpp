class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
       const int n=grid.size();
        int maxC[3]={0};
        for(int i=1; i<n-1; i++){   
            for(int j=1; j<n-1; j++){
                if (j==1){
                    maxC[0]=max({grid[i-1][0], grid[i][0], grid[i+1][0]});
                    maxC[1]=max({grid[i-1][1], grid[i][1], grid[i+1][1]});
                }
                maxC[(j+1)%3]=max({grid[i-1][j+1], grid[i][j+1], grid[i+1][j+1]});      
                grid[i-1][j-1]=max({maxC[0], maxC[1], maxC[2]});
            }
            grid[i-1].resize(n-2);
        }
        grid.resize(n-2);
        return grid; 
    }
};