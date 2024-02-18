class Solution {
public:
    int mostBooked(int n, vector<vector<int>>& meetings) {
        sort(meetings.begin(),meetings.end());
        long long cnt[200]={},ans=-1,mx=-1,end[200]={};
        for(int i=0;i<meetings.size();i++){
            long long posLessMe=-1,mn=meetings[i][0];
            for(int j=0;j<n;j++){
                if(end[j]<=mn){
                    posLessMe=j;break;
                }
            }
            if(posLessMe==-1){
                mn=*min_element(end,end+n);
                for(int j=n-1;j>=0;j--){
                    if(end[j]==mn){
                        posLessMe=j;
                    }
                }
            }
            cnt[posLessMe]++;
            end[posLessMe]=mn+meetings[i][1]-meetings[i][0];
        }
        for(int i=n-1;i>=0;i--){
            if(mx<=cnt[i]){
                mx=cnt[i];
                ans=i;
            }
        }
        return (int)ans;
    }
};