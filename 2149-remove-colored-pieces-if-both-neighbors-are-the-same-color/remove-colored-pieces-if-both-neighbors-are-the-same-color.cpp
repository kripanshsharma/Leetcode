class Solution {
public:
    bool winnerOfGame(string colors) {
        int count1=0,c2=0;
        for(int i=1;i<colors.size()-1;i++){
            if(colors[i]=='A' && colors[i-1]=='A' && colors[i+1]=='A' ){
               count1++;
            }
            else if(colors[i]=='B' && colors[i-1]=='B' && colors[i+1]=='B' ){
                c2++;
            }      
        }
        return count1>c2;
    }
};