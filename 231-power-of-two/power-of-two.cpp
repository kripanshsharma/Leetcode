class Solution {
public:
    bool isPowerOfTwo(int n) {
        // int b1 = n||(n-1);
        // int b2 = n^(n-1);
        if(n==0 || n==INT_MIN) return false;
        if((n&(n-1))==0){
            return true;
        }
        return false;
    }
};