class Solution {
public:
    string reverseStr(string s, int k) {
        int n= s.size();
        int cnt=0;
        if(n==1) return s;
        if(k>=n){
            int i = cnt;
            int j= n-1;
            while(i<j){
                swap(s[i++], s[j--]);
            }
        }
        else{
            
        while(cnt<n){
            int i = cnt;
            int j= i+k-1;
            if(j>n) j=n-1;
            while(i<j){
                swap(s[i++], s[j--]);
            }
            cnt+=2*k;

        }
        }
        // if(cnt>n && cnt-k+1<n){
        //     int i = cnt-k+1;
        //     int j= n-1;
        //     while(i<j){
        //         swap(s[i++], s[j--]);
        //     }
           
        // }
        
        return s;
    }
};