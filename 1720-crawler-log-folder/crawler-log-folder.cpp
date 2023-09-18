class Solution {
public:
    int minOperations(vector<string>& logs) {
        //stack<char> st;
        int ans=0;
        for(int i=0; i<logs.size(); i++){
            if(logs[i]=="../"){
                //st.pop();
                if(ans>0) ans-=1;
            }
            else if( logs[i]=="./"){
                continue;
            }
            
            else{
                //st.push(logs[i]);
                ans+=1;
            }
        }
        if(ans<0){ans=0;}
        return ans;

    }
};