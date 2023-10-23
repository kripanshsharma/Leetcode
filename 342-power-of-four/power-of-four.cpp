class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1){
            return true;
        }
        else if(n<=1){
            return false;
        }

        return n%4==0 && isPowerOfFour(n/4);
    }
};