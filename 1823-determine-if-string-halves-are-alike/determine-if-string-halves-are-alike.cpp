class Solution {
public:
    bool isVovel(char ch){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
            return true;
        }
        return false;
    }
    bool halvesAreAlike(string s) {
        int n = s.size();
        int cnt1=0, cnt2= 0;
        for(int i=0; i<n/2; i++){
            if(isVovel(s[i])){
                cnt1++;
                
            }
        }
        for(int i=n/2; i<n; i++){
            if(isVovel(s[i])){
                cnt2++;
            
            }
        }
        return (cnt1==cnt2);
    }
};