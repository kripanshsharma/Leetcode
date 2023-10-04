class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& s) {
        //int n= s.size();
        // priority_queue<int> evenheap;
        // priority_queue <int> oddheap;
        // for(int i=0; i<n;i++){
        //     if(s[i]%2==0 && i%2!=0){
        //         evenheap.push(s[i]);
        //     }
        //     else if(s[i]%2!=0 && i%2==0){
        //         oddheap.push(s[i]);
        //     }
        // }
        // int i = 0;
        // while(i<n){
        //     if(s[i]%2!=0 && i%2==0){
        //         s[i] = evenheap.top();
        //         evenheap.pop();
        //     }
        //     else if(s[i]%2==0 && i%2!=0){
        //         s[i] = oddheap.top();
        //         oddheap.pop();
        //     }
        //     i++;
        // }
        vector<int>even;
        vector<int>odd;
        vector<int>v;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]%2==0) even.push_back(s[i]);
            else odd.push_back(s[i]);
        }
        int k=0;
        int l=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0) 
            {
                v.push_back(even[k]);
                k++;
            }
            else
            {
                v.push_back(odd[l]);
                l++;
            }
        }
        return v;
        //return s;
    }
};