class Solution {
public:
    int reachNumber(int target) {
        target = abs(target);
        long sum = 0;
        long step = 0;

        while (sum < target || (sum - target) % 2 != 0) {
            step++;
            sum += step;
        }
        return step;
    }
};