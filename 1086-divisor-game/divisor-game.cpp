class Solution {
public:
    bool divisorGame(int n) {
        return (n%2==0);
    }
     /*int x = 1;
        if(n==x)return false;
        while(x<n && n%x==0){
            n = n-x;
            x++;
        }
        if(n==1){
            return true;
        }
        else
            return false;
    }*/
};