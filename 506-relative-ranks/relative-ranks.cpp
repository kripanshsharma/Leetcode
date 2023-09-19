class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int, int>> pq;
        vector<string> trop{"Gold Medal","Silver Medal","Bronze Medal"};
        vector<string> ans(score.size());
        for(int i=0; i<score.size(); i++){
            pq.push({score[i], i});
        }
        int cnt=0;
        while(!pq.empty()){
            int index=pq.top().second;
            if(cnt<trop.size()){
                ans[index]=trop[cnt];

            }
            else{
                ans[index]= to_string(cnt+1);
            }
            pq.pop();
            cnt++;
            
        }
        return ans;
    }
};