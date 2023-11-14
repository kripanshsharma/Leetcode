class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int count = 0;
        for (int i = 0; i < 26; ++i) {
            char currentChar = static_cast<char>(i + 97);
            int l = s.find(currentChar);
            int r = s.rfind(currentChar);
            if (l != -1 && r != -1 && l < r) {
                count += std::unordered_set<char>(s.begin() + l + 1, s.begin() + r).size();
            }
        }
        return count;
    }
};