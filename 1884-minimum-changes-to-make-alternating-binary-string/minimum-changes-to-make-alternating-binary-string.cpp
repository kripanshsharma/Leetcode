class Solution {
public:
    int minOperations(string s) {
        int start0 = 0; // Initialize the count of 0 at even positions
        int start1 = 0; // Initialize the count of 1 at even positions
        
        // Traverse through the string
        for (int i = 0; i < s.size(); i++) {
            if (i % 2 == 0) { // If the index is even
                if (s[i] == '0') {
                    start1++; // Increment count of 1 at even positions if '0' is encountered
                } else {
                    start0++; // Increment count of 0 at even positions if '1' is encountered
                }
            } else { // If the index is odd
                if (s[i] == '1') {
                    start1++; // Increment count of 1 at odd positions if '1' is encountered
                } else {
                    start0++; // Increment count of 0 at odd positions if '0' is encountered
                }
            }
        }
        
        return min(start0, start1);
    }
};