class Solution {
public:
    string largestGoodInteger(string num) {
        if (num.length() < 3) {
            return "";
        }

        int i = 0;
        int j = 2;
        string ans = "";  

        while (j < num.length()) {
            if (num[i] != num[j]) {
                i++;
                j++;
            } else {
                if (num[i] == num[i + 1]) {
                    if (ans.empty() || ans.compare(num.substr(i, j - i + 1)) < 0) {
                        ans = num.substr(i, j - i + 1);
                    }
                }
                i++;
                j++;
            }
        }

        return ans.empty() ? "" : ans;
    }
};