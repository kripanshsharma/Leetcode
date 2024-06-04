class Solution {
public:
    int longestPalindrome(string s) {
        int c = 0; // odd count
        unordered_map<char, int>m;
        for(auto ch : s) {
            m[ch]++;
            if (m[ch] & 1)
                c++;
            else    
                c--;
        }
        if (c > 1)
            return s.length() - c + 1;
        return s.length();
    }
    // def longestPalindrome(self, s: str) -> int:
    //     c = 0  # odd count
    //     freq = {}
    
    //     for ch in s:
    //         freq[ch] = freq.get(ch, 0) + 1
    //         if freq[ch] % 2 == 0:
    //             c -= 1
    //         else:
    //             c += 1
        
    //     if c > 1:
    //         return len(s) - c + 1
    //     return len(s)
};