class Solution {
public:
    int kthGrammar(int n, int k) {
        if(n==1 || k==1){
            return 0;
        }
        // else if(n==2 && k==2){
        //     return 1;
        // }
        //else if(n==2 && k==1)
        int last = pow(2, n-1);
        if(k<=last/2){
            return kthGrammar(n-1, k);
        }
        return !kthGrammar(n-1,k-last/2);
    }
};