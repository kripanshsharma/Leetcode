class Solution {
public:
    int largestInteger(int num) {
        string s=to_string(num);
        int n= s.size();
        priority_queue<int> evenheap;
        priority_queue <int> oddheap;
        
        // even fill  (0,2,4,6....)
        for(int i=0; i<n;i++){
            if(s[i]%2==0){
                evenheap.push(s[i]);
            }
            else{
                oddheap.push(s[i]);
            }
        }
        // odd fill  (1,3,5,7,....)
        // nums.clear();
        int i = 0;
        while(i<n){
            if(s[i]%2==0){
                s[i] = evenheap.top();
                evenheap.pop();
            }
            else{
                s[i] = oddheap.top();
                oddheap.pop();
            }
            i++;
        }
        return stoi(s);
    }
};