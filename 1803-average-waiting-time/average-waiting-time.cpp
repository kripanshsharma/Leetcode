class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        long long int  b=0,c,n;
        double avg,sum=0;
        for(int i=0; i<customers.size();i++){
            n=customers[i].size();
            for(int j=0; j<1; j++){
                if(b<customers[i][j]){
                b=customers[i][j]+ customers[i][j+1];
                }
                else{
                    b+=customers[i][j+1];
                }
                c=b-customers[i][j];
                sum+=c;


            }
            
            
        }
        avg= sum/customers.size();
        return avg;

    }
};