class Solution {
public:
    bool isHappy(int n) {
        if(n==1){
            return true;
        }
        else if(n>1 && n<7 || n>7 && n<10){
            return false;
        }
        
        int temp = n;
        n=0;
        while(temp>0){
            n += (temp%10)*(temp%10);
            temp = temp/10;
        }
        return isHappy(n);

    }
};