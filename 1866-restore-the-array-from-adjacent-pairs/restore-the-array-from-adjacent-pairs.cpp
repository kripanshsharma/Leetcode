class Solution {
public:
    void dfs(vector<int> &ans,map<int,vector<int>> &g,int root,int prev){
        ans.push_back(root);
        for(int neigh:g[root]){
            if(neigh!=prev){
                dfs(ans,g,neigh,root);
            }
        }
    }
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        vector<int> ans;
        map<int,vector<int>> g;
        for(auto it:adjacentPairs){
            g[it[0]].push_back(it[1]);
            g[it[1]].push_back(it[0]);
        }
        int root=0;
        for(auto it: g){
            if(it.second.size()==1){
                root=it.first;
                break;
            }
        }

        dfs(ans,g,root,INT_MAX);
        return ans;
    }
};