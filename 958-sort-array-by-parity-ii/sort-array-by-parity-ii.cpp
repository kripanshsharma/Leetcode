class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& s) {
        int n= s.size();
        priority_queue<int> evenheap;
        priority_queue <int> oddheap;
        for(int i=0; i<n;i++){
            if(s[i]%2==0 && i%2!=0){
                evenheap.push(s[i]);
            }
            else if(s[i]%2!=0 && i%2==0){
                oddheap.push(s[i]);
            }
        }
        int i = 0;
        while(i<n){
            if(s[i]%2!=0 && i%2==0){
                s[i] = evenheap.top();
                evenheap.pop();
            }
            else if(s[i]%2==0 && i%2!=0){
                s[i] = oddheap.top();
                oddheap.pop();
            }
            i++;
        }
        return s;
    }
};