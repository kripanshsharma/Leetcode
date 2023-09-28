class Solution {
public:
    string reverseWords(string s) {
       string result = "";
        int end = s.size() - 1;

        while (end >= 0) {
            while (end >= 0 && s[end] == ' ') {
                end--;
            }

            if (end < 0) {
                break;
            }

            if (!result.empty()) {
                result += " ";
            }

            int start = end;
            while (start >= 0 && s[start] != ' ') {
                start--;
            }

            result += s.substr(start + 1, end - start);
            end = start;
        }

        return result; 
    }
};