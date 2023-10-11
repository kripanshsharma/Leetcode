class Solution {
public:
    string convertToTitle(int cNum) {
        string res = "";
        while(cNum > 0){
            cNum--; 
         
            int letterDistFromA = cNum % 26;
            
            
            cNum /= 26;
            
            res += ((char)('A' + letterDistFromA));
        }
        reverse(res.begin(), res.end());
        return res;
    }
};