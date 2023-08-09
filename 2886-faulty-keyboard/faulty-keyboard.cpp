class Solution {
public:
    string finalString(string s) {
        string ans;
        for(int k=0; k<s.size(); k++){
            if(s[k]=='i'){
                int i=0, j= ans.size()-1;
                while(i<j){
                    swap(ans[i++], ans[j--]);
                    
                }
            }
            else{
                ans.push_back(s[k]);
            }
        }
        return ans;
    }
};