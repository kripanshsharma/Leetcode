class Solution {
public:
    string largestOddNumber(string num) {
       string s;
       //string maxi = "";
       for(int i=num.size()-1; i>=0; i--){         
           if(num[i]%2!=0){
               //s = num.at(i);      
               //maxi = max(s,maxi);
               s = num.substr(0,i+1);
               return s;
           }         
       }
       return "";
       //return maxi;
    }

};