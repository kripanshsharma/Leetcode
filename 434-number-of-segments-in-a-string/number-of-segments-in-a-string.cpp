class Solution {
public:
    int countSegments(string s) {
        int n = s.size(), i=1, cnt=0;
        if(n==0){
            return 0;
        }
        while(i<=n){
            if((s[i]==' ' || s[i]=='\0' )&& s[i-1]!=' '){
                cnt++;
                
            }
            
            i++;
        }
        return cnt;
    }
};