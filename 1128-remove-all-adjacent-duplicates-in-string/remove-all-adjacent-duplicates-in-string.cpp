class Solution {
public:
    string removeDuplicates(string s) {
        string temp = {};
        int i = 0;
        
        while (i < s.length()) {
            //nothing just checking if temp is empty for is iteration and accessing the last character to check if its equal to the next character in string s
            if (temp.empty() || s[i] != temp.back()) {
                temp.push_back(s[i]);
            } 
            else {
                temp.pop_back();
            }
            i++;
        }
        
        return temp;
    }
};