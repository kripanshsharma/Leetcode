class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        priority_queue<pair<int,int>, vector<pair<int, int>>, greater<pair<int,int>>> pq;
        vector<int> ans;
        for(int i=0; i<mat.size(); i++){
            int sum =0;
            for(int j=0; j< mat[i].size(); j++){
                sum+=mat[i][j];

            }
            pq.push({sum, i});
        }
        while(k>0){
            ans.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        return ans;
    }
};