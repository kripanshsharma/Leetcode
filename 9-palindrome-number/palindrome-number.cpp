class Solution {
public:
    bool isPalindrome(long int x) {
         if (x < 0) {
            return false;
        }
        
        long int number = x;
        long int reverse = 0;
        while (number > 0) {
            reverse = reverse * 10 + number % 10;
            number /= 10;
        }
        return x == reverse;
    }
};