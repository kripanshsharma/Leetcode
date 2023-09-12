class Solution {
public:
    string capitalizeTitle(string s) {
        int i=0, j=0;
        while(i<=s.size()){
            if(i==s.size() || s[i]==' '){
                if(i-j>2){
                    s[j]=toupper(s[j]);
                }
                j=i+1;
            }
            else {
                s[i]=tolower(s[i]);
            }
            i++;
        }
        return s;
        // int cnt=0,j;
        // for(j=0; j!=' '; j++){
        //     cnt++;
        // }
        // if(cnt>=3){
        //     title[0]= toupper(title[0]);
            
        // }
        // else{
        //     title[0]= tolower(title[0]);
        // }
        // for(int i=1; i<title.size(); i++){
        //     if(title[i]==' '){
        //         int c=0;
        //         for(int k=i+1; k!=' '; k++){
        //             c++;
        //         }
        //         if(c>=3){
        //             title[i+1]= toupper(title[i+1]);
        //             i++;
        //         }
        //         else{
        //             title[i+1]= tolower(title[i+1]);
        //             i++;
        //         }
        //     }
        //     else{
        //         title[i]= tolower(title[i]);
        //     }
        // }
        // return title;

    }
};