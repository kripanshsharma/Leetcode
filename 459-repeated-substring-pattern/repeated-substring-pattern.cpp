// class Solution {
// public:
//     bool repeatedSubstringPattern(string s){
//         int cnt=0, n=s.size();
//         if(n==2 && s[0]==s[1]){
//             return true;
//         }
//         for(int i=0; i<n; i++){
            
//             cnt = 0;
//             int j=i+1;

//             while(j<n){
//                 if(s[i]==s[j] ){
//                     i++;
//                     j++;
//                     cnt++;
//                 }
//                 else if(s[i]==s[j-1] && cnt>=2){
//                     i++;
//                 }
//                 else{
//                     j++;
//                     //cnt=0;
//                 }
//                 if(cnt>=(n+1)/2){
//                     return true;
//                 }
//             }
             
//         }
//         return false;
        
//     }
// };

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string t = s; 

        for(int i=0; i<s.size()-1; i++){ 
            char c = t[0];  // Store the first char
            t.erase(0,1); // Remove the first char
            t.push_back(c); // Append the char

            if(t==s) { 
                return true; 
            }
        }
        return false;
    }
};