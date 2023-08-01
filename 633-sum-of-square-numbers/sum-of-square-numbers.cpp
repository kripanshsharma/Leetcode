class Solution {
public:
    bool judgeSquareSum(int c) {
        int n = sqrt(c);
        long long int a=0,b=n;
        while(b>=a){
            long long int sum = a*a + b*b;
            if(sum > c){
                b--;
            }
            else if(sum<c){
                a++;
            }
            else{
                return true;
            }
        }
        return false;
        
    }
};