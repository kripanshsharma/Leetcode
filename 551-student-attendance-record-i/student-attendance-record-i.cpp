class Solution {
public:
    bool checkRecord(string s) {
        int a=0, l = 0, late=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='A'){
                a++;
                l=0;

            }
            else if(s[i]=='L'){
                l++;
                late=max(l, late);
            }
            else{
                l=0;

            }
        }
        if(a<2 && late<3){
            return true;
        }
        return false;
    }
};