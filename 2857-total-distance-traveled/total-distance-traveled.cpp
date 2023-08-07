class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {

        int ad, total= mainTank*10;
        if(mainTank>=5){
            while(mainTank>=5 && additionalTank!=0){
                ad = mainTank/5;
                
                if(additionalTank<ad){
                    total += additionalTank*10;
                    mainTank = mainTank + additionalTank -5;
                    additionalTank = 0;
                }
                else{
                    total += 10;
                    mainTank = mainTank - 4;
                    additionalTank -= 1;
                }
                
            }
        }
       
        return total;
    }
};