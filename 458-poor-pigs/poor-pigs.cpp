class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        int test = (minutesToTest/minutesToDie) +1;
        int pig = 0;
        int i = 1;
        while(i<buckets){
            pig++;
            i*=test;
        }
        return pig;
    }
};