class Solution {
public:
    // time/space: O(n)/O(n)
    int minOperations(vector<int>& nums) {
        // find the frequency for each integer
        unordered_map<int, int> freq;
        for (auto& num : nums) freq[num]++;

        // get the minimum number of operations to remove each distinct integer
        int op = 0;
        for (auto& [v, f] : freq) {
            if (f == 1) return -1;
            op += getMinOp(f);
        }
        return op;
    }
private:
    int getMinOp(int f) {
        int op = 0;
        // keep removing 3 elements if we can
        if (f >= 3) {
            int times = f / 3;
            f -= (3 * times);
            op += times;
        }
        // add 3 elements back if the frequency is `1`
        if (f == 1) f += 3, op--;
        // keep removing 2 elements to make the array empty
        if (f >= 2) {
            int times = f / 2;
            f -= (2 * times);
            op += times;
        }
        return op;
    }
};